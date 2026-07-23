/*
 * XREFs of SepSetTokenTrust @ 0x140412DBC
 * Callers:
 *     SepSetTrustLevelForProcessToken @ 0x14007C264 (SepSetTrustLevelForProcessToken.c)
 *     SepCreateTokenEx @ 0x14007FC48 (SepCreateTokenEx.c)
 *     NtOpenThreadTokenEx @ 0x140412440 (NtOpenThreadTokenEx.c)
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 *     SeCopyClientToken @ 0x1404B0584 (SeCopyClientToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SepDuplicateSid @ 0x1404B4434 (SepDuplicateSid.c)
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
