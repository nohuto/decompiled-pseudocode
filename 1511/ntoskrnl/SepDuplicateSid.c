/*
 * XREFs of SepDuplicateSid @ 0x140479564
 * Callers:
 *     SepDuplicateToken @ 0x140477C00 (SepDuplicateToken.c)
 *     SepSetTokenTrust @ 0x1404783E4 (SepSetTokenTrust.c)
 *     SepDuplicateTokenUserAndGroups @ 0x140653C30 (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenUserAndGroups @ 0x140653D98 (SepSetTokenUserAndGroups.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     RtlCopySid @ 0x1404793FC (RtlCopySid.c)
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
