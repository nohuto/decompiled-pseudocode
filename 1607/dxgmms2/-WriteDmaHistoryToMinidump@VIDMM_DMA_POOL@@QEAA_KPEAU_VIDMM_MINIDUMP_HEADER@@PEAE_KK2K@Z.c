/*
 * XREFs of ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C0091AD4
 * Callers:
 *     ?LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z @ 0x1C0089A94 (-LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z.c)
 * Callees:
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C004042C (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?CheckIfDmaInformationPresent@VIDMM_DMA_POOL@@QEAAHPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K_JKKKKKKK@Z @ 0x1C0090EB0 (-CheckIfDmaInformationPresent@VIDMM_DMA_POOL@@QEAAHPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K_JKKKKKKK@Z.c)
 *     ?SearchDmaBufferInAllPool@VIDMM_DMA_POOL@@QEAAPEAU_VIDMM_DMA_BUFFER@@_J@Z @ 0x1C0091620 (-SearchDmaBufferInAllPool@VIDMM_DMA_POOL@@QEAAPEAU_VIDMM_DMA_BUFFER@@_J@Z.c)
 *     ?WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z @ 0x1C0091740 (-WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z.c)
 *     VidSchQueryDmaData @ 0x1C00A2534 (VidSchQueryDmaData.c)
 */

unsigned __int64 __fastcall VIDMM_DMA_POOL::WriteDmaHistoryToMinidump(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_MINIDUMP_HEADER *a2,
        unsigned __int8 *a3,
        unsigned __int64 a4,
        unsigned int a5,
        VIDMM_DMA_POOL *a6,
        unsigned int a7)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 v9; // r13
  BOOL v10; // r12d
  int v11; // r14d
  int v12; // edi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rbx
  VIDMM_DMA_POOL *v15; // r13
  __int64 v16; // r9
  struct _LIST_ENTRY *v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  int v21; // [rsp+28h] [rbp-D1h]
  unsigned int v22; // [rsp+30h] [rbp-C9h]
  int v23; // [rsp+38h] [rbp-C1h]
  unsigned __int64 v24; // [rsp+88h] [rbp-71h]
  unsigned __int8 *v25; // [rsp+90h] [rbp-69h]
  __int64 v26[4]; // [rsp+98h] [rbp-61h] BYREF
  unsigned int v27; // [rsp+B8h] [rbp-41h]
  unsigned int v28; // [rsp+BCh] [rbp-3Dh]
  int v29; // [rsp+C0h] [rbp-39h]
  int v30; // [rsp+C4h] [rbp-35h]
  unsigned int v31; // [rsp+C8h] [rbp-31h]
  unsigned int v32; // [rsp+CCh] [rbp-2Dh]
  unsigned int v33; // [rsp+D0h] [rbp-29h]
  unsigned int v34; // [rsp+D4h] [rbp-25h]
  unsigned int v36; // [rsp+148h] [rbp+4Fh]
  unsigned int v40; // [rsp+170h] [rbp+77h]

  v7 = (unsigned __int64)a6;
  *((_DWORD *)a2 + 281) = 0;
  v9 = a4;
  v25 = a3;
  v24 = a4;
  VIDMM_DMA_POOL::LockAllPoolForAddRemove(1);
  if ( (int)VidSchQueryDmaData(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 384LL), a5, a6, v26) >= 0
    && v26[1]
    && v26[0] )
  {
    v10 = VIDMM_DMA_POOL::SearchDmaBufferInAllPool(this, (struct _LIST_ENTRY *)v26[0]) && a7 && a7 >= v27 && a7 < v28;
    v11 = 0;
    v12 = 0;
    v13 = (unsigned __int64)a6;
    v14 = (unsigned __int64)a6;
    if ( v9 >= 0x48 )
    {
      v15 = this;
      while ( 1 )
      {
        if ( v12 && v10 )
        {
LABEL_33:
          v9 = a4;
          break;
        }
        if ( (int)VidSchQueryDmaData(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 16LL) + 384LL), a5, v7, v26) < 0 )
        {
          v19 = v24;
          if ( v11 )
            v12 = 1;
          else
            v10 = 1;
        }
        else
        {
          v36 = v30 - v29;
          v40 = v28 - v27;
          if ( (unsigned int)VIDMM_DMA_POOL::CheckIfDmaInformationPresent(
                               (VIDMM_DMA_POOL *)v33,
                               a2,
                               a3,
                               v16,
                               v26[0],
                               v27,
                               v28 - v27,
                               v33,
                               v34,
                               v31,
                               v32,
                               v30 - v29)
            || (v17 = VIDMM_DMA_POOL::SearchDmaBufferInAllPool(v15, (struct _LIST_ENTRY *)v26[0])) == 0LL )
          {
            v19 = v24;
          }
          else
          {
            v18 = VIDMM_DMA_POOL::WriteDmaBufferToMinidump(
                    (VIDMM_DMA_POOL *)v40,
                    (struct _VIDMM_DMA_BUFFER *)v17,
                    v25,
                    v24,
                    v21,
                    v22,
                    v23,
                    v7,
                    v26[0],
                    v27,
                    v40,
                    v33,
                    v34,
                    v31,
                    v32,
                    v36);
            v25 += v18;
            v19 = v24 - v18;
            v24 -= v18;
            ++*((_DWORD *)a2 + 281);
          }
        }
        if ( v11 )
        {
          if ( !v10 )
          {
            v11 = 0;
            v7 = ++v13;
            goto LABEL_32;
          }
          if ( !v14 )
            goto LABEL_31;
        }
        else
        {
          if ( v12 || !v14 )
          {
            v7 = ++v13;
LABEL_31:
            v12 = 1;
            goto LABEL_32;
          }
          v11 = 1;
        }
        v7 = --v14;
LABEL_32:
        if ( v19 < 0x48 )
          goto LABEL_33;
      }
    }
    ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    return v9 - v24;
  }
  else
  {
    ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    return 0LL;
  }
}
