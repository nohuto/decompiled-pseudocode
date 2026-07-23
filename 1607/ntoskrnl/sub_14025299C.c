/*
 * XREFs of sub_14025299C @ 0x14025299C
 * Callers:
 *     RtlpComputeEpilogueOffset @ 0x14015966C (RtlpComputeEpilogueOffset.c)
 * Callees:
 *     SdbpCheckDll @ 0x1402534D0 (SdbpCheckDll.c)
 */

unsigned __int64 __fastcall sub_14025299C(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbp
  _QWORD *v4; // rax
  int v5; // ecx
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  int v10; // ebx
  int v11; // r11d
  int v12; // r8d
  _QWORD *v13; // r9
  __int64 v14; // rdx
  const char *v15; // rax
  int v16; // r14d
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // ecx
  _BYTE *v21; // rax
  int v22; // ecx
  unsigned int v23; // r13d
  unsigned int v24; // r15d
  unsigned int v25; // esi
  int v26; // r12d
  unsigned __int64 v27; // r11
  unsigned int v28; // r9d
  int *v29; // r8
  __int64 v30; // r10
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  __int64 v36; // rax
  int v37; // eax
  int v38; // ebx
  unsigned __int64 v39; // rdx
  _QWORD *v40; // r11
  unsigned __int64 v41; // r9
  const char *v42; // rax
  unsigned __int64 v43; // r10
  __int64 v44; // rax
  unsigned __int64 i; // rax
  __int64 v46; // rax
  unsigned int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r10
  __int64 v51; // r11
  __int64 v52; // r13
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 DpcStack; // r14
  unsigned __int64 v56; // r12
  unsigned __int64 v57; // r8
  unsigned int v58; // r9d
  unsigned __int64 v59; // r10
  _QWORD *j; // rdx
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rax
  __int64 v63; // rsi
  _QWORD *v64; // rcx
  char *v65; // r9
  int v66; // r11d
  unsigned __int64 v67; // rbx
  signed __int64 v68; // r9
  int v69; // ecx
  int v70; // ecx
  int v71; // ecx
  int v72; // ecx
  int v73; // ecx
  volatile signed __int32 *v74; // rax
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // rcx
  __int64 v77; // rax
  unsigned __int128 v78; // rt2
  _QWORD *v79; // r9
  unsigned __int64 v80; // rax
  unsigned __int128 v81; // rax
  __int64 v82; // rdx
  char *v83; // rdx
  _QWORD *v84; // rcx
  __int64 v85; // r8
  char v86; // al
  unsigned __int64 v87; // r8
  signed __int32 v89[8]; // [rsp+200h] [rbp+200h] BYREF
  _BYTE v90[512]; // [rsp+2C0h] [rbp+2C0h] BYREF

  v2 = (_QWORD *)((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL);
  if ( (*(_DWORD *)(a2 + 1752) & 0x110000) != 0x110000 )
  {
    v4 = v2 + 16;
    v5 = 304;
    v6 = 38LL;
    do
    {
      *v4 = 0LL;
      v5 -= 8;
      ++v4;
      --v6;
    }
    while ( v6 );
    for ( ; v5; --v5 )
    {
      *(_BYTE *)v4 = 0;
      v4 = (_QWORD *)((char *)v4 + 1);
    }
    v7 = *(_OWORD *)(a2 + 1528);
    *(_WORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = 304;
    v8 = *(_OWORD *)(a2 + 1544);
    *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A) = ((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL)
                                                                        + 128;
    *(_OWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v7;
    *(_WORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = a2 + 1576;
    v9 = *(_OWORD *)(a2 + 1560);
    *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = (a2 + 1576) >> 32;
    *(_OWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = v8;
    *(_WORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 0x96) = (unsigned int)(a2 + 1576) >> 16;
    *(_OWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) = v9;
    _disable();
    if ( *(int *)(a2 + 1752) >= 0 )
    {
      __sidt(v2 + 8);
      __lidt(v2 + 3);
      __writedr(7u, 0LL);
      __lidt(v2 + 8);
    }
    else
    {
      __writedr(7u, 0LL);
    }
    _enable();
  }
  v10 = *(_DWORD *)(a2 + 196);
  v11 = *(_DWORD *)(a2 + 1484);
  v12 = 1336;
  *(_DWORD *)(a2 + 1504) += 1336;
  v13 = (_QWORD *)a2;
  v14 = *(_QWORD *)(a2 + 1488);
  v15 = (const char *)a2;
  *(_DWORD *)(a2 + 196) = 0;
  v16 = 64;
  if ( a2 < a2 + 1336 )
  {
    do
    {
      _mm_prefetch(v15, 0);
      v15 += 64;
    }
    while ( (unsigned __int64)v15 < a2 + 1336 );
  }
  v17 = 167LL;
  do
  {
    v14 = __ROL8__(*v13++ ^ v14, v11);
    v12 -= 8;
    --v17;
  }
  while ( v17 );
  for ( ; v12; --v12 )
  {
    v18 = *(unsigned __int8 *)v13;
    v13 = (_QWORD *)((char *)v13 + 1);
    v14 = __ROL8__(v18 ^ v14, v11);
  }
  *(_DWORD *)(a2 + 196) = v10;
  if ( *(_QWORD *)(a2 + 1888) != v14 )
  {
    v19 = *(_QWORD *)(a2 + 1240);
    v20 = *(_DWORD *)(a2 + 1436);
    *(_QWORD *)v19 = a2;
    *(_DWORD *)(v19 + 16) = v20;
    if ( !*(_DWORD *)(a2 + 1616) )
    {
      *(_QWORD *)(*(_QWORD *)(a2 + 1240) + 24LL) = *(_QWORD *)(a2 + 1888) ^ v14;
      if ( !*(_DWORD *)(a2 + 1616) )
      {
        *(_QWORD *)(a2 + 1632) = 0LL;
        *(_QWORD *)(a2 + 1624) = a2 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a2 + 1640) = 265LL;
        *(_QWORD *)(a2 + 1648) = v14;
        *(_DWORD *)(a2 + 1616) = 1;
      }
    }
  }
  *v2 = 0LL;
  v21 = v2 + 1;
  v22 = 4;
  do
  {
    *v21++ = 0;
    --v22;
  }
  while ( v22 );
  v23 = 0;
  if ( *(_DWORD *)(a2 + 1432) )
  {
    v24 = *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 8);
    v25 = *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 4);
    v26 = *(_DWORD *)v2;
    while ( 1 )
    {
      v27 = a2;
      if ( *(_QWORD *)(a2 + 1912) )
        v27 = *(_QWORD *)(a2 + 1912);
      v28 = 0;
      v29 = (int *)(v27 + *(unsigned int *)(v27 + 1472));
      if ( v26 && v25 <= v23 )
      {
        v28 = v25;
        v29 = (int *)(v27 + v24);
      }
      if ( v28 != v23 )
        break;
LABEL_54:
      v38 = *(_DWORD *)(a2 + 1484);
      v39 = *(_QWORD *)(a2 + 1488);
      v24 = (_DWORD)v29 - v27;
      v40 = (_QWORD *)*((_QWORD *)v29 + 1);
      v25 = v28;
      v41 = (unsigned int)v29[4];
      v26 = 1;
      *(_DWORD *)(a2 + 1504) += v41;
      v42 = (const char *)v40;
      if ( v40 < (_QWORD *)((char *)v40 + v41) )
      {
        do
        {
          _mm_prefetch(v42, 0);
          v42 += 64;
        }
        while ( v42 < (const char *)v40 + v41 );
      }
      if ( (unsigned int)v41 >= 8 )
      {
        v43 = v41 >> 3;
        do
        {
          v39 = __ROL8__(*v40++ ^ v39, v38);
          LODWORD(v41) = v41 - 8;
          --v43;
        }
        while ( v43 );
      }
      for ( ; (_DWORD)v41; LODWORD(v41) = v41 - 1 )
      {
        v44 = *(unsigned __int8 *)v40;
        v40 = (_QWORD *)((char *)v40 + 1);
        v39 = __ROL8__(v44 ^ v39, v38);
      }
      for ( i = v39; ; LODWORD(v39) = i ^ v39 )
      {
        i >>= 31;
        if ( !i )
          break;
      }
      v46 = (unsigned int)v29[5];
      v47 = v39 & 0x7FFFFFFF;
      if ( v47 != (_DWORD)v46 )
      {
        if ( !*(_DWORD *)(a2 + 1616) )
          *(_QWORD *)(*(_QWORD *)(a2 + 1240) + 24LL) = v46 ^ v47;
        v48 = *((_QWORD *)v29 + 1);
        if ( !*(_DWORD *)(a2 + 1616) )
        {
          *(_QWORD *)(a2 + 1624) = a2 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(a2 + 1632) = (char *)v29 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(a2 + 1640) = *v29;
          *(_QWORD *)(a2 + 1648) = v48;
          *(_DWORD *)(a2 + 1616) = 1;
        }
      }
      if ( ++v23 >= *(_DWORD *)(a2 + 1432) )
      {
        *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 4) = v25;
        *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v24;
        *(_DWORD *)v2 = 1;
        goto LABEL_71;
      }
    }
    v30 = v23 - v28;
    v28 = v23;
    while ( 1 )
    {
      v31 = *v29;
      if ( *v29 > 17 )
      {
        switch ( v31 )
        {
          case 19:
LABEL_51:
            v36 = 56LL;
            goto LABEL_52;
          case 28:
            v37 = *((unsigned __int16 *)v29 + 20);
            goto LABEL_41;
          case 30:
            v36 = (((v29[9] - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v29 + 20) + 2);
            goto LABEL_52;
        }
        if ( (unsigned int)(v31 - 33) <= 1 )
        {
          v36 = 20 * (unsigned int)(((v29[8] & 0xFFF) + (unsigned __int64)(unsigned int)v29[10] + 4095) >> 12) + 48;
          goto LABEL_52;
        }
      }
      else
      {
        if ( v31 == 17 )
          goto LABEL_51;
        v32 = v31 - 1;
        if ( !v32 )
        {
LABEL_43:
          v36 = 4 * (v29[4] / 0xCu) + 48;
          goto LABEL_52;
        }
        v33 = v32 - 6;
        if ( !v33 )
        {
          v36 = (unsigned int)(24 * (v29[6] + 2));
          goto LABEL_52;
        }
        v34 = v33 - 1;
        if ( !v34 )
        {
          v37 = *((unsigned __int16 *)v29 + 16);
LABEL_41:
          v36 = (v37 + 55) & 0xFFFFFFF8;
          goto LABEL_52;
        }
        v35 = v34 - 2;
        if ( !v35 )
        {
          v36 = (unsigned int)(16 * (v29[7] + 3));
          goto LABEL_52;
        }
        if ( v35 == 2 )
          goto LABEL_43;
      }
      v36 = 48LL;
LABEL_52:
      v29 = (int *)((char *)v29 + v36);
      if ( !--v30 )
      {
        v16 = 64;
        goto LABEL_54;
      }
    }
  }
LABEL_71:
  if ( *(_DWORD *)(a2 + 1616) )
  {
    v49 = *(_QWORD *)(a2 + 1648);
    v50 = *(_QWORD *)(a2 + 1632);
    v51 = *(_QWORD *)(a2 + 1624);
    v52 = *(_QWORD *)(a2 + 1640);
    *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v49;
    *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v50;
    *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v51;
    *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = a2;
    if ( KeGetCurrentIrql() < 2u )
      __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = KeGetCurrentThread();
    DpcStack = (unsigned __int64)CurrentPrcb->DpcStack;
    if ( !CurrentPrcb->DpcRoutineActive
      || (unsigned __int64)(v2 + 2) > DpcStack
      || (unsigned __int64)(v2 + 2) < DpcStack - 24576 )
    {
      DpcStack = (unsigned __int64)CurrentThread->InitialStack;
    }
    if ( (*(_DWORD *)(a2 + 1752) & 0x8000000) == 0 )
    {
      v56 = __readcr0();
      __writecr0(v56 & 0xFFFFFFFFFFFEFFFFuLL);
      v57 = a2 + 1952;
      v58 = 0;
      v59 = a2 + 1952 + 16LL * *(unsigned int *)(a2 + 1944);
      for ( j = (_QWORD *)v59; v58 < *(_DWORD *)(a2 + 1948); ++v58 )
      {
        *(_QWORD *)*j = j[1];
        v61 = __readcr4();
        if ( (v61 & 0x20080) != 0 )
        {
          __writecr4(v61 ^ 0x80);
          __writecr4(v61);
        }
        else
        {
          v62 = __readcr3();
          __writecr3(v62);
        }
        j += 2;
      }
      if ( v57 < v59 )
      {
        do
        {
          v63 = *(unsigned int *)(v57 + 8);
          v64 = j;
          v65 = *(char **)v57;
          v66 = v63;
          if ( (unsigned int)v63 >= 8 )
          {
            v67 = (unsigned __int64)(unsigned int)v63 >> 3;
            do
            {
              v66 -= 8;
              *(_QWORD *)v65 = *v64++;
              v65 += 8;
              --v67;
            }
            while ( v67 );
          }
          if ( v66 )
          {
            v68 = v65 - (char *)v64;
            do
            {
              *((_BYTE *)v64 + v68) = *(_BYTE *)v64;
              v64 = (_QWORD *)((char *)v64 + 1);
              --v66;
            }
            while ( v66 );
          }
          j = (_QWORD *)((char *)j + v63);
          v57 += 16LL;
        }
        while ( v57 < v59 );
        v51 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
      }
      **(_BYTE **)(a2 + 512) = -61;
      __writecr0(v56);
      v49 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
      v50 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
    }
    if ( *(_DWORD *)(a2 + 1664) && KeGetCurrentIrql() < 2u )
      __writecr8(2uLL);
    v69 = *(_DWORD *)(a2 + 1664);
    if ( v69 )
    {
      v70 = v69 - 1;
      if ( v70 )
      {
        v71 = v70 - 1;
        if ( v71 )
        {
          v72 = v71 - 1;
          if ( v72 )
          {
            v73 = v72 - 1;
            if ( v73 )
            {
              if ( v73 == 1 )
                _interlockedbittestandset(&KeGetCurrentThread()->Header.Lock, (*(_DWORD *)(a2 + 1752) >> 10) & 0x1F);
              else
                _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a2 + 1280) + 832LL), 1uLL);
            }
            else
            {
              _interlockedbittestandset(
                &KeGetCurrentThread()->ApcState.Process->Header.Lock,
                (*(_DWORD *)(a2 + 1752) >> 10) & 0x1F);
            }
            goto LABEL_126;
          }
          v74 = *(volatile signed __int32 **)(a2 + 1192);
        }
        else
        {
          v74 = *(volatile signed __int32 **)(a2 + 1184);
        }
      }
      else
      {
        v74 = *(volatile signed __int32 **)(a2 + 1168);
      }
      _interlockedbittestandset64(v74, 0LL);
    }
LABEL_126:
    CurrentThread[1].InitialStack = 0LL;
    CurrentThread[1].ApcState.ApcListHead[1].Flink = 0LL;
    SdbpCheckDll(265, v51, v50, v49, v52, *(_QWORD *)(a2 + 320), DpcStack);
    JUMPOUT(0x140253252LL);
  }
  v75 = a2 + *(unsigned int *)(a2 + 1448);
  if ( (*(_DWORD *)(a2 + 1752) & 0x10000000) != 0 )
  {
    v76 = __rdtsc();
    v77 = __ROR8__(v76, 3);
    v78 = (v77 ^ v76) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = *((_QWORD *)&v78 + 1);
    v75 = (unsigned __int64)KiMachineCheckControl + 10 * (((unsigned __int8)(v77 ^ v76) ^ BYTE8(v78)) & 0xF);
  }
  v79 = *(_QWORD **)(a2 + 1864);
  if ( v79 )
  {
    v80 = __rdtsc();
    v81 = (__ROR8__(v80, 3) ^ v80) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = *((_QWORD *)&v81 + 1);
    *((_QWORD *)&v81 + 1) ^= v81;
    v79[3] = *((_QWORD *)&v81 + 1);
    v79[4] = v75 ^ *((_QWORD *)&v81 + 1);
    v79[2] = a2 ^ *((_QWORD *)&v81 + 1);
    _InterlockedOr(v89, 0);
    *(_QWORD *)(a2 + 1376) = *(_QWORD *)(a2 + 720);
    *(_QWORD *)(a2 + 1384) = v79;
  }
  else
  {
    *(_QWORD *)(a2 + 1376) = v75;
    *(_QWORD *)(a2 + 1384) = a2;
  }
  *(_QWORD *)(a2 + 1360) = 0LL;
  LOBYTE(v82) = (*(__int64 (__fastcall **)(unsigned __int64))(a2 + 584))(a2 + 1464);
  (*(void (__fastcall **)(unsigned __int64, __int64))(a2 + 592))(a2 + 1464, v82);
  switch ( *(_DWORD *)(a2 + 1520) )
  {
    case 3:
      *(_QWORD *)(a2 + 1760) = KeGetCurrentThread();
      break;
    case 4:
      v87 = *(_QWORD *)(a2 + 1832);
      *(_QWORD *)(*(_QWORD *)(v87 + 64) ^ *(_QWORD *)(v87 + 56)) = v87 ^ *(_QWORD *)(v87 + 64) ^ *(_QWORD *)(v87 + 72);
      *(_QWORD *)(v87 + 72) = 0LL;
      *(_QWORD *)(v87 + 56) = 0LL;
      break;
    case 5:
      v83 = (char *)(a2 + 1768);
      v84 = (_QWORD *)(*(_QWORD *)(a2 + 1760) + 8LL);
      v85 = 8LL;
      do
      {
        v16 -= 8;
        *v84 = *(_QWORD *)v83;
        v83 += 8;
        ++v84;
        --v85;
      }
      while ( v85 );
      for ( ; v16; --v16 )
      {
        v86 = *v83++;
        *(_BYTE *)v84 = v86;
        v84 = (_QWORD *)((char *)v84 + 1);
      }
      break;
  }
  _InterlockedOr(v89, 0);
  return a2;
}
