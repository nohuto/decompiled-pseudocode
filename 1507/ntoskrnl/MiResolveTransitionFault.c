/*
 * XREFs of MiResolveTransitionFault @ 0x1400B8D10
 * Callers:
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400C5730 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x140033DF0 (MiFreeInPageSupportBlock.c)
 *     MiObtainProtoReference @ 0x140036AF4 (MiObtainProtoReference.c)
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     MiCanPageMove @ 0x14005ABF0 (MiCanPageMove.c)
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007BC04 (MiWaitForCollidedFaultComplete.c)
 *     MiUpdatePfnPriority @ 0x140080A64 (MiUpdatePfnPriority.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     MiLockAndDecrementShareCount @ 0x1400EF4F4 (MiLockAndDecrementShareCount.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 *     MiDiscardTransitionPte @ 0x14014AE5C (MiDiscardTransitionPte.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiMakeImagePageOk @ 0x14021712C (MiMakeImagePageOk.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiMakeTransitionPteValid @ 0x140225E1C (MiMakeTransitionPteValid.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiResolveTransitionFault(
        _KPROCESS *Process,
        unsigned __int64 a2,
        ULONG_PTR a3,
        volatile signed __int32 *a4,
        unsigned __int8 a5,
        int a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 v8; // r14
  int v10; // edi
  __int64 v11; // rdx
  unsigned __int64 v12; // r12
  ULONG_PTR v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r10
  unsigned int v20; // edi
  ULONG_PTR BugCheckParameter4; // r15
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 PteShadow; // rax
  __int64 *v26; // r11
  unsigned __int64 v27; // r9
  unsigned __int64 *v28; // rcx
  unsigned __int64 v29; // rax
  _QWORD *v30; // rdx
  __int64 v31; // r12
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // r10
  __int64 v35; // rbx
  unsigned __int64 v36; // r10
  unsigned __int16 v37; // ax
  __int16 *v38; // r8
  char v39; // cl
  struct _KTHREAD *CurrentThread; // rdx
  __int64 result; // rax
  PVOID v42; // rcx
  char v43; // r9
  int v44; // ecx
  char v45; // di
  __int64 v46; // r8
  unsigned int v47; // edi
  unsigned int v48; // ebx
  char v49; // al
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int64 v53; // rdi
  unsigned __int64 v54; // rdx
  _BYTE *PrototypePteDirect; // rsi
  char v56; // r8
  unsigned __int64 v57; // r11
  __int64 v58; // r10
  __int64 v59; // rbx
  _QWORD *Address; // rax
  int v61; // edx
  ULONG_PTR v62; // rsi
  int ImagePageOk; // ebx
  __int64 v64; // rax
  char *v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rdi
  unsigned __int64 v68; // rbx
  char v69; // al
  __int64 v70; // rax
  unsigned __int64 v71; // rsi
  bool v72; // cc
  unsigned int v73; // ebx
  __int16 v74; // ax
  char v75; // cl
  __int64 v76; // r10
  __int16 v77; // ax
  __int64 v78; // rdx
  int v79; // edi
  unsigned __int64 v80; // r8
  unsigned __int64 v81; // r9
  __int64 v82; // rcx
  int v83; // edx
  unsigned __int16 v84; // cx
  __int16 *v85; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v87; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v89; // zf
  signed __int32 v90; // eax
  char *v91; // rbx
  unsigned __int64 v92; // rdx
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rax
  int v95; // [rsp+40h] [rbp-39h] BYREF
  int v96[2]; // [rsp+48h] [rbp-31h] BYREF
  PVOID P; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v98; // [rsp+58h] [rbp-21h]
  __int16 *v99; // [rsp+60h] [rbp-19h]
  __int64 v100; // [rsp+C0h] [rbp+47h]

  v100 = (__int64)Process;
  v8 = 0LL;
  if ( a8 )
    *a8 = 0LL;
  v10 = a6;
  v11 = 0x7FFFFFFFF8LL;
  if ( !a6 )
  {
    v12 = a3 + 0x90482413000LL;
    v98 = a3 + 0x90482413000LL;
    while ( 1 )
    {
      v13 = *(_QWORD *)a3;
      if ( v12 <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v11)
        && (v13 & 1) != 0
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        v11 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v11 )
        {
          v14 = *(_QWORD *)(v11 + 8 * ((a3 >> 3) & 0x1FF));
          if ( (v14 & 0x20) != 0 )
            v13 |= 0x20uLL;
          if ( (v14 & 0x42) != 0 )
            v13 |= 0x42uLL;
        }
      }
      if ( (v13 & 0x800) == 0 )
        return 3221226548LL;
      if ( (unsigned int)MiInvalidPteConforms(v13, v11) )
      {
        v17 = MiReverseSwizzleInvalidPte(Process, v11, v15, v16);
        if ( (unsigned int)MI_IS_PFN((v17 >> 12) & 0xFFFFFFFFFLL) )
        {
          v20 = 0;
          BugCheckParameter4 = 48 * v18 - v19;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter4 + 24), 0x3FuLL) )
          {
            Process = (_KPROCESS *)0x8000000000000000LL;
            do
            {
              if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              {
                _mm_pause();
              }
              else
              {
                HvlNotifyLongSpinWait(v20);
                Process = (_KPROCESS *)0x8000000000000000LL;
              }
            }
            while ( (*(_QWORD *)(BugCheckParameter4 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter4 + 24), 0x3FuLL) );
          }
          v11 = *(_QWORD *)a3;
          if ( v12 <= 0x7F8
            && (unsigned int)MiPteHasShadow(Process, v11)
            && (v11 & 1) != 0
            && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v22 = *(_QWORD *)&Process[2].ProcessLock;
            if ( v22 )
            {
              v23 = *(_QWORD *)(v22 + 8 * ((a3 >> 3) & 0x1FF));
              if ( (v23 & 0x20) != 0 )
                v11 |= 0x20uLL;
              if ( (v23 & 0x42) != 0 )
                v11 |= 0x42uLL;
            }
          }
          if ( v11 == v13 )
          {
            if ( (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) != a3 )
              KeBugCheckEx(0x1Au, 0x411uLL, a3, v13, *(_QWORD *)(BugCheckParameter4 + 8));
            v24 = 0LL;
            PteShadow = *(_QWORD *)a3;
            if ( v98 <= 0x7F8 )
              PteShadow = MiReadPteShadow(a3, *(_QWORD *)a3);
            v26 = a8;
            v10 = 0;
            *(_QWORD *)v96 = PteShadow;
            goto LABEL_49;
          }
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
  }
  v27 = 0x90482413000LL;
  v28 = (unsigned __int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v29 = *v28;
  v30 = v28 + 0x12090482600LL;
  if ( (unsigned __int64)(v28 + 0x12090482600LL) <= 0x7F8 )
    v29 = MiReadPteShadow(v28, *v28);
  *(_QWORD *)v96 = v29;
  if ( (unsigned __int64)&v96[v27 / 4] <= 0x7F8 )
    v29 = MiReadPteShadow(v96, v29);
  v98 = v27 + a3;
  v31 = 3 * ((v29 >> 12) & 0xFFFFFFFFFLL);
  v32 = *(_QWORD *)a3;
  v24 = 16 * v31 - 0x58000000000LL;
  if ( v27 + a3 <= 0x7F8 )
    v32 = MiReadPteShadow(a3, *(_QWORD *)a3);
  *(_QWORD *)v96 = v32;
  v33 = MiReverseSwizzleInvalidPte(v32, v30, a3, v27);
  BugCheckParameter4 = 48 * ((v33 >> 12) & 0xFFFFFFFFFLL) - v34;
LABEL_49:
  v35 = a7 & 1;
  if ( (a7 & 1) != 0 && *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiUpdatePfnPriority(BugCheckParameter4, *(_DWORD *)((a7 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7, 0);
LABEL_62:
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v24 )
      MiUnlockProtoPoolPage(v24, 0x11u);
    return (unsigned int)v8;
  }
  __incgsdword(0x2E18u);
  v36 = *(_QWORD *)(BugCheckParameter4 + 40);
  v37 = (HIDWORD(v36) >> 8) & 0x3FF;
  if ( v37 == 1023 )
    v38 = MiSystemPartition;
  else
    v38 = *(__int16 **)(qword_14034F0E8 + 8LL * v37);
  v39 = *(_BYTE *)(BugCheckParameter4 + 34);
  v99 = v38;
  if ( (v39 & 0x20) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (BYTE4(CurrentThread[1].Queue) & 4) != 0 )
    {
      LODWORD(v8) = -1073741663;
      goto LABEL_62;
    }
    if ( !v26 )
    {
      LODWORD(v8) = -1073740748;
      goto LABEL_62;
    }
    if ( (v39 & 8) != 0 )
    {
      LODWORD(v8) = -1073741801;
      goto LABEL_62;
    }
    v42 = (PVOID)(*(_QWORD *)BugCheckParameter4 - 32LL);
    P = v42;
    v43 = *((_BYTE *)v42 + 189);
    if ( (v43 & 0x40) != 0 )
    {
      if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) == 0
        && ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7u) >= 2
        || CurrentThread == KeGetCurrentThread() && HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
      {
        goto LABEL_77;
      }
      v42 = P;
    }
    if ( CurrentThread != *((struct _KTHREAD **)v42 + 19)
      && (CurrentThread->MiscFlags & 0x8000) == 0
      && (!LODWORD(CurrentThread->Process[2].ActiveProcessors.Bitmap[9]) || !*((_QWORD *)v42 + 31) && (v43 & 4) == 0) )
    {
      v44 = 0;
      goto LABEL_78;
    }
LABEL_77:
    v44 = 1;
LABEL_78:
    if ( (v36 & 0x200000000000000LL) != 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter4 + 16) & 0x400LL) != 0 )
      {
        v45 = a5;
        if ( (CurrentThread->WaitBlock[3].SpareLong || (CurrentThread->MiscFlags & 0x400) != 0 || a5 || v44 == 1)
          && (v43 & 0x10) == 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return MiResolveMappedFileFault(v100, a2, (__int64 *)a3, (__int64)a4, 0x11u, v24, 0LL, v26);
        }
        goto LABEL_92;
      }
      if ( !BYTE2(CurrentThread[1].Teb) && (v43 & 4) == 0 && v44 != 1 || (v43 & 0x10) != 0 )
      {
        v45 = a5;
LABEL_92:
        MiObtainProtoReference(v24, 1);
LABEL_98:
        v95 = 0;
        result = MiWaitForCollidedFaultComplete(BugCheckParameter4, v24, a2, a4, v45, 2u, &v95);
        v47 = result;
        if ( v95 == 1 )
          return result;
        if ( v24 )
        {
          v48 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v48 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v48);
            }
            while ( (*(_QWORD *)(v24 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
          }
          MiRemoveLockedPageChargeAndDecRef(v24);
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v35 = a7 & 1;
        }
        if ( v47 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v24 )
            MiUnlockProtoPoolPage(v24, 0x11u);
          return v47;
        }
        MiAddLockedPageCharge(BugCheckParameter4, 3LL, v46);
        v49 = *(_BYTE *)(BugCheckParameter4 + 34) & 0xF8 | 6;
        *(_QWORD *)(BugCheckParameter4 + 24) ^= (((*(_QWORD *)(BugCheckParameter4 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(BugCheckParameter4 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(BugCheckParameter4 + 34) = v49;
        MiRemoveLockedPageChargeAndDecRef(BugCheckParameter4);
        v53 = *(_QWORD *)v96;
        P = 0LL;
LABEL_162:
        if ( v35 && *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
        {
          v53 = v53 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
          *(_QWORD *)a3 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        }
        v67 = (v53 >> 5) & 0x1F;
        *(_QWORD *)v96 = MiMakeTransitionPteValid(a3, v50, v51, v52);
        v68 = *(_QWORD *)v96;
        if ( (_DWORD)v67 == 24 )
        {
          v69 = *(_BYTE *)(BugCheckParameter4 + 34) >> 6;
          if ( v69 != 1 )
          {
            if ( !v69 )
            {
              v68 = *(_QWORD *)v96 | 0x18LL;
LABEL_173:
              *(_QWORD *)v96 = v68;
              goto LABEL_174;
            }
            if ( v69 == 2 )
            {
              if ( byte_14034EBA8 == 1 )
                v68 = *(_QWORD *)v96 & 0xFFFFFFFFFFFFFFE7uLL | 8;
              else
                v68 = *(_QWORD *)v96 & 0xFFFFFFFFFFFFFFE7uLL | 0x10;
              goto LABEL_173;
            }
          }
        }
LABEL_174:
        v70 = *(_QWORD *)(BugCheckParameter4 + 16);
        v71 = 0LL;
        if ( (v70 & 0x400) == 0 && (v70 & 4) != 0 && (unsigned __int16)v70 >> 12 == *((_DWORD *)v99 + 261) )
          v71 = MiCaptureDirtyBitToPfn(BugCheckParameter4);
        if ( (v68 & 0x800) != 0 )
        {
          if ( (*(_BYTE *)(BugCheckParameter4 + 34) & 0x10) == 0 )
          {
            if ( !v100 )
              goto LABEL_187;
            if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x200000000000000LL) != 0 )
            {
LABEL_188:
              if ( (_DWORD)v67 == 24 )
              {
                v68 = ~qword_1403D0220 & (v68 | 0x8000000000000000uLL);
                *(_QWORD *)v96 = v68;
              }
              v72 = v98 <= 0x7F8;
              *(_QWORD *)a3 = v68;
              if ( v72 )
                MiWritePteShadow(a3, v68);
LABEL_192:
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( !v24 )
                goto LABEL_244;
              v73 = 0;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v73 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v73);
                }
                while ( (*(_QWORD *)(v24 + 24) & 0x8000000000000000uLL) != 0
                     || _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
              }
              v74 = *(_WORD *)(v24 + 32);
              v75 = *(_BYTE *)(v24 + 34) & 0xDF;
              *(_BYTE *)(v24 + 34) = v75;
              if ( !v74 )
                KeBugCheckEx(0x4Eu, 0x9AuLL, (v24 + 0x58000000000LL) / 48, v75 & 7, 0LL);
              v76 = *(_QWORD *)(v24 + 24);
              v77 = v74 - 1;
              *(_WORD *)(v24 + 32) = v77;
              v78 = v76 & 0x3FFFFFFFFFFFFFFFLL;
              if ( !v77 )
              {
                v79 = 1;
LABEL_210:
                v80 = *(_QWORD *)(v24 + 8) | 0x8000000000000000uLL;
                v81 = (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                if ( (v80 > v81 || v80 < 0xFFFFF68000000000uLL) && ((*(unsigned __int8 *)(v24 + 35) >> 5) & 1) != 0 )
                {
                  *(_BYTE *)(v24 + 35) &= ~0x20u;
                  goto LABEL_241;
                }
                v82 = *(_QWORD *)(v24 + 40);
                v83 = 0;
                if ( (v82 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v24 + 16) & 0x400LL) != 0 )
                {
                  v83 = 1;
                }
                else if ( v80 <= v81 && v80 >= 0xFFFFF68000000000uLL && ((*(unsigned __int8 *)(v24 + 35) >> 5) & 1) != 0 )
                {
                  v83 = 1;
                }
                else if ( v79 == 1 && (v76 & 0x4000000000000000LL) != 0 )
                {
                  v83 = 1;
                }
                v84 = (HIDWORD(v82) >> 8) & 0x3FF;
                if ( v84 == 1023 )
                  v85 = MiSystemPartition;
                else
                  v85 = *(__int16 **)(qword_14034F0E8 + 8LL * v84);
                if ( v83 == 1 )
                  MiReturnCommit((__int64)v85, 1LL);
                if ( v85 != MiSystemPartition )
                {
                  _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 696, 1uLL);
LABEL_241:
                  if ( v79 )
                    MiPfnReferenceCountIsZero(v24, (v24 + 0x58000000000LL) / 48);
                  goto LABEL_243;
                }
                CurrentPrcb = KeGetCurrentPrcb();
                v87 = 1LL;
                CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
                if ( (_DWORD)CachedResidentAvailable != -1 )
                {
                  if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
                  {
                    do
                    {
                      v90 = _InterlockedCompareExchange(
                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                              CachedResidentAvailable + 1,
                              CachedResidentAvailable);
                      v89 = (_DWORD)CachedResidentAvailable == v90;
                      LODWORD(CachedResidentAvailable) = v90;
                      if ( v89 )
                        goto LABEL_239;
                    }
                    while ( v90 != -1 && (unsigned __int64)(v90 + 1LL) <= 0x100 );
                  }
                  if ( (int)CachedResidentAvailable > 192
                    && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                            192,
                                                            CachedResidentAvailable) )
                  {
                    v87 = (int)CachedResidentAvailable - 192 + 1LL;
                  }
                }
                _InterlockedExchangeAdd64(&qword_1403552C0, v87);
LABEL_239:
                _InterlockedExchangeAdd64(&qword_14034FB00, 1uLL);
                goto LABEL_241;
              }
              if ( v77 == 1 )
              {
                if ( v78 )
                {
LABEL_208:
                  v79 = 0;
                  goto LABEL_210;
                }
              }
              else if ( v77 != 2 || !v78 )
              {
                goto LABEL_243;
              }
              if ( (v75 & 8) != 0 )
                goto LABEL_208;
LABEL_243:
              _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_244:
              if ( v71 )
                MiReleasePageFileInfo(v99, v71, 1LL);
              v91 = (char *)P;
              if ( P )
              {
                if ( *((int *)P + 44) > 1 )
                  KeSetEvent((PRKEVENT)((char *)P + 56), 0, 0);
                MiFreeInPageSupportBlock(v91);
              }
              if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x200000000000000LL) != 0 )
              {
                result = MiCompleteProtoPteFault((_DWORD)a4, a5, a2, v96[0], v100, 0, a7);
                if ( (int)result < 0 )
                  return result;
                return 272LL;
              }
              if ( (a7 & 1) != 0 && *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
              {
                v72 = v98 <= 0x7F8;
                v92 = *(_QWORD *)v96;
                *(_QWORD *)a3 = *(_QWORD *)v96;
                if ( v72 )
                  MiWritePteShadow(a3, v92);
                *(_QWORD *)BugCheckParameter4 = 0LL;
                return 272LL;
              }
              v93 = 0LL;
              if ( (a7 & 1) != 0 )
              {
                if ( *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
                {
                  v8 = 512LL;
                  v94 = *(_QWORD *)v96 & 0xFFFFFFFFFFFFFFDFuLL;
                  goto LABEL_265;
                }
                if ( *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
                  v93 = a7 & 0xFFFFFFFFFFFFFFFEuLL;
              }
              v94 = *(_QWORD *)v96;
LABEL_265:
              if ( !MiAllocateWsle(a4, a3, BugCheckParameter4, v8, v94, v93) )
              {
                MiLockAndDecrementShareCount(BugCheckParameter4, 0LL);
                return 3221225495LL;
              }
              return 272LL;
            }
            v71 = MiCaptureDirtyBitToPfn(BugCheckParameter4);
            goto LABEL_186;
          }
          if ( v100 || a2 >= 0xFFFF800000000000uLL )
          {
LABEL_186:
            v68 |= 0x42uLL;
            *(_QWORD *)v96 = v68;
          }
        }
LABEL_187:
        if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x200000000000000LL) == 0 )
          goto LABEL_192;
        goto LABEL_188;
      }
    }
    else if ( !BYTE2(CurrentThread[1].Teb) && (v43 & 4) == 0 && v44 != 1 || (v43 & 0x10) != 0 )
    {
      v45 = a5;
      goto LABEL_98;
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return MiResolvePageFileFault(a2, a3, (_DWORD)a4, v10, v24, a7, (__int64)v26);
  }
  v54 = *((_QWORD *)v38 + 688);
  if ( v54 < 0x80
    && (((__int64)KeGetCurrentThread()[1].Queue & 2) == 0 || v54 < 2)
    && (v38 == MiSystemPartition || v54 < 2) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v24 )
      MiUnlockProtoPoolPage(v24, 0x11u);
    return 3221225495LL;
  }
  v53 = *(_QWORD *)v96;
  if ( a2 >= 0xFFFF800000000000uLL && (MiFlags & 0x30000) == 0 )
    goto LABEL_147;
  if ( (v36 & 0x200000000000000LL) == 0 )
    goto LABEL_147;
  if ( (*(_DWORD *)(BugCheckParameter4 + 16) & 0x400LL) == 0 )
    goto LABEL_147;
  if ( ((v36 >> 54) & 7) == 3 )
    goto LABEL_147;
  PrototypePteDirect = (_BYTE *)MiGetPrototypePteDirect(
                                  *(_QWORD *)(BugCheckParameter4 + 16),
                                  v54,
                                  HIWORD(MiFlags),
                                  0xFFFF800000000000uLL);
  v58 = *(_QWORD *)PrototypePteDirect;
  if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) == 0
    || (v56 & 3u) > 1
    && (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(BugCheckParameter4 + 16) & 2) == 0
    && MiCanPageMove(BugCheckParameter4) )
  {
    goto LABEL_147;
  }
  v59 = *(_QWORD *)(*(_QWORD *)(v58 + 96) + 8LL);
  if ( !v59
    || (v59 & 0xFFFFFFFFFFFFFFF8uLL) == 8
    || (v59 & 3) == 2
    || ((MiFlags & 0x100000) == 0 || (*(_DWORD *)(v58 + 92) & 0xC000000) == 0)
    && (Address = MiLocateAddress(v57)) != 0LL
    && (v61 = *((_DWORD *)Address + 12), (v61 & 7) == 2)
    && ((v61 & 0xF8) == 8
     || (Address[8] & 0x10000000) != 0 && (v59 & 4) == 0
     || (MiFlags & 0x400) != 0 && (PrototypePteDirect[34] & 2) != 0) )
  {
    v35 = a7 & 1;
LABEL_147:
    v62 = a3;
    goto LABEL_148;
  }
  v62 = a3;
  ImagePageOk = MiMakeImagePageOk(a2, a3, v53, (int)a4, BugCheckParameter4, v24);
  if ( ImagePageOk < 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v24 )
      MiUnlockProtoPoolPage(v24, 0x11u);
    return (unsigned int)ImagePageOk;
  }
  v35 = a7 & 1;
LABEL_148:
  if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x200000000000000LL) == 0
    && v62 != (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) )
  {
    KeBugCheckEx(0x1Au, 0x888AuLL, v62, *(_QWORD *)(BugCheckParameter4 + 8), BugCheckParameter4);
  }
  P = 0LL;
  if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter4) )
  {
    MiDiscardTransitionPte(BugCheckParameter4);
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v24 )
      MiUnlockProtoPoolPage(v24, 0x11u);
    return 3221226548LL;
  }
  v64 = MiMigratePfn((_DWORD)a4, a2, BugCheckParameter4, v24, a7, (__int64)&P);
  BugCheckParameter4 = v64;
  if ( v64 )
  {
    v66 = *(_QWORD *)(v64 + 24);
    ++*(_WORD *)(BugCheckParameter4 + 32);
    *(_QWORD *)(BugCheckParameter4 + 24) = v66 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(BugCheckParameter4 + 34) = *(_BYTE *)(BugCheckParameter4 + 34) & 0xF8 | 6;
    goto LABEL_162;
  }
  v65 = (char *)P;
  if ( !P )
    return 3221226548LL;
  if ( *((int *)P + 44) > 1 )
    KeSetEvent((PRKEVENT)((char *)P + 56), 0, 0);
  MiFreeInPageSupportBlock(v65);
  return 3221226548LL;
}
