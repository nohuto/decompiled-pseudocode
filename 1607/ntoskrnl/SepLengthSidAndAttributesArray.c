/*
 * XREFs of SepLengthSidAndAttributesArray @ 0x140477A64
 * Callers:
 *     SepSetTokenCapabilities @ 0x14047791C (SepSetTokenCapabilities.c)
 *     SepCreateClaimAttributes @ 0x1404784D8 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140695B64 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeCaptureSidAndAttributesArray @ 0x140477B10 (SeCaptureSidAndAttributesArray.c)
 */

__int64 __fastcall SepLengthSidAndAttributesArray(void *Src, __int64 a2, _DWORD *a3)
{
  PVOID PoolWithTag; // rdi
  unsigned int v6; // ebx
  int v8; // [rsp+28h] [rbp-50h]
  int v9; // [rsp+30h] [rbp-48h]
  __int64 v10; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  LODWORD(v11) = 0;
  v10 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x61536553u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v6 = SeCaptureSidAndAttributesArray(Src, 8, v8, v9, (__int64)&v10, (__int64)&v11);
  *a3 = v11;
  if ( v6 == -1073741789 )
    v6 = 0;
  ExFreePoolWithTag(PoolWithTag, 0);
  return v6;
}
