/*
 * XREFs of MiInitializeImageProtos @ 0x1400E3274
 * Callers:
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 * Callees:
 *     MiReferenceControlAreaPfn @ 0x140035604 (MiReferenceControlAreaPfn.c)
 *     MiGetEffectivePagePriorityThread @ 0x14003C720 (MiGetEffectivePagePriorityThread.c)
 *     MiEndingOffset @ 0x140055120 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x140055230 (MiStartingOffset.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiGetPageForHeader @ 0x1400E1178 (MiGetPageForHeader.c)
 *     MiInitializeTransitionPfn @ 0x1400E2B5C (MiInitializeTransitionPfn.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeCopyPage @ 0x140186CC0 (KeCopyPage.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 */

unsigned __int64 __fastcall MiInitializeImageProtos(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  unsigned int EffectivePagePriorityThread; // eax
  char v6; // r15
  unsigned __int64 result; // rax
  __int64 v8; // r12
  __int64 v9; // rbp
  bool v10; // zf
  __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r14
  char *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // r8
  unsigned int v24; // edi
  unsigned __int64 v25; // [rsp+38h] [rbp-70h]
  unsigned __int64 v26; // [rsp+40h] [rbp-68h]
  unsigned __int64 v27; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-58h]
  __int64 v29; // [rsp+58h] [rbp-50h]
  unsigned __int8 v33; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = a2;
  v25 = *(unsigned int *)(a2 + 40);
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
  v6 = EffectivePagePriorityThread;
  if ( EffectivePagePriorityThread <= 5 )
  {
    if ( EffectivePagePriorityThread )
      v6 = EffectivePagePriorityThread - 1;
  }
  else
  {
    v6 = 5;
  }
  result = v3 + 120;
  v33 = 17;
  v8 = 0LL;
  v9 = v3 + 120;
  if ( v3 != -120 )
  {
    do
    {
      v10 = (*(_BYTE *)(v9 + 34) & 2) == 0;
      v11 = *(_QWORD *)(v9 + 16);
      v12 = *(_QWORD *)(v9 + 8);
      v29 = v11;
      if ( v10 )
      {
        v13 = MiStartingOffset((__int64 *)v9, v12, 0xFFFFFFFF);
        v14 = MiEndingOffset(v9);
        v17 = *(unsigned int *)(v9 + 44);
        v26 = v14;
        result = v12 + 8 * v17;
        v28 = result;
        if ( v12 < result )
        {
          while ( 1 )
          {
            if ( (v12 & 0xFFF) != 0 && v8 )
              goto LABEL_14;
            if ( v8 )
              MiUnlockProtoPoolPage(v8, v33);
            v8 = MiLockProtoPoolPage(v12, &v33);
            if ( v8 )
            {
LABEL_14:
              result = v13 + 4096;
              if ( v13 + 4096 > v25 )
              {
                v11 = 0LL;
                break;
              }
              v18 = *(_QWORD *)v12;
              result = v12 + 0x90482413000LL;
              if ( v12 + 0x90482413000LL <= 0x7F8 )
              {
                result = MiPteHasShadow(v17, v18);
                if ( (_DWORD)result )
                {
                  if ( (v18 & 1) != 0 && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
                  {
                    result = (unsigned __int64)KeGetCurrentThread();
                    v17 = *(_QWORD *)(result + 184);
                    v15 = *(_QWORD *)(v17 + 1520);
                    if ( v15 )
                    {
                      result = *(_QWORD *)(v15 + 8 * ((v12 >> 3) & 0x1FF));
                      if ( (result & 0x20) != 0 )
                        v18 |= 0x20uLL;
                      if ( (result & 0x42) != 0 )
                        v18 |= 0x42uLL;
                    }
                  }
                }
              }
              v27 = v18;
              if ( (v18 & 1) == 0 )
              {
                result = (v18 >> 10) & 1;
                if ( ((v18 >> 10) & 1) != 0 || (v18 & 0x800) == 0 )
                {
                  if ( result )
                  {
                    if ( v9 == v3 + 120 && v12 == *(_QWORD *)(v9 + 8) )
                    {
                      v17 = a3 + 0x58000000000LL;
                      result = (unsigned __int64)((unsigned __int128)((a3 + 0x58000000000LL)
                                                                    * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
                      v19 = (a3 + 0x58000000000LL) / 48;
                    }
                    else
                    {
                      result = MiGetPageForHeader((*(_DWORD *)(v3 + 56) >> 20) & 0x3F, v18, v15, v16);
                      v19 = result;
                    }
                    if ( v19 != -1 )
                    {
                      if ( (*(_BYTE *)(v4 + 10) & 5) != 0 )
                        v20 = *(char **)(v4 + 24);
                      else
                        v20 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v4, 0, MmCached, 0LL, 0, 0xC0000020);
                      v21 = MiMapPageInHyperSpaceWorker(v19, 0LL, 0x80000000LL);
                      KeCopyPage(v21, &v20[v13]);
                      if ( v13 + 4096 > v26 )
                        memset(
                          (void *)(v21 - (unsigned int)(v13 - v26 + 4096) + 4096),
                          0,
                          (unsigned int)(v13 - v26 + 4096));
                      MiUnmapPageInHyperSpaceWorker(v21, 0x11u);
                      result = 0x58000000000LL;
                      v22 = 48 * v19 - 0x58000000000LL;
                      if ( v22 != a3 )
                      {
                        MiReferenceControlAreaPfn(a1, 0LL, 1LL);
                        v24 = 0;
                        while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
                        {
                          do
                          {
                            if ( (++v24 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                              _mm_pause();
                            else
                              HvlNotifyLongSpinWait(v24);
                          }
                          while ( *(__int64 *)(v22 + 24) < 0 );
                        }
                        if ( (BYTE2(MiFlags) & 3) == 2 && (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v27) & 2) != 0 )
                          MiMarkPfnVerified(48 * v19 - 0x58000000000LL, 6);
                        MiInitializeTransitionPfn(v19, (__int64 *)v12, v23);
                        *(_BYTE *)(v22 + 35) ^= (v6 ^ *(_BYTE *)(v22 + 35)) & 7;
                        MiRemoveLockedPageChargeAndDecRef(48 * v19 - 0x58000000000LL);
                        result = 0x7FFFFFFFFFFFFFFFLL;
                        _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      }
                      v4 = a2;
                    }
                    v3 = a1;
                  }
                }
              }
              v13 += 4096LL;
              v12 += 8LL;
            }
            else
            {
              result = MmAccessFault(2uLL, v12, 0, 0LL);
            }
            if ( v12 >= v28 )
            {
              v11 = v29;
              break;
            }
          }
        }
        if ( v8 )
        {
          result = MiUnlockProtoPoolPage(v8, v33);
          v8 = 0LL;
        }
      }
      v9 = v11;
    }
    while ( v11 );
  }
  return result;
}
