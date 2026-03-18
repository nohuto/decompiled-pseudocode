/*
 * XREFs of MiTranslatePageForCopy @ 0x14021586C
 * Callers:
 *     MmCopyMemory @ 0x1402160E4 (MmCopyMemory.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiObtainProtoReference @ 0x140036AF4 (MiObtainProtoReference.c)
 *     MiLockLeafPage @ 0x140037DE0 (MiLockLeafPage.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007BC04 (MiWaitForCollidedFaultComplete.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockTransitionLeafPage @ 0x140082F6C (MiLockTransitionLeafPage.c)
 *     MiCheckVirtualAddress @ 0x1400896DC (MiCheckVirtualAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiAcquireProperVm @ 0x1400FB9F8 (MiAcquireProperVm.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiTranslatePageForCopy(
        unsigned __int64 a1,
        volatile signed __int32 **a2,
        unsigned __int64 *a3,
        __int64 *a4,
        unsigned __int8 *a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // r14d
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r8
  __int64 v11; // rdx
  unsigned __int64 *v12; // rcx
  __int64 v13; // r12
  unsigned __int64 v14; // rax
  _KPROCESS *Process; // r13
  volatile signed __int32 *v16; // r13
  unsigned __int8 v17; // di
  unsigned int v18; // ebx
  signed __int32 v19; // edx
  unsigned __int8 v20; // si
  __int64 v21; // rcx
  signed __int32 *v22; // rbx
  unsigned int v23; // esi
  unsigned __int64 v24; // rax
  bool v25; // zf
  unsigned __int8 CurrentIrql; // r12
  unsigned int v27; // edi
  signed __int32 v28; // edx
  int v29; // ett
  __int64 v30; // rdx
  __int64 v31; // r9
  ULONG_PTR v32; // r8
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rdi
  int v37; // eax
  __int64 v38; // r9
  unsigned __int8 v39; // r12
  signed __int8 v40; // cf
  unsigned int v41; // edi
  int v42; // esi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  char v46; // al
  __int64 v47; // rdx
  __int64 PrototypePteDirect; // rsi
  unsigned __int64 *v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // r11
  unsigned __int64 v53; // r10
  __int64 v54; // rsi
  __int64 PteShadow; // rax
  __int64 v56; // rcx
  unsigned __int8 v57; // dl
  char v58; // al
  unsigned __int64 v59; // r15
  unsigned int v60; // edi
  __int64 v61; // rbx
  unsigned __int8 v62; // [rsp+40h] [rbp-89h] BYREF
  unsigned __int8 v63[7]; // [rsp+41h] [rbp-88h] BYREF
  unsigned __int64 v64; // [rsp+48h] [rbp-81h] BYREF
  int v65; // [rsp+50h] [rbp-79h]
  int v66; // [rsp+54h] [rbp-75h] BYREF
  unsigned __int64 v67; // [rsp+58h] [rbp-71h]
  __int64 v68; // [rsp+60h] [rbp-69h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-61h]
  __int64 *v70; // [rsp+70h] [rbp-59h]
  unsigned __int64 *v71; // [rsp+78h] [rbp-51h]
  unsigned __int8 *v72; // [rsp+80h] [rbp-49h]
  unsigned __int64 *v73; // [rsp+88h] [rbp-41h]
  volatile signed __int32 **v74; // [rsp+90h] [rbp-39h]
  int v75; // [rsp+98h] [rbp-31h] BYREF
  __int64 v76; // [rsp+A0h] [rbp-29h] BYREF
  _QWORD v77[4]; // [rsp+A8h] [rbp-21h] BYREF
  void *retaddr; // [rsp+118h] [rbp+4Fh]

  v6 = 0;
  *a2 = 0LL;
  v67 = a1;
  v8 = -1LL;
  v73 = a3;
  v9 = a1;
  v70 = a4;
  v72 = a5;
  v71 = a6;
  *a5 = 17;
  *a3 = -1LL;
  *a4 = 0LL;
  *a6 = 0LL;
  v74 = a2;
  if ( a1 + 0x98000000000LL <= 0x7FFFFFFFFFLL )
    return 3221225711LL;
  v11 = 4LL;
  v12 = v77;
  LODWORD(BugCheckParameter2) = 4;
  LODWORD(v13) = 4;
  v14 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    *v12++ = v14;
    v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v11;
  }
  while ( v11 );
  v68 = -1LL;
  v65 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v9 + 0xA8000000000LL > 0xFFFFFFFFFFLL )
  {
    v63[0] = 17;
    v22 = dword_14034FD40;
    v23 = 0;
    while ( 1 )
    {
      v24 = *((_QWORD *)v22 + 23);
      v16 = v22;
      if ( v9 >= v24 && v9 < ((*(_QWORD *)(v24 + 104) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
        break;
      ++v23;
      v22 += 64;
      v25 = v23 == 3;
      if ( v23 >= 3 )
        goto LABEL_37;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v22);
    }
    else
    {
      v27 = 0;
      if ( _interlockedbittestandset(v22, 0x1Fu) )
        v27 = ExpWaitForSpinLockExclusiveAndAcquire(v22);
      while ( 1 )
      {
        v28 = *v22;
        if ( (*v22 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v28 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v22, v28 | 0x40000000, v28);
        if ( (++v27 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v27);
      }
    }
    v9 = v67;
    v25 = v23 == 3;
    v63[0] = CurrentIrql;
    LODWORD(v13) = BugCheckParameter2;
LABEL_37:
    if ( v25 )
      v16 = (volatile signed __int32 *)MiAcquireProperVm(v9, v63);
    if ( !v16 )
      return 3221225632LL;
  }
  else
  {
    v16 = (volatile signed __int32 *)&Process[1].IdealNode[8];
    v17 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v16);
    }
    else
    {
      v18 = 0;
      if ( _interlockedbittestandset(v16, 0x1Fu) )
        v18 = ExpWaitForSpinLockExclusiveAndAcquire(v16);
      while ( 1 )
      {
        v19 = *v16;
        if ( (*v16 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v19 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v16, v19 | 0x40000000, v19);
        if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v18);
      }
    }
    v63[0] = v17;
  }
  v20 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034EE88);
  }
  else
  {
    _m_prefetchw(&dword_14034EE88);
    v21 = (dword_14034EE88 & 0x7FFFFFFFu) + 1;
    v29 = dword_14034EE88 & 0x7FFFFFFF;
    if ( v29 != _InterlockedCompareExchange(&dword_14034EE88, v21, dword_14034EE88 & 0x7FFFFFFF) )
      ExpWaitForSpinLockSharedAndAcquire(&dword_14034EE88);
  }
  v30 = 0x90482413000LL;
  v31 = 511LL;
  while ( 1 )
  {
    v13 = (unsigned int)(v13 - 1);
    v32 = v77[v13];
    BugCheckParameter2 = v32;
    v33 = *(_QWORD *)v32;
    if ( v32 + 0x90482413000LL <= 0x7F8 )
    {
      if ( (unsigned int)MiPteHasShadow(v21, 0x90482413000LL)
        && (v33 & 1) != 0
        && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
      {
        v34 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v34 )
        {
          v35 = *(_QWORD *)(v34 + 8 * (v31 & (v32 >> 3)));
          if ( (v35 & 0x20) != 0 )
            v33 |= 0x20uLL;
          if ( (v35 & 0x42) != 0 )
            v33 |= 0x42uLL;
        }
      }
      v30 = 0x90482413000LL;
    }
    v64 = v33;
    v36 = v33;
    v21 = 3221225477LL;
    if ( (v33 & 1) == 0 )
      break;
    if ( (_DWORD)v13 == 1 )
    {
      if ( (v33 & 0x80u) != 0LL )
      {
        LODWORD(v13) = 0;
        v68 = v31 & (v77[0] >> 3);
        goto LABEL_59;
      }
    }
    else
    {
LABEL_59:
      if ( !(_DWORD)v13 )
        goto LABEL_64;
    }
  }
  v37 = 0;
  if ( (_DWORD)v13 )
    v37 = -1073741819;
  v65 = v37;
LABEL_64:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
  }
  else
  {
    _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
    _InterlockedAdd(&dword_14034EE88, 0xFFFFFFFF);
    v36 = v64;
  }
  __writecr8(v20);
  v38 = v68;
  if ( v68 == -1 )
  {
    if ( v16 != (volatile signed __int32 *)1 )
    {
      v39 = v63[0];
      v38 = 0LL;
      goto LABEL_85;
    }
    return 3221225632LL;
  }
  if ( v16 == (volatile signed __int32 *)1 )
  {
    v16 = dword_14034FF40;
    v39 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FF40);
    }
    else
    {
      v40 = _interlockedbittestandset(dword_14034FF40, 0x1Fu);
      v41 = 0;
      if ( v40 )
        v41 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FF40);
      while ( 1 )
      {
        v30 = (unsigned int)dword_14034FF40[0];
        if ( (dword_14034FF40[0] & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (dword_14034FF40[0] & 0x40000000) == 0 )
          _InterlockedCompareExchange(dword_14034FF40, dword_14034FF40[0] | 0x40000000, dword_14034FF40[0]);
        if ( (++v41 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v41);
      }
      v36 = v64;
    }
    v38 = v68;
    v63[0] = v39;
LABEL_85:
    v42 = v65;
  }
  else
  {
    v39 = v63[0];
    v42 = -1073741819;
  }
  if ( v42 < 0 )
  {
    MiUnlockWorkingSetExclusive((__int64)v16, v39);
    return (unsigned int)v42;
  }
  v62 = 17;
  if ( (v33 & 1) == 0 )
  {
    while ( ((v33 >> 10) & 1) == 0 )
    {
      v43 = (v33 >> 5) & 0x1F;
      if ( v43 == 24 || !v43 )
        goto LABEL_108;
      if ( (v33 & 0x800) == 0 )
      {
        if ( (unsigned __int64)&STACK[0x90482413048] <= 0x7F8 )
          LOBYTE(v33) = MiReadPteShadow(&v64, v33);
        if ( (v33 & 4) == 0 )
          goto LABEL_101;
LABEL_110:
        v6 = -1073741608;
LABEL_142:
        MiUnlockWorkingSetExclusive((__int64)v16, v39);
LABEL_143:
        v39 = 17;
        goto LABEL_144;
      }
      v44 = MiLockTransitionLeafPage((_KPROCESS *)BugCheckParameter2, (ULONG_PTR)&v62);
      v45 = v44;
      if ( v44 )
      {
        v46 = *(_BYTE *)(v44 + 34);
        if ( (v46 & 0x20) == 0 )
        {
          v8 = (v45 + 0x58000000000LL) / 48;
          goto LABEL_144;
        }
        if ( (v46 & 8) != 0 )
          goto LABEL_110;
        v47 = 0LL;
LABEL_125:
        v66 = 1;
        MiWaitForCollidedFaultComplete(v45, v47, v67, v16, v39, v62, &v66);
        goto LABEL_110;
      }
    }
    if ( (v33 & 2) != 0 )
    {
      PrototypePteDirect = MiGetPrototypePteDirect(v33, v30, v32, v38);
      MiUnlockWorkingSetExclusive((__int64)v16, v39);
      if ( !PrototypePteDirect )
        v36 = v33 & 0xFFFFFFFFFFFFFBFFuLL;
      v16 = 0LL;
      v6 = 273;
      *v71 = v36 & 0xFFFFFFFFFFFFFFFDuLL;
      goto LABEL_144;
    }
    v49 = (unsigned __int64 *)MiGetPrototypePteDirect(v33, v30, v32, v38);
    if ( (unsigned int)MiIsPrototypePteVadLookup(v33) )
    {
      v49 = (unsigned __int64 *)MiCheckVirtualAddress(v67, &v75, &v76);
      if ( !v49 )
      {
LABEL_108:
        v6 = -1073741819;
        goto LABEL_142;
      }
    }
    v50 = MiLockProtoPoolPage((unsigned __int64)v49, &v62);
    if ( !v50 )
      goto LABEL_110;
    v51 = MiLockLeafPage(v49, 0LL);
    v52 = 0x90482413000LL;
    v53 = 2040LL;
    v54 = v51;
    PteShadow = *v49;
    if ( (unsigned __int64)(v49 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(v49, *v49);
    v64 = PteShadow;
    if ( (PteShadow & 1) != 0 )
    {
LABEL_114:
      v8 = (v54 + 0x58000000000LL) / 48;
      *v70 = v50;
      goto LABEL_144;
    }
    if ( !PteShadow )
    {
      MiUnlockProtoPoolPage(v50, v62);
      goto LABEL_108;
    }
    if ( (PteShadow & 0x400) != 0 )
    {
      v56 = v50;
      goto LABEL_119;
    }
    if ( (PteShadow & 0x800) != 0 )
    {
      v58 = *(_BYTE *)(v54 + 34);
      if ( (v58 & 0x20) == 0 )
        goto LABEL_114;
      v56 = v50;
      if ( (v58 & 8) == 0 )
      {
        MiObtainProtoReference(v50, 1);
        v47 = v50;
        v45 = v54;
        goto LABEL_125;
      }
LABEL_119:
      v57 = v62;
    }
    else
    {
      if ( (unsigned __int64)&v64 + v52 <= v53 )
        LOBYTE(PteShadow) = MiReadPteShadow(&v64, PteShadow);
      v57 = v62;
      v56 = v50;
      if ( (PteShadow & 4) == 0 )
      {
        MiUnlockProtoPoolPage(v50, v62);
LABEL_101:
        MiUnlockWorkingSetExclusive((__int64)v16, v39);
        v16 = 0LL;
        v6 = 273;
        goto LABEL_143;
      }
    }
    MiUnlockProtoPoolPage(v56, v57);
    goto LABEL_110;
  }
  v59 = v33;
  if ( (unsigned __int64)&STACK[0x90482413048] <= 0x7F8 )
    v59 = MiReadPteShadow(&v64, v33);
  v8 = v38 + ((v59 >> 12) & 0xFFFFFFFFFLL);
  if ( !MI_IS_PFN(v8) )
  {
    v6 = -1073741503;
    goto LABEL_142;
  }
  v60 = 0;
  v61 = 48 * v8 - 0x58000000000LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v61 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v60 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v60);
    }
    while ( *(__int64 *)(v61 + 24) < 0 );
  }
  v39 = v63[0];
LABEL_144:
  *v74 = v16;
  *v72 = v39;
  *v73 = v8;
  return v6;
}
