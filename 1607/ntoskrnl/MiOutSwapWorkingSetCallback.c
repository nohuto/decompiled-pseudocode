/*
 * XREFs of MiOutSwapWorkingSetCallback @ 0x1400B7C60
 * Callers:
 *     MiOutSwapKernelStackPage @ 0x1400B5674 (MiOutSwapKernelStackPage.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiReservePageFileSpaceForPage @ 0x14001E510 (MiReservePageFileSpaceForPage.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     MiLockTransitionLeafPage @ 0x1400B6E48 (MiLockTransitionLeafPage.c)
 *     MiWorkingSetIsContended @ 0x1400B8870 (MiWorkingSetIsContended.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 */

void __fastcall MiOutSwapWorkingSetCallback(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v5; // r9
  struct _KEVENT *v6; // r15
  ULONG_PTR v7; // r8
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  char v11; // bl
  __int64 v12; // rax
  ULONG_PTR v13; // rax
  char v14; // cl
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  _QWORD *v18; // r15
  __int64 v19; // r9
  unsigned __int64 v20; // rcx
  char v21; // cl
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 PteTimeStamp; // rax
  __int64 updated; // rax
  bool v31; // zf
  unsigned __int64 v32; // r9
  __int64 v33; // r8
  __int64 *v34; // rdx
  unsigned __int64 v35; // [rsp+20h] [rbp-48h] BYREF
  __int64 v36; // [rsp+28h] [rbp-40h]
  int v37; // [rsp+70h] [rbp+8h] BYREF
  struct _KEVENT *v38; // [rsp+78h] [rbp+10h]
  ULONG_PTR v39; // [rsp+80h] [rbp+18h]

  v39 = a3;
  v36 = *(_QWORD *)(a1 + 16);
  v38 = (struct _KEVENT *)MiPartitionIdToPointer(*(_WORD *)(v36 + 164));
  v6 = v38;
  if ( a2 <= v7 )
  {
    while ( 1 )
    {
      v8 = 0LL;
      v9 = 0LL;
      v10 = 0LL;
      v11 = 0;
      while ( 1 )
      {
        v12 = MI_READ_PTE_LOCK_FREE(a2);
        v35 = v12;
        if ( (v12 & 1) != 0 )
          break;
        if ( (v12 & 0x400) != 0 )
          goto LABEL_22;
        if ( (v12 & 0x800) == 0 )
        {
          if ( (v12 & 2) != 0 )
          {
            v8 = v12;
            v35 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
            *(_QWORD *)a2 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
            if ( (unsigned int)MiPteInShadowRange(a2, v12 & 0xFFFFFFFFFFFFFFFDuLL) )
              MiWritePteShadow(v16, v15);
          }
          goto LABEL_22;
        }
        v13 = MiLockTransitionLeafPage(a2, 0LL);
        v10 = v13;
        if ( v13 )
        {
          v14 = *(_BYTE *)(v13 + 34);
          v11 = 1;
          if ( (v14 & 0x28) == 0 && (*(_QWORD *)(v13 + 16) & 2) != 0 )
          {
            v8 = *(_QWORD *)(v13 + 16);
            if ( *(_WORD *)(v13 + 32) || (v14 & 7) != 3 )
            {
              *(_QWORD *)(v13 + 16) &= ~2uLL;
            }
            else
            {
              MiUnlinkPageFromList(v13, 0);
              *(_QWORD *)(v10 + 16) &= ~2uLL;
              MiInsertPageInList(v10, 8u);
            }
          }
          goto LABEL_22;
        }
      }
      v17 = MI_GET_PAGE_FRAME_FROM_PTE(&v35);
      if ( v17 > qword_140326AD0
        || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v17 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
      {
        goto LABEL_22;
      }
      v10 = 48 * v17 - 0x58000000000LL;
      if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
        break;
      if ( (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) == a2 )
      {
        v37 = 0;
        v11 = 1;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v37);
          while ( (*(_QWORD *)(v10 + 24) & 0x8000000000000000uLL) != 0 );
        }
        if ( (*(_BYTE *)(v10 + 34) & 8) == 0 )
        {
          v20 = *(_QWORD *)(v10 + 16);
          if ( (v20 & 2) != 0 )
          {
            *(_QWORD *)(v10 + 16) &= ~2uLL;
            v8 = v20;
          }
          if ( ((*(_BYTE *)(v36 + 184) & 7) != 0 || *(_QWORD *)v10 >= MiGetSharedWorkingSetList(v36)[1])
            && *(_WORD *)(v10 + 32) == 1 )
          {
            if ( (v35 & 0x42) == 0 && (*(_BYTE *)(v10 + 34) & 0x10) == 0 )
            {
              if ( (*(_DWORD *)(v10 + 16) & 4) == 0 )
                goto LABEL_22;
              v11 = 3;
            }
            v21 = *(_BYTE *)(v10 + 34);
            if ( (v21 & 0x10) == 0 )
            {
              if ( (*(_DWORD *)(v10 + 16) & 0x400LL) == 0 && (v21 & 8) == 0 )
                v9 = MiCapturePageFileInfoInline((_QWORD *)(v10 + 16), 1, 0);
              *(_BYTE *)(v10 + 34) |= 0x10u;
            }
            v22 = *(_BYTE *)(v10 + 34) >> 6;
            if ( v22 != 1 )
            {
              if ( v22 == 2 )
              {
                v11 |= 4u;
              }
              else if ( !v22 )
              {
                v11 |= 8u;
              }
            }
            if ( *(_DWORD *)(a1 + 112) == -1 )
            {
              v23 = MiTransferSoftwarePte(
                      *(_QWORD *)(v10 + 16),
                      *((_QWORD *)&v6[262].Header.WaitListHead.Blink + (unsigned int)v6[44].Header.SignalState),
                      0xFFFFFFFFLL,
                      0LL);
              v35 = v23;
              *(_QWORD *)(v10 + 16) = v23;
              if ( (unsigned int)MiPteInShadowRange(v10 + 16, v23) )
                MiWritePteShadow(v10 + 16, v24);
            }
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v25 = *(unsigned int *)(a1 + 112);
            v11 &= ~1u;
            v18 = *(_QWORD **)a1;
            if ( (_DWORD)v25 != -1 )
            {
              v26 = a1 + 16 * (v25 + 2);
              if ( (unsigned int)v25 >= 5 || !*(_DWORD *)(v26 + 8) )
              {
                v6 = v38;
                goto LABEL_22;
              }
              MiReservePageFileSpaceForPage(v38, a2, 128, (unsigned __int64 *)(a1 + 16 * (v25 + 2)));
              PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)v26, v27, v28);
              updated = MiUpdatePageFileHighInPte(*(_QWORD *)v26, PteTimeStamp + 1);
              v31 = (*(_DWORD *)(v26 + 8))-- == 1;
              *(_QWORD *)v26 = updated;
              if ( v31 )
                ++*(_DWORD *)(a1 + 112);
              v11 |= 0x10u;
            }
LABEL_71:
            v32 = v18[2];
            if ( v32 >= v18[1] )
              goto LABEL_21;
            v33 = (__int64)(a2 << 25) >> 16;
            v34 = (__int64 *)(16 * v32 + *v18 - 16LL);
            if ( !v32 || *v34 + v34[1] != v33 )
            {
              v34 = (__int64 *)(16 * v32 + *v18);
              v18[2] = v32 + 1;
              *v34 = v33;
              v34[1] = 0LL;
            }
            v34[1] += 4096LL;
            ++v18[3];
            if ( (v11 & 2) != 0 )
              ++*(_QWORD *)(a1 + 136);
            if ( (v11 & 4) != 0 )
            {
              ++*(_QWORD *)(a1 + 120);
LABEL_21:
              v6 = v38;
              goto LABEL_22;
            }
            v6 = v38;
            if ( (v11 & 8) != 0 )
              ++*(_QWORD *)(a1 + 128);
          }
        }
      }
LABEL_22:
      if ( (v11 & 1) != 0 )
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v8 )
      {
        if ( (v8 & 4) != 0 )
          v8 &= ~4uLL;
        MiReleasePageFileInfo(v6, v8, 0);
      }
      if ( v9 )
        MiReleasePageFileInfo(v6, v9, 0);
      a2 += 8LL;
      if ( a2 > v39 )
      {
        v5 = v36;
        goto LABEL_32;
      }
    }
    v18 = *(_QWORD **)(a1 + 8);
    if ( !v18 )
      goto LABEL_21;
    goto LABEL_71;
  }
LABEL_32:
  if ( *(_BYTE *)(a1 + 24) != 17 )
  {
    if ( (unsigned int)MiWorkingSetIsContended(v5) )
    {
LABEL_36:
      MiRelockWorkingSetExclusive(v19, *(unsigned __int8 *)(a1 + 24));
      return;
    }
    if ( KeShouldYieldProcessor() )
    {
      v19 = v36;
      goto LABEL_36;
    }
  }
}
