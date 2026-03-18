/*
 * XREFs of CmpResetCachedSecurity @ 0x140660A74
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x140445994 (CmpValidateHiveSecurityDescriptors.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x1404CC7A0 (CmpFindSecurityCellCacheIndex.c)
 */

__int64 __fastcall CmpResetCachedSecurity(__int64 a1, int a2)
{
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF

  if ( !CmpFindSecurityCellCacheIndex(a1, a2, &v4) )
    return 3221226021LL;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3056) + 16LL * v4 + 8) + 28LL) = 0;
  return 0LL;
}
