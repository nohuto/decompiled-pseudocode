/*
 * XREFs of xxxMNSetCapture @ 0x1C013B99C
 * Callers:
 *     xxxMNStartMenu @ 0x1C013B778 (xxxMNStartMenu.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0141310 (xxxMNEndMenuStateInternal.c)
 *     xxxMNKeyDown @ 0x1C020F844 (xxxMNKeyDown.c)
 * Callees:
 *     xxxCapture @ 0x1C00AACF4 (xxxCapture.c)
 */

__int64 __fastcall xxxMNSetCapture(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v7[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v7;
  v7[1] = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  xxxCapture(gptiCurrent, *(__int64 **)(a1 + 8), 4);
  ThreadUnlock1(v5, v4);
  result = *(_QWORD *)(gptiCurrent + 384LL);
  *(_DWORD *)(result + 340) |= 0x100000u;
  *(_DWORD *)(a2 + 8) |= 0x40000u;
  return result;
}
