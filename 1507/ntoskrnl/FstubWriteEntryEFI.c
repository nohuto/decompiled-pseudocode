/*
 * XREFs of FstubWriteEntryEFI @ 0x14066FCE4
 * Callers:
 *     FstubWritePartitionTableEFI @ 0x14066FEB4 (FstubWritePartitionTableEFI.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140134D10 (RtlComputeCrc32.c)
 *     memset @ 0x140195A80 (memset.c)
 *     FstubWriteSector @ 0x140670158 (FstubWriteSector.c)
 */

__int64 __fastcall FstubWriteEntryEFI(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, ULONG *a7)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  ULONG v11; // ecx
  __int64 result; // rax

  v9 = (unsigned int)(a3 << 7) % *(_DWORD *)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 48);
  *(_OWORD *)(v9 + v10) = *(_OWORD *)a4;
  *(_OWORD *)((unsigned int)v9 + v10 + 16) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)((unsigned int)v9 + v10 + 32) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)((unsigned int)v9 + v10 + 48) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)((unsigned int)v9 + v10 + 64) = *(_OWORD *)(a4 + 64);
  *(_OWORD *)((unsigned int)v9 + v10 + 80) = *(_OWORD *)(a4 + 80);
  *(_OWORD *)((unsigned int)v9 + v10 + 96) = *(_OWORD *)(a4 + 96);
  *(_OWORD *)((unsigned int)v9 + v10 + 112) = *(_OWORD *)(a4 + 112);
  v11 = *(_DWORD *)(a1 + 8);
  if ( (_DWORD)v9 + 128 == v11 )
  {
    result = FstubWriteSector(*(PDEVICE_OBJECT *)a1, v11);
    if ( (int)result < 0 )
      return result;
    memset(*(void **)(a1 + 48), 0, *(unsigned int *)(a1 + 8));
  }
  if ( a7 )
    *a7 = RtlComputeCrc32(*a7, (PUCHAR)a4, 0x80u);
  return 0LL;
}
