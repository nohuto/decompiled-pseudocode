/*
 * XREFs of zzzInternalDestroyCaret @ 0x1C00CA2FC
 * Callers:
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxCreateCaret @ 0x1C00C6E54 (xxxCreateCaret.c)
 *     zzzDestroyCaret @ 0x1C00CA0D0 (zzzDestroyCaret.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     zzzInternalHideCaret @ 0x1C00CA3B0 (zzzInternalHideCaret.c)
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 */

__int64 zzzInternalDestroyCaret()
{
  __int64 result; // rax
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  result = zzzInternalHideCaret();
  v1 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(v1 + 288) )
  {
    result = FindTimer(*(_QWORD *)(v1 + 248), 0xFFFF, 2, 1, 0LL);
    *(_QWORD *)(v1 + 288) = 0LL;
  }
  v2 = v1 + 248;
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_DWORD *)(v1 + 260) = 0;
  v3 = *(_QWORD *)(v1 + 248);
  if ( v3 )
  {
    v6[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v6;
    v6[1] = v3;
    ++*(_DWORD *)(v3 + 8);
    HMAssignmentUnlock(v2);
    xxxWindowEvent(0x8001u, (__int64 *)v3, -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    return ThreadUnlock1(v5, v4);
  }
  return result;
}
