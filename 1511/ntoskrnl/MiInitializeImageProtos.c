/*
 * XREFs of MiInitializeImageProtos @ 0x14000EC10
 * Callers:
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 * Callees:
 *     MiInitializeTransitionPfn @ 0x140011764 (MiInitializeTransitionPfn.c)
 *     MiGetPageForHeader @ 0x140011920 (MiGetPageForHeader.c)
 *     MiGetEffectivePagePriorityThread @ 0x140011A18 (MiGetEffectivePagePriorityThread.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiEndingOffset @ 0x14007C880 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReferenceControlAreaPfn @ 0x1400AB390 (MiReferenceControlAreaPfn.c)
 *     KeCopyPage @ 0x140157550 (KeCopyPage.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
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
  ULONG_PTR v11; // rbx
  __int64 v12; // r13
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  char *v15; // r15
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r15
  unsigned __int64 v19; // [rsp+38h] [rbp-70h]
  __int64 v20; // [rsp+40h] [rbp-68h]
  unsigned __int64 v21; // [rsp+48h] [rbp-60h]
  ULONG_PTR v22; // [rsp+50h] [rbp-58h]
  __int64 v23; // [rsp+58h] [rbp-50h]
  char v27; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = a2;
  v20 = MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF);
  v19 = *(unsigned int *)(v4 + 40);
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread());
  v6 = EffectivePagePriorityThread;
  if ( EffectivePagePriorityThread > 5 )
  {
    v6 = 5;
  }
  else if ( EffectivePagePriorityThread )
  {
    v6 = EffectivePagePriorityThread - 1;
  }
  result = v3 + 120;
  v27 = 17;
  v8 = 0LL;
  v9 = v3 + 120;
  if ( v3 != -120 )
  {
    do
    {
      v10 = *(_QWORD *)(v9 + 16);
      v11 = *(_QWORD *)(v9 + 8);
      v23 = v10;
      if ( (*(_BYTE *)(v9 + 34) & 2) == 0 )
      {
        v12 = MiStartingOffset(v9, v11, 0xFFFFFFFFLL);
        v21 = MiEndingOffset(v9);
        result = v11 + 8LL * *(unsigned int *)(v9 + 44);
        v22 = result;
        if ( v11 < result )
        {
          while ( 1 )
          {
            if ( (v11 & 0xFFF) != 0 && v8 )
              goto LABEL_9;
            if ( v8 )
            {
              LOBYTE(v13) = v27;
              MiUnlockProtoPoolPage(v8, v13);
            }
            v8 = MiLockProtoPoolPage(v11, &v27);
            if ( v8 )
            {
LABEL_9:
              result = v12 + 4096;
              if ( v12 + 4096 > v19 )
              {
                v10 = 0LL;
                break;
              }
              result = MI_READ_PTE_LOCK_FREE(v11);
              if ( (result & 1) == 0 && (result & 0xC00) != 0x800 && (result & 0x400) != 0 )
              {
                if ( v9 == v3 + 120 && v11 == *(_QWORD *)(v9 + 8) )
                {
                  v13 = (unsigned __int128)((a3 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
                  result = v13 >> 63;
                  v14 = (a3 + 0x58000000000LL) / 48;
                }
                else
                {
                  result = MiGetPageForHeader(v20, (*(_DWORD *)(v3 + 56) >> 20) & 0x3F);
                  v14 = result;
                }
                if ( v14 != -1 )
                {
                  if ( (*(_BYTE *)(v4 + 10) & 5) != 0 )
                    v15 = *(char **)(v4 + 24);
                  else
                    v15 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v4, 0, MmCached, 0LL, 0, 0xC0000020);
                  v16 = MiMapPageInHyperSpaceWorker(v14, 0LL, 0x80000000LL);
                  KeCopyPage(v16, &v15[v12]);
                  if ( v12 + 4096 > v21 )
                    memset((void *)(v16 - (unsigned int)(v12 - v21 + 4096) + 4096), 0, (unsigned int)(v12 - v21 + 4096));
                  LOBYTE(v17) = 17;
                  MiUnmapPageInHyperSpaceWorker(v16, v17, 0x80000000LL);
                  result = 0x58000000000LL;
                  v18 = 48 * v14 - 0x58000000000LL;
                  if ( v18 != a3 )
                  {
                    MiReferenceControlAreaPfn(a1, 0LL, 1LL);
                    MiLockPageAtDpcInline(48 * v14 - 0x58000000000LL);
                    MiInitializeTransitionPfn(v14, v11);
                    *(_BYTE *)(v18 + 35) ^= (v6 ^ *(_BYTE *)(v18 + 35)) & 7;
                    MiRemoveLockedPageChargeAndDecRef(48 * v14 - 0x58000000000LL);
                    result = 0x7FFFFFFFFFFFFFFFLL;
                    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
              result = MmAccessFault(2uLL, v11);
            }
            if ( v11 >= v22 )
            {
              v10 = v23;
              break;
            }
          }
        }
        if ( v8 )
        {
          LOBYTE(v13) = v27;
          result = MiUnlockProtoPoolPage(v8, v13);
          v8 = 0LL;
        }
      }
      v9 = v10;
    }
    while ( v10 );
  }
  return result;
}
