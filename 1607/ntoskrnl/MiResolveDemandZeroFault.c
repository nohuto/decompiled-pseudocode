/*
 * XREFs of MiResolveDemandZeroFault @ 0x14003A610
 * Callers:
 *     MiSystemFault @ 0x14001BB70 (MiSystemFault.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140040EE0 (MiResolveProtoPteFault.c)
 *     MiProtoFault @ 0x1400A2790 (MiProtoFault.c)
 * Callees:
 *     MiCheckVirtualAddress @ 0x14001E978 (MiCheckVirtualAddress.c)
 *     MiCheckUserVirtualAddress @ 0x14001EA50 (MiCheckUserVirtualAddress.c)
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     MiPfnReferenceCountIsZero @ 0x14002400C (MiPfnReferenceCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiCreateSharedZeroPages @ 0x140038C30 (MiCreateSharedZeroPages.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiResolvePrivateZeroFault @ 0x14003ADC0 (MiResolvePrivateZeroFault.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiIsPfnFileOnly @ 0x14004E500 (MiIsPfnFileOnly.c)
 *     MiExpandSharedZeroCluster @ 0x1400B72E8 (MiExpandSharedZeroCluster.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiResolveDemandZeroFault(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // rsi
  char v9; // r8
  unsigned int v10; // r10d
  int v12; // r15d
  unsigned __int64 v13; // r11
  int v15; // edi
  unsigned __int64 v16; // r14
  _KPROCESS *Process; // r13
  unsigned __int64 v18; // r10
  unsigned __int64 Address; // rax
  unsigned int v20; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v22; // r10
  unsigned __int16 v23; // ax
  int *v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // r10
  unsigned __int64 v27; // r11
  __int64 v28; // rcx
  int v29; // eax
  char v30; // di
  __int64 v31; // rdx
  char v32; // si
  unsigned int v33; // eax
  __int64 v34; // rax
  int v35; // ecx
  int v36; // eax
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // r15d
  __int64 v40; // rdx
  bool v41; // zf
  __int64 v42; // r9
  __int64 v43; // rax
  int v44; // esi
  unsigned __int64 v45; // r8
  int v46; // edx
  unsigned __int16 v47; // r9
  int *v48; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v50; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v52; // eax
  unsigned __int64 v53; // rsi
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // rdi
  __int64 v56; // r12
  unsigned int v57; // r14d
  unsigned __int64 v58; // r13
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // [rsp+28h] [rbp-99h]
  unsigned __int64 v63; // [rsp+48h] [rbp-79h] BYREF
  unsigned __int64 v64; // [rsp+50h] [rbp-71h]
  unsigned __int64 v65; // [rsp+58h] [rbp-69h] BYREF
  int v66[4]; // [rsp+60h] [rbp-61h] BYREF
  unsigned int v67; // [rsp+70h] [rbp-51h] BYREF
  unsigned __int64 v68; // [rsp+78h] [rbp-49h]
  unsigned __int64 v69; // [rsp+80h] [rbp-41h]
  __int64 v70; // [rsp+88h] [rbp-39h]
  unsigned int v71; // [rsp+90h] [rbp-31h]
  unsigned int v72; // [rsp+94h] [rbp-2Dh]
  char v73; // [rsp+98h] [rbp-29h]
  int v74; // [rsp+9Ch] [rbp-25h]
  __int64 v75; // [rsp+A0h] [rbp-21h]
  unsigned __int64 v76; // [rsp+A8h] [rbp-19h]
  unsigned __int64 v77; // [rsp+B0h] [rbp-11h]
  unsigned __int64 v78; // [rsp+C0h] [rbp-1h]

  v7 = a5;
  v9 = *(_BYTE *)(a4 + 184) & 7;
  v78 = a1;
  v10 = 0;
  if ( !v9 )
    v10 = 32;
  v67 = v10;
  v12 = a5 & 1;
  if ( (a5 & 1) != 0 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
  {
    v10 |= 0x40u;
    v67 = v10;
  }
  if ( (a5 & 1) != 0 )
  {
    switch ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) )
    {
      case 2:
        v10 |= 1u;
        break;
      case 1:
        v10 |= 2u;
        break;
      case 5:
        v10 |= 8u;
        break;
      default:
        goto LABEL_14;
    }
    v67 = v10;
  }
LABEL_14:
  if ( (v10 & 0xB) != 0 )
  {
    v13 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    v64 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v10 & 2) != 0 && (*(_DWORD *)(v13 + 80) & 0x4000) != 0 )
    {
      v10 |= 4u;
      v67 = v10;
    }
  }
  else
  {
    v13 = 0LL;
    v64 = 0LL;
  }
  v76 = v13;
  v75 = a4;
  if ( (v10 & 6) == 2 )
    return 0LL;
  v15 = 0;
  v16 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v63 = 0LL;
  if ( (a5 & 1) != 0 )
  {
    v18 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      v15 = *(unsigned __int8 *)(v18 + 40);
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v9 )
  {
    if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( !v18
        && !*(_QWORD *)(qword_140327FD0 + 276840648)
        && !*(_QWORD *)(qword_140327FD0 + 276840656)
        && *(_BYTE *)(qword_140327FD0 + 276840624) != 1 )
      {
        goto LABEL_40;
      }
      Address = MiLocateAddress(a1);
      if ( Address )
      {
        v20 = *(_DWORD *)(Address + 48);
        v16 = Address;
        v63 = Address;
        v15 = (v20 >> 8) & 0x3F;
        if ( !v15 && (v20 & 0x8000) == 0 )
          v15 = (*(_DWORD *)(**(_QWORD **)(Address + 72) + 56LL) >> 20) & 0x3F;
      }
    }
    if ( v18 && !v15 && (unsigned __int8)KeIsAttachedProcess() )
    {
      CurrentThread = KeGetCurrentThread();
      v16 = v63;
      v15 = CurrentThread->ApcState.Process->IdealNode[CurrentThread->Affinity.Group] + 1;
    }
  }
LABEL_40:
  v73 = a7;
  v75 = a4;
  v74 = v15;
  v68 = a1;
  v69 = a1;
  if ( v16 )
  {
    v22 = a2;
  }
  else
  {
    v22 = a2;
    if ( a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL )
    {
      v23 = WORD2(Process[1].InstrumentationCallback);
      v24 = v23 == 1023 ? MiSystemPartition : *(int **)(qword_140327038 + 8LL * v23);
      if ( v24[266] && *((_KPROCESS **)v24 + 148) == Process )
      {
        v16 = MiLocateAddress(a1);
        v63 = v16;
      }
    }
  }
  v77 = v16;
  v25 = MI_READ_PTE_LOCK_FREE(v22);
  if ( !a3 )
  {
    v28 = (v25 >> 5) & 0x1F;
    if ( v12 && *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      v29 = 4;
    }
    else
    {
      if ( (v25 & 0x400) != 0 )
        LODWORD(v28) = 4;
      v29 = v28;
    }
    v71 = v29;
    v72 = v29;
    v70 = 0LL;
    return MiResolvePrivateZeroFault(&v67);
  }
  v30 = v67;
  v31 = 0LL;
  v32 = 0;
  v76 = v27;
  v70 = v26;
  v65 = 1LL;
  v33 = 24;
  LODWORD(a5) = 24;
  if ( (v67 & 5) != 0 && (v67 & 0x20) != 0 )
  {
    v34 = MiCheckVirtualAddress(a1, &a5, (__int64 *)&v63);
    v16 = v63;
    v31 = v34;
    v33 = a5;
    v71 = a5;
    v72 = a5;
  }
  else
  {
    if ( v16 )
    {
      v35 = *(_DWORD *)(v16 + 48);
      if ( (v35 & 0x8000) == 0 && (v35 & 0x100000) != 0 )
      {
        v32 = 1;
        v31 = MiCheckUserVirtualAddress(a1, (int *)&a5, v16, 0);
        v33 = a5;
      }
    }
    v71 = v33;
    v72 = v33;
    if ( v32 != 1 )
      goto LABEL_76;
  }
  if ( (v30 & 4) != 0 && v33 >> 3 != 1 && (v33 >> 3 != 3 || (v33 & 7) == 0) )
  {
    LOBYTE(v31) = 17;
    MiUnlockProtoPoolPage(a3, v31);
    return 0LL;
  }
  if ( v31 && v16 && v33 != 24 && (v33 & 0xFFFFFFF8) != 0x10 )
    v65 = MiExpandSharedZeroCluster(&v67);
LABEL_76:
  v36 = MiCreateSharedZeroPages((int *)&v67, &v65);
  v66[0] = 0;
  v39 = v36;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(v66);
    while ( (*(_QWORD *)(a3 + 24) & 0x8000000000000000uLL) != 0 );
  }
  *(_BYTE *)(a3 + 34) &= ~0x20u;
  v40 = *(unsigned __int16 *)(a3 + 32);
  if ( !(_WORD)v40 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (a3 + 0x58000000000LL) / 48, *(_BYTE *)(a3 + 34) & 7, *(unsigned __int16 *)(a3 + 32));
  v41 = (_WORD)v40 == 1;
  LOWORD(v40) = v40 - 1;
  *(_WORD *)(a3 + 32) = v40;
  if ( !v41 || !(unsigned int)MiIsPfnFileOnly(a3, v40, v37, v38) )
  {
    v42 = *(_QWORD *)(a3 + 40);
    if ( (v42 & 0x10000000000000LL) != 0 )
      goto LABEL_124;
    v43 = *(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !(_WORD)v40 )
    {
      v44 = 1;
LABEL_92:
      v45 = *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL;
      if ( (v45 > 0xFFFFF6BFFFFFFF78uLL || v45 < 0xFFFFF68000000000uLL)
        && ((*(unsigned __int8 *)(a3 + 35) >> 5) & 1) != 0 )
      {
        *(_BYTE *)(a3 + 35) &= ~0x20u;
        goto LABEL_122;
      }
      v46 = 0;
      if ( (v42 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
      {
        v46 = 1;
      }
      else if ( v45 <= 0xFFFFF6BFFFFFFF78uLL
             && v45 >= 0xFFFFF68000000000uLL
             && ((*(unsigned __int8 *)(a3 + 35) >> 5) & 1) != 0 )
      {
        v46 = 1;
      }
      else if ( v44 == 1 && (*(_QWORD *)(a3 + 24) & 0x4000000000000000LL) != 0 )
      {
        v46 = 1;
      }
      v47 = (HIDWORD(v42) >> 8) & 0x3FF;
      if ( v47 == 1023 )
        v48 = MiSystemPartition;
      else
        v48 = *(int **)(qword_140327038 + 8LL * v47);
      if ( v46 == 1 )
        MiReturnCommit(v48, 1LL);
      if ( v48 == MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v50 = 1LL;
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            while ( 1 )
            {
              v52 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v41 = (_DWORD)CachedResidentAvailable == v52;
              LODWORD(CachedResidentAvailable) = v52;
              if ( v41 )
                break;
              if ( v52 == -1 || (unsigned __int64)(v52 + 1LL) > 0x100 )
                goto LABEL_117;
            }
LABEL_122:
            if ( !v44 )
              goto LABEL_124;
            goto LABEL_123;
          }
LABEL_117:
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v50 = (int)CachedResidentAvailable - 192 + 1LL;
          }
        }
        _InterlockedExchangeAdd64(&qword_140324F00, v50);
        goto LABEL_122;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 816, 1uLL);
      goto LABEL_122;
    }
    if ( (_WORD)v40 == 1 )
    {
      if ( v43 )
      {
LABEL_90:
        v44 = 0;
        goto LABEL_92;
      }
    }
    else if ( (_WORD)v40 != 2 || !v43 )
    {
      goto LABEL_124;
    }
    if ( (*(_BYTE *)(a3 + 34) & 8) == 0 )
      goto LABEL_124;
    goto LABEL_90;
  }
LABEL_123:
  MiPfnReferenceCountIsZero(a3, (a3 + 0x58000000000LL) / 48);
LABEL_124:
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v39 >= 0 && (v67 & 4) == 0 )
  {
    v53 = v68;
    v54 = 0LL;
    v55 = a2 - 8LL * (unsigned int)((a1 - v68) >> 12);
    if ( v65 )
    {
      v56 = a6;
      v57 = (v67 >> 3) & 1;
      v58 = v64;
      do
      {
        v59 = MI_READ_PTE_LOCK_FREE(v55);
        v60 = 0LL;
        if ( v57 && ((v53 ^ v78) & 0xFFFFFFFFFFFFF000uLL) == 0 )
          v60 = v58;
        LODWORD(v62) = 1;
        v61 = MiCompleteProtoPteFault(a4, a7, v53, v59, v56, v62, v60);
        v53 += 4096LL;
        if ( !v54 && v61 < 0 )
          v39 = v61;
        __incgsdword(0x2E1Cu);
        ++v54;
        v55 += 8LL;
      }
      while ( v54 < v65 );
    }
  }
  return (unsigned int)v39;
}
