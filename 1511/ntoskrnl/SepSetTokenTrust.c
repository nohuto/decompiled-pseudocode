/*
 * XREFs of SepSetTokenTrust @ 0x1404783E4
 * Callers:
 *     SepCreateTokenEx @ 0x140004180 (SepCreateTokenEx.c)
 *     SepSetTrustLevelForProcessToken @ 0x140092F38 (SepSetTrustLevelForProcessToken.c)
 *     SepFilterToken @ 0x1403C11C8 (SepFilterToken.c)
 *     NtOpenThreadTokenEx @ 0x1404772C0 (NtOpenThreadTokenEx.c)
 *     SeCopyClientToken @ 0x140479434 (SeCopyClientToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepDuplicateSid @ 0x140479564 (SepDuplicateSid.c)
 */

__int64 __fastcall SepSetTokenTrust(__int64 a1, void *a2)
{
  unsigned int v2; // ebx
  void *v4; // rcx
  __int64 result; // rax

  v2 = 0;
  if ( !a2 || (result = SepDuplicateSid(a2), v2 = result, (int)result >= 0) )
  {
    v4 = *(void **)(a1 + 1104);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      *(_QWORD *)(a1 + 1104) = 0LL;
    }
    *(_QWORD *)(a1 + 1104) = 0LL;
    return v2;
  }
  return result;
}
