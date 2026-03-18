/*
 * XREFs of EdgyUnregisterListener @ 0x1C000D548
 * Callers:
 *     NtUserRegisterEdgy @ 0x1C01214A0 (NtUserRegisterEdgy.c)
 * Callees:
 *     ?_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z @ 0x1C00E63F4 (-_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z.c)
 *     ?_FindListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z @ 0x1C01216F8 (-_FindListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z.c)
 */

__int64 __fastcall EdgyUnregisterListener(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  struct tagEDGY_DATA *Listener; // rax
  Edgy *v5; // rcx
  struct tagEDGY_LISTENER *v6; // r8

  v1 = 0;
  if ( !a1 )
    return 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 232LL);
  if ( v3 )
  {
    Listener = (struct tagEDGY_DATA *)Edgy::_FindListener(v3, *(_QWORD *)a1, *(unsigned int *)(a1 + 16));
    if ( Listener )
    {
      Edgy::_RemoveListenerCore(v5, Listener, v6);
      return 1;
    }
  }
  return v1;
}
