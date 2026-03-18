/*
 * XREFs of FRemoveForegroundActivate @ 0x1C008E514
 * Callers:
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C008CE74 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow @ 0x1C008CF98 (xxxSetForegroundWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FRemoveForegroundActivate(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 376);
  if ( (*(_DWORD *)(v1 + 12) & 0x40) != 0 )
    ClearAppStarting(*(_QWORD *)(a1 + 376));
  result = *(_DWORD *)(a1 + 440) & 0x20;
  if ( (*(_DWORD *)(a1 + 440) & 0x20) != 0 )
    *(_DWORD *)(a1 + 440) &= ~0x20u;
  else
    result = *(_DWORD *)(v1 + 12) & 0x100;
  if ( (_DWORD)result )
    *(_DWORD *)(v1 + 12) &= ~0x100u;
  return result;
}
