/*
 * XREFs of MiOutSwapWorkingSetCallback @ 0x14001F030
 * Callers:
 *     MiOutSwapKernelStackPage @ 0x140004EB0 (MiOutSwapKernelStackPage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockTransitionLeafPage @ 0x14001068C (MiLockTransitionLeafPage.c)
 *     MiReservePageFileSpaceForPage @ 0x140036B60 (MiReservePageFileSpaceForPage.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     KeShouldYieldProcessor @ 0x1400D54D0 (KeShouldYieldProcessor.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

char __fastcall MiOutSwapWorkingSetCallback(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  volatile LONG *v3; // rbx
  ULONG_PTR v5; // r12
  unsigned __int64 VmPartition; // rax
  unsigned __int64 v7; // r15
  ULONG_PTR v8; // r8
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  ULONG_PTR v11; // r14
  char v12; // di
  unsigned __int64 v13; // rbx
  char v14; // cl
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r9
  _QWORD *v21; // r15
  unsigned __int64 v22; // rcx
  char v23; // cl
  char v24; // al
  unsigned __int64 v25; // rbx
  __int64 v26; // rbx
  bool v27; // zf
  unsigned __int64 v28; // r9
  __int64 v29; // r8
  __int64 *v30; // rdx
  unsigned __int64 v32; // [rsp+20h] [rbp-48h]
  unsigned __int64 v33; // [rsp+28h] [rbp-40h] BYREF
  int v34; // [rsp+70h] [rbp+8h] BYREF
  volatile LONG *v35; // [rsp+78h] [rbp+10h]
  ULONG_PTR v36; // [rsp+80h] [rbp+18h]

  v36 = a3;
  v3 = *(volatile LONG **)(a1 + 16);
  v5 = a2;
  v35 = v3;
  VmPartition = MiGetVmPartition(v3, a2, a3);
  v32 = VmPartition;
  v7 = VmPartition;
  if ( v5 <= v8 )
  {
    while ( 1 )
    {
      v9 = 0LL;
      v10 = 0LL;
      v11 = 0LL;
      v12 = 0;
      while ( 1 )
      {
        VmPartition = MI_READ_PTE_LOCK_FREE(v5);
        v33 = VmPartition;
        v13 = VmPartition;
        if ( (VmPartition & 1) != 0 )
          break;
        if ( (VmPartition & 0x400) != 0 )
          goto LABEL_12;
        if ( (VmPartition & 0x800) == 0 )
        {
          VmPartition >>= 12;
          if ( (VmPartition & 1) != 0 )
          {
            v9 = v13;
            v18 = v13 & 0xFFFFFFFFFFFFEFFFuLL;
            v33 = v18;
            *(_QWORD *)v5 = v18;
            LODWORD(VmPartition) = MiPteInShadowRange(v5);
            if ( (_DWORD)VmPartition )
            {
              LOBYTE(VmPartition) = MiWritePteShadow(v5, v18);
              v3 = v35;
              goto LABEL_64;
            }
          }
LABEL_12:
          v3 = v35;
          goto LABEL_64;
        }
        VmPartition = MiLockTransitionLeafPage(v5, 0LL);
        v11 = VmPartition;
        if ( VmPartition )
        {
          v14 = *(_BYTE *)(VmPartition + 34);
          v12 = 1;
          if ( (v14 & 0x28) == 0 )
          {
            v15 = *(_QWORD *)(VmPartition + 16);
            VmPartition = v15 >> 12;
            if ( (v15 & 0x1000) != 0 )
            {
              v9 = v15;
              if ( *(_WORD *)(v11 + 32) || (v14 & 7) != 3 )
              {
                *(_QWORD *)(v11 + 16) &= ~0x1000uLL;
                v3 = v35;
                goto LABEL_64;
              }
              MiUnlinkPageFromList(v11);
              *(_QWORD *)(v11 + 16) &= ~0x1000uLL;
              LOBYTE(VmPartition) = MiInsertPageInList(v11, 8LL, v16, v17);
            }
          }
          goto LABEL_12;
        }
      }
      v19 = MI_GET_PAGE_FRAME_FROM_PTE(&v33);
      LODWORD(VmPartition) = MI_IS_PFN(v19);
      if ( !(_DWORD)VmPartition )
        goto LABEL_12;
      LOBYTE(VmPartition) = 0;
      v11 = 48 * v20 - 0x58000000000LL;
      if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) != 0 )
        break;
      VmPartition = *(_QWORD *)(v11 + 8) | 0x8000000000000000uLL;
      if ( VmPartition != v5 )
        goto LABEL_12;
      v34 = 0;
      v12 = 1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
      {
        do
        {
          KeYieldProcessorEx(&v34);
          VmPartition = *(_QWORD *)(v11 + 24);
        }
        while ( (VmPartition & 0x8000000000000000uLL) != 0 );
      }
      if ( (*(_BYTE *)(v11 + 34) & 8) != 0 )
        goto LABEL_12;
      v22 = *(_QWORD *)(v11 + 16);
      if ( (v22 & 0x1000) != 0 )
      {
        *(_QWORD *)(v11 + 16) &= ~0x1000uLL;
        v9 = v22;
      }
      v3 = v35;
      LOBYTE(VmPartition) = *((_BYTE *)v35 + 216);
      if ( (VmPartition & 7) == 0 )
      {
        VmPartition = *((_QWORD *)v35 + 23);
        if ( *(_QWORD *)v11 < *(_QWORD *)(VmPartition + 8) )
          goto LABEL_63;
      }
      if ( *(_WORD *)(v11 + 32) != 1 )
        goto LABEL_63;
      if ( (v33 & 0x42) != 0 || (*(_BYTE *)(v11 + 34) & 0x10) != 0 )
        goto LABEL_35;
      VmPartition = (unsigned __int64)*(unsigned int *)(v11 + 16) >> 13;
      if ( (*(_DWORD *)(v11 + 16) & 0x2000LL) != 0 )
      {
        v12 = 3;
LABEL_35:
        v23 = *(_BYTE *)(v11 + 34);
        if ( (v23 & 0x10) == 0 )
        {
          if ( (*(_DWORD *)(v11 + 16) & 0x400LL) == 0 && (v23 & 8) == 0 )
            v10 = MiCapturePageFileInfoInline(v11 + 16, 1LL, 0LL);
          *(_BYTE *)(v11 + 34) |= 0x10u;
        }
        v24 = *(_BYTE *)(v11 + 34) >> 6;
        if ( v24 != 1 )
        {
          if ( v24 == 2 )
          {
            v12 |= 4u;
          }
          else if ( !v24 )
          {
            v12 |= 8u;
          }
        }
        if ( *(_DWORD *)(a1 + 112) == -1 )
        {
          v25 = *(_DWORD *)(v11 + 16) & 0x3E0 | (2
                                               * (*(_WORD *)(*(_QWORD *)(v32 + 8LL * *(unsigned int *)(v32 + 1076) + 5728)
                                                           + 204LL) & 0xF | 0xFFFFFFFF80000000uLL));
          v33 = v25;
          *(_QWORD *)(v11 + 16) = v25;
          if ( (unsigned int)MiPteInShadowRange(v11 + 16) )
            MiWritePteShadow(v11 + 16, v25);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        VmPartition = *(unsigned int *)(a1 + 112);
        v12 &= ~1u;
        v21 = *(_QWORD **)a1;
        if ( (_DWORD)VmPartition != -1 )
        {
          v26 = a1 + 16 * (VmPartition + 2);
          if ( (unsigned int)VmPartition >= 5 || !*(_DWORD *)(v26 + 8) )
          {
            v3 = v35;
            v7 = v32;
            goto LABEL_64;
          }
          MiReservePageFileSpaceForPage(v32, v5, 128LL, a1 + 16 * (VmPartition + 2));
          LODWORD(VmPartition) = HIDWORD(*(_QWORD *)v26) + 1;
          v27 = (*(_DWORD *)(v26 + 8))-- == 1;
          *(_DWORD *)(v26 + 4) = VmPartition;
          if ( v27 )
            ++*(_DWORD *)(a1 + 112);
          v12 |= 0x10u;
        }
LABEL_54:
        v28 = v21[2];
        if ( v28 < v21[1] )
        {
          v29 = (__int64)(v5 << 25) >> 16;
          v30 = (__int64 *)(16 * v28 + *v21 - 16LL);
          if ( !v28 || (VmPartition = *v30 + v30[1], VmPartition != v29) )
          {
            v30 = (__int64 *)(16 * v28 + *v21);
            LOBYTE(VmPartition) = v28 + 1;
            v21[2] = v28 + 1;
            *v30 = v29;
            v30[1] = 0LL;
          }
          v30[1] += 4096LL;
          ++v21[3];
          if ( (v12 & 2) != 0 )
            ++*(_QWORD *)(a1 + 136);
          if ( (v12 & 4) == 0 )
          {
            v3 = v35;
            v7 = v32;
            if ( (v12 & 8) != 0 )
              ++*(_QWORD *)(a1 + 128);
            goto LABEL_64;
          }
          ++*(_QWORD *)(a1 + 120);
        }
LABEL_62:
        v3 = v35;
      }
LABEL_63:
      v7 = v32;
LABEL_64:
      if ( (v12 & 1) != 0 )
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v9 )
      {
        if ( (v9 & 0x2000) != 0 )
          v9 &= ~0x2000uLL;
        LOBYTE(VmPartition) = MiReleasePageFileInfo(v7, v9, 0LL);
      }
      if ( v10 )
        LOBYTE(VmPartition) = MiReleasePageFileInfo(v7, v10, 0LL);
      v5 += 8LL;
      if ( v5 > v36 )
        goto LABEL_73;
    }
    v21 = *(_QWORD **)(a1 + 8);
    if ( v21 )
      goto LABEL_54;
    goto LABEL_62;
  }
LABEL_73:
  if ( *(_BYTE *)(a1 + 24) != 17 )
  {
    if ( (*v3 & 0x40000000) != 0 || (LODWORD(VmPartition) = KeShouldYieldProcessor(), (_DWORD)VmPartition) )
    {
      MiUnlockWorkingSetExclusive(v3, *(unsigned __int8 *)(a1 + 24));
      LOBYTE(VmPartition) = ExAcquireSpinLockExclusive(v3);
    }
  }
  return VmPartition;
}
