/*
 * XREFs of MiResolveMappedFileFault @ 0x14005D550
 * Callers:
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiResolveProtoPteFault @ 0x1400C5730 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x140033DF0 (MiFreeInPageSupportBlock.c)
 *     MiFinishMdlForMappedFileFault @ 0x140036BC0 (MiFinishMdlForMappedFileFault.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140055320 (MiGetAvailablePagesBelowPriority.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiComputeFaultNode @ 0x140059AF0 (MiComputeFaultNode.c)
 *     MiSanitizePfnProtection @ 0x14005E6A0 (MiSanitizePfnProtection.c)
 *     MiAllocateInPageSupport @ 0x14005E9AC (MiAllocateInPageSupport.c)
 *     MiGetSessionIdForVa @ 0x14008861C (MiGetSessionIdForVa.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiObtainFaultCharges @ 0x14008F350 (MiObtainFaultCharges.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400DEFD0 (MiBuildMdlForMappedFileFault.c)
 *     MiComputeFaultCluster @ 0x1400DF61C (MiComputeFaultCluster.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MiPickClusterForMappedFileFault @ 0x140110FE0 (MiPickClusterForMappedFileFault.c)
 *     KeInvalidAccessAllowed @ 0x140111530 (KeInvalidAccessAllowed.c)
 *     MiSetInPagePrefetchPriority @ 0x14012B688 (MiSetInPagePrefetchPriority.c)
 *     MiReturnFaultCharges @ 0x14013019C (MiReturnFaultCharges.c)
 *     MiGetSharedProtos @ 0x14021C58C (MiGetSharedProtos.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiResolveFileOnlyFault @ 0x140230D4C (MiResolveFileOnlyFault.c)
 */

__int64 __fastcall MiResolveMappedFileFault(
        __int64 a1,
        unsigned __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 PteShadow; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 PrototypePteDirect; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r12
  int v21; // ecx
  __int64 SharedProtos; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // rbx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdi
  unsigned int v33; // ebx
  __int64 Address; // rax
  __int64 v35; // rax
  __int64 v36; // r9
  unsigned __int64 v37; // rcx
  __int64 *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r11
  __int64 v42; // r9
  __int64 v43; // r11
  __int64 Page; // r12
  int v45; // ecx
  _WORD *v46; // rax
  unsigned int v47; // r14d
  __int64 v48; // r14
  __int64 v49; // r14
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rbx
  int v53; // edx
  __int64 v54; // [rsp+28h] [rbp-A1h]
  unsigned int v55; // [rsp+50h] [rbp-79h]
  int v56; // [rsp+50h] [rbp-79h]
  unsigned int SessionIdForVa; // [rsp+54h] [rbp-75h]
  __int64 v58; // [rsp+58h] [rbp-71h]
  __int16 *v59; // [rsp+60h] [rbp-69h]
  __int64 v60; // [rsp+68h] [rbp-61h]
  __int64 v61; // [rsp+70h] [rbp-59h] BYREF
  __int64 v62; // [rsp+78h] [rbp-51h]
  int v63; // [rsp+80h] [rbp-49h]
  __int64 v64; // [rsp+88h] [rbp-41h]
  __int64 v65; // [rsp+90h] [rbp-39h] BYREF
  _WORD *v66; // [rsp+98h] [rbp-31h] BYREF
  __int16 v67; // [rsp+A0h] [rbp-29h]
  unsigned __int16 v68; // [rsp+A2h] [rbp-27h]
  __int64 v69; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v70[3]; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v72; // [rsp+118h] [rbp+4Fh]
  int v73; // [rsp+120h] [rbp+57h] BYREF
  __int64 v74; // [rsp+128h] [rbp+5Fh]

  v74 = a4;
  v72 = a2;
  PteShadow = *a3;
  v10 = a2;
  if ( (unsigned __int64)(a3 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(a3, *a3);
  v11 = 0LL;
  v61 = PteShadow;
  v55 = 2;
  if ( (BYTE4(KeGetCurrentThread()[1].Queue) & 4) != 0 )
  {
    LOBYTE(a2) = 17;
    MiUnlockProtoPoolPage(a6, a2);
    return 3221225633LL;
  }
  v13 = a7;
  v14 = a7 & 1;
  if ( (a7 & 1) != 0 && *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    v11 = a7 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (*(_DWORD *)((a7 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x100) != 0 )
    {
      LOBYTE(a2) = 17;
      MiUnlockProtoPoolPage(a6, a2);
      return 0LL;
    }
    v55 = 0;
  }
  else if ( (a7 & 1) != 0 && *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
  {
    v11 = a7 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  if ( (PteShadow & 0x400) != 0 )
  {
    PrototypePteDirect = MiGetPrototypePteDirect(PteShadow, a2, a3, a4);
    v64 = 0LL;
  }
  else
  {
    v64 = 48 * (((unsigned __int64)MiReverseSwizzleInvalidPte(PteShadow, a2, a3, a4) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v64 + 16), v64, v17, v18);
  }
  v19 = *(_QWORD *)PrototypePteDirect;
  v20 = PrototypePteDirect;
  v62 = PrototypePteDirect;
  v58 = v19;
  v21 = *(_DWORD *)(v19 + 56);
  if ( (v21 & 0x10) != 0 )
  {
    LOBYTE(v16) = 17;
    MiUnlockProtoPoolPage(a6, v16);
    return 3221225478LL;
  }
  SessionIdForVa = -1;
  if ( (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 && (v21 & 0x4000000) != 0 )
  {
    SessionIdForVa = MiGetSessionIdForVa(v10);
    if ( v10 >= 0xFFFF800000000000uLL )
    {
      if ( v14 )
      {
        if ( *(_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL) == 1 || *(_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
          goto LABEL_33;
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(v13) == 1 )
      {
LABEL_33:
        LOBYTE(v16) = 17;
        MiUnlockProtoPoolPage(a6, v16);
        return 3221225477LL;
      }
    }
    SharedProtos = MiGetSharedProtos(v58, SessionIdForVa, v20);
    v19 = v58;
    v23 = *(_QWORD *)(SharedProtos + 32);
  }
  else if ( (v21 & 0x20) != 0 && (v24 = *(_QWORD *)(PrototypePteDirect + 24)) != 0 && v10 >= 0xFFFF800000000000uLL )
  {
    v23 = *(_QWORD *)(v24 + 32);
  }
  else
  {
    v23 = *(_QWORD *)(v20 + 8);
  }
  v60 = v23;
  if ( (unsigned __int64)a3 >= v23 + 8 * (unsigned __int64)*(unsigned int *)(v20 + 44) )
    goto LABEL_33;
  v25 = 0;
  v59 = MiPartitionIdToPointer(*(_WORD *)(v19 + 60) & 0x3FF);
  if ( (*(_DWORD *)(v27 + 56) & 0x40000000) != 0 )
  {
    v28 = 0LL;
    v61 = 0LL;
    if ( v14 && *(_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      LOBYTE(v26) = 17;
      MiUnlockProtoPoolPage(a6, v26);
      *a8 = 0LL;
      return 0LL;
    }
    v29 = MiResolveFileOnlyFault(a3);
    v25 = v29;
    if ( v29 >= 0 )
    {
      v28 = *a3;
      if ( (unsigned __int64)(a3 + 0x12090482600LL) <= 0x7F8 )
        LODWORD(v28) = MiReadPteShadow(a3, *a3);
      goto LABEL_42;
    }
    if ( v29 != -1073532109 )
    {
LABEL_42:
      LOBYTE(v30) = 17;
      MiUnlockProtoPoolPage(a6, v30);
      if ( v25 >= 0 )
        v25 = MiCompleteProtoPteFault(v74, a5, v72, v28, a1, 0, v13);
      *a8 = 0LL;
      return (unsigned int)v25;
    }
    v27 = v58;
  }
  else
  {
    v28 = v61;
  }
  v63 = MiComputeFaultNode(v74, v72, v27, v13, &v65);
  v73 = 0;
  if ( v25 == -1073532109 )
  {
    v73 = 1;
  }
  else if ( v11 )
  {
    Address = v65;
    if ( !v65 )
      Address = MiLocateAddress(v72);
    v73 = MiComputeFaultCluster(v59, v11, Address, 0LL);
  }
  else if ( (v28 & 0x400) != 0 && (*(_DWORD *)(v58 + 56) & 0x20) == 0 && *(_QWORD *)(v74 + 184) == 0xFFFFF58010804000uLL )
  {
    v35 = v65;
    if ( !v65 )
      v35 = MiLocateAddress(v72);
    v36 = *(_QWORD *)(v35 + 120);
    if ( v36 >= 0 )
    {
      v37 = *(_QWORD *)(v35 + 120) & 0xFFFLL;
      if ( v37 >= 0x11 && (v72 & 0xFFFFFFFFFFFFF000uLL) == (((unsigned __int64)v36 >> 12) - 1 + v37) << 12 )
      {
        v38 = a3 + 1;
        if ( (((_DWORD)a3 + 8) & 0xFFF) != 0
          && (unsigned __int64)v38 < v60 + 8 * (unsigned __int64)*(unsigned int *)(v20 + 44) )
        {
          v39 = *v38;
          if ( (unsigned __int64)(a3 + 0x12090482601LL) <= 0x7F8 )
            v39 = MiReadPteShadow(v38, *v38);
          if ( v39 == v28 )
            v73 = (v36 & 0xFFF) - 1;
        }
      }
    }
  }
  v32 = MiAllocateInPageSupport(a3, v55, &v73, &a6);
  if ( v32 )
  {
    v40 = *a3;
    if ( (unsigned __int64)(a3 + 0x12090482600LL) <= 0x7F8 )
      v40 = MiReadPteShadow(a3, *a3);
    if ( v40 != v28
      || (v41 = (v28 >> 10) & 1, ((v28 >> 10) & 1) == 0)
      && ((*(_BYTE *)(v64 + 34) & 0x20) == 0 || (*(_BYTE *)(*(_QWORD *)v64 + 157LL) & 0x10) != 0) )
    {
      LOBYTE(v31) = 17;
      v33 = -1073740748;
      MiUnlockProtoPoolPage(a6, v31);
      MiFreeInPageSupportBlock((char *)v32);
      goto LABEL_76;
    }
    if ( v11 && *(_BYTE *)v11 == 1 )
      MiSetInPagePrefetchPriority(v11, v32);
    if ( v41 )
      LODWORD(v42) = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v61);
    else
      v42 = (v28 >> 5) & 0x1F;
    v56 = MiSanitizePfnProtection(0LL, (*(unsigned __int16 *)(v20 + 32) >> 1) & 0x1F, (unsigned int)v42);
    MI_INITIALIZE_COLOR_BASE(v74, v63, (__int64)&v66);
    Page = -1LL;
    v45 = *(_DWORD *)(v58 + 56);
    if ( (v45 & 0x20) != 0 && (v45 & 0x40000) == 0 )
    {
      if ( v43 )
      {
        if ( !dword_14034F6D4 )
        {
          v46 = v66;
          ++*v66;
          v47 = v68 | (unsigned __int16)(v67 & *v46);
          if ( !v11
            || *(_BYTE *)v11 != 1
            || MiGetAvailablePagesBelowPriority(v59, ((*(_DWORD *)(v11 + 80) >> 3) & 7u) + 1) )
          {
            if ( MiObtainFaultCharges(v59, 1LL, 1LL) )
            {
              Page = MiGetPage(v59, v47, 0LL);
              if ( Page != -1 )
              {
                v48 = a6;
                v53 = v62;
                v54 = a6;
                *(_QWORD *)(v32 + 216) = v72;
                if ( (unsigned int)MiCopyDataPageToImagePage(v32, v53, (_DWORD)a3, v13, Page, v54) == 1 )
                {
LABEL_103:
                  *a8 = v32;
                  return 3221435187LL;
                }
LABEL_96:
                *(_QWORD *)(v32 + 200) = v62;
                *(_DWORD *)(v32 + 180) = v73;
                *(_QWORD *)(v32 + 224) = a3;
                *(_QWORD *)(v32 + 160) = v48;
                *(_QWORD *)(v32 + 168) = v28;
                v49 = MiPickClusterForMappedFileFault(
                        (_DWORD)v59,
                        v32,
                        v11,
                        v60,
                        SessionIdForVa,
                        Page,
                        (__int64)&v69,
                        (__int64)v70);
                v50 = MiBuildMdlForMappedFileFault(v32, v69, v70[0], (_DWORD)v59, v49, Page, v56, v11, (__int64)&v66);
                v52 = v50;
                if ( v50 != v49 )
                  MiReturnFaultCharges(v59, v49 - v50, 1LL);
                if ( !v52 )
                {
                  LOBYTE(v51) = 17;
                  MiUnlockProtoPoolPage(a6, v51);
                  MiFreeInPageSupportBlock((char *)v32);
                  return 3221225495LL;
                }
                MiFinishMdlForMappedFileFault(v32, v13, v52, v64, SessionIdForVa);
                goto LABEL_103;
              }
              MiReturnFaultCharges(v59, 1LL, 1LL);
            }
          }
        }
      }
    }
    v48 = a6;
    goto LABEL_96;
  }
  v33 = -1073741670;
LABEL_76:
  if ( v11 )
    *(_BYTE *)(v11 + 1) = (v33 == -1073741670) + 1;
  return v33;
}
