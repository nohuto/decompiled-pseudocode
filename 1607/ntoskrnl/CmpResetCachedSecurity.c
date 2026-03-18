/*
 * XREFs of CmpResetCachedSecurity @ 0x14060B7A8
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1403F8C28 (CmpValidateHiveSecurityDescriptors.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x1403FDF60 (CmpFindSecurityCellCacheIndex.c)
 */

__int64 __fastcall CmpResetCachedSecurity(__int64 a1, int a2)
{
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF

  if ( !CmpFindSecurityCellCacheIndex(a1, a2, &v4) )
    return 3221226021LL;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3056) + 16LL * v4 + 8) + 28LL) = 0;
  return 0LL;
}
