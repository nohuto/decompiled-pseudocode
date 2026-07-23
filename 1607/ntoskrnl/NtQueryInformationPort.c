/*
 * XREFs of NtQueryInformationPort @ 0x140654A04
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtQueryInformationPort(
        HANDLE PortHandle,
        PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG PortInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v7; // rcx
  int v8; // ebx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(PortInformation, PortInformationLength, 4u);
    v7 = (__int64)ReturnLength;
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v7 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v7 = *(_DWORD *)v7;
    }
  }
  if ( !PortHandle )
    return -1073741821;
  v8 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v8 >= 0 )
  {
    if ( ReturnLength )
      *ReturnLength = 0;
    ObfDereferenceObject(Object);
  }
  return v8;
}
