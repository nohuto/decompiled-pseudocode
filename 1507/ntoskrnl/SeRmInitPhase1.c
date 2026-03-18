/*
 * XREFs of SeRmInitPhase1 @ 0x1407BC118
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407D05E0 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreatePort @ 0x140180550 (ZwCreatePort.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140592908 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     PsRegisterMonitorServerSilo @ 0x1405936B8 (PsRegisterMonitorServerSilo.c)
 *     PsStartMonitorServerSilo @ 0x14059391C (PsStartMonitorServerSilo.c)
 *     InitializeSidLookupTable @ 0x1405B80F4 (InitializeSidLookupTable.c)
 *     TraceLoggingRegisterEx @ 0x1405BCF34 (TraceLoggingRegisterEx.c)
 *     PsUnregisterMonitorServerSilo @ 0x1406C16A8 (PsUnregisterMonitorServerSilo.c)
 *     SepInitializeSingletonAttributesStructures @ 0x1407BC278 (SepInitializeSingletonAttributesStructures.c)
 *     SepAdtInitializeAuditingOptions @ 0x1407BC3AC (SepAdtInitializeAuditingOptions.c)
 */

char SeRmInitPhase1()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v4[6]; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+27h] BYREF

  memset(v4, 0, sizeof(v4));
  WORD1(v4[0]) |= 1u;
  v4[1] = SepRmServerSiloCreateNotify;
  LOWORD(v4[0]) = 1;
  v4[2] = SepRmServerSiloTerminateNotify;
  if ( (int)PsRegisterMonitorServerSilo(0LL, L"NTOS_SE_RM", (__int64)v4, &SeRmSiloMonitor) >= 0 )
  {
    if ( (int)PsStartMonitorServerSilo(SeRmSiloMonitor) < 0 )
    {
      PsUnregisterMonitorServerSilo((struct _EX_RUNDOWN_REF *)SeRmSiloMonitor);
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"\\SeRmCommandPort");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 0;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreatePort(&PortHandle, &ObjectAttributes, 4u, 0x200u, 0x4000u) >= 0 )
      {
        SepAdtInitializeAuditingOptions();
        if ( (int)SepInitializeSingletonAttributesStructures() >= 0 )
        {
          TraceLoggingRegisterEx(&stru_14077E830, 0LL, 0LL);
          if ( PsCreateSystemThread(&Handle, 0x38u, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)SepRmCommandServerThread, 0LL) >= 0 )
          {
            InitializeSidLookupTable();
            AuthzBasepInitializeSystemSecurityAttributes(v1, v0);
            ZwClose(Handle);
            Handle = 0LL;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
