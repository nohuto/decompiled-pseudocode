/*
 * XREFs of MoveWithArrangementAllowed @ 0x1C0202784
 * Callers:
 *     xxxSysCommand @ 0x1C0109460 (xxxSysCommand.c)
 *     xxxHandleNCMouseGuys @ 0x1C0202890 (xxxHandleNCMouseGuys.c)
 *     xxxInitializeMoveSizeData @ 0x1C020CE20 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0202738 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall MoveWithArrangementAllowed(struct tagWND *a1)
{
  __int64 result; // rax

  if ( !WindowArrangementApplicable(a1) )
    return 0LL;
  result = 1LL;
  if ( (dword_1C031B14C & 1) == 0 || (dword_1C031B14C & 8) == 0 )
    return 0LL;
  return result;
}
