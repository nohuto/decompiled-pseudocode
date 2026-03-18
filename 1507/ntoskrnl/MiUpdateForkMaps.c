/*
 * XREFs of MiUpdateForkMaps @ 0x14000336C
 * Callers:
 *     MiCloneVads @ 0x140001EE4 (MiCloneVads.c)
 * Callees:
 *     MiMapSinglePage @ 0x140003778 (MiMapSinglePage.c)
 *     MiBuildForkPageTable @ 0x140003AA4 (MiBuildForkPageTable.c)
 *     MiDoneWithThisPageGetAnother @ 0x140003E18 (MiDoneWithThisPageGetAnother.c)
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14005E830 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

// local variable allocation has failed, the output may be wrong!
ULONG_PTR __fastcall MiUpdateForkMaps(_QWORD *a1, int a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  unsigned __int64 NextPageTable; // rax
  unsigned int v9; // esi
  ULONG_PTR v10; // rbp
  __int64 v12; // r10
  __int64 v13; // r11
  unsigned __int64 v14; // r9
  __int64 PteShadow; // rbx
  __int64 v16; // rax
  unsigned __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  char *v20; // r15
  __int64 v21; // r12
  unsigned int v22; // r13d
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r9
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // r9d
  char *v31; // r15
  unsigned __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rbx
  char *v35; // [rsp+38h] [rbp-A0h]
  __int64 *v36; // [rsp+40h] [rbp-98h]
  unsigned __int64 v37; // [rsp+48h] [rbp-90h] BYREF
  __int64 v38; // [rsp+50h] [rbp-88h]
  __int64 v39; // [rsp+58h] [rbp-80h]
  _QWORD *v40; // [rsp+60h] [rbp-78h]
  char v41[8]; // [rsp+68h] [rbp-70h] BYREF
  char v42; // [rsp+70h] [rbp-68h] BYREF
  char v43; // [rsp+80h] [rbp-58h] BYREF

  v40 = a4;
  v39 = a5;
  LOBYTE(a4) = a6;
  NextPageTable = MiGetNextPageTable(a2, a3, 0, (_DWORD)a4, 1, (__int64)v41);
  v9 = 0;
  v10 = NextPageTable;
  if ( !NextPageTable )
    return a3 + 8;
  v12 = 0x7FFFFFFFF8LL;
  v13 = 0x98000000000LL;
  v14 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  PteShadow = *(_QWORD *)v14;
  if ( v14 + 0x90482413000LL <= 0x7F8 )
    PteShadow = MiReadPteShadow(v14, *(_QWORD *)v14);
  if ( ((v10 ^ a1[6]) & 0xFFFFFFFFFFFFF000uLL) != 0 )
  {
    v17 = (unsigned __int64 *)&v42;
    v18 = 3LL;
    do
    {
      *v17++ = v14;
      v14 = (v12 & (v14 >> 9)) - v13;
      --v18;
    }
    while ( v18 );
    v19 = *a1;
    v20 = &v43;
    a1[6] = v10;
    v21 = 0LL;
    v22 = 0;
    v35 = &v43;
    v23 = *(_QWORD *)(v19 + 40) >> 12;
    v38 = v23;
    v36 = a1 + 1;
    while ( 1 )
    {
      v24 = MiMapSinglePage(a1[7], v23, 1073741856LL);
      v25 = 511LL;
      v26 = v24 + 8 * (((unsigned __int64)*(unsigned int *)v20 >> 3) & 0x1FF);
      v27 = *(_QWORD *)v26;
      if ( v26 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(2040LL, v27)
        && (v27 & 1) != 0
        && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
      {
        v28 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 8 * (v25 & (v26 >> 3)));
          if ( (v29 & 0x20) != 0 )
            v27 |= 0x20uLL;
          if ( (v29 & 0x42) != 0 )
            v27 |= 0x42uLL;
        }
      }
      v37 = v27;
      if ( v27 )
        break;
      if ( v22 == 2 && (PteShadow & 0x80u) != 0LL )
      {
        *(_QWORD *)v26 = PteShadow;
        if ( v26 + 0x90482413000LL <= 0x7F8 )
          MiWritePteShadow(v26, PteShadow);
        if ( v21 )
        {
          v34 = 48 * v23 - 0x58000000000LL;
          MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v34, 1LL);
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v9);
            }
            while ( *(__int64 *)(v34 + 24) < 0 );
          }
          *(_QWORD *)(v34 + 24) ^= (*(_QWORD *)(v34 + 24) ^ (*(_QWORD *)(v34 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        return v10 + 4096;
      }
      LOBYTE(v25) = a6;
      MiDoneWithThisPageGetAnother(&a1[v22 + 1], v39, *a1, v25);
      v30 = v26;
      v23 = *v36;
      v31 = v35;
      MiBuildForkPageTable(*a1, *v36, *(_QWORD *)v35, v30, v38, 3 - v22);
      ++*v40;
      if ( v21 )
        MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v21, 1LL);
LABEL_31:
      ++v36;
      v20 = v31 - 8;
      v38 = v23;
      v21 = 48 * v23 - 0x58000000000LL;
      v35 = v20;
      if ( ++v22 >= 3 )
      {
        v16 = MiMapSinglePage(a1[7], v23, 1073741856LL);
        a1[4] = v16;
        a1[8] = 48 * v23 - 0x58000000000LL;
        goto LABEL_33;
      }
    }
    if ( (v27 & 1) != 0 )
    {
      v32 = v27;
      if ( (unsigned __int64)&STACK[0x90482413048] > 0x7F8 )
      {
LABEL_30:
        v31 = v35;
        v23 = (v32 >> 12) & 0xFFFFFFFFFLL;
        goto LABEL_31;
      }
      v33 = MiReadPteShadow(&v37, v27);
    }
    else
    {
      v33 = MiReverseSwizzleInvalidPte(v27, v27, 0x90482413000LL, v25);
    }
    v32 = v33;
    goto LABEL_30;
  }
  v16 = a1[4];
LABEL_33:
  a1[5] = v16 | v10 & 0xFFF;
  MiMakeSystemAddressValid(v10, 1);
  return v10;
}
