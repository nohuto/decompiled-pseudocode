/*
 * XREFs of CmpPerformTrustClassAccessCheck @ 0x1401B4794
 * Callers:
 *     CmpJoinClassOfTrust @ 0x1401B471C (CmpJoinClassOfTrust.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF120 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpPerformTrustClassAccessCheck(__int64 a1, char a2)
{
  if ( a2 )
    return (*(_BYTE *)(a1 + 5360) & 1) == 0 ? 0xC000000D : 0;
  else
    return 0LL;
}
