/*
 * XREFs of EdgyUnregisterListener @ 0x14025B158
 * Callers:
 *     NtUserRegisterEdgy @ 0x14024B4E0 (NtUserRegisterEdgy.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_FindListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z @ 0x1402C2FF8 (-_FindListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z.c)
 *     ?_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z @ 0x1402C3854 (-_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z.c)
 */

__int64 __fastcall EdgyUnregisterListener(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // edi
  __int64 v4; // rsi
  __int64 v5; // rcx
  struct tagEDGY_DATA *Listener; // rax
  Edgy *v7; // rcx
  struct tagEDGY_LISTENER *v8; // r8

  v1 = 0;
  if ( !a1 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 16);
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(*((_QWORD *)PtiCurrent(a1) + 61) + 248LL);
  if ( v5 )
  {
    Listener = (struct tagEDGY_DATA *)Edgy::_FindListener(v5, v4, v3);
    if ( Listener )
    {
      Edgy::_RemoveListenerCore(v7, Listener, v8);
      return 1;
    }
  }
  return v1;
}
