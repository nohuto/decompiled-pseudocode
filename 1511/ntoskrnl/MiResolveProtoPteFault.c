/*
 * XREFs of MiResolveProtoPteFault @ 0x1400517B0
 * Callers:
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x14006A630 (MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MI_IS_PFN_FILE_ONLY @ 0x140071340 (MI_IS_PFN_FILE_ONLY.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     MiAllowGuardFault @ 0x1400E5F90 (MiAllowGuardFault.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeImagePageOk @ 0x1401D52A4 (MiMakeImagePageOk.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiResolveProtoPteFault(
        __int64 a1,
        unsigned __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 v9; // r15
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 result; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // r11
  __int64 v24; // r11
  __int64 v25; // rcx
  __int64 v26; // r10
  unsigned __int64 Address; // rax
  char v28; // r10
  __int64 v29; // r11
  int ImagePageOk; // ebx
  __int16 v31; // r8
  char v32; // r9
  bool v33; // zf
  __int16 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // edi
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r9
  int v40; // edx
  unsigned __int16 v41; // cx
  int *v42; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v44; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v46; // eax
  __int64 v47; // r13
  unsigned __int64 v48; // rbp
  __int64 v49; // r11
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // r10
  unsigned __int64 v53; // r14
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rdi
  unsigned __int64 v57; // rbx
  int v58; // eax
  void *v59; // rax
  char v60; // al
  int v61; // ebp
  unsigned int v62; // eax
  __int64 v63; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  int v67; // eax
  void *v68; // rax
  unsigned __int64 v70; // [rsp+48h] [rbp-70h] BYREF
  __int64 v71; // [rsp+50h] [rbp-68h]
  int v72; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v73; // [rsp+60h] [rbp-58h]
  int v74; // [rsp+68h] [rbp-50h] BYREF
  int v75; // [rsp+6Ch] [rbp-4Ch] BYREF
  unsigned __int64 v76; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 v77; // [rsp+78h] [rbp-40h]

  v9 = 48
     * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
     - 0x58000000000LL;
  v71 = a7 & 1;
  if ( (a7 & 1) == 0
    || (v10 = a7 & 0xFFFFFFFFFFFFFFFEuLL, v73 = a7 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
  {
    v10 = 0LL;
    v73 = 0LL;
  }
  while ( 1 )
  {
    v11 = MI_READ_PTE_LOCK_FREE(a6);
    v76 = v11;
    if ( (v11 & 1) == 0 )
      break;
    v12 = MI_GET_PAGE_FRAME_FROM_PTE(&v76);
LABEL_9:
    if ( MI_IS_PFN(v12) )
    {
      v74 = 0;
      v14 = 48 * v13 - 0x58000000000LL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v74);
        while ( (*(_QWORD *)(v14 + 24) & 0x8000000000000000uLL) != 0 );
      }
      v15 = MI_READ_PTE_LOCK_FREE(a6);
      if ( v15 == v76 )
        goto LABEL_16;
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  if ( (v11 & 0x400) == 0 && (v11 & 0x800) != 0 )
  {
    v12 = (v11 >> 12) & 0xFFFFFFFFFLL;
    goto LABEL_9;
  }
  v14 = 0LL;
LABEL_16:
  v16 = MI_READ_PTE_LOCK_FREE(a6);
  v70 = v16;
  v18 = v16;
  if ( (v16 & 1) == 0 )
  {
    if ( !v16 )
    {
      LOBYTE(v17) = 17;
      MiUnlockProtoPoolPage(v9, v17);
      return 3221225477LL;
    }
    LOBYTE(v47) = 0;
    v48 = MI_READ_PTE_LOCK_FREE(a3);
    v77 = HIDWORD(v48);
    if ( HIDWORD(v48) == 0xFFFFFFFF )
    {
      v47 = (v48 >> 5) & 0x1F;
    }
    else if ( (v48 & 0x100) == 0 )
    {
      v47 = (v18 >> 5) & 0x1F;
      v55 = MI_READ_PTE_LOCK_FREE(a6);
      v49 = a1;
      v56 = v55;
      if ( (v55 & 1) != 0 )
      {
        if ( !a1 || (v55 & 0xA00) != 0 )
          goto LABEL_101;
        ImagePageOk = -1073741819;
      }
      else
      {
        v17 = a1;
        if ( a1 )
          v17 = 1LL;
        if ( MiReadWrite[(unsigned __int8)v18 >> 5] - (char)v17 >= 10 )
        {
          v50 = a7;
          if ( ((v18 >> 5) & 0x18) != 0x10 || v71 && *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
          {
LABEL_102:
            v51 = (v18 >> 10) & 1;
            if ( ((v18 >> 10) & 1) != 0
              || (v18 & 0x800) != 0
              || (v18 & 0x2000) != 0
              || (v47 & 5) != 5
              || !v49 && (((unsigned __int8)v18 >> 5) & 5) == 4 )
            {
              v52 = a4;
            }
            else
            {
              v52 = a4;
              if ( *(_QWORD *)(a4 + 184) != 0xFFFFF58010804000uLL
                || (LOWORD(v18) = v70, !KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[12]) )
              {
                v53 = a2;
                if ( (MiFlags & 0x10000) == 0 || a2 < 0xFFFF800000000000uLL || (v47 & 2) == 0 )
                {
                  v72 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
                  {
                    do
                      KeYieldProcessorEx(&v72);
                    while ( (*(_QWORD *)(v9 + 24) & 0x8000000000000000uLL) != 0 );
                  }
                  *(_BYTE *)(v9 + 34) &= ~0x20u;
                  if ( (unsigned int)MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(v9) )
                    MiPfnReferenceCountIsZero(v9, (v9 + 0x58000000000LL) / 48);
                  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( v73 )
                  {
                    if ( !v71 )
                      return 0LL;
                    v54 = a7;
                    if ( *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) != 1
                      || (*(_DWORD *)((a7 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0 )
                    {
                      return 0LL;
                    }
                  }
                  else
                  {
                    v54 = a7;
                  }
                  if ( v71 )
                  {
                    if ( *(_BYTE *)(v54 & 0xFFFFFFFFFFFFFFFEuLL) != 1 && *(_BYTE *)(v54 & 0xFFFFFFFFFFFFFFFEuLL) != 3 )
                      goto LABEL_156;
                  }
                  else
                  {
                    if ( !v54 )
                      goto LABEL_156;
                    v58 = *(unsigned __int16 *)(v54 + 368);
                    if ( v58 == 16 )
                    {
                      v59 = &ExpInterlockedPopEntrySListFault;
                    }
                    else
                    {
                      if ( v58 != 51 )
                        goto LABEL_156;
                      v59 = (void *)KeUserPopEntrySListFault;
                    }
                    if ( *(void **)(v54 + 360) != v59 )
                      goto LABEL_156;
                  }
                  if ( a2 >= 0xFFFF800000000000uLL )
                    return 3221225477LL;
LABEL_156:
                  if ( v77 != 0xFFFFFFFF )
                    v48 = v70;
                  v60 = (v48 >> 5) & 0x1F;
                  v61 = (v48 >> 5) & 0x18;
                  v62 = v60 & 2 | 4;
                  if ( v61 == 8 )
                  {
                    v62 |= 8u;
                  }
                  else if ( v61 == 24 )
                  {
                    v62 |= 0x18u;
                  }
                  v63 = 32LL * v62;
                  *a3 = v63;
                  if ( (unsigned int)MiPteInShadowRange(a3) )
                    MiWritePteShadow(a3, v63);
                  return MiResolveDemandZeroFault(a1, a2, v54, (_DWORD)a3, a4, a5, 0);
                }
LABEL_167:
                if ( v51 )
                {
                  if ( !a8 )
                  {
LABEL_169:
                    LOBYTE(v51) = 17;
                    MiUnlockProtoPoolPage(v9, v51);
                    return 3221226548LL;
                  }
                  return (unsigned int)MiResolveMappedFileFault(v53, a6, v52, v9, v50, (__int64)a8);
                }
                if ( (v18 & 0x800) != 0 )
                  return (unsigned int)MiResolveTransitionFault(v49, v53, a6, v52, a5, 1, v50, a8);
                if ( (MI_READ_PTE_LOCK_FREE(&v70) & 0x2000) != 0 )
                {
                  if ( !a8 )
                    goto LABEL_169;
                  return (unsigned int)MiResolvePageFileFault(v53, a6, a4, 1, v9, a7, (__int64)a8);
                }
                v65 = v71;
                if ( v73 )
                {
                  if ( !v71
                    || (v66 = a7, *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) != 1)
                    || (*(_DWORD *)((a7 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0 )
                  {
                    LOBYTE(v65) = 17;
                    MiUnlockProtoPoolPage(v9, v65);
                    ImagePageOk = 0;
                    goto LABEL_193;
                  }
                }
                else
                {
                  v66 = a7;
                }
                if ( v71 )
                {
                  if ( *(_BYTE *)(v66 & 0xFFFFFFFFFFFFFFFEuLL) != 1 && *(_BYTE *)(v66 & 0xFFFFFFFFFFFFFFFEuLL) != 3 )
                    goto LABEL_192;
                }
                else
                {
                  if ( !v66 )
                    goto LABEL_192;
                  v67 = *(unsigned __int16 *)(v66 + 368);
                  if ( v67 == 16 )
                  {
                    v68 = &ExpInterlockedPopEntrySListFault;
                  }
                  else
                  {
                    if ( v67 != 51 )
                      goto LABEL_192;
                    v68 = (void *)KeUserPopEntrySListFault;
                  }
                  if ( *(void **)(v66 + 360) != v68 )
                    goto LABEL_192;
                }
                if ( v53 >= 0xFFFF800000000000uLL )
                {
                  LOBYTE(v65) = 17;
                  MiUnlockProtoPoolPage(v9, v65);
                  ImagePageOk = -1073741819;
                  goto LABEL_193;
                }
LABEL_192:
                ImagePageOk = MiResolveDemandZeroFault(a1, v53, v66, a6, a4, a5, 1);
LABEL_193:
                if ( a8 )
                  *a8 = 0LL;
                return (unsigned int)ImagePageOk;
              }
            }
            v53 = a2;
            goto LABEL_167;
          }
          if ( (unsigned int)MiAllowGuardFault(a7) )
          {
            v57 = v56 & 0xFFFFFFFFFFFFFC1FuLL | (32 * ((v18 >> 5) & 0xF));
            *(_QWORD *)a6 = v57;
            if ( (unsigned int)MiPteInShadowRange(a6) )
              MiWritePteShadow(a6, v57);
            ImagePageOk = -2147483647;
          }
          else
          {
            ImagePageOk = -1073741819;
          }
        }
        else
        {
          ImagePageOk = -1073741819;
        }
      }
      if ( !v14 )
      {
LABEL_142:
        LOBYTE(v17) = 17;
        MiUnlockProtoPoolPage(v9, v17);
        return (unsigned int)ImagePageOk;
      }
LABEL_141:
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_142;
    }
    v49 = a1;
LABEL_101:
    v50 = a7;
    goto LABEL_102;
  }
  if ( v10 )
  {
    v19 = MI_GET_PFN_PRIORITY(v14);
    if ( (unsigned int)v20 > v19 )
      *(_BYTE *)(v14 + 35) ^= (v20 ^ *(_BYTE *)(v14 + 35)) & 7;
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v20) = 17;
    MiUnlockProtoPoolPage(v9, v20);
    return 0LL;
  }
  if ( a2 < 0xFFFF800000000000uLL || (MiFlags & 0x10000) != 0 )
  {
    v22 = *(_QWORD *)(v14 + 40);
    if ( (v22 & 0x200000000000000LL) != 0 )
    {
      v23 = *(_QWORD *)(v14 + 16);
      if ( (v23 & 0x400) != 0 && ((v22 >> 54) & 7) != 3 )
      {
        v24 = v23 >> 16;
        v25 = *(_QWORD *)v24;
        if ( (*(_DWORD *)(*(_QWORD *)v24 + 56LL) & 0x20) != 0 )
        {
          v26 = *(_QWORD *)(*(_QWORD *)(v25 + 96) + 8LL);
          if ( v26 )
          {
            if ( (v26 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v26 & 3) != 2 )
            {
              if ( (MiFlags & 0x100000) != 0 && (*(_DWORD *)(v25 + 92) & 0xC000000) != 0
                || (Address = MiLocateAddress(a2)) == 0
                || (v17 = *(unsigned int *)(Address + 48), (*(_DWORD *)(Address + 48) & 7) != 2)
                || (v17 & 0xF8) != 8
                && ((*(_DWORD *)(Address + 64) & 0x10000000) == 0 || (v28 & 4) != 0)
                && ((MiFlags & 0x400) == 0 || (*(_BYTE *)(v29 + 34) & 2) == 0) )
              {
                if ( (a7 & 1) != 0 && *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
                {
                  ImagePageOk = -1073740748;
                  goto LABEL_141;
                }
                ImagePageOk = MiMakeImagePageOk(a2, a6, v18, a4, v14, v9);
                if ( ImagePageOk < 0 )
                  goto LABEL_141;
              }
            }
          }
        }
      }
    }
  }
  *(_QWORD *)(v14 + 24) ^= (((*(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v14 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v75 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v75);
    while ( (*(_QWORD *)(v9 + 24) & 0x8000000000000000uLL) != 0 );
  }
  v31 = *(_WORD *)(v9 + 32);
  v32 = *(_BYTE *)(v9 + 34) & 0xDF;
  *(_BYTE *)(v9 + 34) = v32;
  if ( !v31 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (v9 + 0x58000000000LL) / 48, v32 & 7, *(unsigned __int16 *)(v9 + 32));
  v33 = v31 == 1;
  v34 = v31 - 1;
  *(_WORD *)(v9 + 32) = v34;
  if ( v33 && (unsigned int)MI_IS_PFN_FILE_ONLY(v9) )
    goto LABEL_91;
  v35 = *(_QWORD *)(v9 + 40);
  if ( (v35 & 0x10000000000000LL) == 0 )
  {
    v36 = *(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v34 )
    {
      v37 = 1;
      goto LABEL_59;
    }
    if ( v34 != 1 )
    {
      if ( v34 == 2 && v36 )
      {
LABEL_56:
        if ( (v32 & 8) != 0 )
          goto LABEL_57;
      }
      goto LABEL_92;
    }
    if ( !v36 )
      goto LABEL_56;
LABEL_57:
    v37 = 0;
LABEL_59:
    v38 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
    v39 = (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (v38 > v39 || v38 < 0xFFFFF68000000000uLL) && ((*(unsigned __int8 *)(v9 + 35) >> 5) & 1) != 0 )
    {
      *(_BYTE *)(v9 + 35) &= ~0x20u;
      goto LABEL_90;
    }
    v40 = 0;
    if ( (v35 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v9 + 16) & 0x400LL) != 0 )
    {
      v40 = 1;
    }
    else if ( v38 <= v39 && v38 >= 0xFFFFF68000000000uLL && ((*(unsigned __int8 *)(v9 + 35) >> 5) & 1) != 0 )
    {
      v40 = 1;
    }
    else if ( v37 == 1 && ((*(_QWORD *)(v9 + 24) >> 62) & 1LL) != 0 )
    {
      v40 = 1;
    }
    v41 = (HIDWORD(v35) >> 8) & 0x3FF;
    if ( v41 == 1023 )
      v42 = &MiSystemPartition;
    else
      v42 = *(int **)(qword_1402FEC28 + 8LL * v41);
    if ( v40 == 1 )
      MiReturnCommit(v42, 1LL);
    if ( v42 != &MiSystemPartition )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 744, 1uLL);
      goto LABEL_90;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v44 = 1LL;
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        while ( 1 )
        {
          v46 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v33 = (_DWORD)CachedResidentAvailable == v46;
          LODWORD(CachedResidentAvailable) = v46;
          if ( v33 )
            break;
          if ( v46 == -1 || (unsigned __int64)(v46 + 1LL) > 0x100 )
            goto LABEL_84;
        }
LABEL_88:
        _InterlockedExchangeAdd64(&qword_1402FF640, 1uLL);
LABEL_90:
        if ( v37 )
LABEL_91:
          MiPfnReferenceCountIsZero(v9, (v9 + 0x58000000000LL) / 48);
        goto LABEL_92;
      }
LABEL_84:
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v44 = (int)CachedResidentAvailable - 192 + 1LL;
      }
    }
    _InterlockedExchangeAdd64(&qword_140301480, v44);
    goto LABEL_88;
  }
LABEL_92:
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __incgsdword(0x2E18u);
  result = MiCompleteProtoPteFault(a4, a5, a2, v70, a1, 0, a7);
  if ( (int)result >= 0 )
    return 272LL;
  return result;
}
