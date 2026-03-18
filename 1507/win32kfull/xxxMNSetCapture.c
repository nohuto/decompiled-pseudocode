/*
 * XREFs of xxxMNSetCapture @ 0x1C0107ABC
 * Callers:
 *     xxxMNStartMenu @ 0x1C0107794 (xxxMNStartMenu.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxMNEndMenuStateInternal @ 0x1C010B390 (xxxMNEndMenuStateInternal.c)
 *     xxxMNKeyDown @ 0x1C0216E44 (xxxMNKeyDown.c)
 * Callees:
 *     xxxCapture @ 0x1C004F540 (xxxCapture.c)
 */

__int64 __fastcall xxxMNSetCapture(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v7[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v7;
  v7[1] = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  xxxCapture(gptiCurrent, *(__int64 **)(a1 + 8), 4);
  ThreadUnlock1(v5, v4);
  result = *(_QWORD *)(gptiCurrent + 392LL);
  *(_DWORD *)(result + 332) |= 0x100000u;
  *(_DWORD *)(a2 + 8) |= 0x40000u;
  return result;
}
