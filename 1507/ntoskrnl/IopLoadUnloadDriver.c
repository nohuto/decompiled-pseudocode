/*
 * XREFs of IopLoadUnloadDriver @ 0x140571B04
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140007694 (IopCompleteUnloadOrDelete.c)
 *     NtLoadDriver @ 0x14057157C (NtLoadDriver.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     IopOpenRegistryKey @ 0x140539BE4 (IopOpenRegistryKey.c)
 *     IopCallDriverReinitializationRoutines @ 0x140571B94 (IopCallDriverReinitializationRoutines.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 */

LONG __fastcall IopLoadUnloadDriver(__int64 a1)
{
  __int64 v1; // rax
  NTSTATUS Driver; // ebx
  ULONG v5; // [rsp+20h] [rbp-18h]
  NTSTATUS v6; // [rsp+40h] [rbp+8h]
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(v1 + 104))(*(_QWORD *)(a1 + 56));
    Driver = 0;
  }
  else
  {
    LOBYTE(v5) = 0;
    Driver = IopOpenRegistryKey(&KeyHandle, 0LL, *(UNICODE_STRING **)(a1 + 64), 0x20019u, v5);
    if ( Driver >= 0 )
    {
      Driver = IopLoadDriver(KeyHandle);
      if ( Driver == -1073740955 )
      {
        Driver = v6;
      }
      else if ( Driver == -1073740914 )
      {
        Driver = -1073741772;
      }
      IopCallDriverReinitializationRoutines(0LL);
    }
  }
  *(_DWORD *)(a1 + 72) = Driver;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
