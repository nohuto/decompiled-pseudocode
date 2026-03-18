/*
 * XREFs of IopLoadUnloadDriver @ 0x1404E663C
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x14007F1AC (IopCompleteUnloadOrDelete.c)
 *     NtLoadDriver @ 0x1404E648C (NtLoadDriver.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     IopLoadDriver @ 0x14049E388 (IopLoadDriver.c)
 *     IopCallDriverReinitializationRoutines @ 0x1404E66CC (IopCallDriverReinitializationRoutines.c)
 *     IopOpenRegistryKey @ 0x1404E6780 (IopOpenRegistryKey.c)
 */

LONG __fastcall IopLoadUnloadDriver(__int64 a1)
{
  __int64 v1; // rax
  int v3; // ebx
  int v5; // [rsp+40h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(v1 + 104))(*(_QWORD *)(a1 + 56));
    v3 = 0;
  }
  else
  {
    v3 = IopOpenRegistryKey(&KeyHandle, 0LL, *(_QWORD *)(a1 + 64), 131097LL, 0);
    if ( v3 >= 0 )
    {
      v3 = IopLoadDriver(KeyHandle, 1, 0, &v5);
      if ( v3 == -1073740955 )
      {
        v3 = v5;
      }
      else if ( v3 == -1073740914 )
      {
        v3 = -1073741772;
      }
      IopCallDriverReinitializationRoutines(0LL);
    }
  }
  *(_DWORD *)(a1 + 72) = v3;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
