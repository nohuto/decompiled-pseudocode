/*
 * XREFs of FsRtlEmptyFreePoolList @ 0x1400C4630
 * Callers:
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1404D9130 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlFindInTunnelCache @ 0x140501A80 (FsRtlFindInTunnelCache.c)
 *     FsRtlAddToTunnelCache @ 0x1405030D8 (FsRtlAddToTunnelCache.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F4A4 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
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
