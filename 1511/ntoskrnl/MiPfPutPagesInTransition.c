/*
 * XREFs of MiPfPutPagesInTransition @ 0x1400FCDE0
 * Callers:
 *     MiPrefetchControlArea @ 0x1404AF248 (MiPrefetchControlArea.c)
 *     MmPrefetchForCacheManager @ 0x1404D9A0C (MmPrefetchForCacheManager.c)
 *     MmPrefetchPagesEx @ 0x1404D9B80 (MmPrefetchPagesEx.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14001EDD8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x1400634F0 (MiObtainFaultCharges.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiGetInPageSupportBlock @ 0x140070DF4 (MiGetInPageSupportBlock.c)
 *     MiPrefetchNormally @ 0x14007C9E0 (MiPrefetchNormally.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiObtainProtoReference @ 0x1400AB334 (MiObtainProtoReference.c)
 *     MiUpdatePfnPriority @ 0x1400B9884 (MiUpdatePfnPriority.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     MiReturnFaultCharges @ 0x1400F2600 (MiReturnFaultCharges.c)
 *     MiInitializeReadInProgressPfn @ 0x1400FD7D0 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x1400FDCA8 (MiReduceMdl.c)
 *     MiFreeInPageSupportBlock @ 0x1400FDE30 (MiFreeInPageSupportBlock.c)
 *     MiSetInPagePriority @ 0x1400FDEE4 (MiSetInPagePriority.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 *     MI_IS_PTE_IN_STORE_EX @ 0x140123ABC (MI_IS_PTE_IN_STORE_EX.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiFreeReadListPages @ 0x14047B620 (MiFreeReadListPages.c)
 */

__int64 __fastcall MiPfPutPagesInTransition(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r13d
  char *v4; // r12
  _QWORD *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // r15
  int IoPriorityThread; // eax
  __int64 v10; // r8
  unsigned int v11; // edx
  _QWORD *v12; // r14
  __int64 v13; // r10
  _QWORD *v14; // r11
  int v15; // edi
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  unsigned int v18; // ecx
  unsigned __int64 v19; // r8
  int v20; // r13d
  __int64 v21; // rdx
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rsi
  int v29; // r13d
  unsigned __int64 v30; // rax
  __int64 v31; // r15
  int v32; // ebx
  _QWORD *v33; // rsi
  int *v34; // rsi
  _WORD *v35; // rax
  __int16 v36; // dx
  unsigned int v37; // edx
  unsigned int v38; // r8d
  __int64 Page; // rax
  __int64 v40; // r8
  __int64 v41; // r15
  __int64 v42; // rsi
  unsigned __int8 CurrentIrql; // r12
  bool v44; // zf
  unsigned __int32 v45; // eax
  __int64 v46; // rbx
  __int64 *v47; // r13
  __int64 v48; // rbx
  unsigned int v49; // eax
  __int64 v50; // r12
  int v51; // eax
  __int64 v52; // r8
  int v53; // r15d
  __int64 v54; // r13
  __int64 v55; // r14
  __int64 v56; // rbx
  __int64 *v57; // rdx
  __int64 v58; // rax
  unsigned __int8 v59; // dl
  __int64 v60; // rax
  __int64 v61; // rax
  char *v62; // rax
  __int64 v63; // rdx
  PVOID v64; // rcx
  _QWORD *v65; // rdx
  PVOID *v66; // rax
  _QWORD *v67; // r13
  __int64 v68; // rax
  __int64 v69; // rcx
  unsigned __int64 v70; // rax
  _QWORD *v71; // rbx
  __int64 v73; // [rsp+30h] [rbp-A9h]
  _QWORD *v74; // [rsp+38h] [rbp-A1h]
  char *v75; // [rsp+40h] [rbp-99h]
  unsigned int v76; // [rsp+48h] [rbp-91h]
  _BYTE v77[12]; // [rsp+4Ch] [rbp-8Dh]
  __int64 v78; // [rsp+58h] [rbp-81h] BYREF
  unsigned int v79; // [rsp+60h] [rbp-79h]
  BOOL v80; // [rsp+64h] [rbp-75h]
  int v81; // [rsp+68h] [rbp-71h] BYREF
  int v82; // [rsp+6Ch] [rbp-6Dh]
  _BYTE *v83; // [rsp+70h] [rbp-69h]
  _QWORD *v84; // [rsp+78h] [rbp-61h]
  __int64 v85; // [rsp+80h] [rbp-59h]
  unsigned int v86; // [rsp+88h] [rbp-51h]
  __int64 *v87; // [rsp+90h] [rbp-49h]
  unsigned __int64 v88; // [rsp+98h] [rbp-41h]
  void *Src; // [rsp+A0h] [rbp-39h]
  unsigned __int64 v90; // [rsp+A8h] [rbp-31h] BYREF
  __int64 *v91; // [rsp+B0h] [rbp-29h]
  unsigned __int64 v92; // [rsp+B8h] [rbp-21h]
  unsigned __int64 v93; // [rsp+C0h] [rbp-19h] BYREF
  PVOID P; // [rsp+C8h] [rbp-11h]
  unsigned __int64 v95; // [rsp+D0h] [rbp-9h]
  _WORD *v96; // [rsp+D8h] [rbp-1h] BYREF
  __int16 v97; // [rsp+E0h] [rbp+7h]
  unsigned __int16 v98; // [rsp+E2h] [rbp+9h]
  void *retaddr; // [rsp+138h] [rbp+5Fh]
  unsigned __int8 v102; // [rsp+150h] [rbp+77h] BYREF
  int v103; // [rsp+158h] [rbp+7Fh]

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 48);
  v4 = 0LL;
  v79 = *(_DWORD *)(a1 + 52);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 8);
  v76 = v3;
  v84 = 0LL;
  v7 = 0LL;
  v87 = (__int64 *)MiPartitionIdToPointer(*(_WORD *)(v6 + 60) & 0x3FF);
  v8 = 0LL;
  v73 = 0LL;
  v86 = *(_DWORD *)(v2 + 56) + 1;
  *(_DWORD *)&v77[8] = 0;
  v102 = 17;
  IoPriorityThread = PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  v11 = *(_DWORD *)(v10 + 56);
  v12 = *(_QWORD **)(v2 + 88);
  v91 = (__int64 *)(v2 + 88);
  v74 = v12;
  v75 = 0LL;
  v80 = IoPriorityThread < 2;
  *(_QWORD *)v77 = v3 & 7 | 0x18;
  MI_INITIALIZE_COLOR_BASE(v13 + 1280, (v11 >> 20) & 0x3F, (__int64)&v96);
  if ( v12 != v14 )
  {
    v15 = v3 & 7 | 0x18;
    while ( 1 )
    {
      P = v12;
      if ( v80 )
      {
        *((_BYTE *)v12 + 189) |= 0x40u;
      }
      else if ( (*(_DWORD *)(v2 + 72) & 1) != 0 )
      {
        *((_BYTE *)v12 + 189) |= 0x10u;
      }
      v16 = (_QWORD *)v12[29];
      v83 = v16;
      v12[29] = *v16 & 0xFFFFFFFFFFFFFFFCuLL;
      v95 = *v16 & 0xFFFFFFFFFFFFFFFCuLL;
      v88 = v12[24] + 8LL;
      Src = (void *)v12[31];
      v17 = (__int64)Src + 48;
      v18 = 0;
      v19 = (((*((_DWORD *)Src + 8) + *((_DWORD *)Src + 11)) & 0xFFF)
           + (unsigned __int64)*((unsigned int *)Src + 10)
           + 4095) >> 12;
      if ( v19 )
      {
        do
        {
          ++v18;
          *(_QWORD *)v17 = qword_1402FF248;
          v17 += 8LL;
        }
        while ( v18 < v19 );
      }
      v103 = 0;
      v20 = 0;
      if ( !v4 )
      {
        v75 = (char *)MiGetInPageSupportBlock(0);
        v4 = v75;
        if ( v75 )
        {
          v21 = v79;
          *((_QWORD *)v75 + 30) = 0LL;
          MiSetInPagePriority(v75, v21, v76);
        }
      }
      if ( (unsigned __int64)v16 >= v88 )
        goto LABEL_94;
      while ( 2 )
      {
        v22 = *v16 & 0xFFFFFFFFFFFFFFFCuLL;
        v92 = v22;
        if ( v7 )
        {
          if ( v8 == ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
            goto LABEL_19;
          MiUnlockProtoPoolPage(v7, v102);
        }
        *(_QWORD *)&v77[4] = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v73 = MiLockProtoPoolPage(v22, &v102);
        if ( !v73 )
        {
          do
          {
            MmAccessFault(2uLL, v22, 0, 0LL);
            v73 = MiLockProtoPoolPage(v22, &v102);
          }
          while ( !v73 );
          v15 = *(_DWORD *)v77;
          v4 = v75;
        }
LABEL_19:
        while ( 1 )
        {
          v23 = MI_READ_PTE_LOCK_FREE(v22);
          v90 = v23;
          v24 = v23;
          if ( (v23 & 1) == 0 )
            break;
          v23 = MI_READ_PTE_LOCK_FREE(&v90);
LABEL_23:
          if ( MI_IS_PFN((v23 >> 12) & 0xFFFFFFFFFLL) )
          {
            v28 = 48 * v27 - 0x58000000000LL;
            MiLockPageAtDpcInline(v28, v25, v26);
            if ( MI_READ_PTE_LOCK_FREE(v22) == v24 )
            {
              v29 = 0;
              goto LABEL_28;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        if ( (v23 & 0x400) == 0 && (v23 & 0x800) != 0 )
          goto LABEL_23;
        v29 = 0;
        v28 = 0LL;
LABEL_28:
        v30 = MI_READ_PTE_LOCK_FREE(v22);
        v93 = v30;
        v31 = v30;
        if ( v28 )
        {
          MiUpdatePfnPriority(v28);
          _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_30;
        }
        if ( (v30 & 0x400) != 0 )
        {
          v32 = 1;
          goto LABEL_39;
        }
        if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v30) || !v4 )
        {
LABEL_30:
          v7 = v73;
          goto LABEL_31;
        }
        v32 = 2;
LABEL_39:
        v82 = 0;
        v33 = *(_QWORD **)(a1 + 40);
        if ( v33 )
        {
          *(_QWORD *)(a1 + 40) = *v33;
          v78 = (__int64)(v33 + 0xB000000000LL) / 48;
          goto LABEL_51;
        }
        v34 = (int *)v87;
        if ( !MiPrefetchNormally(v87, v86) )
          goto LABEL_92;
        if ( !a2 )
          goto LABEL_45;
        if ( !*a2 )
          goto LABEL_92;
        --*a2;
LABEL_45:
        if ( !(unsigned int)MiObtainFaultCharges(v34, 1u, 1) )
          goto LABEL_92;
        v35 = v96;
        v36 = v97;
        ++*v96;
        v37 = v98 | (unsigned __int16)(*v35 & v36);
        if ( (*v83 & 1) != 0 )
          v38 = 2;
        else
          v38 = 0;
        Page = MiGetPage((__int64)v34, v37, v38);
        v78 = Page;
        if ( Page != -1 )
        {
          v33 = (_QWORD *)(48 * Page - 0x58000000000LL);
LABEL_51:
          if ( (*v83 & 1) != 0 )
          {
            if ( v33[2] )
              v29 = 1;
            v82 = v29;
          }
          if ( v32 == 1 )
          {
            if ( !v74[30] )
              v74[30] = v33;
            ++v103;
            MiInitializeReadInProgressPfn(-1, (unsigned int)&v78, 1, v22, (__int64)(v74 + 4), v15);
            v41 = v31 >> 16;
            v42 = *(_QWORD *)(a1 + 8);
            if ( (*(_DWORD *)(v42 + 56) & 0x20) != 0 || !*(_QWORD *)(v42 + 64) )
              v41 = 0LL;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v42 + 72, CurrentIrql);
            }
            else
            {
              v81 = 0;
              if ( _interlockedbittestandset((volatile signed __int32 *)(v42 + 72), 0x1Fu) )
                v81 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v42 + 72), CurrentIrql, v40);
              v17 = *(unsigned int *)(v42 + 72);
              if ( (*(_DWORD *)(v42 + 72) & 0xBFFFFFFF) != 0x80000000 )
              {
                do
                {
                  if ( (v17 & 0x40000000) == 0 )
                  {
                    v45 = _InterlockedCompareExchange((volatile signed __int32 *)(v42 + 72), v17 | 0x40000000, v17);
                    v44 = (_DWORD)v17 == v45;
                    v17 = v45;
                    if ( !v44 )
                      continue;
                  }
                  KeYieldProcessorEx(&v81, v17, v40);
                  v17 = *(unsigned int *)(v42 + 72);
                }
                while ( (v17 & 0xBFFFFFFF) != 0x80000000 );
              }
            }
            ++*(_QWORD *)(v42 + 32);
            if ( v41 )
              ++*(_DWORD *)(v41 + 104);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v42 + 72, retaddr);
            else
              *(_DWORD *)(v42 + 72) = 0;
            __writecr8(CurrentIrql);
            v46 = v78;
            *((_QWORD *)Src + ((__int64)(v22 - v95) >> 3) + 6) = v78;
            v12 = v74;
            if ( !v74[20] )
            {
              MiObtainProtoReference(v73, 0LL, v40);
              v74[20] = v73;
            }
            if ( v29 == 1 )
            {
              MiUnlockProtoPoolPage(v73, v102);
              v73 = 0LL;
              v7 = 0LL;
              MiZeroPhysicalPage(v46, 1LL, *(unsigned __int8 *)(48 * v46 - 0x57FFFFFFFDELL) >> 6);
              v4 = v75;
            }
            else
            {
              v4 = v75;
              v7 = v73;
            }
LABEL_32:
            v8 = *(_QWORD *)&v77[4];
            v16 = v83 + 8;
            v83 = v16;
            if ( (unsigned __int64)v16 >= v88 )
              goto LABEL_93;
            continue;
          }
          v47 = v87;
          MiReturnCommit((__int64)v87, 1uLL);
          MiInitializeReadInProgressPfn(-1, (unsigned int)&v78, 1, v22, (__int64)(v4 + 32), v15);
          v48 = ((unsigned __int64)v31 >> 1) & 0xF;
          v49 = MI_GET_PAGING_FILE_OFFSET((__int64)&v93);
          v50 = v49;
          LODWORD(v85) = v49;
          v51 = MI_IS_PTE_IN_STORE_EX(v47, v31);
          v44 = v80;
          v53 = v51;
          v54 = v47[v48 + 716];
          v55 = (unsigned int)v48;
          *((_QWORD *)v75 + 31) = v75 + 256;
          if ( v44 )
            v75[189] |= 0x40u;
          v56 = v78;
          *((_QWORD *)v75 + 32) = 0LL;
          *((_QWORD *)v75 + 36) = 0LL;
          *((_DWORD *)v75 + 66) = 56;
          *((_QWORD *)v75 + 37) = 4096LL;
          *((_WORD *)v75 + 133) |= 0x4042u;
          *((_QWORD *)v75 + 38) = v56;
          MiObtainProtoReference(v73, 0LL, v52);
          v57 = v91;
          *((_QWORD *)v75 + 20) = v73;
          v58 = *v57;
          *(_QWORD *)v75 = *v57;
          *((_QWORD *)v75 + 1) = v57;
          if ( *(__int64 **)(v58 + 8) != v57 )
            __fastfail(3u);
          *(_QWORD *)(v58 + 8) = v75;
          *v57 = (__int64)v75;
          v59 = v102;
          ++*(_DWORD *)(a1 + 76);
          MiUnlockProtoPoolPage(v73, v59);
          v73 = 0LL;
          if ( v82 == 1 )
            MiZeroPhysicalPage(v56, 1LL, *(unsigned __int8 *)(48 * v56 - 0x57FFFFFFFDELL) >> 6);
          *((_QWORD *)v75 + 27) = 0LL;
          if ( v53 )
          {
            v60 = (v55 << 60) | v50 & 0xFFFFFFFFFFFFFFFLL;
            v75[189] |= 0x80u;
          }
          else
          {
            v60 = (unsigned __int64)(unsigned int)v85 << 12;
            v85 = v60;
          }
          *((_QWORD *)v75 + 12) = v60;
          v61 = *(_QWORD *)(v54 + 56);
          v75[191] |= 0x10u;
          *((_QWORD *)v75 + 24) = v61;
          *((_QWORD *)v75 + 29) = v92;
          *((_QWORD *)v75 + 30) = v33;
          v62 = (char *)MiGetInPageSupportBlock(0);
          v75 = v62;
          v4 = v62;
          if ( v62 )
          {
            v63 = v79;
            *((_QWORD *)v62 + 30) = 0LL;
            MiSetInPagePriority(v62, v63, v76);
          }
          v7 = 0LL;
LABEL_31:
          v12 = v74;
          goto LABEL_32;
        }
        break;
      }
      MiReturnFaultCharges((__int64)v34, 1uLL, 1);
LABEL_92:
      v8 = *(_QWORD *)&v77[4];
      v12 = v74;
      v7 = v73;
LABEL_93:
      v20 = v103;
LABEL_94:
      if ( v7 )
      {
        MiUnlockProtoPoolPage(v7, v102);
        v7 = 0LL;
        v73 = 0LL;
      }
      if ( v20 )
      {
        v67 = Src;
        v68 = MiReduceMdl(Src, v17);
        if ( v68 )
        {
          v12[12] += v68 << 12;
          v69 = 48LL * v67[6] - 0x58000000000LL;
          v70 = *(_QWORD *)(v69 + 8) | 0x8000000000000000uLL;
          v12[30] = v69;
          v12[29] = v70;
        }
        if ( v67 != v12 + 32 && *((_DWORD *)v67 + 10) <= 0x10000u )
        {
          memmove(v12 + 32, v67, *((__int16 *)v67 + 4));
          *v67 = v84;
          v12[31] = v12 + 32;
          v84 = v67;
        }
        v12 = (_QWORD *)*v12;
        v2 = a1;
        v74 = v12;
      }
      else
      {
        v64 = P;
        v12 = (_QWORD *)*v12;
        v74 = v12;
        v65 = *(_QWORD **)P;
        v66 = (PVOID *)*((_QWORD *)P + 1);
        if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || *v66 != P )
          __fastfail(3u);
        v2 = a1;
        *v66 = v65;
        v65[1] = v66;
        --*(_DWORD *)(a1 + 76);
        MiFreeInPageSupportBlock(v64);
      }
      if ( v12 == (_QWORD *)(v2 + 88) )
      {
        v5 = v84;
        break;
      }
    }
  }
  MiFreeReadListPages(v2);
  if ( v5 )
  {
    do
    {
      v71 = (_QWORD *)*v5;
      ExFreePoolWithTag(v5, 0);
      v5 = v71;
    }
    while ( v71 );
  }
  if ( v4 )
    MiFreeInPageSupportBlock(v4);
  return 0LL;
}
