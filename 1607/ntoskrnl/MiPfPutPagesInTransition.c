/*
 * XREFs of MiPfPutPagesInTransition @ 0x1400E2FA0
 * Callers:
 *     MmPrefetchPagesEx @ 0x14042AFAC (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x14042B4AC (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x14050A6B4 (MiPrefetchControlArea.c)
 * Callees:
 *     MiObtainProtoReference @ 0x1400231D8 (MiObtainProtoReference.c)
 *     MiObtainFaultCharges @ 0x14002B0B0 (MiObtainFaultCharges.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EA80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiSetInPagePriority @ 0x1400882C8 (MiSetInPagePriority.c)
 *     MiReduceMdl @ 0x140098620 (MiReduceMdl.c)
 *     MiReturnFaultCharges @ 0x1400B0E08 (MiReturnFaultCharges.c)
 *     MiGetPagingFileOffset @ 0x1400B7610 (MiGetPagingFileOffset.c)
 *     MiUpdatePfnPriority @ 0x1400BBB70 (MiUpdatePfnPriority.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BBD64 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiPrefetchNormally @ 0x1400BE0A0 (MiPrefetchNormally.c)
 *     MiFreeInPageSupportBlock @ 0x1400C4240 (MiFreeInPageSupportBlock.c)
 *     MiInitializeReadInProgressPfn @ 0x1400E39D0 (MiInitializeReadInProgressPfn.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiGetInPageSupportBlock @ 0x1400E53C0 (MiGetInPageSupportBlock.c)
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 *     MiPfnZeroingNeeded @ 0x140104F58 (MiPfnZeroingNeeded.c)
 *     MiZeroPhysicalPage @ 0x140108208 (MiZeroPhysicalPage.c)
 *     MiIsPteInStore @ 0x1401228A0 (MiIsPteInStore.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x1401F24F0 (MiInvalidPteConforms.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiFreeReadListPages @ 0x14042B6A4 (MiFreeReadListPages.c)
 */

__int64 __fastcall MiPfPutPagesInTransition(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r14
  unsigned int v3; // ebx
  char *v4; // r15
  _QWORD *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  int IoPriorityThread; // eax
  __int64 v12; // r8
  unsigned int v13; // edx
  _QWORD *v14; // r12
  __int64 v15; // r10
  _QWORD *v16; // r11
  int v17; // edi
  _QWORD *v18; // rbx
  _QWORD *v19; // rdx
  unsigned int v20; // ecx
  unsigned __int64 v21; // r8
  unsigned int v22; // edx
  unsigned __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rbx
  int v35; // esi
  _QWORD *v36; // r14
  __int64 v37; // r13
  int *v38; // r14
  _WORD *v39; // rax
  unsigned int v40; // r8d
  __int64 Page; // rax
  unsigned __int64 v42; // r10
  int v43; // r8d
  __int64 PrototypePteDirect; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rsi
  __int64 v48; // r15
  unsigned __int8 CurrentIrql; // r13
  signed __int32 v50; // edx
  bool v51; // zf
  signed __int32 v52; // eax
  ULONG_PTR v53; // rbx
  int *v54; // r13
  unsigned int PagingFileOffset; // eax
  __int64 v56; // r15
  int IsPteInStore; // eax
  __int64 v58; // r8
  __int64 v59; // r9
  int v60; // r14d
  __int64 v61; // r13
  __int64 v62; // rsi
  ULONG_PTR v63; // rbx
  __int64 *v64; // rdx
  __int64 v65; // rax
  unsigned __int8 v66; // dl
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned int v70; // edx
  char *v71; // rcx
  _QWORD *v72; // rdx
  PVOID *v73; // rax
  _QWORD *v74; // r14
  __int64 v75; // rax
  __int64 v76; // rcx
  unsigned __int64 v77; // rax
  _QWORD *v78; // rbx
  __int64 v80; // [rsp+30h] [rbp-A9h]
  _QWORD *v81; // [rsp+38h] [rbp-A1h]
  int v82; // [rsp+40h] [rbp-99h]
  unsigned int v83; // [rsp+44h] [rbp-95h]
  int v84; // [rsp+48h] [rbp-91h]
  __int64 v85; // [rsp+50h] [rbp-89h]
  __int64 v86; // [rsp+58h] [rbp-81h]
  __int64 v87; // [rsp+60h] [rbp-79h] BYREF
  int v88; // [rsp+68h] [rbp-71h] BYREF
  BOOL v89; // [rsp+6Ch] [rbp-6Dh]
  unsigned int v90; // [rsp+70h] [rbp-69h]
  _BYTE *v91; // [rsp+78h] [rbp-61h]
  unsigned int v92; // [rsp+80h] [rbp-59h]
  __int64 v93; // [rsp+88h] [rbp-51h]
  _QWORD *v94; // [rsp+90h] [rbp-49h]
  _QWORD *v95; // [rsp+98h] [rbp-41h]
  __int64 v96; // [rsp+A0h] [rbp-39h] BYREF
  int *v97; // [rsp+A8h] [rbp-31h]
  unsigned __int64 v98; // [rsp+B0h] [rbp-29h]
  void *Src; // [rsp+B8h] [rbp-21h]
  unsigned __int64 v100; // [rsp+C0h] [rbp-19h]
  __int64 v101; // [rsp+C8h] [rbp-11h] BYREF
  __int64 *v102; // [rsp+D0h] [rbp-9h]
  PVOID P; // [rsp+D8h] [rbp-1h]
  _WORD *v104; // [rsp+E0h] [rbp+7h] BYREF
  __int16 v105; // [rsp+E8h] [rbp+Fh]
  unsigned __int16 v106; // [rsp+EAh] [rbp+11h]
  void *retaddr; // [rsp+138h] [rbp+5Fh]
  unsigned __int8 v110; // [rsp+150h] [rbp+77h] BYREF
  int v111; // [rsp+158h] [rbp+7Fh]

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 48);
  v4 = 0LL;
  v90 = *(_DWORD *)(a1 + 52);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 8);
  v83 = v3;
  v95 = 0LL;
  v7 = 0LL;
  v97 = MiPartitionIdToPointer(*(_WORD *)(v6 + 60) & 0x3FF);
  v8 = 0LL;
  v80 = 0LL;
  v92 = *(_DWORD *)(v2 + 56) + 1;
  v86 = 0LL;
  v110 = 17;
  IoPriorityThread = PsGetIoPriorityThread(KeGetCurrentThread(), v9, v10);
  v13 = *(_DWORD *)(v12 + 56);
  v14 = *(_QWORD **)(v2 + 88);
  v102 = (__int64 *)(v2 + 88);
  v81 = v14;
  v85 = 0LL;
  v89 = IoPriorityThread < 2;
  v82 = v3 & 7 | 0x18;
  MiInitializePageColorBase(v15 + 1280, (v13 >> 20) & 0x3F, &v104);
  if ( v14 != v16 )
  {
    v17 = v3 & 7 | 0x18;
    while ( 1 )
    {
      P = v14;
      if ( v89 )
      {
        *((_BYTE *)v14 + 189) |= 0x40u;
      }
      else if ( (*(_DWORD *)(v2 + 72) & 1) != 0 )
      {
        *((_BYTE *)v14 + 189) |= 0x10u;
      }
      v18 = (_QWORD *)v14[29];
      v91 = v18;
      v14[29] = *v18 & 0xFFFFFFFFFFFFFFFCuLL;
      v100 = *v18 & 0xFFFFFFFFFFFFFFFCuLL;
      v98 = v14[24] + 8LL;
      Src = (void *)v14[31];
      v19 = (char *)Src + 48;
      v20 = 0;
      v21 = (((*((_DWORD *)Src + 8) + *((_DWORD *)Src + 11)) & 0xFFF)
           + (unsigned __int64)*((unsigned int *)Src + 10)
           + 4095) >> 12;
      if ( v21 )
      {
        do
        {
          ++v20;
          *v19++ = qword_1403276D8;
        }
        while ( v20 < v21 );
      }
      v84 = 0;
      if ( !v4 )
      {
        v85 = MiGetInPageSupportBlock(0LL);
        v4 = (char *)v85;
        if ( v85 )
        {
          v22 = v90;
          *(_QWORD *)(v85 + 240) = 0LL;
          MiSetInPagePriority(v85, v22, v83);
        }
      }
      if ( (unsigned __int64)v18 >= v98 )
        goto LABEL_94;
      while ( 2 )
      {
        v23 = *v18 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v7 )
        {
          if ( v8 == ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
            goto LABEL_19;
          MiUnlockProtoPoolPage(v7, v110);
        }
        v86 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v80 = MiLockProtoPoolPage(v23, &v110);
        v7 = v80;
        if ( !v80 )
        {
          do
          {
            MmAccessFault(2uLL, v23, 0, 0LL);
            v24 = MiLockProtoPoolPage(v23, &v110);
            v80 = v24;
          }
          while ( !v24 );
          v17 = v82;
          v7 = v24;
          v2 = a1;
        }
        while ( 1 )
        {
LABEL_19:
          while ( 1 )
          {
            v25 = MI_READ_PTE_LOCK_FREE(v23);
            v96 = v25;
            v26 = v25;
            if ( (v25 & 1) == 0 )
              break;
            v27 = MI_GET_PAGE_FRAME_FROM_PTE(&v96);
LABEL_25:
            if ( MiIsPfnInline(v27) )
            {
              v29 = 48 * v28 - 0x58000000000LL;
              MiLockPageAtDpcInline(v29);
              if ( MI_READ_PTE_LOCK_FREE(v23) == v26 )
                goto LABEL_30;
              _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
          }
          if ( (v25 & 0x400) != 0 || (v25 & 0x800) == 0 )
            break;
          if ( (unsigned int)MiInvalidPteConforms(v25) )
          {
            v27 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v96);
            goto LABEL_25;
          }
        }
        v29 = 0LL;
LABEL_30:
        v30 = MI_READ_PTE_LOCK_FREE(v23);
        v101 = v30;
        v34 = v30;
        if ( v29 )
        {
          MiUpdatePfnPriority(v29);
          _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_88;
        }
        if ( (v30 & 0x400) != 0 )
        {
          v35 = 1;
          goto LABEL_37;
        }
        if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v30, v31, v32, v33) || !v4 )
          goto LABEL_88;
        v35 = 2;
LABEL_37:
        v36 = *(_QWORD **)(v2 + 40);
        v111 = v33;
        v94 = v36;
        if ( v36 )
        {
          v37 = a1;
          *(_QWORD *)(a1 + 40) = *v36;
          v87 = (__int64)(v36 + 0xB000000000LL) / 48;
          goto LABEL_48;
        }
        v38 = v97;
        if ( MiPrefetchNormally((__int64)v97, v92) )
        {
          if ( !a2 )
            goto LABEL_43;
          if ( *a2 )
          {
            --*a2;
LABEL_43:
            if ( (unsigned int)MiObtainFaultCharges(v38, 1u, 1) )
            {
              v39 = v104;
              v40 = 194;
              ++*v104;
              if ( (*v91 & 1) == 0 )
                v40 = 128;
              Page = MiGetPage((__int64)v38, v106 | (unsigned int)(unsigned __int16)(v105 & *v39), v40);
              v87 = Page;
              if ( Page != -1 )
              {
                v36 = (_QWORD *)(48 * Page - 0x58000000000LL);
                v37 = a1;
                v94 = v36;
LABEL_48:
                v42 = 1LL;
                if ( (*v91 & 1) != 0 )
                {
                  if ( (unsigned int)MiPfnZeroingNeeded(v36, 1LL) )
                    v43 = v42;
                  v111 = v43;
                }
                if ( v35 != 1 )
                {
                  v54 = v97;
                  MiReturnCommit((__int64)v97, v42);
                  MiInitializeReadInProgressPfn(-1, (unsigned int)&v87, 1, v23, (__int64)(v4 + 32), v17);
                  PagingFileOffset = MiGetPagingFileOffset((__int64)&v101);
                  v56 = PagingFileOffset;
                  LODWORD(v93) = PagingFileOffset;
                  IsPteInStore = MiIsPteInStore(v54, v34);
                  v51 = v89;
                  v60 = IsPteInStore;
                  v61 = *(_QWORD *)&v54[2 * v59 + 1576];
                  v62 = (unsigned int)v59;
                  *(_QWORD *)(v85 + 248) = v85 + 256;
                  if ( v51 )
                    *(_BYTE *)(v85 + 189) |= 0x40u;
                  v63 = v87;
                  *(_QWORD *)(v85 + 256) = 0LL;
                  *(_QWORD *)(v85 + 288) = 0LL;
                  *(_DWORD *)(v85 + 264) = 56;
                  *(_QWORD *)(v85 + 296) = 4096LL;
                  *(_WORD *)(v85 + 266) |= 0x4042u;
                  *(_QWORD *)(v85 + 304) = v63;
                  MiObtainProtoReference(v80, 0LL, v58, v59);
                  v64 = v102;
                  *(_QWORD *)(v85 + 160) = v80;
                  v65 = *v64;
                  if ( *(__int64 **)(*v64 + 8) != v64 )
                    __fastfail(3u);
                  *(_QWORD *)v85 = v65;
                  *(_QWORD *)(v85 + 8) = v64;
                  *(_QWORD *)(v65 + 8) = v85;
                  *v64 = v85;
                  v66 = v110;
                  ++*(_DWORD *)(a1 + 76);
                  MiUnlockProtoPoolPage(v80, v66);
                  v80 = 0LL;
                  if ( v111 == 1 )
                    MiZeroPhysicalPage(v63);
                  *(_QWORD *)(v85 + 216) = 0LL;
                  if ( v60 )
                  {
                    v67 = (v62 << 60) | v56 & 0xFFFFFFFFFFFFFFFLL;
                    *(_BYTE *)(v85 + 189) |= 0x80u;
                  }
                  else
                  {
                    v67 = (unsigned __int64)(unsigned int)v93 << 12;
                    v93 = v67;
                  }
                  *(_QWORD *)(v85 + 96) = v67;
                  v68 = *(_QWORD *)(v61 + 56);
                  *(_BYTE *)(v85 + 191) |= 0x10u;
                  *(_QWORD *)(v85 + 192) = v68;
                  *(_QWORD *)(v85 + 240) = v94;
                  *(_QWORD *)(v85 + 232) = v23;
                  v69 = MiGetInPageSupportBlock(0LL);
                  v85 = v69;
                  v4 = (char *)v69;
                  if ( v69 )
                  {
                    v70 = v90;
                    *(_QWORD *)(v69 + 240) = 0LL;
                    MiSetInPagePriority(v69, v70, v83);
                  }
                  v2 = a1;
                  v7 = 0LL;
LABEL_88:
                  v14 = v81;
                  goto LABEL_89;
                }
                if ( !v81[30] )
                  v81[30] = v36;
                ++v84;
                MiInitializeReadInProgressPfn(-1, (unsigned int)&v87, v42, v23, (__int64)(v81 + 4), v17);
                PrototypePteDirect = MiGetPrototypePteDirect(v34);
                v47 = *(_QWORD *)(v37 + 8);
                v48 = PrototypePteDirect;
                if ( (*(_DWORD *)(v47 + 56) & 0x20) != 0 || !*(_QWORD *)(v47 + 64) )
                  v48 = 0LL;
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
                {
                  ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v47 + 72, CurrentIrql);
                }
                else
                {
                  v88 = 0;
                  if ( _interlockedbittestandset((volatile signed __int32 *)(v47 + 72), 0x1Fu) )
                    v88 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v47 + 72), CurrentIrql);
                  v50 = *(_DWORD *)(v47 + 72);
                  while ( (v50 & 0xBFFFFFFF) != 0x80000000 )
                  {
                    if ( (v50 & 0x40000000) == 0 )
                    {
                      v52 = _InterlockedCompareExchange((volatile signed __int32 *)(v47 + 72), v50 | 0x40000000, v50);
                      v51 = v50 == v52;
                      v50 = v52;
                      if ( !v51 )
                        continue;
                    }
                    KeYieldProcessorEx(&v88);
                    v50 = *(_DWORD *)(v47 + 72);
                  }
                }
                ++*(_QWORD *)(v47 + 32);
                if ( v48 )
                  ++*(_DWORD *)(v48 + 104);
                if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                  ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v47 + 72, retaddr);
                else
                  *(_DWORD *)(v47 + 72) = 0;
                __writecr8(CurrentIrql);
                v53 = v87;
                *((_QWORD *)Src + ((__int64)(v23 - v100) >> 3) + 6) = v87;
                v14 = v81;
                if ( !v81[20] )
                {
                  MiObtainProtoReference(v80, 0LL, v45, v46);
                  v81[20] = v80;
                }
                if ( v111 == 1 )
                {
                  MiUnlockProtoPoolPage(v80, v110);
                  v7 = 0LL;
                  v80 = 0LL;
                  MiZeroPhysicalPage(v53);
                  v4 = (char *)v85;
                }
                else
                {
                  v4 = (char *)v85;
                  v7 = v80;
                }
                v2 = a1;
LABEL_89:
                v8 = v86;
                v18 = v91 + 8;
                v91 = v18;
                if ( (unsigned __int64)v18 >= v98 )
                  goto LABEL_94;
                continue;
              }
              MiReturnFaultCharges((__int64)v38, 1uLL, 1);
            }
          }
        }
        break;
      }
      v8 = v86;
      v14 = v81;
LABEL_94:
      if ( v7 )
      {
        MiUnlockProtoPoolPage(v7, v110);
        v7 = 0LL;
        v80 = 0LL;
      }
      if ( v84 )
      {
        v74 = Src;
        v75 = MiReduceMdl((__int64)Src);
        if ( v75 )
        {
          v14[12] += v75 << 12;
          v76 = 48LL * v74[6] - 0x58000000000LL;
          v77 = *(_QWORD *)(v76 + 8) | 0x8000000000000000uLL;
          v14[30] = v76;
          v14[29] = v77;
        }
        if ( v74 != v14 + 32 && *((_DWORD *)v74 + 10) <= 0x10000u )
        {
          memmove(v14 + 32, v74, *((__int16 *)v74 + 4));
          *v74 = v95;
          v14[31] = v14 + 32;
          v95 = v74;
        }
        v14 = (_QWORD *)*v14;
        v2 = a1;
        v81 = v14;
      }
      else
      {
        v71 = (char *)P;
        v14 = (_QWORD *)*v14;
        v81 = v14;
        v72 = *(_QWORD **)P;
        v73 = (PVOID *)*((_QWORD *)P + 1);
        if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || *v73 != P )
          __fastfail(3u);
        v2 = a1;
        *v73 = v72;
        v72[1] = v73;
        --*(_DWORD *)(a1 + 76);
        MiFreeInPageSupportBlock(v71);
      }
      if ( v14 == (_QWORD *)(v2 + 88) )
      {
        v5 = v95;
        break;
      }
    }
  }
  MiFreeReadListPages(v2);
  if ( v5 )
  {
    do
    {
      v78 = (_QWORD *)*v5;
      ExFreePoolWithTag(v5, 0);
      v5 = v78;
    }
    while ( v78 );
  }
  if ( v4 )
    MiFreeInPageSupportBlock(v4);
  return 0LL;
}
