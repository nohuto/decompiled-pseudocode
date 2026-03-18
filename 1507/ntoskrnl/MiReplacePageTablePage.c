/*
 * XREFs of MiReplacePageTablePage @ 0x14010F190
 * Callers:
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MmStealTopLevelPage @ 0x14010EF54 (MmStealTopLevelPage.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x140082F6C (MiLockTransitionLeafPage.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetLeafVa @ 0x140225AFC (MiGetLeafVa.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiReplacePageTablePage(__int64 a1)
{
  __int64 v1; // r11
  __int64 v2; // rax
  _KPROCESS *v3; // rbp
  int v4; // r12d
  __int64 *v5; // rbx
  __int64 v6; // r10
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 v10; // r13
  unsigned __int64 v11; // rcx
  unsigned __int64 *v12; // rcx
  unsigned __int64 PteShadow; // rax
  int v14; // r8d
  unsigned __int64 LeafVa; // rax
  __int64 v16; // r8
  unsigned __int64 Process; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  int v20; // r15d
  __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // r9
  unsigned __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  bool v32; // zf
  __int64 v33; // rdx
  unsigned int v34; // ebx
  unsigned __int64 v35; // rdi
  unsigned int v36; // ebx
  __int64 v37; // r13
  __int64 v38; // rdi
  unsigned int v39; // ebx
  _KPROCESS *v40; // rsi
  __int64 v41; // r11
  __int64 v42; // r9
  unsigned __int64 v43; // r10
  __int64 v44; // r9
  __int64 v45; // r10
  __int64 v46; // r11
  __int64 v47; // rdi
  unsigned int v48; // ebx
  __int64 *i; // r9
  __int64 v50; // rax
  unsigned __int64 v51; // rcx
  __int64 v52; // r10
  __int64 v53; // r11
  __int64 v54; // r14
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r9
  __int64 result; // rax
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // [rsp+20h] [rbp-88h]
  __int64 v62; // [rsp+28h] [rbp-80h]
  _KPROCESS *v63; // [rsp+30h] [rbp-78h]
  __int64 *v64; // [rsp+38h] [rbp-70h]
  unsigned __int64 v65; // [rsp+40h] [rbp-68h] BYREF
  __int64 v66; // [rsp+48h] [rbp-60h]
  __int64 v67; // [rsp+50h] [rbp-58h]
  __int64 v68; // [rsp+58h] [rbp-50h]
  __int64 v69; // [rsp+B0h] [rbp+8h]
  unsigned int v70; // [rsp+B8h] [rbp+10h]
  int v71; // [rsp+B8h] [rbp+10h]
  int v72; // [rsp+C0h] [rbp+18h]
  __int64 v73; // [rsp+C8h] [rbp+20h] BYREF

  v69 = a1;
  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_KPROCESS **)(a1 + 8);
  v4 = 0;
  v5 = *(__int64 **)(a1 + 16);
  v6 = v1;
  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(unsigned int *)(a1 + 68);
  v9 = 48 * v1 - 0x58000000000LL;
  v10 = 48 * v2 - 0x58000000000LL;
  *(_DWORD *)(a1 + 64) = -1073741823;
  v63 = v3;
  v62 = v1;
  v66 = v2;
  v64 = v5;
  v67 = v7;
  v61 = v1;
  v68 = v10;
  if ( (_DWORD)v8 == 1 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 1520LL);
    if ( !v11 )
      goto LABEL_155;
    v12 = (unsigned __int64 *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v12;
    if ( (unsigned __int64)(v12 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(v12, *v12);
    v65 = PteShadow;
    if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8 )
      PteShadow = MiReadPteShadow(&v65, PteShadow);
    if ( ((PteShadow >> 12) & 0xFFFFFFFFFLL) != v1 )
    {
LABEL_155:
      result = MiMakeDemandZeroPte(4LL);
      *(_QWORD *)(v10 + 16) = result;
      return result;
    }
    a1 = v69;
  }
  v14 = 1;
  if ( (*(_QWORD *)(v9 + 40) & 0xFFFFFFFFFLL) == v1 )
  {
    v72 = 1;
    if ( (_DWORD)v8 == 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 40LL) >> 12;
      v61 = v6;
    }
  }
  else
  {
    v72 = 0;
    LeafVa = MiGetLeafVa(v3, 0xFFFFFFFFFLL, 1LL, v8);
    if ( LeafVa > (unsigned __int64)MmHighestUserAddress && LeafVa + 0xA8000000000LL > 0x17FFFFFFFFFLL )
    {
      v14 = 0;
      if ( LeafVa + 0x70000000000LL <= 0x7FFFFFFFFFLL )
        v14 = 2;
    }
  }
  *(_DWORD *)v7 = v14;
  v16 = 0LL;
  *(_WORD *)(v7 + 4) = 0;
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_QWORD *)(v7 + 8) = 20LL;
  Process = 0LL;
  *(_QWORD *)(v7 + 24) = 0LL;
  v18 = (unsigned __int64)v3;
  v70 = 0;
  v19 = 0xFFFFF6FB7DBED000uLL - (_QWORD)v3;
  v20 = 0;
  v21 = (char *)v5 - (char *)v3 - 0x90482413000LL;
  while ( 1 )
  {
    v22 = *(_QWORD *)v18;
    v23 = 0x90482413000LL;
    v24 = v18 + 0x90482413000LL;
    if ( v18 + 0x90482413000LL <= 0x7F8 )
    {
      if ( (unsigned int)MiPteHasShadow(Process, v22) && (v22 & 1) != 0 && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
      {
        v25 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 8 * ((v18 >> 3) & 0x1FF));
          if ( (v26 & 0x20) != 0 )
            v22 |= 0x20uLL;
          if ( (v26 & 0x42) != 0 )
            v22 |= 0x42uLL;
        }
      }
      Process = v70;
      v16 = 0LL;
    }
    v73 = v22;
    if ( (v22 & 1) != 0 )
    {
      Process = (unsigned int)(Process + 1);
      v70 = Process;
      v27 = v22;
      if ( (unsigned __int64)&v73 + v23 <= 0x7F8 )
      {
        if ( (unsigned int)MiPteHasShadow(Process, v22) && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v28 = *(_QWORD *)(Process + 1520);
          if ( v28 )
          {
            v29 = *(_QWORD *)(v28 + 8 * (((unsigned __int64)&v73 >> 3) & 0x1FF));
            if ( (v29 & 0x20) != 0 )
              v27 |= 0x20uLL;
            if ( (v29 & 0x42) != 0 )
              v27 |= 0x42uLL;
          }
          v22 = v73;
        }
        v23 = 0x90482413000LL;
      }
      v16 = (v27 >> 12) & 0xFFFFFFFFFLL;
      if ( v16 == qword_14034F6F8 )
        ++v20;
      if ( v6 != v1 )
      {
        v30 = (__int64)(v24 + v19) >> 3;
        v31 = *(_QWORD *)(v69 + 72);
        v22 = *(_QWORD *)(v31 + 8 * v30);
        Process = v31 + 8 * v30;
        if ( Process + v23 <= 0x7F8 )
          v22 = MiReadPteShadow(Process, v22);
        v73 = v22;
        goto LABEL_53;
      }
      goto LABEL_57;
    }
    if ( (v22 & 0x400) != 0 || (v22 & 0x800) == 0 )
      goto LABEL_53;
    v23 = MiLockTransitionLeafPage((_KPROCESS *)v18, v4 != 0);
    if ( v23 )
    {
      v22 = *(_QWORD *)v18;
      if ( v24 <= 0x7F8 )
        v22 = MiReadPteShadow(v18, v22);
      v32 = (*(_BYTE *)(v23 + 34) & 0x20) == 0;
      v73 = v22;
      if ( !v32 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_139:
        if ( !v4 )
          goto LABEL_155;
        while ( 2 )
        {
          while ( 2 )
          {
            v59 = *(_QWORD *)(v18 - 8);
            v18 -= 8LL;
            if ( v18 + 0x90482413000LL <= 0x7F8 && (unsigned int)MiPteHasShadow(Process, v59) )
            {
              if ( (v59 & 1) != 0 )
              {
                if ( (v59 & 0x20) == 0 || (v59 & 0x42) == 0 )
                {
                  Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
                  v16 = *(_QWORD *)(Process + 1520);
                  if ( v16 )
                  {
                    v60 = *(_QWORD *)(v16 + 8 * ((v18 >> 3) & 0x1FF));
                    if ( (v60 & 0x20) != 0 )
                      v59 |= 0x20uLL;
                    if ( (v60 & 0x42) != 0 )
                      v59 |= 0x42uLL;
                  }
                }
                goto LABEL_150;
              }
            }
            else
            {
LABEL_150:
              if ( (v59 & 1) != 0 )
                continue;
            }
            break;
          }
          if ( (v59 & 0x400) == 0 && (v59 & 0x800) != 0 )
          {
            Process = 48 * (((unsigned __int64)MiReverseSwizzleInvalidPte(v59, v59, v16, v23) >> 12) & 0xFFFFFFFFFLL)
                    - 0x58000000000LL;
            _InterlockedAnd64((volatile signed __int64 *)(Process + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !--v4 )
            {
              v10 = v68;
              goto LABEL_155;
            }
          }
          continue;
        }
      }
      v6 = v61;
      ++v4;
      v1 = v62;
LABEL_53:
      if ( v6 != v1 )
      {
        Process = 0LL;
        if ( (v22 & 1) == 0 )
          v22 = 0LL;
        v73 = v22;
      }
LABEL_57:
      *(_QWORD *)(v24 + v21) = v22;
      v18 += 8LL;
      goto LABEL_59;
    }
    v1 = v62;
LABEL_59:
    if ( (v18 & 0xFFF) == 0 )
      break;
    v6 = v61;
    v16 = 0LL;
    Process = v70;
  }
  v33 = 0LL;
  v34 = 0;
  if ( v4 )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v34 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v34);
      }
      while ( (*(_QWORD *)(v9 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
LABEL_78:
      v33 = 0LL;
    }
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v34 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v34);
    }
    while ( (*(_QWORD *)(v9 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
    goto LABEL_78;
  }
  v35 = *(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v72 && (Process = v4 + v70 - v20 + 1, *(unsigned __int16 *)(v9 + 24) != Process)
    || *(_WORD *)(v9 + 32) != 1
    || v35 >= 0x10000 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_139;
  }
  v36 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v36 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v36);
    }
    while ( (*(_QWORD *)(v10 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
  }
  *(_QWORD *)(v10 + 24) ^= (v35 ^ *(_QWORD *)(v10 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v4 )
  {
    for ( i = (__int64 *)&v63->Header.Lock; ; ++i )
    {
      v50 = *i;
      if ( (unsigned __int64)(i + 0x12090482600LL) <= 0x7F8 )
        v50 = MiReadPteShadow(i, *i);
      if ( (v50 & 1) == 0 && (v50 & 0x400) == 0 && (v50 & 0x800) != 0 )
      {
        v37 = v61;
        v51 = 48 * (((unsigned __int64)MiReverseSwizzleInvalidPte(v50, v33, v16, i) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        v33 = *(_QWORD *)(v51 + 40);
        if ( (v33 & 0xFFFFFFFFFLL) == v61 && v61 == v52 )
          *(_QWORD *)(v51 + 40) = v33 ^ (v53 ^ v33) & 0xFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !--v4 )
          break;
      }
    }
  }
  else
  {
    v37 = v61;
  }
  v38 = (__int64)v63;
  v39 = v70;
  v40 = v63;
  if ( v70 )
  {
    v41 = 0x90482413000LL;
    do
    {
      v42 = *(_QWORD *)&v40->Header.Lock;
      if ( (unsigned __int64)&v40[0x32BC88773LL].ReadyListHead <= 0x7F8 )
        v42 = MiReadPteShadow(v40, *(_QWORD *)&v40->Header.Lock);
      v73 = v42;
      if ( (v42 & 1) != 0 )
      {
        v71 = --v39;
        v43 = v42;
        if ( (unsigned __int64)&v73 + v41 <= 0x7F8 )
          v43 = MiReadPteShadow(&v73, v42);
        if ( MI_IS_PFN((v43 >> 12) & 0xFFFFFFFFFLL) && v45 != v37 )
        {
          v47 = 48 * v45 - 0x58000000000LL;
          v48 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v47 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v48 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v48);
            }
            while ( (*(_QWORD *)(v47 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v47 + 24), 0x3FuLL) );
            v46 = 0x12090482600LL;
          }
          if ( (*(_QWORD *)(v47 + 40) & 0xFFFFFFFFFLL) == v37 && v37 == v62 )
            *(_QWORD *)(v47 + 40) ^= (v66 ^ *(_QWORD *)(v47 + 40)) & 0xFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v44 = v73;
          v39 = v71;
        }
        if ( v37 != v62 )
        {
          v54 = ((char *)v40 - (char *)v63) >> 3;
          v55 = *(_QWORD *)(v69 + 72);
          v44 = *(_QWORD *)(v55 + 8 * v54);
          v56 = v55 + 8 * v54;
          if ( (unsigned __int64)(v56 + v46 * 8) <= 0x7F8 )
            v44 = MiReadPteShadow(v56, v44);
        }
        if ( (v44 & 1) != 0 )
        {
          v57 = v44 | 0x20;
          v73 = v57;
          *v64 = v57;
          if ( (unsigned __int64)&v64[v46] <= 0x7F8 )
            MiWritePteShadow(v64, v57);
          if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
            MiInsertTbFlushEntry(v67, (__int64)((_QWORD)v40 << 25) >> 16, 1LL, 0);
        }
      }
      ++v64;
      v40 = (_KPROCESS *)((char *)v40 + 8);
      v41 = 0x90482413000LL;
    }
    while ( v39 );
    v38 = (__int64)v63;
  }
  MiFlushTbList(v67);
  if ( v72 == 1 )
    MiInsertTbFlushEntry(*(_QWORD *)(v69 + 40), v38, 1LL, 0);
  result = v69;
  *(_DWORD *)(v69 + 64) = 0;
  return result;
}
