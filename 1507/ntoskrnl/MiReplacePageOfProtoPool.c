/*
 * XREFs of MiReplacePageOfProtoPool @ 0x140037690
 * Callers:
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 * Callees:
 *     MiLockLeafPage @ 0x140037DE0 (MiLockLeafPage.c)
 *     MiIsPoolHeader @ 0x14012E1D8 (MiIsPoolHeader.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiReplacePageOfProtoPool(_DWORD *Src, __int64 a2, __int64 a3, _QWORD *a4)
{
  char *v5; // r14
  unsigned int v6; // r10d
  __int64 v7; // r15
  __int64 v8; // r12
  char *v9; // rdi
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  int v12; // eax
  char *v13; // r9
  char *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rcx
  char v17; // r9
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  char *v21; // r13
  int v22; // eax
  unsigned int v23; // r14d
  unsigned int v24; // r14d
  unsigned __int64 v25; // rbp
  __int64 v26; // rbx
  __int64 v27; // rax
  char v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rbx
  unsigned int v33; // ebx
  unsigned __int64 v34; // rdi
  unsigned int v35; // ebx
  unsigned int v36; // r14d
  _DWORD *v37; // r15
  unsigned int v38; // ebp
  __int64 v39; // r12
  unsigned int v40; // r11d
  unsigned int v41; // ecx
  __int64 v42; // rax
  int v43; // ebx
  char *v44; // rsi
  unsigned int v45; // r10d
  unsigned int v46; // edx
  __int64 v47; // r8
  char *v48; // r8
  __int64 v49; // rdx
  unsigned __int64 v50; // rax
  unsigned int v51; // ecx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rcx
  unsigned int v61; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v63; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+38h] [rbp-C0h]
  int v65; // [rsp+40h] [rbp-B8h]
  _DWORD *v66; // [rsp+48h] [rbp-B0h]
  unsigned int v67; // [rsp+50h] [rbp-A8h]
  _QWORD *v68; // [rsp+58h] [rbp-A0h]
  _QWORD v69[8]; // [rsp+60h] [rbp-98h] BYREF

  v66 = Src;
  v68 = v69;
  memset(v69, 0, sizeof(v69));
  v5 = (char *)(Src + 1020);
  v6 = 0;
  v7 = 48 * a2 - 0x58000000000LL;
  v8 = 48 * a3 - 0x58000000000LL;
  v9 = (char *)Src;
  v10 = a4;
  v11 = 0x90482413000LL;
  v12 = Src[1];
  v64 = a3;
  v61 = 0;
  v67 = 512;
  if ( v12 != 1951624525 && v12 != 1816358221 && v12 != 1701147206
    || !(unsigned int)MiIsPoolHeader(Src, 0x90482413000LL) )
  {
    v14 = (char *)Src + v11;
    while ( 1 )
    {
      if ( v9 <= v5
        && ((unsigned __int8)v9 & 0xF) == 0
        && *((_DWORD *)v9 + 1) == 1734439494
        && (unsigned int)MiIsPoolHeader(v9, v11) == 1 )
      {
LABEL_25:
        v13 = (char *)a4;
        v11 = 0x90482413000LL;
        break;
      }
      v15 = MiLockLeafPage(v9, v6);
      v6 = v61;
      if ( v15 )
      {
        v6 = ++v61;
        v16 = (v9 - (char *)Src) >> 3;
        _bittestandset((signed __int32 *)v69, v16);
        v17 = *(_BYTE *)(v15 + 34);
        if ( (v17 & 8) != 0 )
          goto LABEL_82;
        v11 = *(_QWORD *)v9;
        if ( (unsigned __int64)&v14[v9 - (char *)Src] <= 0x7F8 && (unsigned int)MiPteHasShadow(v16, v11) )
        {
          if ( (v11 & 1) == 0 )
            goto LABEL_23;
          if ( (v11 & 0x20) == 0 || (v11 & 0x42) == 0 )
          {
            v18 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v18 )
            {
              v19 = *(_QWORD *)(v18 + 8 * (((unsigned __int64)v9 >> 3) & 0x1FF));
              if ( (v19 & 0x20) != 0 )
                v11 |= 0x20uLL;
              if ( (v19 & 0x42) != 0 )
                v11 |= 0x42uLL;
            }
          }
        }
        if ( (v11 & 1) == 0 )
        {
LABEL_23:
          if ( (v17 & 0x20) != 0 )
            goto LABEL_82;
        }
      }
      v20 = *(_QWORD *)v9;
      v9 += 8;
      *v10++ = v20;
      if ( ((unsigned __int16)v9 & 0xFFF) == 0 )
        goto LABEL_25;
    }
  }
  if ( v9 != (char *)(Src + 1024) )
  {
    v21 = v9;
    while ( 1 )
    {
      v22 = *((_DWORD *)v21 + 1);
      v23 = 16 * (unsigned __int8)*((_WORD *)v21 + 1);
      if ( v22 != 1734439494 && v22 != 1816358221 && (v21[3] & 2) != 0 )
        break;
      memmove(v10, v9, v23);
      v32 = v23 & 0xFFFFFFF8;
      v9 += v32;
      v10 = (_QWORD *)((char *)v10 + v32);
LABEL_50:
      v6 = v61;
      v21 += 16 * (unsigned __int8)*((_WORD *)v21 + 1);
      if ( ((unsigned __int16)v21 & 0xFFF) == 0 )
        goto LABEL_52;
      v13 = (char *)a4;
      v11 = 0x90482413000LL;
    }
    v9 += 16;
    v24 = v23 - 16;
    *(_OWORD *)v10 = *(_OWORD *)v21;
    v10 += 2;
    v25 = (unsigned __int64)&v9[v11];
    v26 = (char *)v10 - v13;
    while ( 1 )
    {
      v27 = MiLockLeafPage(v9, v6);
      v6 = v61;
      if ( v27 )
      {
        v6 = ++v61;
        _bittestandset((signed __int32 *)v69, v26 >> 3);
        v28 = *(_BYTE *)(v27 + 34);
        if ( (v28 & 8) != 0 )
          goto LABEL_82;
        v29 = *(_QWORD *)v9;
        if ( v25 <= 0x7F8 && (unsigned int)MiPteHasShadow(v26 >> 3, v29) )
        {
          if ( (v29 & 1) == 0 )
            goto LABEL_45;
          if ( (v29 & 0x20) == 0 || (v29 & 0x42) == 0 )
          {
            v30 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v30 )
            {
              v31 = *(_QWORD *)(v30 + 8 * (((unsigned __int64)v9 >> 3) & 0x1FF));
              if ( (v31 & 0x20) != 0 )
                LOBYTE(v29) = v29 | 0x20;
              if ( (v31 & 0x42) != 0 )
                LOBYTE(v29) = v29 | 0x42;
            }
          }
        }
        if ( (v29 & 1) == 0 )
        {
LABEL_45:
          if ( (v28 & 0x20) != 0 )
            goto LABEL_82;
        }
      }
      v25 += 8LL;
      *v10 = *(_QWORD *)v9;
      v9 += 8;
      ++v10;
      v26 += 8LL;
      v24 -= 8;
      if ( !v24 )
        goto LABEL_50;
    }
  }
LABEL_52:
  v33 = 0;
  if ( v6 )
  {
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      goto LABEL_69;
    do
    {
      if ( (++v33 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v33);
    }
    while ( (*(_QWORD *)(v7 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) );
  }
  else
  {
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      goto LABEL_69;
    do
    {
      if ( (++v33 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v33);
    }
    while ( (*(_QWORD *)(v7 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) );
  }
  v6 = v61;
LABEL_69:
  if ( *(_WORD *)(v7 + 32) == 2
    && (v34 = *(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL, *(unsigned __int16 *)(v7 + 24) == (unsigned __int64)(v6 + 1))
    && v34 < 0x10000 )
  {
    v35 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v35 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v35);
      }
      while ( (*(_QWORD *)(v8 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
      v6 = v61;
    }
    *(_QWORD *)(v8 + 24) ^= (*(_QWORD *)(v8 + 24) ^ v34) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v36 = 1;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_82:
    v36 = 0;
  }
  v37 = v66;
  v38 = 0;
  v39 = v64;
LABEL_84:
  if ( v6 )
  {
    v40 = v38;
    if ( v38 >= v67 )
      v40 = 0;
    v41 = v67 - 1;
    if ( ((unsigned __int8)v69 & 4) != 0 )
    {
      v42 = 1LL;
      v43 = 32;
    }
    else
    {
      v42 = 0LL;
      v43 = 0;
    }
    v44 = (char *)v69 - 4 * v42;
    while ( 1 )
    {
      v45 = v43 + v41;
      v46 = v43 + v40;
      if ( v41 - v40 == -1 )
      {
        v47 = 0xFFFFFFFFLL;
        goto LABEL_99;
      }
      v48 = &v44[8 * ((unsigned __int64)v46 >> 6)];
      v49 = ~*(_QWORD *)v48 | ((1LL << (v46 & 0x3F)) - 1);
      if ( v49 == -1 )
        break;
LABEL_96:
      _BitScanForward64(&v50, ~v49);
      v47 = (unsigned int)v50 + ((unsigned int)((v48 - v44) >> 3) << 6);
      v65 = v50;
      if ( (unsigned int)v47 > v45 )
        goto LABEL_97;
      if ( (_DWORD)v47 != -1 )
      {
        v47 = (unsigned int)(v47 - v43);
LABEL_104:
        v52 = *(_QWORD *)&v37[2 * v47];
        v53 = (unsigned __int64)&v37[2 * v47];
        if ( v53 + 0x90482413000LL <= 0x7F8
          && (unsigned int)MiPteHasShadow(0x90482413000LL, v52)
          && (v52 & 1) != 0
          && ((v52 & 0x20) == 0 || (v52 & 0x42) == 0) )
        {
          v54 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v54 )
          {
            v53 = (v53 >> 3) & 0x1FF;
            v55 = *(_QWORD *)(v54 + 8 * v53);
            if ( (v55 & 0x20) != 0 )
              v52 |= 0x20uLL;
            if ( (v55 & 0x42) != 0 )
              v52 |= 0x42uLL;
          }
        }
        v63 = v52;
        if ( (v52 & 1) != 0 )
        {
          if ( (unsigned __int64)&STACK[0x90482413030] <= 0x7F8
            && (unsigned int)MiPteHasShadow(0x90482413000LL, v52)
            && ((v52 & 0x20) == 0 || (v52 & 0x42) == 0) )
          {
            v56 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v56 )
            {
              v57 = *(_QWORD *)(v56 + 8 * (((unsigned __int64)&v63 >> 3) & 0x1FF));
              if ( (v57 & 0x20) != 0 )
                v52 |= 0x20uLL;
              if ( (v57 & 0x42) != 0 )
                v52 |= 0x42uLL;
            }
          }
          v58 = 3 * ((v52 >> 12) & 0xFFFFFFFFFLL);
        }
        else
        {
          v58 = 3 * (((unsigned __int64)MiReverseSwizzleInvalidPte(v52, v52, v47, v53) >> 12) & 0xFFFFFFFFFLL);
        }
        v59 = 16 * v58 - 0x58000000000LL;
        if ( v36 == 1 )
          *(_QWORD *)(v59 + 40) ^= (v39 ^ *(_QWORD *)(v59 + 40)) & 0xFFFFFFFFFLL;
        v6 = --v61;
        _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v38 = v47 + 1;
        goto LABEL_84;
      }
LABEL_99:
      if ( !v40 )
        goto LABEL_104;
      v51 = v38 + 1;
      v40 = 0;
      if ( v38 + 1 > v67 )
        v51 = v67;
      v41 = v51 - 1;
    }
    while ( 1 )
    {
      v48 += 8;
      if ( v48 > &v44[8 * ((unsigned __int64)v45 >> 6)] )
        break;
      v49 = ~*(_QWORD *)v48;
      if ( *(_QWORD *)v48 )
        goto LABEL_96;
    }
LABEL_97:
    v47 = 0xFFFFFFFFLL;
    goto LABEL_99;
  }
  return v36;
}
