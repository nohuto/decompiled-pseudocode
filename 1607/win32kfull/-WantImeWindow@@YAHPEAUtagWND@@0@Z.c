/*
 * XREFs of ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C0072620
 * Callers:
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     zzzImeSetFutureOwner @ 0x1C00A8D44 (zzzImeSetFutureOwner.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WantImeWindow(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax

  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x2000000) != 0 )
    return 0LL;
  if ( (*((_BYTE *)a2 + 42) & 4) != 0 )
    return 0LL;
  v2 = *((_QWORD *)a2 + 3);
  if ( !v2 )
    return 0LL;
  v3 = *(_QWORD *)(v2 + 24);
  if ( !v3 || (*(_DWORD *)(v3 + 32) & 4) != 0 )
    return 0LL;
  while ( a1 && v2 == *((_QWORD *)a1 + 3) )
  {
    if ( a1 == *(struct tagWND **)(v2 + 96) )
      return 0LL;
    a1 = (struct tagWND *)*((_QWORD *)a1 + 11);
  }
  return 1LL;
}
