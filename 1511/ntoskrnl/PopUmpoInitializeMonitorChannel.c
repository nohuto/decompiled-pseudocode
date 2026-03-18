/*
 * XREFs of PopUmpoInitializeMonitorChannel @ 0x14076FF8C
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ExUnregisterCallback @ 0x1400F4408 (ExUnregisterCallback.c)
 *     ExRegisterCallback @ 0x14012577C (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwAlpcCreatePort @ 0x140151500 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x140151740 (ZwAlpcSetInformation.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExCreateCallback @ 0x1404BF200 (ExCreateCallback.c)
 *     PopMonitorProcessLoop @ 0x140549504 (PopMonitorProcessLoop.c)
 */

__int64 PopUmpoInitializeMonitorChannel()
{
  PCALLBACK_OBJECT v0; // rbx
  PVOID v1; // rsi
  int Port; // edi
  NTSTATUS v3; // eax
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-69h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-61h] BYREF
  _QWORD v7[2]; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-21h] BYREF
  _QWORD v9[10]; // [rsp+88h] [rbp-9h] BYREF

  v0 = 0LL;
  PopAlpcMonitorServerPort = 0LL;
  PopAlpcMonitorClientPort = 0LL;
  v1 = 0LL;
  CallbackObject = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\PowerMonitorPort");
  memset(v9, 0, 0x48uLL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  LODWORD(v9[0]) = 0x100000;
  v9[2] = 256LL;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 512;
  Port = ZwAlpcCreatePort((__int64)&PopAlpcMonitorServerPort, (__int64)&ObjectAttributes, (__int64)v9);
  if ( Port >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 1u, 1u);
    v0 = CallbackObject;
    Port = v3;
    if ( v3 >= 0 )
    {
      v1 = ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopMonitorAlpcCallback, 0LL);
      if ( !v1 )
        goto LABEL_6;
      v7[0] = v0;
      v7[1] = PopAlpcMonitorServerPort;
      Port = ZwAlpcSetInformation((__int64)PopAlpcMonitorServerPort, 9LL, (__int64)v7);
      ObfDereferenceObjectWithTag(v0, 0x746C6644u);
      if ( Port >= 0 )
      {
        PopMonitorProcessLoop();
        Port = 0;
LABEL_6:
        if ( Port >= 0 )
          return (unsigned int)Port;
      }
    }
  }
  if ( PopAlpcMonitorServerPort )
    ZwClose(PopAlpcMonitorServerPort);
  if ( v1 )
    ExUnregisterCallback(v1);
  if ( v0 )
    ObfDereferenceObjectWithTag(v0, 0x746C6644u);
  return (unsigned int)Port;
}
