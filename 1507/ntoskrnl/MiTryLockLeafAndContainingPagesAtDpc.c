/*
 * XREFs of MiTryLockLeafAndContainingPagesAtDpc @ 0x1400E2554
 * Callers:
 *     MiCopyHeaderIfResident @ 0x1400E0408 (MiCopyHeaderIfResident.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 * Callees:
 *     MiTryLockProtoPoolPageAtDpc @ 0x1400E25B4 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiTryLockLeafPage @ 0x1400E2750 (MiTryLockLeafPage.c)
 */

__int64 __fastcall MiTryLockLeafAndContainingPagesAtDpc(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rax

  *a2 = 0LL;
  result = MiTryLockProtoPoolPageAtDpc(a1, a3);
  v7 = result;
  if ( result )
  {
    v8 = MiTryLockLeafPage(a1, a3);
    if ( v8 )
      *a2 = v8;
    return v7;
  }
  return result;
}
