/*
 * XREFs of MiResolveMappedFileFault @ 0x1400E4740
 * Callers:
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MiResolveProtoPteFault @ 0x140040EE0 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     MiFinishMdlForMappedFileFault @ 0x140022E20 (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MiGetSessionIdForVa @ 0x140024B24 (MiGetSessionIdForVa.c)
 *     MiGetSubsectionDriverProtos @ 0x140026854 (MiGetSubsectionDriverProtos.c)
 *     MiObtainFaultCharges @ 0x14002B0B0 (MiObtainFaultCharges.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiSetInPagePrefetchPriority @ 0x1400882A8 (MiSetInPagePrefetchPriority.c)
 *     MiPickClusterForMappedFileFault @ 0x140097090 (MiPickClusterForMappedFileFault.c)
 *     KeInvalidAccessAllowed @ 0x1400A39A4 (KeInvalidAccessAllowed.c)
 *     MiReturnFaultCharges @ 0x1400B0E08 (MiReturnFaultCharges.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400BD440 (MiBuildMdlForMappedFileFault.c)
 *     MiComputeFaultCluster @ 0x1400BD91C (MiComputeFaultCluster.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1400BE0E0 (MiGetAvailablePagesBelowPriority.c)
 *     MiFreeInPageSupportBlock @ 0x1400C4240 (MiFreeInPageSupportBlock.c)
 *     MiSanitizePfnProtection @ 0x1400DF630 (MiSanitizePfnProtection.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiComputeFaultNode @ 0x1400E3FD0 (MiComputeFaultNode.c)
 *     MiAllocateInPageSupport @ 0x1400E4E34 (MiAllocateInPageSupport.c)
 *     MiSubsectionUsingExtents @ 0x1400E5DB4 (MiSubsectionUsingExtents.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiGetSharedProtos @ 0x1401F4EB4 (MiGetSharedProtos.c)
 */

__int64 MiResolveMappedFileFault(unsigned __int64 a1, __int64 *a2, ...)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // r12
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // r15
  __int64 PrototypePteDirect; // rax
  unsigned __int64 v9; // r10
  __int64 v10; // r13
  __int64 v11; // r8
  __int64 v12; // r14
  int v13; // ecx
  bool v14; // zf
  unsigned __int64 v15; // r9
  unsigned int v16; // r9d
  __int64 SharedProtos; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // r10
  __int64 v21; // r11
  __int64 *v22; // r10
  __int64 v23; // rdx
  unsigned __int64 Address; // rax
  __int64 v25; // rdi
  unsigned int v26; // ebx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r10
  __int64 v29; // r9
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 *v32; // rcx
  __int16 v33; // r9
  __int64 v34; // r9
  __int64 Page; // r13
  int v36; // ecx
  _WORD *v37; // rax
  int v38; // r15d
  unsigned int v39; // edx
  int *v40; // r15
  __int64 v41; // r15
  unsigned __int64 v42; // r9
  unsigned int v43; // eax
  int *v44; // r15
  int *v45; // rcx
  int v46; // r14d
  unsigned int v47; // eax
  unsigned int v48; // ebx
  __int64 v49; // [rsp+28h] [rbp-91h]
  unsigned int v50; // [rsp+50h] [rbp-69h]
  unsigned int v51; // [rsp+50h] [rbp-69h]
  char v52; // [rsp+54h] [rbp-65h]
  int v53; // [rsp+58h] [rbp-61h] BYREF
  unsigned int SessionIdForVa; // [rsp+5Ch] [rbp-5Dh]
  int v55; // [rsp+60h] [rbp-59h]
  __int64 v56; // [rsp+68h] [rbp-51h]
  unsigned __int64 v57; // [rsp+70h] [rbp-49h]
  int *v58; // [rsp+78h] [rbp-41h]
  unsigned __int64 v59; // [rsp+80h] [rbp-39h] BYREF
  unsigned __int64 v60; // [rsp+88h] [rbp-31h] BYREF
  __int64 v61; // [rsp+90h] [rbp-29h]
  _WORD *v62; // [rsp+98h] [rbp-21h] BYREF
  __int16 v63; // [rsp+A0h] [rbp-19h]
  unsigned __int16 v64; // [rsp+A2h] [rbp-17h]
  unsigned __int64 v65; // [rsp+A8h] [rbp-11h] BYREF
  __int64 *v66; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v69; // [rsp+120h] [rbp+67h] BYREF
  va_list va; // [rsp+120h] [rbp+67h]
  __int64 v71; // [rsp+128h] [rbp+6Fh]
  __int64 v72; // [rsp+130h] [rbp+77h]
  __int64 *v73; // [rsp+138h] [rbp+7Fh]
  va_list va1; // [rsp+140h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v69 = va_arg(va1, _QWORD);
  v71 = va_arg(va1, _QWORD);
  v72 = va_arg(va1, _QWORD);
  v73 = va_arg(va1, __int64 *);
  v59 = MI_READ_PTE_LOCK_FREE(a2);
  v2 = 0LL;
  v50 = 2;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    MiUnlockProtoPoolPage(v69, 0x11u);
    return 3221225633LL;
  }
  v4 = v72;
  v5 = v72 & 1;
  if ( (v72 & 1) != 0 && *(_BYTE *)(v72 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    v2 = v72 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (*(_DWORD *)((v72 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x100) != 0 )
    {
      MiUnlockProtoPoolPage(v69, 0x11u);
      return 0LL;
    }
    v50 = 0;
  }
  else if ( (v72 & 1) != 0 && *(_BYTE *)(v72 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
  {
    v2 = v72 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v6 = v59;
  v7 = (v59 >> 10) & 1;
  if ( ((v59 >> 10) & 1) != 0 )
  {
    PrototypePteDirect = MiGetPrototypePteDirect(v59);
    v10 = 0LL;
    v61 = 0LL;
  }
  else
  {
    v10 = 48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v59) - 0x58000000000LL;
    v61 = v10;
    PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v10 + 16));
  }
  v11 = *(_QWORD *)PrototypePteDirect;
  v12 = PrototypePteDirect;
  v56 = v11;
  v13 = *(_DWORD *)(v11 + 56);
  if ( (v13 & 0x10) != 0 )
  {
    MiUnlockProtoPoolPage(v69, 0x11u);
    return 3221225478LL;
  }
  v14 = (*(_BYTE *)(PrototypePteDirect + 34) & 2) == 0;
  v15 = *(_QWORD *)(PrototypePteDirect + 8);
  v57 = v15;
  SessionIdForVa = -1;
  if ( !v14 && (v13 & 0x4000000) != 0 )
  {
    SessionIdForVa = MiGetSessionIdForVa(v9);
    v16 = SessionIdForVa;
    if ( a1 >= 0xFFFF800000000000uLL )
    {
      if ( v5 )
      {
        if ( *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 1 || *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
          goto LABEL_32;
      }
      else if ( KeInvalidAccessAllowed(v4) )
      {
LABEL_32:
        MiUnlockProtoPoolPage(v69, 0x11u);
        return 3221225477LL;
      }
    }
    SharedProtos = MiGetSharedProtos(v56, v16, v12);
    v11 = v56;
    goto LABEL_28;
  }
  if ( v9 >= 0xFFFF800000000000uLL && (v13 & 0x20) != 0 )
  {
    SharedProtos = MiGetSubsectionDriverProtos((_QWORD *)PrototypePteDirect);
    if ( SharedProtos )
    {
LABEL_28:
      v15 = *(_QWORD *)(SharedProtos + 32);
      v57 = v15;
    }
  }
  if ( (unsigned __int64)a2 >= v15 + 8LL * *(unsigned int *)(v12 + 44) )
    goto LABEL_32;
  v58 = MiPartitionIdToPointer(*(_WORD *)(v11 + 60) & 0x3FF);
  if ( !(unsigned int)MiSubsectionUsingExtents(v12, v18) )
  {
    v52 = 0;
    v55 = MiComputeFaultNode(v21, v20, v19, v4, &v60);
    v53 = 0;
    if ( v2 )
    {
      Address = v60;
      if ( !v60 )
        Address = MiLocateAddress(a1);
      v53 = MiComputeFaultCluster((__int64)v58, (_QWORD *)v2, Address, 0);
    }
    else if ( v7 && (*(_DWORD *)(v56 + 56) & 0x20) == 0 && (*(_BYTE *)(v71 + 184) & 7) == 0 )
    {
      v27 = v60;
      v28 = a1;
      if ( !v60 )
        v27 = MiLocateAddress(a1);
      v29 = *(_QWORD *)(v27 + 120);
      if ( v29 >= 0 )
      {
        v30 = *(_QWORD *)(v27 + 120) & 0xFFFLL;
        if ( v30 >= 0x11 )
        {
          v31 = v28;
          v22 = a2;
          if ( (v31 & 0xFFFFFFFFFFFFF000uLL) == (((unsigned __int64)v29 >> 12) - 1 + v30) << 12 )
          {
            v32 = a2 + 1;
            if ( (((_DWORD)a2 + 8) & 0xFFF) != 0
              && (unsigned __int64)v32 < v57 + 8LL * *(unsigned int *)(v12 + 44)
              && MI_READ_PTE_LOCK_FREE(v32) == v6 )
            {
              v53 = (v33 & 0xFFF) - 1;
            }
          }
          goto LABEL_39;
        }
      }
    }
    v22 = a2;
LABEL_39:
    v23 = v50;
    goto LABEL_40;
  }
  if ( (*(_DWORD *)(v19 + 56) & 0x20) != 0 )
    goto LABEL_32;
  v22 = a2;
  v23 = 0LL;
  v55 = 0;
  v53 = 1;
  v52 = 1;
LABEL_40:
  v25 = MiAllocateInPageSupport(v22, v23, &v53, (__int64 *)va);
  if ( v25 )
  {
    if ( MI_READ_PTE_LOCK_FREE(a2) != v6
      || !v7 && ((*(_BYTE *)(v10 + 34) & 0x20) == 0 || (*(_BYTE *)(*(_QWORD *)v10 + 157LL) & 0x10) != 0) )
    {
      v26 = -1073740748;
      MiUnlockProtoPoolPage(v69, 0x11u);
      MiFreeInPageSupportBlock((char *)v25);
      goto LABEL_59;
    }
    if ( v52 == 1 )
    {
      MiUnlockProtoPoolPage(v69, 0x11u);
      *(_BYTE *)(v25 + 188) |= 2u;
      *(_BYTE *)(v25 + 191) &= ~2u;
      *(_DWORD *)(v25 + 296) = 0;
      *(_DWORD *)(v25 + 180) = 0;
      *(_QWORD *)(v25 + 224) = a2;
      *(_QWORD *)(v25 + 160) = 0LL;
      *(_QWORD *)(v25 + 248) = 0LL;
      *(_QWORD *)(v25 + 200) = v12;
      *(_QWORD *)(v25 + 168) = v6;
LABEL_88:
      *v73 = v25;
      return 3221435187LL;
    }
    if ( v2 && *(_BYTE *)v2 == 1 )
      MiSetInPagePrefetchPriority(v2, v25);
    if ( v7 )
      LODWORD(v34) = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v59);
    else
      v34 = (v6 >> 5) & 0x1F;
    v51 = MiSanitizePfnProtection(0LL, (*(unsigned __int16 *)(v12 + 32) >> 1) & 0x1F, v34);
    MiInitializePageColorBase(v71, v55, (__int64)&v62);
    Page = -1LL;
    v36 = *(_DWORD *)(v56 + 56);
    if ( (v36 & 0x20) != 0 && (v36 & 0x40000) == 0 )
    {
      if ( v7 )
      {
        if ( !dword_1403276A4 )
        {
          v37 = v62;
          ++*v62;
          v38 = v64 | (unsigned __int16)(v63 & *v37);
          if ( !v2 || *(_BYTE *)v2 != 1 || MiGetAvailablePagesBelowPriority(v58, ((*(_DWORD *)(v2 + 80) >> 3) & 7u) + 1) )
          {
            if ( (unsigned int)MiObtainFaultCharges(v58, 1u, 1) )
            {
              v39 = v38;
              v40 = v58;
              Page = MiGetPage((__int64)v58, v39, 0);
              if ( Page != -1 )
              {
                v41 = v69;
                v49 = v69;
                *(_QWORD *)(v25 + 216) = a1;
                if ( (unsigned int)MiCopyDataPageToImagePage(v25, (void **)v12, a2, v4, Page, v49) == 1 )
                  goto LABEL_88;
LABEL_81:
                v42 = v57;
                *(_QWORD *)(v25 + 224) = a2;
                *(_DWORD *)(v25 + 180) = v53;
                v43 = SessionIdForVa;
                *(_QWORD *)(v25 + 160) = v41;
                v44 = v58;
                v45 = v58;
                *(_QWORD *)(v25 + 168) = v6;
                *(_QWORD *)(v25 + 200) = v12;
                v46 = MiPickClusterForMappedFileFault(
                        (__int64)v45,
                        v25,
                        v2,
                        v42,
                        v43,
                        Page,
                        (unsigned __int64 *)&v66,
                        &v65);
                v47 = MiBuildMdlForMappedFileFault(
                        (_QWORD *)v25,
                        v66,
                        v65,
                        (__int64)v44,
                        v46,
                        Page,
                        v51,
                        v2,
                        (__int64)&v62);
                v48 = v47;
                if ( v47 != v46 )
                  MiReturnFaultCharges((__int64)v44, v46 - v47, 1);
                if ( !v48 )
                {
                  MiUnlockProtoPoolPage(v69, 0x11u);
                  MiFreeInPageSupportBlock((char *)v25);
                  return 3221225495LL;
                }
                MiFinishMdlForMappedFileFault(v25, v4, v48, v61, SessionIdForVa);
                goto LABEL_88;
              }
              MiReturnFaultCharges((__int64)v40, 1uLL, 1);
            }
          }
        }
      }
    }
    v41 = v69;
    goto LABEL_81;
  }
  v26 = -1073741670;
LABEL_59:
  if ( v2 )
    *(_BYTE *)(v2 + 1) = (v26 == -1073741670) + 1;
  return v26;
}
