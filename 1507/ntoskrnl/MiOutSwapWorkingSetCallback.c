/*
 * XREFs of MiOutSwapWorkingSetCallback @ 0x14003CFD0
 * Callers:
 *     MiOutSwapKernelStackPage @ 0x14012C700 (MiOutSwapKernelStackPage.c)
 * Callees:
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockTransitionLeafPage @ 0x140082F6C (MiLockTransitionLeafPage.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiReservePageFileSpaceForPage @ 0x1400DD2E0 (MiReservePageFileSpaceForPage.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     KeShouldYieldProcessor @ 0x14010B540 (KeShouldYieldProcessor.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x140226040 (MiTransferSoftwarePte.c)
 */

// local variable allocation has failed, the output may be wrong!
char __fastcall MiOutSwapWorkingSetCallback(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  volatile signed __int32 *v3; // rdi
  __int64 VmPartition; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned int v9; // ebx
  ULONG_PTR v10; // r8
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbp
  __int64 v14; // r15
  char v15; // di
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r9
  __int64 v19; // r9
  _QWORD *v20; // r14
  unsigned int v21; // r14d
  unsigned __int64 v22; // rcx
  __int64 *v23; // r14
  char v24; // al
  __int64 v25; // r10
  __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 PteTimeStamp; // rax
  bool v29; // zf
  unsigned __int64 v30; // r9
  __int64 v31; // r8
  signed __int32 v32; // edx
  volatile signed __int32 *v34; // [rsp+20h] [rbp-48h]
  __int64 v35; // [rsp+70h] [rbp+8h]
  unsigned __int64 v36; // [rsp+78h] [rbp+10h] BYREF
  ULONG_PTR v37; // [rsp+80h] [rbp+18h]

  v37 = a3;
  v3 = *(volatile signed __int32 **)(a1 + 16);
  v34 = v3;
  VmPartition = (__int64)MiGetVmPartition((__int64)v3);
  v9 = 0;
  v35 = VmPartition;
  if ( a2 <= v10 )
  {
    while ( 1 )
    {
      v11 = 0LL;
      v12 = a2 + 0x90482413000LL;
      v13 = 0LL;
      v14 = 0LL;
      v15 = 0;
      while ( 1 )
      {
        v16 = *(_QWORD *)a2;
        if ( v12 <= 0x7F8 )
        {
          LODWORD(VmPartition) = MiPteHasShadow(v8, v7);
          if ( (_DWORD)VmPartition )
          {
            if ( (v16 & 1) != 0 && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
            {
              VmPartition = (__int64)KeGetCurrentThread();
              v8 = *(_QWORD *)(VmPartition + 184);
              v7 = *(_QWORD *)(v8 + 1520);
              if ( v7 )
              {
                VmPartition = *(_QWORD *)(v7 + 8 * ((a2 >> 3) & 0x1FF));
                if ( (VmPartition & 0x20) != 0 )
                  v16 |= 0x20uLL;
                if ( (VmPartition & 0x42) != 0 )
                  v16 |= 0x42uLL;
              }
            }
          }
        }
        v36 = v16;
        if ( (v16 & 1) != 0 )
          break;
        if ( (v16 & 0x400) != 0 )
          goto LABEL_74;
        if ( (v16 & 0x800) == 0 )
        {
          LOBYTE(VmPartition) = (unsigned __int8)v16 >> 1;
          if ( (v16 & 2) != 0 )
          {
            v11 = v16;
            v17 = v16 & 0xFFFFFFFFFFFFFFFDuLL;
            v36 = v17;
            *(_QWORD *)a2 = v17;
            if ( v12 <= 0x7F8 )
              LOBYTE(VmPartition) = MiWritePteShadow(a2, v17);
          }
          goto LABEL_74;
        }
        VmPartition = MiLockTransitionLeafPage(a2);
        v14 = VmPartition;
        if ( VmPartition )
        {
          LOBYTE(VmPartition) = *(_BYTE *)(VmPartition + 34);
          v15 = 1;
          if ( (VmPartition & 0x28) == 0 )
          {
            v7 = *(_QWORD *)(v14 + 16);
            v8 = (unsigned __int8)v7;
            LOBYTE(v8) = (unsigned __int8)v7 >> 1;
            if ( (v7 & 2) != 0 )
            {
              v11 = *(_QWORD *)(v14 + 16);
              if ( *(_WORD *)(v14 + 32) || (LOBYTE(VmPartition) = VmPartition & 7, (_BYTE)VmPartition != 3) )
              {
                *(_QWORD *)(v14 + 16) &= ~2uLL;
              }
              else
              {
                MiUnlinkPageFromList(v14);
                *(_QWORD *)(v14 + 16) &= ~2uLL;
                LOBYTE(VmPartition) = MiInsertPageInList(v14, 8LL);
              }
            }
          }
          goto LABEL_74;
        }
      }
      v18 = v16;
      if ( (unsigned __int64)&STACK[0x90482413078] <= 0x7F8 )
        v18 = MiReadPteShadow(&v36, v16);
      LODWORD(VmPartition) = MI_IS_PFN((v18 >> 12) & 0xFFFFFFFFFLL);
      if ( !(_DWORD)VmPartition )
        goto LABEL_74;
      v14 = 48 * v19 - 0x58000000000LL;
      if ( (*(_QWORD *)(v14 + 40) & 0x200000000000000LL) != 0 )
      {
        v20 = *(_QWORD **)(a1 + 8);
        if ( !v20 )
          goto LABEL_74;
      }
      else
      {
        VmPartition = *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL;
        if ( VmPartition != a2 )
          goto LABEL_74;
        v21 = 0;
        v15 = 1;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v21);
            VmPartition = *(_QWORD *)(v14 + 24);
          }
          while ( VmPartition < 0 || _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
        }
        if ( (*(_BYTE *)(v14 + 34) & 8) != 0 )
          goto LABEL_74;
        v22 = *(_QWORD *)(v14 + 16);
        v23 = (__int64 *)(v14 + 16);
        LOBYTE(VmPartition) = (unsigned __int8)v22 >> 1;
        if ( (v22 & 2) != 0 )
        {
          *v23 &= ~2uLL;
          v11 = v22;
        }
        v8 = (unsigned __int64)v34;
        if ( (v34[54] & 7) == 0 )
        {
          VmPartition = *((_QWORD *)v34 + 23);
          v8 = *(_QWORD *)(VmPartition + 8);
          if ( *(_QWORD *)v14 < v8 )
            goto LABEL_74;
        }
        if ( *(_WORD *)(v14 + 32) != 1 )
          goto LABEL_74;
        if ( (v16 & 0x42) == 0 && (*(_BYTE *)(v14 + 34) & 0x10) == 0 )
        {
          LOBYTE(VmPartition) = (unsigned __int8)*(_DWORD *)v23 >> 2;
          if ( (*(_DWORD *)v23 & 4) == 0 )
            goto LABEL_74;
          v15 = 3;
        }
        v13 = MiCaptureDirtyBitToPfn(v14);
        v24 = *(_BYTE *)(v14 + 34) >> 6;
        if ( v24 != 1 )
        {
          if ( v24 == 2 )
          {
            v15 |= 4u;
          }
          else if ( !v24 )
          {
            v15 |= 8u;
          }
        }
        v25 = v35;
        if ( *(_DWORD *)(a1 + 112) == -1 )
        {
          v26 = MiTransferSoftwarePte(*v23, *(_QWORD *)(v35 + 8LL * *(unsigned int *)(v35 + 1044) + 5344), 0xFFFFFFFFLL);
          v36 = v26;
          v7 = v14 + 0x90482413010LL;
          *v23 = v26;
          if ( (unsigned __int64)(v14 + 0x90482413010LL) <= 0x7F8 )
          {
            MiWritePteShadow(v14 + 16, v26);
            v25 = v35;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        VmPartition = *(unsigned int *)(a1 + 112);
        v15 &= ~1u;
        v20 = *(_QWORD **)a1;
        if ( (_DWORD)VmPartition != -1 )
        {
          v27 = (__int64 *)(a1 + 16 * (VmPartition + 2));
          if ( (unsigned int)VmPartition >= 5 || !*((_DWORD *)v27 + 2) )
            goto LABEL_74;
          MiReservePageFileSpaceForPage(v25, a2, 128LL, a1 + 16 * (VmPartition + 2));
          PteTimeStamp = MiGetPteTimeStamp(*v27);
          VmPartition = MiUpdatePageFileHighInPte(*v27, PteTimeStamp + 1);
          v29 = (*((_DWORD *)v27 + 2))-- == 1;
          *v27 = VmPartition;
          if ( v29 )
            ++*(_DWORD *)(a1 + 112);
          v15 |= 0x10u;
        }
      }
      v30 = v20[2];
      if ( v30 < v20[1] )
      {
        v31 = (__int64)(a2 << 25) >> 16;
        v8 = 16 * v30;
        v7 = 16 * v30 + *v20 - 16LL;
        if ( !v30 || (VmPartition = *(_QWORD *)v7 + *(_QWORD *)(v7 + 8), VmPartition != v31) )
        {
          v7 = 16 * v30 + *v20;
          LOBYTE(VmPartition) = v30 + 1;
          v20[2] = v30 + 1;
          *(_QWORD *)v7 = v31;
          *(_QWORD *)(v7 + 8) = 0LL;
        }
        *(_QWORD *)(v7 + 8) += 4096LL;
        ++v20[3];
        if ( (v15 & 2) != 0 )
          ++*(_QWORD *)(a1 + 136);
        if ( (v15 & 4) != 0 )
        {
          ++*(_QWORD *)(a1 + 120);
        }
        else if ( (v15 & 8) != 0 )
        {
          ++*(_QWORD *)(a1 + 128);
        }
      }
LABEL_74:
      if ( (v15 & 1) != 0 )
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v11 )
      {
        if ( (v11 & 4) != 0 )
          v11 &= ~4uLL;
        LOBYTE(VmPartition) = MiReleasePageFileInfo(v35, v11, 0LL);
      }
      if ( v13 )
        LOBYTE(VmPartition) = MiReleasePageFileInfo(v35, v13, 0LL);
      a2 += 8LL;
      v9 = 0;
      if ( a2 > v37 )
      {
        v3 = v34;
        break;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 24) != 17 )
  {
    if ( (*v3 & 0x40000000) != 0 || (LODWORD(VmPartition) = KeShouldYieldProcessor(), (_DWORD)VmPartition) )
    {
      MiUnlockWorkingSetExclusive(v3, *(unsigned __int8 *)(a1 + 24));
      LOBYTE(VmPartition) = 2;
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(VmPartition) = ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3);
      }
      else
      {
        if ( _interlockedbittestandset(v3, 0x1Fu) )
        {
          LODWORD(VmPartition) = ExpWaitForSpinLockExclusiveAndAcquire(v3);
          v9 = VmPartition;
        }
        v32 = *v3;
        if ( (*v3 & 0xBFFFFFFF) != 0x80000000 )
        {
          do
          {
            if ( (v32 & 0x40000000) == 0 )
              _InterlockedCompareExchange(v3, v32 | 0x40000000, v32);
            if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v9);
            v32 = *v3;
            LODWORD(VmPartition) = *v3 & 0xBFFFFFFF;
          }
          while ( (_DWORD)VmPartition != 0x80000000 );
        }
      }
    }
  }
  return VmPartition;
}
