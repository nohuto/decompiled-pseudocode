/*
 * XREFs of FsRtlEmptyFreePoolList @ 0x1400CD560
 * Callers:
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140491EA4 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlFindInTunnelCache @ 0x140492444 (FsRtlFindInTunnelCache.c)
 *     FsRtlAddToTunnelCache @ 0x140492590 (FsRtlAddToTunnelCache.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall FsRtlEmptyFreePoolList(_QWORD **a1)
{
  _QWORD *result; // rax
  __int64 v3; // r8
  _DWORD *v4; // rcx
  _QWORD *v5; // rdx

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == a1 )
      break;
    v3 = *result;
    v4 = result - 3;
    v5 = (_QWORD *)result[1];
    if ( *(_QWORD **)(*result + 8LL) != result || (_QWORD *)*v5 != result )
      __fastfail(3u);
    *v5 = v3;
    *(_QWORD *)(v3 + 8) = v5;
    if ( (v4[14] & 1) != 0 )
      ExFreePoolWithTag(v4, 0);
    else
      ExFreeToNPagedLookasideList(&TunnelLookasideList, v4);
  }
  return result;
}
