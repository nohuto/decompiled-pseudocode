/*
 * XREFs of MiQueryAddressState @ 0x14003B1A0
 * Callers:
 *     MiQueryAddressSpan @ 0x14003AE40 (MiQueryAddressSpan.c)
 *     MiAllowProtectionChange @ 0x1400DCB94 (MiAllowProtectionChange.c)
 *     MiComparePteProtections @ 0x14021A188 (MiComparePteProtections.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 *     MiGetPageProtection @ 0x14003BD40 (MiGetPageProtection.c)
 *     MiLocatePagefileSubsection @ 0x140089C20 (MiLocatePagefileSubsection.c)
 *     MiVadPureReserve @ 0x14008F840 (MiVadPureReserve.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MiMakeProtoAddressValid @ 0x1400E08B8 (MiMakeProtoAddressValid.c)
 *     MiCaptureProtectionFromLockedProto @ 0x1400E0B6C (MiCaptureProtectionFromLockedProto.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiQueryAddressState(
        unsigned __int64 a1,
        unsigned __int8 a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned __int64 *a5,
        int *a6,
        __int64 *a7,
        _DWORD *a8)
{
  _DWORD *v8; // r12
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned int v13; // edi
  __int64 *v14; // rbx
  int PageProtection; // r14d
  unsigned __int64 v16; // rcx
  __int64 v17; // r13
  __int64 NextPageTable; // rax
  ULONG_PTR v19; // rsi
  int v20; // ecx
  unsigned int v21; // edx
  __int64 result; // rax
  __int64 PteShadow; // rbx
  __int64 v24; // rax
  int v25; // r14d
  int v26; // eax
  __int64 *ProtoPteAddress; // rsi
  _QWORD *v28; // rdx
  unsigned __int64 *v29; // r13
  __int64 v30; // rbx
  volatile signed __int32 *v31; // r15
  __int64 v32; // r12
  __int64 v33; // rbx
  __int64 *v34; // rsi
  __int64 v35; // r9
  unsigned __int64 v36; // r10
  __int64 v37; // rax
  signed __int32 v38; // ett
  unsigned __int64 v39; // rbp
  ULONG_PTR v40; // rbx
  __int64 v41; // rbx
  __int64 v42; // rcx
  ULONG_PTR v43; // r12
  ULONG_PTR v44; // rdi
  ULONG_PTR v45; // rax
  ULONG_PTR v46; // rcx
  ULONG_PTR v47; // r11
  __int64 v48; // rsi
  unsigned __int64 v49; // r10
  __int64 v50; // r9
  __int64 v51; // rax
  _QWORD *v52; // rdx
  volatile signed __int32 *v53; // r13
  __int64 v54; // r9
  __int64 v55; // rax
  ULONG_PTR v56; // rcx
  int v57; // r14d
  unsigned __int64 v58; // r10
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 ProtoAddressValid; // rbp
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v64; // ett
  __int64 v65; // [rsp+30h] [rbp-68h] BYREF
  __int64 v66; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v67; // [rsp+40h] [rbp-58h] BYREF
  __int64 v68[10]; // [rsp+48h] [rbp-50h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v70; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int8 v71; // [rsp+A8h] [rbp+10h]
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp+18h]
  __int64 v73; // [rsp+B8h] [rbp+20h]

  v73 = a4;
  v71 = a2;
  v8 = a8;
  v10 = a1 >> 9;
  v11 = *(unsigned __int8 *)(a3 + 33);
  LODWORD(a8) = 0x2000;
  *v8 = 1;
  v13 = 0;
  v14 = (__int64 *)((v10 & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PageProtection = 0;
  v16 = *(unsigned int *)(a3 + 28) | (unsigned __int64)(v11 << 32);
  BugCheckParameter2 = (ULONG_PTR)v14;
  v17 = 8 * (v16 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  NextPageTable = MiGetNextPageTable((_DWORD)v14, 8 * (int)v16, 0, a2, 0, (__int64)&v70);
  v19 = NextPageTable;
  if ( NextPageTable )
  {
    if ( v70 == 1 )
    {
      *a6 = (*(_DWORD *)(a3 + 48) >> 3) & 0x1F;
      *a7 = (__int64)(((((a1 >> 18) & 0x3FFFFFF8) - 0x4C0000000LL) << 25) + 0x10000000) >> 16 << 25 >> 16;
      return 4096LL;
    }
    if ( v14 != (__int64 *)NextPageTable )
      goto LABEL_3;
    PteShadow = *v14;
    if ( BugCheckParameter2 + 0x90482413000LL <= 0x7F8 )
      PteShadow = MiReadPteShadow(BugCheckParameter2, PteShadow);
    v66 = PteShadow;
    v19 = 0LL;
    if ( !PteShadow )
      goto LABEL_3;
    v24 = PteShadow;
    if ( (unsigned __int64)&STACK[0x90482413038] <= 0x7F8 )
      v24 = MiReadPteShadow(&v66, PteShadow);
    if ( (v24 & 0x3E0) != 0x200 || (v24 & 1) != 0 || (v24 & 0x400) != 0 && !(unsigned int)MiIsPrototypePteVadLookup(v24) )
    {
      v25 = *(_DWORD *)(a3 + 48);
      v21 = 4096;
      LODWORD(a8) = 4096;
      v26 = v25 & 7;
      if ( v26 == 1 )
      {
        PageProtection = (unsigned __int8)v25 >> 3;
LABEL_129:
        v19 = BugCheckParameter2 + 8;
        goto LABEL_130;
      }
      if ( v26 == 3 )
      {
        if ( (PteShadow & 4) != 0 )
        {
          PageProtection = 1;
          if ( (PteShadow & 0x800) != 0 )
            PageProtection = 4;
        }
        else
        {
          PageProtection = 24;
        }
        goto LABEL_129;
      }
      PageProtection = MiGetPageProtection(a3, BugCheckParameter2);
      if ( (PteShadow & 1) == 0 && (PteShadow & 0x400) != 0 && (*(_DWORD *)(a3 + 48) & 0x8000) == 0 )
      {
        ProtoPteAddress = (__int64 *)MiGetProtoPteAddress(a3, a1 >> 12, 9LL, &v65);
        if ( !ProtoPteAddress )
          goto LABEL_54;
        v28 = *(_QWORD **)(a3 + 120);
        if ( (__int64)v28 < 0
          && (a1 >> 12) - (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) > (unsigned __int64)(*v28 - 1LL) >> 12 )
        {
          goto LABEL_54;
        }
        v29 = a5;
        if ( !*a5 || a1 > *a5 )
        {
          v30 = v65;
          v31 = (volatile signed __int32 *)(v73 + 1272);
          v32 = *(_QWORD *)(v65 + 8) + 8LL * *(unsigned int *)(v65 + 44);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v73 + 1272, retaddr);
          }
          else
          {
            _InterlockedAnd(v31, 0xBFFFFFFF);
            _InterlockedDecrement(v31);
            v30 = v65;
          }
          __writecr8(v71);
          if ( (*(_BYTE *)(v30 + 34) & 2) != 0 )
            v32 = (__int64)(ProtoPteAddress + 1);
          v33 = *ProtoPteAddress;
          if ( (unsigned __int64)(ProtoPteAddress + 0x12090482600LL) <= 0x7F8 )
            v33 = MiReadPteShadow(ProtoPteAddress, *ProtoPteAddress);
          v34 = ProtoPteAddress + 1;
          v35 = 0LL;
          if ( v34 != (__int64 *)v32 )
          {
            v36 = (unsigned __int64)(v34 + 0x12090482600LL);
            do
            {
              v37 = *v34;
              if ( v36 <= 0x7F8 )
                v37 = MiReadPteShadow(v34, *v34);
              if ( !v37 )
                break;
              ++v35;
              ++v34;
              v36 += 8LL;
              if ( ((unsigned __int16)v34 & 0xFFF) == 0 )
                break;
            }
            while ( v34 != (__int64 *)v32 );
          }
          *v29 = (a1 & 0xFFFFFFFFFFFFF000uLL) + (v35 << 12);
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v31);
          }
          else
          {
            _m_prefetchw((const void *)v31);
            v38 = *v31 & 0x7FFFFFFF;
            if ( v38 != _InterlockedCompareExchange(v31, v38 + 1, v38) )
              ExpWaitForSpinLockSharedAndAcquire(v31);
          }
          if ( !v33 )
          {
LABEL_54:
            v21 = 0x2000;
            PageProtection = 0;
            goto LABEL_129;
          }
        }
      }
    }
    v21 = (unsigned int)a8;
    goto LABEL_129;
  }
  v19 = v17 + 8;
LABEL_3:
  v20 = *(_DWORD *)(a3 + 48);
  *v8 = 0;
  if ( (((v20 & 7) - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( (v20 & 0x8000) != 0 )
    {
      if ( *(int *)(a3 + 52) < 0 )
      {
        v21 = 4096;
        PageProtection = (unsigned __int8)v20 >> 3;
        goto LABEL_126;
      }
      goto LABEL_125;
    }
    v39 = a1 >> 12;
    v40 = MiGetProtoPteAddress(a3, v39, 1LL, &v65);
    if ( !v40 )
    {
      if ( (unsigned int)MiVadPureReserve(a3) && (v41 = v65) != 0 && !*(_QWORD *)(v65 + 8) && v19 )
      {
        v42 = *(_QWORD *)(a3 + 72);
        v43 = BugCheckParameter2;
        v44 = v19 - BugCheckParameter2;
        v67 = v39
            + ((__int64)(*(_QWORD *)(a3 + 80) - *(_QWORD *)(v42 + 8)) >> 3)
            - (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32));
        MiLocatePagefileSubsection(v42, &v67);
        v19 = v43;
        v45 = *(unsigned int *)(v41 + 44);
        v46 = v44 + v67;
        if ( v44 + v67 < v45 )
          goto LABEL_69;
        while ( !*(_QWORD *)(v41 + 8) )
        {
          if ( v45 >= v44 )
          {
            v19 += 8 * v44;
            break;
          }
          v41 = *(_QWORD *)(v41 + 16);
          v19 += 8 * v45;
          v44 -= v45;
          v46 -= v45;
          if ( !v41 )
          {
            v19 = v17 + 8;
            break;
          }
          v45 = *(unsigned int *)(v41 + 44);
          if ( v46 < v45 )
            break;
        }
        if ( v19 == v43 )
LABEL_69:
          v19 = v43 + 8;
      }
      else
      {
        v19 = BugCheckParameter2 + 8;
      }
      goto LABEL_125;
    }
    if ( v19 && (unsigned int)MiVadPureReserve(a3) )
    {
      v47 = v40;
      v48 = (__int64)(v19 - BugCheckParameter2) >> 3;
      v49 = *(_QWORD *)(v65 + 8) + 8LL * *(unsigned int *)(v65 + 44);
      if ( v48 < (__int64)(v49 - v40) >> 3 )
        v49 = v40 + 8 * v48;
      do
      {
        v50 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v51 = *(_QWORD *)v50;
        if ( (unsigned __int64)(v50 + 0x90482413000LL) <= 0x7F8 )
          LOWORD(v51) = MiReadPteShadow(((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *(_QWORD *)v50);
        if ( (v51 & 1) != 0 )
          break;
        if ( (v51 & 0x3E0) != 0 )
          break;
        v40 = ((v50 << 25) + 0x10000000) >> 16;
      }
      while ( v40 < v49 );
      if ( v40 != v47 )
      {
        if ( v40 > v49 )
          v40 = v49;
        v19 = BugCheckParameter2 + 8 * ((__int64)(v40 - v47) >> 3);
        goto LABEL_125;
      }
      v19 = BugCheckParameter2 + 8;
    }
    else
    {
      v19 = BugCheckParameter2 + 8;
    }
    if ( v40 )
    {
      v52 = *(_QWORD **)(a3 + 120);
      if ( (__int64)v52 >= 0
        || v39 - (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) <= (unsigned __int64)(*v52 - 1LL) >> 12 )
      {
        v53 = (volatile signed __int32 *)(v73 + 1272);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v73 + 1272, retaddr);
        }
        else
        {
          _InterlockedAnd(v53, 0xBFFFFFFF);
          _InterlockedDecrement(v53);
        }
        __writecr8(v71);
        v54 = *(_QWORD *)v40;
        v55 = *(_QWORD *)v40;
        v56 = v40 + 0x90482413000LL;
        if ( v40 + 0x90482413000LL <= 0x7F8 )
          v55 = MiReadPteShadow(v40, *(_QWORD *)v40);
        if ( v55 )
        {
          v57 = *(_DWORD *)(a3 + 48);
          v21 = 4096;
          LODWORD(a8) = 4096;
          if ( (v57 & 7) != 2 || (v57 & 0xF8) != 0x38 )
          {
            PageProtection = (unsigned __int8)v57 >> 3;
LABEL_112:
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v53);
            }
            else
            {
              _m_prefetchw((const void *)v53);
              v64 = *v53 & 0x7FFFFFFF;
              if ( v64 == _InterlockedCompareExchange(v53, v64 + 1, v64) )
                goto LABEL_126;
              ExpWaitForSpinLockSharedAndAcquire(v53);
            }
            goto LABEL_125;
          }
          v58 = v40 + 0x90482413000LL;
          while ( 1 )
          {
            v59 = v54;
            if ( v58 <= 0x7F8
              && (unsigned int)MiPteHasShadow(v56, v54)
              && (v59 & 1) != 0
              && ((v59 & 0x20) == 0 || (v59 & 0x42) == 0) )
            {
              v60 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
              if ( v60 )
              {
                v61 = *(_QWORD *)(v60 + 8 * ((v40 >> 3) & 0x1FF));
                if ( (v61 & 0x20) != 0 )
                  v59 |= 0x20uLL;
                if ( (v61 & 0x42) != 0 )
                  v59 |= 0x42uLL;
              }
            }
            v68[0] = v59;
            if ( (v59 & 1) != 0 )
              break;
            if ( (unsigned int)MiInvalidPteConforms(v59, v59) )
            {
              PageProtection = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v68);
              goto LABEL_111;
            }
          }
          ProtoAddressValid = MiMakeProtoAddressValid(v40);
          PageProtection = MiCaptureProtectionFromLockedProto(v40);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( _interlockedbittestandset64((volatile signed __int32 *)(ProtoAddressValid + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v13);
            }
            while ( (*(_QWORD *)(ProtoAddressValid + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(ProtoAddressValid + 24), 0x3FuLL) );
          }
          MiRemoveLockedPageChargeAndDecRef(ProtoAddressValid);
          _InterlockedAnd64((volatile signed __int64 *)(ProtoAddressValid + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(CurrentIrql);
        }
LABEL_111:
        v21 = (unsigned int)a8;
        goto LABEL_112;
      }
    }
  }
LABEL_125:
  v21 = (unsigned int)a8;
LABEL_126:
  if ( !v19 )
    goto LABEL_129;
LABEL_130:
  result = v21;
  *a7 = (__int64)(v19 << 25) >> 16;
  *a6 = PageProtection;
  return result;
}
