/*
 * XREFs of SepDuplicateSid @ 0x1404D0994
 * Callers:
 *     SepDuplicateToken @ 0x140412BD0 (SepDuplicateToken.c)
 *     SepSetTokenTrust @ 0x140413EFC (SepSetTokenTrust.c)
 *     SepDuplicateTokenUserAndGroups @ 0x140692FB4 (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenUserAndGroups @ 0x14069311C (SepSetTokenUserAndGroups.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCopySid @ 0x14041268C (RtlCopySid.c)
 */

__int64 __fastcall SepDuplicateSid(unsigned __int8 *SourceSid, _QWORD *a2)
{
  int v4; // eax
  ULONG v5; // ebp
  PVOID PoolWithTag; // rax
  PVOID v7; // rdi
  __int64 result; // rax

  if ( !a2 )
    return 3221225485LL;
  v4 = SourceSid[1];
  *a2 = 0LL;
  v5 = 4 * v4 + 8;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (4 * v4 + 11) & 0xFFFFFFFC, 0x69536553u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  RtlCopySid(v5, PoolWithTag, SourceSid);
  result = 0LL;
  *a2 = v7;
  return result;
}
