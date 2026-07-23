/*
 * XREFs of PopFxQueryBiosDeviceName @ 0x1400AD3C8
 * Callers:
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x1404C5578 (PopFxFindDeviceAndAllocateUniqueId.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IoGetDevicePropertyData @ 0x1404DA508 (IoGetDevicePropertyData.c)
 */

NTSTATUS __fastcall PopFxQueryBiosDeviceName(__int64 a1, __int64 a2)
{
  PVOID Data; // rdi
  unsigned __int16 v5; // bx
  NTSTATUS result; // eax
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp+8h] BYREF
  ULONG Type; // [rsp+70h] [rbp+18h] BYREF

  Data = 0LL;
  v5 = 0;
  result = IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 32),
             &DEVPKEY_Device_BiosDeviceName,
             0,
             0,
             0,
             0LL,
             (PULONG)&NumberOfBytes,
             &Type);
  if ( result == -1073741789 )
  {
    if ( (unsigned int)NumberOfBytes >= 0xFFFE )
      return result;
    Data = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x4D584650u);
    if ( !Data )
      return -1073741670;
    v5 = NumberOfBytes;
    result = 0;
  }
  if ( result >= 0 )
  {
    result = IoGetDevicePropertyData(
               *(PDEVICE_OBJECT *)(a1 + 32),
               &DEVPKEY_Device_BiosDeviceName,
               0,
               0,
               v5,
               Data,
               (PULONG)&NumberOfBytes,
               &Type);
    if ( result >= 0 )
    {
      *(_WORD *)(a2 + 2) = v5;
      *(_WORD *)a2 = v5 - 2;
      *(_QWORD *)(a2 + 8) = Data;
    }
  }
  return result;
}
