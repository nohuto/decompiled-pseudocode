/*
 * XREFs of PopUmpoInitializeMonitorChannel @ 0x1407E6004
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExUnregisterCallback @ 0x14013169C (ExUnregisterCallback.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     ExRegisterCallback @ 0x140158AE8 (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwAlpcCreatePort @ 0x14017FED0 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x140180110 (ZwAlpcSetInformation.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExCreateCallback @ 0x1405544CC (ExCreateCallback.c)
 *     PopMonitorProcessLoop @ 0x1405C0B10 (PopMonitorProcessLoop.c)
 */

__int64 PopUmpoInitializeMonitorChannel()
{
  PVOID v0; // rsi
  int Port; // ebx
  PCALLBACK_OBJECT v2; // rdi
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-69h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-61h] BYREF
  _QWORD v6[2]; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-21h] BYREF
  _QWORD v8[10]; // [rsp+88h] [rbp-9h] BYREF

  CallbackObject = 0LL;
  PopAlpcMonitorServerPort = 0LL;
  PopAlpcMonitorClientPort = 0LL;
  v0 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\PowerMonitorPort");
  memset(v8, 0, 0x48uLL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  LODWORD(v8[0]) = 0x100000;
  v8[2] = 256LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Port = ZwAlpcCreatePort((__int64)&PopAlpcMonitorServerPort, (__int64)&ObjectAttributes, (__int64)v8);
  if ( Port < 0 )
  {
    if ( (PoDebug & 1) != 0 )
      DbgPrint("%s: ZwAlpcCreatePort failed: 0x%x\n", "PopUmpoInitializeMonitorChannel", (unsigned int)Port);
  }
  else
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    Port = ExCreateCallback(&CallbackObject, &ObjectAttributes, 1u, 1u);
    if ( Port < 0 )
    {
      if ( (PoDebug & 1) != 0 )
        DbgPrint("%s: Failed to create callback, %#08lx\n", "PopUmpoInitializeMonitorChannel", (unsigned int)Port);
    }
    else
    {
      v0 = ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopMonitorAlpcCallback, 0LL);
      if ( v0 )
      {
        v2 = CallbackObject;
        v6[0] = CallbackObject;
        v6[1] = PopAlpcMonitorServerPort;
        Port = ZwAlpcSetInformation((__int64)PopAlpcMonitorServerPort, 9LL, (__int64)v6);
        ObfDereferenceObjectWithTag(v2, 0x746C6644u);
        if ( Port < 0 )
        {
          if ( (PoDebug & 1) != 0 )
            DbgPrint(
              "%s: Failed to set alpc call back info, %#08lx\n",
              "PopUmpoInitializeMonitorChannel",
              (unsigned int)Port);
        }
        else
        {
          PopMonitorProcessLoop();
          Port = 0;
        }
      }
      else if ( (PoDebug & 1) != 0 )
      {
        DbgPrint("%s: Failed to register callback, %#08lx\n", "PopUmpoInitializeMonitorChannel", (unsigned int)Port);
      }
    }
  }
  if ( Port < 0 )
  {
    if ( PopAlpcMonitorServerPort )
      ZwClose(PopAlpcMonitorServerPort);
    if ( v0 )
      ExUnregisterCallback(v0);
    if ( CallbackObject )
      ObfDereferenceObjectWithTag(CallbackObject, 0x746C6644u);
  }
  return (unsigned int)Port;
}
