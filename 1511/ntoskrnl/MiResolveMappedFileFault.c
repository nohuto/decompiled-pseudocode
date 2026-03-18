/*
 * XREFs of MiResolveMappedFileFault @ 0x1400AA7A0
 * Callers:
 *     MiResolveProtoPteFault @ 0x1400517B0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 * Callees:
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     MiGetSubsectionDriverProtos @ 0x1400390D8 (MiGetSubsectionDriverProtos.c)
 *     MiGetSessionIdForVa @ 0x140039DB4 (MiGetSessionIdForVa.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiSanitizePfnProtection @ 0x14005F5D0 (MiSanitizePfnProtection.c)
 *     MiObtainFaultCharges @ 0x1400634F0 (MiObtainFaultCharges.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiComputeFaultNode @ 0x1400707F0 (MiComputeFaultNode.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14007CA30 (MiGetAvailablePagesBelowPriority.c)
 *     MiSubsectionUsingExtents @ 0x1400A8E40 (MiSubsectionUsingExtents.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiAllocateInPageSupport @ 0x1400AAD60 (MiAllocateInPageSupport.c)
 *     MiFinishMdlForMappedFileFault @ 0x1400AB060 (MiFinishMdlForMappedFileFault.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400AB410 (MiBuildMdlForMappedFileFault.c)
 *     MiPickClusterForMappedFileFault @ 0x1400AB910 (MiPickClusterForMappedFileFault.c)
 *     MiComputeFaultCluster @ 0x1400AD64C (MiComputeFaultCluster.c)
 *     KeInvalidAccessAllowed @ 0x1400E5FF0 (KeInvalidAccessAllowed.c)
 *     MiReturnFaultCharges @ 0x1400F2600 (MiReturnFaultCharges.c)
 *     MiFreeInPageSupportBlock @ 0x1400FDE30 (MiFreeInPageSupportBlock.c)
 *     MiSetInPagePrefetchPriority @ 0x1400FE6DC (MiSetInPagePrefetchPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSharedProtos @ 0x1401E2F60 (MiGetSharedProtos.c)
 */

__int64 MiResolveMappedFileFault(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, ...)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // r15
  int v11; // edx
  __int16 v12; // ax
  unsigned int v13; // r8d
  unsigned __int64 v14; // r10
  int v15; // eax
  _BYTE *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rdi
  int v19; // ecx
  __int64 Page; // r12
  __int64 v21; // r15
  int v22; // esi
  int v23; // r9d
  int v24; // eax
  __int64 v25; // rbx
  int *v26; // r13
  int v27; // ecx
  int v28; // r14d
  int v29; // eax
  int v30; // ebx
  __int64 SharedProtos; // rax
  _WORD *v33; // rax
  int v34; // esi
  unsigned int v35; // edx
  int *v36; // rsi
  __int64 v37; // r9
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r10
  __int64 v40; // rdi
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  unsigned __int64 Address; // rax
  unsigned int v44; // r9d
  unsigned int v45; // ebx
  unsigned int v46; // [rsp+50h] [rbp-49h]
  int v47; // [rsp+50h] [rbp-49h]
  char v48; // [rsp+54h] [rbp-45h]
  int v49; // [rsp+58h] [rbp-41h] BYREF
  int SessionIdForVa; // [rsp+5Ch] [rbp-3Dh]
  unsigned __int64 v51; // [rsp+60h] [rbp-39h]
  __int64 v52; // [rsp+68h] [rbp-31h]
  int v53; // [rsp+70h] [rbp-29h]
  int *v54; // [rsp+78h] [rbp-21h]
  __int64 v55; // [rsp+80h] [rbp-19h]
  unsigned __int64 v56; // [rsp+88h] [rbp-11h] BYREF
  _WORD *v57; // [rsp+90h] [rbp-9h] BYREF
  __int16 v58; // [rsp+98h] [rbp-1h]
  unsigned __int16 v59; // [rsp+9Ah] [rbp+1h]
  __int64 v60; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v61; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v64; // [rsp+108h] [rbp+6Fh] BYREF
  va_list va; // [rsp+108h] [rbp+6Fh]
  __int64 v66; // [rsp+110h] [rbp+77h]
  __int64 *v67; // [rsp+118h] [rbp+7Fh]
  va_list va1; // [rsp+120h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v64 = va_arg(va1, _QWORD);
  v66 = va_arg(va1, _QWORD);
  v67 = va_arg(va1, __int64 *);
  v46 = 2;
  v4 = MI_READ_PTE_LOCK_FREE(a2);
  v51 = 0LL;
  if ( (BYTE4(KeGetCurrentThread()[1].Queue) & 4) != 0 )
  {
    MiUnlockProtoPoolPage(v64, 0x11u);
    return 3221225633LL;
  }
  v5 = v66;
  v6 = v66 & 1;
  if ( (v66 & 1) != 0 && *(_BYTE *)(v66 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    v51 = v66 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (*(_DWORD *)((v66 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x100) != 0 )
    {
      MiUnlockProtoPoolPage(v64, 0x11u);
      return 0LL;
    }
    v46 = 0;
  }
  else if ( (v66 & 1) != 0 && *(_BYTE *)(v66 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
  {
    v51 = v66 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v7 = (v4 >> 10) & 1;
  if ( ((v4 >> 10) & 1) != 0 )
  {
    v8 = v4;
    v55 = 0LL;
  }
  else
  {
    v55 = 48 * ((v4 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v8 = *(_QWORD *)(v55 + 16);
  }
  v9 = v8 >> 16;
  v10 = *(_QWORD *)v9;
  v11 = *(_DWORD *)(*(_QWORD *)v9 + 56LL);
  if ( (v11 & 0x10) != 0 )
  {
    MiUnlockProtoPoolPage(v64, 0x11u);
    return 3221225478LL;
  }
  v52 = *(_QWORD *)(v9 + 8);
  v12 = *(_WORD *)(v9 + 34);
  SessionIdForVa = -1;
  if ( (v11 & 0x4000000) != 0 && (v12 & 2) != 0 )
  {
    SessionIdForVa = MiGetSessionIdForVa(a1);
    v44 = SessionIdForVa;
    if ( a1 >= 0xFFFF800000000000uLL )
    {
      if ( v6 )
      {
        if ( *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 || *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
          goto LABEL_77;
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(v5) == 1 )
      {
        goto LABEL_77;
      }
    }
    SharedProtos = MiGetSharedProtos(v10, v44, v9);
    goto LABEL_74;
  }
  if ( a1 >= 0xFFFF800000000000uLL && (v11 & 0x20) != 0 )
  {
    SharedProtos = MiGetSubsectionDriverProtos((_QWORD *)v9);
    if ( SharedProtos )
LABEL_74:
      v52 = *(_QWORD *)(SharedProtos + 32);
  }
  if ( a2 >= v52 + 8 * (unsigned __int64)*(unsigned int *)(v9 + 44) )
    goto LABEL_77;
  v54 = MiPartitionIdToPointer(*(_WORD *)(v10 + 60) & 0x3FF);
  if ( (unsigned int)MiSubsectionUsingExtents((_BYTE *)v9) )
  {
    if ( (*(_DWORD *)(v10 + 56) & 0x20) == 0 )
    {
      v16 = (_BYTE *)v51;
      v17 = v13;
      v49 = 1;
      v48 = 1;
      v53 = v13;
      goto LABEL_15;
    }
LABEL_77:
    MiUnlockProtoPoolPage(v64, 0x11u);
    return 3221225477LL;
  }
  v48 = 0;
  v15 = MiComputeFaultNode(a3, v14, v10, v5, &v56);
  v16 = (_BYTE *)v51;
  v53 = v15;
  v49 = 0;
  if ( v51 )
  {
    Address = v56;
    if ( !v56 )
      Address = MiLocateAddress(a1);
    v49 = MiComputeFaultCluster(v54, v51, Address, 0LL);
  }
  else if ( (*(_DWORD *)(v10 + 56) & 0x20) == 0 && (v4 & 0x400) != 0 && *(_QWORD *)(a3 + 184) == 0xFFFFF58010804000uLL )
  {
    v38 = v56;
    v39 = a1;
    if ( !v56 )
      v38 = MiLocateAddress(a1);
    v40 = *(_QWORD *)(v38 + 120);
    if ( v40 >= 0 )
    {
      v41 = *(_QWORD *)(v38 + 120) & 0xFFFLL;
      if ( v41 >= 0x11 && (v39 & 0xFFFFFFFFFFFFF000uLL) == (((unsigned __int64)v40 >> 12) - 1 + v41) << 12 )
      {
        v42 = a2 + 8;
        if ( (((_DWORD)a2 + 8) & 0xFFF) != 0
          && v42 < v52 + 8 * (unsigned __int64)*(unsigned int *)(v9 + 44)
          && MI_READ_PTE_LOCK_FREE(v42) == v4 )
        {
          v49 = (v40 & 0xFFF) - 1;
        }
      }
    }
  }
  v17 = v46;
LABEL_15:
  v18 = MiAllocateInPageSupport(a2, v17, &v49, (__int64 *)va);
  if ( v18 )
  {
    if ( MI_READ_PTE_LOCK_FREE(a2) != v4
      || !v7 && ((*(_BYTE *)(v55 + 34) & 0x20) == 0 || (*(_BYTE *)(*(_QWORD *)v55 + 157LL) & 0x10) != 0) )
    {
      v45 = -1073740748;
      MiUnlockProtoPoolPage(v64, 0x11u);
      MiFreeInPageSupportBlock((PVOID)v18);
      goto LABEL_80;
    }
    if ( v48 == 1 )
    {
      MiUnlockProtoPoolPage(v64, 0x11u);
      *(_BYTE *)(v18 + 188) |= 2u;
      *(_BYTE *)(v18 + 191) &= ~2u;
      *(_DWORD *)(v18 + 296) = 0;
      *(_DWORD *)(v18 + 180) = 0;
      *(_QWORD *)(v18 + 160) = 0LL;
      *(_QWORD *)(v18 + 248) = 0LL;
      *(_QWORD *)(v18 + 200) = v9;
      *(_QWORD *)(v18 + 168) = v4;
      *(_QWORD *)(v18 + 224) = a2;
      goto LABEL_26;
    }
    if ( v16 && *v16 == 1 )
      MiSetInPagePrefetchPriority(v16, v18);
    v47 = MiSanitizePfnProtection(0LL, (*(unsigned __int16 *)(v9 + 32) >> 1) & 0x1F, (v4 >> 5) & 0x1F);
    MI_INITIALIZE_COLOR_BASE(a3, v53, (__int64)&v57);
    v19 = *(_DWORD *)(v10 + 56);
    Page = -1LL;
    v21 = v64;
    if ( (v19 & 0x20) != 0 && (v19 & 0x40000) == 0 )
    {
      if ( v7 )
      {
        if ( !dword_1402FF214 )
        {
          v33 = v57;
          ++*v57;
          v34 = v59 | (unsigned __int16)(v58 & *v33);
          if ( !v51
            || *(_BYTE *)v51 != 1
            || MiGetAvailablePagesBelowPriority(v54, ((*(_DWORD *)(v51 + 80) >> 3) & 7u) + 1) )
          {
            if ( (unsigned int)MiObtainFaultCharges(v54, 1u, 1) )
            {
              v35 = v34;
              v36 = v54;
              Page = MiGetPage((__int64)v54, v35, 0);
              if ( Page != -1 )
              {
                v22 = v66;
                v37 = v66;
                *(_QWORD *)(v18 + 216) = a1;
                if ( (unsigned int)MiCopyDataPageToImagePage(v18, (void **)v9, a2, v37, Page, v21) == 1 )
                  goto LABEL_26;
                goto LABEL_22;
              }
              MiReturnFaultCharges(v36, 1LL, 1LL);
            }
          }
        }
      }
    }
    v22 = v66;
LABEL_22:
    v23 = v52;
    *(_DWORD *)(v18 + 180) = v49;
    v24 = SessionIdForVa;
    *(_QWORD *)(v18 + 168) = v4;
    v25 = v51;
    *(_QWORD *)(v18 + 224) = a2;
    v26 = v54;
    v27 = (int)v54;
    *(_QWORD *)(v18 + 160) = v21;
    *(_QWORD *)(v18 + 200) = v9;
    v28 = MiPickClusterForMappedFileFault(v27, v18, v25, v23, v24, Page, (__int64)&v60, (__int64)&v61);
    v29 = MiBuildMdlForMappedFileFault(v18, v60, v61, (_DWORD)v26, v28, Page, v47, v25, (__int64)&v57);
    v30 = v29;
    if ( v29 != v28 )
      MiReturnFaultCharges(v26, (unsigned int)(v28 - v29), 1LL);
    if ( !v30 )
    {
      MiUnlockProtoPoolPage(v21, 0x11u);
      MiFreeInPageSupportBlock((PVOID)v18);
      return 3221225495LL;
    }
    MiFinishMdlForMappedFileFault(v18, v22, v30, v55, SessionIdForVa);
LABEL_26:
    *v67 = v18;
    return 3221435187LL;
  }
  v45 = -1073741670;
LABEL_80:
  if ( v16 )
    v16[1] = (v45 == -1073741670) + 1;
  return v45;
}
