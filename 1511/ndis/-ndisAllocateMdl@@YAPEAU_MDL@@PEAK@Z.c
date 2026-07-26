/*
 * XREFs of ?ndisAllocateMdl@@YAPEAU_MDL@@PEAK@Z @ 0x1C00152D0
 * Callers:
 *     NdisAllocateFragmentNetBufferList @ 0x1C0014630 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     <none>
 */

PMDL __fastcall ndisAllocateMdl(PULONG BufferSize)
{
  ULONG v2; // ebx
  ULONG v3; // ecx
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v5; // rdi
  __int64 v6; // r8

  v2 = (MmSizeOfMdl((PVOID)0xFFF, *BufferSize) + 7) & 0xFFFFFFF8;
  v3 = v2 + *BufferSize;
  if ( v3 < v2 )
    return 0LL;
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x646E444Eu);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  v6 = *BufferSize;
  PoolWithTag->ByteCount = v6;
  PoolWithTag->Next = 0LL;
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(((unsigned __int64)PoolWithTag + v2) & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->Size = 8 * ((((unsigned __int64)(((_WORD)PoolWithTag + (_WORD)v2) & 0xFFF) + v6 + 4095) >> 12) + 6);
  PoolWithTag->ByteOffset = ((_WORD)PoolWithTag + (_WORD)v2) & 0xFFF;
  MmBuildMdlForNonPagedPool(PoolWithTag);
  return v5;
}
