/*
 * XREFs of FsRtlFindFirstOverlapInNode @ 0x1401B89BC
 * Callers:
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1400C3C94 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlCheckNoSharedConflict @ 0x1401B8918 (FsRtlCheckNoSharedConflict.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall FsRtlFindFirstOverlapInNode(_QWORD *a1, unsigned __int64 *a2, _QWORD *a3)
{
  _QWORD *v3; // r9
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax

  v3 = (_QWORD *)*a1;
  if ( !*a1 )
    return 0LL;
  v4 = *a2;
  while ( 1 )
  {
    v5 = v3[6];
    if ( v5 >= v4 && (v3[1] || v3[2]) )
      break;
    if ( v5 == *a3 && v3[1] == v4 )
      return v3;
    v3 = (_QWORD *)*v3;
    if ( !v3 )
      return 0LL;
  }
  if ( v3[1] > *a3 )
    return 0LL;
  return v3;
}
