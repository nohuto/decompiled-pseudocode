/*
 * XREFs of RIMCompleteFrame @ 0x1C00C84FC
 * Callers:
 *     RIMProcessPointerEvent @ 0x1C00C8774 (RIMProcessPointerEvent.c)
 * Callees:
 *     rimProcessCompleteFrame @ 0x1C00C7E80 (rimProcessCompleteFrame.c)
 *     RIMGetCompleteFrameAndReleaseHoldingFrame @ 0x1C00C8588 (RIMGetCompleteFrameAndReleaseHoldingFrame.c)
 */

__int64 __fastcall RIMCompleteFrame(__int64 a1, __int64 a2, LONG a3)
{
  LARGE_INTEGER *v6; // r8
  LARGE_INTEGER *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( !(unsigned int)RIMGetCompleteFrameAndReleaseHoldingFrame(a1, a2, &v8) )
    return 0LL;
  v6 = v8;
  v8[6].HighPart = a3;
  if ( (*(_DWORD *)(a2 + 184) & 0x800) != 0 )
  {
    v6[4] = *(LARGE_INTEGER *)(a2 + 24);
    v6[6].LowPart = 1;
  }
  rimProcessCompleteFrame(a1, a2, v6);
  return 1LL;
}
