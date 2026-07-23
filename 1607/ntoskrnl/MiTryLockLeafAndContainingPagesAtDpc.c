/*
 * XREFs of MiTryLockLeafAndContainingPagesAtDpc @ 0x140022B18
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MiCopyHeaderIfResident @ 0x1400FB338 (MiCopyHeaderIfResident.c)
 * Callees:
 *     MiTryLockLeafPage @ 0x140022A6C (MiTryLockLeafPage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x140022B78 (MiTryLockProtoPoolPageAtDpc.c)
 */

__int64 __fastcall MiTryLockLeafAndContainingPagesAtDpc(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rax

  *a2 = 0LL;
  result = MiTryLockProtoPoolPageAtDpc(a1, a3);
  v6 = result;
  if ( result )
  {
    v7 = MiTryLockLeafPage(a1);
    if ( v7 )
      *a2 = v7;
    return v6;
  }
  return result;
}
