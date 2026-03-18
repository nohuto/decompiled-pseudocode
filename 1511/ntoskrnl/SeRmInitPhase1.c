/*
 * XREFs of SeRmInitPhase1 @ 0x140762928
 * Callers:
 *     Phase1InitializationIoReady @ 0x140763CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreatePort @ 0x140151BA0 (ZwCreatePort.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 *     TraceLoggingRegisterEx @ 0x14052451C (TraceLoggingRegisterEx.c)
 *     PsRegisterMonitorServerSilo @ 0x140526694 (PsRegisterMonitorServerSilo.c)
 *     PsStartMonitorServerSilo @ 0x1405268B8 (PsStartMonitorServerSilo.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14052ED4C (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     InitializeSidLookupTable @ 0x140541C94 (InitializeSidLookupTable.c)
 *     PsUnregisterMonitorServerSilo @ 0x14063FD40 (PsUnregisterMonitorServerSilo.c)
 *     SepInitializeSingletonAttributesStructures @ 0x140762A88 (SepInitializeSingletonAttributesStructures.c)
 *     SepAdtInitializeAuditingOptions @ 0x140762BBC (SepAdtInitializeAuditingOptions.c)
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
  v4[5] = SepRmServerSiloTerminateNotify;
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
          TraceLoggingRegisterEx(&stru_1406FB800, 0LL, 0LL);
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
