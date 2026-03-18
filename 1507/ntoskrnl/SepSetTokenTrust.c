/*
 * XREFs of SepSetTokenTrust @ 0x14043666C
 * Callers:
 *     SepSetTrustLevelForProcessToken @ 0x14002B9A4 (SepSetTrustLevelForProcessToken.c)
 *     SepCreateTokenEx @ 0x14002EC40 (SepCreateTokenEx.c)
 *     SepFilterToken @ 0x140411C6C (SepFilterToken.c)
 *     NtOpenThreadTokenEx @ 0x140433000 (NtOpenThreadTokenEx.c)
 *     SepDuplicateToken @ 0x140435D60 (SepDuplicateToken.c)
 *     SeCopyClientToken @ 0x1404D25E4 (SeCopyClientToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SepDuplicateSid @ 0x1405448BC (SepDuplicateSid.c)
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
