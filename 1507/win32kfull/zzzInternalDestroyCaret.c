/*
 * XREFs of zzzInternalDestroyCaret @ 0x1C0077F14
 * Callers:
 *     xxxCreateCaret @ 0x1C0077AD0 (xxxCreateCaret.c)
 *     zzzDestroyCaret @ 0x1C0077EF0 (zzzDestroyCaret.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     zzzInternalHideCaret @ 0x1C0077FC8 (zzzInternalHideCaret.c)
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
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
  v1 = *(_QWORD *)(gptiCurrent + 392LL);
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
    v6[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v6;
    v6[1] = v3;
    ++*(_DWORD *)(v3 + 8);
    HMAssignmentUnlock(v2);
    xxxWindowEvent(0x8001u, (__int64 *)v3, -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    return ThreadUnlock1(v5, v4);
  }
  return result;
}
