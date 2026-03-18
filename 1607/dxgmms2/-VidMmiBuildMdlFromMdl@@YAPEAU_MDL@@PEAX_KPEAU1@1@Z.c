/*
 * XREFs of ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C009226C
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00629C0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00898EC (-LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C008AD18 (-SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z.c)
 * Callees:
 *     <none>
 */

PMDL __fastcall VidMmiBuildMdlFromMdl(unsigned __int64 Base, SIZE_T Length, struct _MDL *a3, __int64 a4)
{
  ULONG v5; // esi
  SIZE_T v7; // rbx
  PMDL result; // rax
  struct _MDL *v10; // rcx
  char *v11; // rdx

  v5 = Length;
  v7 = ((Base & 0xFFF) + Length + 4095) >> 12;
  result = MmCreateMdl(0LL, (PVOID)Base, Length);
  if ( result )
  {
    result->Next = 0LL;
    result->Size = 8 * (v7 + 6);
    result->ByteCount = v5;
    result->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
    result->ByteOffset = Base & 0xFFF;
    v10 = result + 1;
    result->MdlFlags = 1;
    if ( v7 )
    {
      v11 = (char *)((char *)&a3[1] + 8 * a4 - (char *)v10);
      do
      {
        v10->Next = *(struct _MDL **)((char *)&v10->Next + (_QWORD)v11);
        v10 = (struct _MDL *)((char *)v10 + 8);
        --v7;
      }
      while ( v7 );
    }
  }
  return result;
}
