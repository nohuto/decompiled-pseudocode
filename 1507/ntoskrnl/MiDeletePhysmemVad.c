/*
 * XREFs of MiDeletePhysmemVad @ 0x140138DDC
 * Callers:
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 * Callees:
 *     MiDeletePageTableHierarchy @ 0x140039EA0 (MiDeletePageTableHierarchy.c)
 *     MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14003A4E8 (MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiDereferenceIoPages @ 0x140116398 (MiDereferenceIoPages.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x140223A68 (MI_GET_USED_PTES_HANDLE.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiDeletePhysmemVad(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r13
  unsigned __int16 v9; // r15
  int v10; // r11d
  unsigned __int64 *v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned int v17; // r14d
  __int64 v18; // rax
  __int64 v19; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 *v21; // rsi
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r11
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  char v28; // r9
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // r9
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // r11
  unsigned __int64 v34; // r9
  __int64 v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rdx
  _KPROCESS *v38; // rcx
  unsigned __int64 v39; // rsi
  unsigned __int64 *v40; // r13
  _QWORD *v41; // r14
  unsigned __int64 v42; // r8
  __int64 v43; // rdi
  __int64 v44; // rax
  unsigned __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rax
  ULONG_PTR v48; // rdi
  unsigned __int64 v49; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v50; // [rsp+28h] [rbp-D8h]
  unsigned __int64 *v51; // [rsp+30h] [rbp-D0h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-C8h]
  __int64 v53; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v54; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v55; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v56; // [rsp+58h] [rbp-A8h]
  int v57; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v58; // [rsp+64h] [rbp-9Ch]
  int v59; // [rsp+68h] [rbp-98h]
  int v60; // [rsp+6Ch] [rbp-94h]
  __int64 v61; // [rsp+70h] [rbp-90h]
  __int64 v62; // [rsp+78h] [rbp-88h]

  v1 = *(unsigned __int8 *)(a1 + 32);
  v2 = *(unsigned int *)(a1 + 24);
  v3 = *(unsigned __int8 *)(a1 + 33);
  v4 = *(unsigned int *)(a1 + 28);
  v60 = 0;
  v61 = 0LL;
  v62 = 0LL;
  v5 = (v2 | (v1 << 32)) << 12;
  v57 = 1;
  v58 = 0;
  v59 = 20;
  v6 = ((8 * (v2 | (v1 << 32))) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v50 = (v4 | (v3 << 32)) - (v2 | (v1 << 32)) + 1;
  v7 = 8 * ((v4 | ((unsigned __int64)(unsigned int)v3 << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v55 = v7;
  v51 = &STACK[0x90482413020];
  do
  {
    v8 = (v6 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v8 > v7 )
      v8 = v7;
    v56 = v8;
    v9 = ((__int64)(v8 - v6) >> 3) + 1;
    BugCheckParameter2 = MI_GET_USED_PTES_HANDLE(v5);
    v11 = (unsigned __int64 *)(((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v12 = *v11;
    if ( (unsigned __int64)(v11 + 0x12090482600LL) <= 0x7F8
      && (unsigned int)MiPteHasShadow(v11 + 0x12090482600LL, v12)
      && ((unsigned __int8)v12 & (unsigned __int8)v10) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      v14 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 8 * ((v13 >> 3) & 0x1FF));
        if ( (v15 & 0x20) != 0 )
          v12 |= 0x20uLL;
        if ( (v15 & 0x42) != 0 )
          v12 |= 0x42uLL;
      }
    }
    v16 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
      {
        v17 += v10;
        if ( (v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        {
          _mm_pause();
        }
        else
        {
          HvlNotifyLongSpinWait(v17);
          v10 = 1;
        }
      }
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
    v18 = *(_QWORD *)(v16 + 24);
    v53 = v9;
    *(_QWORD *)(v16 + 24) = v18 ^ (v18 ^ (v18 - v9)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER(BugCheckParameter2, v9);
    v50 -= v9;
    v21 = v51;
    v22 = 0LL;
    do
    {
      v23 = *(_QWORD *)v6;
      v24 = 2040LL;
      if ( v6 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v19)
        && (v23 & 1) != 0
        && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        v25 = *(_QWORD *)&Process[2].ProcessLock;
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 8 * ((v6 >> 3) & 0x1FF));
          if ( (v26 & 0x20) != 0 )
            v23 |= 0x20uLL;
          if ( (v26 & 0x42) != 0 )
            v23 |= 0x42uLL;
        }
      }
      v49 = v23;
      v27 = v23;
      if ( (unsigned __int64)v21 <= v24
        && (unsigned int)MiPteHasShadow(Process, v23)
        && (v28 & 1) != 0
        && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
      {
        v29 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v29 )
        {
          v30 = *(_QWORD *)(v29 + 8 * (((unsigned __int64)&v49 >> 3) & 0x1FF));
          if ( (v30 & 0x20) != 0 )
            v27 |= 0x20uLL;
          if ( (v30 & 0x42) != 0 )
            v27 |= 0x42uLL;
        }
      }
      if ( MI_IS_PFN((v27 >> 12) & 0xFFFFFFFFFLL) )
      {
        *(_QWORD *)v6 = 0LL;
        if ( v32 <= v33 )
          MiWritePteShadow(v6, 0LL);
      }
      else
      {
        v34 = v31 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v49 = v34;
        *(_QWORD *)v6 = v34;
        if ( v32 <= v33 )
          MiWritePteShadow(v6, v34);
        v22 = v6;
      }
      MiInsertTbFlushEntry((__int64)&v57, v5, 1LL, 0);
      v6 += 8LL;
      v5 += 4096LL;
    }
    while ( v6 <= v8 );
    v35 = v53;
    v36 = v50;
    v54 = v5;
    if ( v22 )
    {
      MiFlushTbList((__int64)&v57);
      v39 = v6 - 8 * v35;
      if ( v39 <= v22 )
      {
        v40 = v51;
        v41 = (_QWORD *)(v39 + 0x90482413000LL);
        v42 = 2040LL;
        do
        {
          v43 = *(_QWORD *)v39;
          if ( (unsigned __int64)v41 <= v42
            && (unsigned int)MiPteHasShadow(v38, v37)
            && (v43 & 1) != 0
            && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
          {
            v38 = KeGetCurrentThread()->ApcState.Process;
            v37 = *(_QWORD *)&v38[2].ProcessLock;
            if ( v37 )
            {
              v44 = *(_QWORD *)(v37 + 8 * ((v39 >> 3) & 0x1FF));
              if ( (v44 & 0x20) != 0 )
                v43 |= 0x20uLL;
              if ( (v44 & 0x42) != 0 )
                v43 |= 0x42uLL;
            }
          }
          if ( v43 )
          {
            v45 = v43 & 0xFFFFFFFFFFFFFBFEuLL | 1;
            v49 = v45;
            if ( (unsigned __int64)v40 <= v42
              && (unsigned int)MiPteHasShadow(v38, v37)
              && (v45 & 1) != 0
              && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
            {
              v46 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
              if ( v46 )
              {
                v47 = *(_QWORD *)(v46 + 8 * (((unsigned __int64)&v49 >> 3) & 0x1FF));
                if ( (v47 & 0x20) != 0 )
                  v45 = v49 | 0x20;
                if ( (v47 & 0x42) != 0 )
                  v45 |= 0x42uLL;
              }
              else
              {
                v45 = v49;
              }
            }
            v48 = (v45 >> 12) & 0xFFFFFFFFFLL;
            *(_QWORD *)v39 = 0LL;
            if ( (unsigned __int64)v41 <= v42 )
              MiWritePteShadow(v39, 0LL);
            MiDereferenceIoPages(1, v48, 1uLL);
            v42 = 2040LL;
          }
          v39 += 8LL;
          ++v41;
        }
        while ( v39 <= v22 );
        v8 = v56;
        v5 = v54;
      }
      v36 = v50;
      v6 = v8 + 8;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x3FF0000) == 0 )
      MiDeletePageTableHierarchy(&v57, v6 - 8);
    v7 = v55;
  }
  while ( v36 );
  MiFlushTbList((__int64)&v57);
}
