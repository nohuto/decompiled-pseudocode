/*
 * XREFs of SepLengthSidAndAttributesArray @ 0x1404D009C
 * Callers:
 *     SepSetTokenCapabilities @ 0x140436FA8 (SepSetTokenCapabilities.c)
 *     SepCreateClaimAttributes @ 0x14046E408 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1406D8228 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeCaptureSidAndAttributesArray @ 0x1404CCC50 (SeCaptureSidAndAttributesArray.c)
 */

__int64 __fastcall SepLengthSidAndAttributesArray(char *Src, unsigned int a2, _DWORD *a3)
{
  PVOID PoolWithTag; // rax
  void *v7; // rdi
  unsigned int v8; // ebx
  int v10; // [rsp+28h] [rbp-50h]
  int v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+98h] [rbp+20h] BYREF

  LODWORD(v13) = 0;
  v12 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x61536553u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v8 = SeCaptureSidAndAttributesArray(Src, a2, 0, PoolWithTag, 8u, v10, v11, (void **)&v12, (unsigned int *)&v13);
  *a3 = v13;
  if ( v8 == -1073741789 )
    v8 = 0;
  ExFreePoolWithTag(v7, 0);
  return v8;
}
