/*
 * XREFs of SepSetTokenTrust @ 0x140413EFC
 * Callers:
 *     SepSetTrustLevelForProcessToken @ 0x14007C1E4 (SepSetTrustLevelForProcessToken.c)
 *     SepCreateTokenEx @ 0x14007FBC8 (SepCreateTokenEx.c)
 *     NtOpenThreadTokenEx @ 0x140413580 (NtOpenThreadTokenEx.c)
 *     SepFilterToken @ 0x14047AFF4 (SepFilterToken.c)
 *     SeCopyClientToken @ 0x1404CA804 (SeCopyClientToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SepDuplicateSid @ 0x1404D0994 (SepDuplicateSid.c)
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
