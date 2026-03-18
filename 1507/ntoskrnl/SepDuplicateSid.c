/*
 * XREFs of SepDuplicateSid @ 0x1405448BC
 * Callers:
 *     SepSetTokenTrust @ 0x14043666C (SepSetTokenTrust.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1406D5ADC (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenUserAndGroups @ 0x1406D5C44 (SepSetTokenUserAndGroups.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlCopySid @ 0x140438C64 (RtlCopySid.c)
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
