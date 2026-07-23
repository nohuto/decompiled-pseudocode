/*
 * XREFs of MiInitializeImageProtos @ 0x1400FB5BC
 * Callers:
 *     MiCreateImageFileMap @ 0x140505A1C (MiCreateImageFileMap.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiInitializeTransitionPfn @ 0x140022CA4 (MiInitializeTransitionPfn.c)
 *     MiEndingOffset @ 0x140023170 (MiEndingOffset.c)
 *     MiReferenceControlAreaPfn @ 0x140023264 (MiReferenceControlAreaPfn.c)
 *     MiGetEffectivePagePriorityThread @ 0x140026934 (MiGetEffectivePagePriorityThread.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetPageForHeader @ 0x1400FB8C8 (MiGetPageForHeader.c)
 *     KeCopyPage @ 0x140162490 (KeCopyPage.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiInitializeImageProtos(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // r12
  unsigned int EffectivePagePriorityThread; // eax
  char v6; // r14
  unsigned __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r13
  __int64 v13; // rsi
  char *v14; // r15
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // [rsp+38h] [rbp-70h]
  int *v22; // [rsp+40h] [rbp-68h]
  unsigned __int64 v23; // [rsp+48h] [rbp-60h]
  unsigned __int64 v24; // [rsp+50h] [rbp-58h]
  __int64 v25; // [rsp+58h] [rbp-50h]
  unsigned __int8 v29; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = a2;
  v22 = MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF);
  v21 = *(unsigned int *)(v4 + 40);
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
  v6 = EffectivePagePriorityThread;
  if ( EffectivePagePriorityThread > 5 )
  {
    v6 = 5;
  }
  else if ( EffectivePagePriorityThread )
  {
    v6 = EffectivePagePriorityThread - 1;
  }
  result = v3 + 128;
  v29 = 17;
  v8 = 0LL;
  v9 = v3 + 128;
  if ( v3 != -128 )
  {
    do
    {
      v10 = *(_QWORD *)(v9 + 16);
      v11 = *(_QWORD *)(v9 + 8);
      v25 = v10;
      if ( (*(_BYTE *)(v9 + 34) & 2) == 0 )
      {
        v12 = MiStartingOffset((__int64 *)v9, v11, 0xFFFFFFFF);
        v23 = MiEndingOffset(v9);
        result = v11 + 8LL * *(unsigned int *)(v9 + 44);
        v24 = result;
        if ( v11 < result )
        {
          while ( 1 )
          {
            if ( (v11 & 0xFFF) != 0 && v8 )
              goto LABEL_9;
            if ( v8 )
              MiUnlockProtoPoolPage(v8, v29);
            v8 = MiLockProtoPoolPage(v11, &v29);
            if ( v8 )
            {
LABEL_9:
              result = v12 + 4096;
              if ( v12 + 4096 > v21 )
              {
                v10 = 0LL;
                break;
              }
              result = MI_READ_PTE_LOCK_FREE(v11);
              if ( (result & 1) == 0 && (result & 0xC00) != 0x800 && (result & 0x400) != 0 )
              {
                if ( v9 == v3 + 128 && v11 == *(_QWORD *)(v9 + 8) )
                {
                  result = (unsigned __int64)((unsigned __int128)((a3 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
                  v13 = (a3 + 0x58000000000LL) / 48;
                }
                else
                {
                  result = MiGetPageForHeader(v22, (*(_DWORD *)(v3 + 56) >> 20) & 0x3F);
                  v13 = result;
                }
                if ( v13 != -1 )
                {
                  if ( (*(_BYTE *)(v4 + 10) & 5) != 0 )
                    v14 = *(char **)(v4 + 24);
                  else
                    v14 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v4, 0, MmCached, 0LL, 0, 0xC0000020);
                  v15 = MiMapPageInHyperSpaceWorker(v13, 0LL, 0x80000000);
                  KeCopyPage(v15, &v14[v12]);
                  if ( v12 + 4096 > v23 )
                    memset((void *)(v15 - (unsigned int)(v12 - v23 + 4096) + 4096), 0, (unsigned int)(v12 - v23 + 4096));
                  LOBYTE(v16) = 17;
                  MiUnmapPageInHyperSpaceWorker(v15, v16);
                  result = 0xFFFFFA8000000000uLL;
                  v17 = 48 * v13 - 0x58000000000LL;
                  if ( v17 != a3 )
                  {
                    MiReferenceControlAreaPfn(a1, 0LL, 1u);
                    MiLockPageAtDpcInline(48 * v13 - 0x58000000000LL);
                    MiInitializeTransitionPfn(v13, (__int64 *)v11);
                    *(_BYTE *)(v17 + 35) ^= (v6 ^ *(_BYTE *)(v17 + 35)) & 7;
                    MiRemoveLockedPageChargeAndDecRef(48 * v13 - 0x58000000000LL, v18, v19, v20);
                    result = 0x7FFFFFFFFFFFFFFFLL;
                    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  }
                  v4 = a2;
                  v3 = a1;
                }
              }
              v12 += 4096LL;
              v11 += 8LL;
            }
            else
            {
              result = MmAccessFault(2uLL, v11, 0, 0LL);
            }
            if ( v11 >= v24 )
            {
              v10 = v25;
              break;
            }
          }
        }
        if ( v8 )
        {
          result = MiUnlockProtoPoolPage(v8, v29);
          v8 = 0LL;
        }
      }
      v9 = v10;
    }
    while ( v10 );
  }
  return result;
}
