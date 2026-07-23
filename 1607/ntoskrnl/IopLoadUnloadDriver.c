/*
 * XREFs of IopLoadUnloadDriver @ 0x1404C8FAC
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x14007F22C (IopCompleteUnloadOrDelete.c)
 *     NtLoadDriver @ 0x1404C8DFC (NtLoadDriver.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     IopCallDriverReinitializationRoutines @ 0x1404C903C (IopCallDriverReinitializationRoutines.c)
 *     IopOpenRegistryKey @ 0x1404C90F0 (IopOpenRegistryKey.c)
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 */

LONG __fastcall IopLoadUnloadDriver(__int64 a1)
{
  __int64 v1; // rax
  int Driver; // ebx
  int v5; // [rsp+40h] [rbp+8h]
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(v1 + 104))(*(_QWORD *)(a1 + 56));
    Driver = 0;
  }
  else
  {
    Driver = IopOpenRegistryKey(&KeyHandle, 0LL, *(_QWORD *)(a1 + 64), 131097LL, 0);
    if ( Driver >= 0 )
    {
      Driver = IopLoadDriver(KeyHandle);
      if ( Driver == -1073740955 )
      {
        Driver = v5;
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
