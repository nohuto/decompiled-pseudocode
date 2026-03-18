/*
 * XREFs of sub_1402862F4 @ 0x1402862F4
 * Callers:
 *     RtlpComputeEpilogueOffset @ 0x14017DD98 (RtlpComputeEpilogueOffset.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     SdbpCheckDll @ 0x140286E80 (SdbpCheckDll.c)
 */

unsigned __int64 __fastcall sub_1402862F4(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbp
  unsigned int v3; // r13d
  _QWORD *v5; // rax
  int v6; // ecx
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  int v11; // r11d
  _QWORD *v12; // r8
  const char *v13; // rax
  int v14; // r14d
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r9d
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // ecx
  _BYTE *v22; // rax
  int v23; // ecx
  __int64 v24; // rdx
  unsigned int v25; // r12d
  unsigned int v26; // ebx
  unsigned int v27; // esi
  int v28; // r15d
  unsigned __int64 v29; // r11
  unsigned int v30; // r9d
  int *v31; // r8
  __int64 v32; // r10
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  __int64 v38; // rax
  int v39; // eax
  _QWORD *v40; // r9
  unsigned __int64 v41; // r11
  const char *v42; // rax
  unsigned __int64 v43; // rdx
  int v44; // r10d
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 i; // rax
  __int64 v48; // rax
  unsigned int v49; // edx
  __int64 v50; // rcx
  __int64 v51; // r9
  __int64 v52; // r10
  __int64 v53; // r11
  __int64 v54; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int64 DpcStack; // rcx
  unsigned __int64 v58; // r11
  unsigned __int64 v59; // rsi
  unsigned __int64 v60; // r15
  __int64 **v61; // r14
  __int64 *v62; // r12
  __int64 v63; // rbx
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rax
  __int64 v66; // r10
  __int64 **v67; // rcx
  char *v68; // rdx
  int v69; // r8d
  unsigned __int64 v70; // r9
  signed __int64 v71; // rdx
  int v72; // ecx
  int v73; // ecx
  int v74; // ecx
  int v75; // ecx
  int v76; // ecx
  volatile signed __int32 *v77; // rax
  unsigned __int64 v78; // r8
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rdx
  __int64 v81; // rdx
  _QWORD *v82; // r9
  unsigned __int64 v83; // rax
  unsigned __int128 v84; // rax
  __int64 v85; // rdx
  char *v86; // rdx
  _QWORD *v87; // rcx
  __int64 v88; // r8
  char v89; // al
  unsigned __int64 v90; // rdx
  signed __int32 v92[8]; // [rsp+200h] [rbp+200h] BYREF
  __int64 v93; // [rsp+230h] [rbp+230h]
  _BYTE v94[512]; // [rsp+2C0h] [rbp+2C0h] BYREF

  v2 = (_QWORD *)((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL);
  v3 = 0;
  if ( (*(_DWORD *)(a2 + 1672) & 0x110000) != 0x110000 )
  {
    v5 = v2 + 16;
    v6 = 304;
    v7 = 38LL;
    do
    {
      *v5 = 0LL;
      v6 -= 8;
      ++v5;
      --v7;
    }
    while ( v7 );
    for ( ; v6; --v6 )
    {
      *(_BYTE *)v5 = 0;
      v5 = (_QWORD *)((char *)v5 + 1);
    }
    v8 = *(_OWORD *)(a2 + 1448);
    *(_WORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = 304;
    v9 = *(_OWORD *)(a2 + 1464);
    *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x22) = ((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL)
                                                                        + 128;
    *(_OWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v8;
    *(_WORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = a2 + 1496;
    v10 = *(_OWORD *)(a2 + 1480);
    *(_DWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = (a2 + 1496) >> 32;
    *(_OWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = v9;
    *(_WORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x96) = (unsigned int)(a2 + 1496) >> 16;
    *(_OWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) = v10;
    _disable();
    if ( *(int *)(a2 + 1672) >= 0 )
    {
      __sidt(v2 + 12);
      __lidt(v2 + 4);
      __writedr(7u, 0LL);
      __lidt(v2 + 12);
    }
    else
    {
      __writedr(7u, 0LL);
    }
    _enable();
  }
  v11 = *(_DWORD *)(a2 + 196);
  *(_DWORD *)(a2 + 196) = 0;
  v12 = (_QWORD *)a2;
  v13 = (const char *)a2;
  v14 = 64;
  if ( a2 < a2 + 1248 )
  {
    do
    {
      _mm_prefetch(v13, 0);
      v13 += 64;
    }
    while ( (unsigned __int64)v13 < a2 + 1248 );
  }
  v15 = *(_QWORD *)(a2 + 1408);
  v16 = *(_DWORD *)(a2 + 1404);
  v17 = 1248;
  v18 = 156LL;
  do
  {
    v17 -= 8;
    v15 = __ROL8__(*v12++ ^ v15, v16);
    --v18;
  }
  while ( v18 );
  for ( ; v17; --v17 )
  {
    v19 = *(unsigned __int8 *)v12;
    v12 = (_QWORD *)((char *)v12 + 1);
    v15 = __ROL8__(v19 ^ v15, v16);
  }
  *(_DWORD *)(a2 + 1424) += 1248;
  *(_DWORD *)(a2 + 196) = v11;
  if ( *(_QWORD *)(a2 + 1808) != v15 )
  {
    v20 = *(_QWORD *)(a2 + 1160);
    v21 = *(_DWORD *)(a2 + 1356);
    *(_QWORD *)v20 = a2;
    *(_DWORD *)(v20 + 16) = v21;
    if ( !*(_DWORD *)(a2 + 1536) )
    {
      *(_QWORD *)(*(_QWORD *)(a2 + 1160) + 24LL) = *(_QWORD *)(a2 + 1808) ^ v15;
      if ( !*(_DWORD *)(a2 + 1536) )
      {
        *(_QWORD *)(a2 + 1552) = 0LL;
        *(_QWORD *)(a2 + 1544) = a2 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a2 + 1560) = 265LL;
        *(_QWORD *)(a2 + 1568) = v15;
        *(_DWORD *)(a2 + 1536) = 1;
      }
    }
  }
  *v2 = 0LL;
  v22 = v2 + 1;
  v23 = 4;
  do
  {
    *v22++ = 0;
    --v23;
  }
  while ( v23 );
  v24 = 2LL;
  v25 = 0;
  if ( *(_DWORD *)(a2 + 1352) )
  {
    v26 = *(_DWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 8);
    v27 = *(_DWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 4);
    v28 = *(_DWORD *)v2;
    while ( 1 )
    {
      v29 = a2;
      v30 = 0;
      if ( *(_QWORD *)(a2 + 1840) )
        v29 = *(_QWORD *)(a2 + 1840);
      v31 = (int *)(v29 + *(unsigned int *)(v29 + 1392));
      if ( v28 && v27 <= v25 )
      {
        v30 = v27;
        v31 = (int *)(v29 + v26);
      }
      if ( v30 != v25 )
        break;
LABEL_54:
      v28 = 1;
      v26 = (_DWORD)v31 - v29;
      v27 = v30;
      if ( *v31 != 11 || *(_QWORD *)(a2 + 1664) )
      {
        v40 = (_QWORD *)*((_QWORD *)v31 + 1);
        v41 = (unsigned int)v31[4];
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
        v43 = *(_QWORD *)(a2 + 1408);
        v44 = v31[4];
        if ( (unsigned int)v41 >= 8 )
        {
          v45 = v41 >> 3;
          do
          {
            v44 -= 8;
            v43 = __ROL8__(*v40++ ^ v43, *(_DWORD *)(a2 + 1404));
            --v45;
          }
          while ( v45 );
        }
        for ( ; v44; --v44 )
        {
          v46 = *(unsigned __int8 *)v40;
          v40 = (_QWORD *)((char *)v40 + 1);
          v43 = __ROL8__(v46 ^ v43, *(_DWORD *)(a2 + 1404));
        }
        *(_DWORD *)(a2 + 1424) += v41;
        for ( i = v43; ; LODWORD(v43) = i ^ v43 )
        {
          i >>= 31;
          if ( !i )
            break;
        }
        v48 = (unsigned int)v31[5];
        v49 = v43 & 0x7FFFFFFF;
        if ( v49 != (_DWORD)v48 )
        {
          if ( !*(_DWORD *)(a2 + 1536) )
            *(_QWORD *)(*(_QWORD *)(a2 + 1160) + 24LL) = v48 ^ v49;
          v50 = *((_QWORD *)v31 + 1);
          if ( !*(_DWORD *)(a2 + 1536) )
          {
            *(_QWORD *)(a2 + 1544) = a2 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(a2 + 1552) = (char *)v31 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(a2 + 1560) = *v31;
            *(_QWORD *)(a2 + 1568) = v50;
            *(_DWORD *)(a2 + 1536) = 1;
          }
        }
      }
      ++v25;
      v24 = 2LL;
      if ( v25 >= *(_DWORD *)(a2 + 1352) )
      {
        *(_DWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 4) = v27;
        *(_DWORD *)v2 = 1;
        *(_DWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v26;
        goto LABEL_73;
      }
    }
    v32 = v25 - v30;
    v30 = v25;
    while ( 1 )
    {
      v33 = *v31;
      if ( *v31 > 17 )
      {
        switch ( v33 )
        {
          case 19:
LABEL_51:
            v38 = 56LL;
            goto LABEL_52;
          case 28:
            v39 = *((unsigned __int16 *)v31 + 20);
            goto LABEL_41;
          case 30:
            v38 = (((v31[9] - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v31 + 20) + 2);
            goto LABEL_52;
        }
        if ( (unsigned int)(v33 - 33) <= 1 )
        {
          v38 = 20 * (unsigned int)(((v31[8] & 0xFFF) + (unsigned __int64)(unsigned int)v31[10] + 4095) >> 12) + 48;
          goto LABEL_52;
        }
      }
      else
      {
        if ( v33 == 17 )
          goto LABEL_51;
        v34 = v33 - 1;
        if ( !v34 )
        {
LABEL_43:
          v38 = 4 * (v31[4] / 0xCu) + 48;
          goto LABEL_52;
        }
        v35 = v34 - 6;
        if ( !v35 )
        {
          v38 = (unsigned int)(24 * (v31[6] + 2));
          goto LABEL_52;
        }
        v36 = v35 - 1;
        if ( !v36 )
        {
          v39 = *((unsigned __int16 *)v31 + 16);
LABEL_41:
          v38 = (v39 + 55) & 0xFFFFFFF8;
          goto LABEL_52;
        }
        v37 = v36 - 2;
        if ( !v37 )
        {
          v38 = (unsigned int)(16 * (v31[7] + 3));
          goto LABEL_52;
        }
        if ( v37 == 2 )
          goto LABEL_43;
      }
      v38 = 48LL;
LABEL_52:
      v31 = (int *)((char *)v31 + v38);
      if ( !--v32 )
      {
        v14 = 64;
        goto LABEL_54;
      }
    }
  }
LABEL_73:
  if ( *(_DWORD *)(a2 + 1536) )
  {
    v51 = *(_QWORD *)(a2 + 1560);
    v52 = *(_QWORD *)(a2 + 1568);
    v53 = *(_QWORD *)(a2 + 1552);
    v54 = *(_QWORD *)(a2 + 1544);
    *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v51;
    *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v52;
    *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v53;
    *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v54;
    *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = a2;
    if ( KeGetCurrentIrql() < 2u )
      __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = CurrentThread;
    DpcStack = (unsigned __int64)CurrentPrcb->DpcStack;
    LOBYTE(CurrentPrcb) = CurrentPrcb->DpcRoutineActive;
    *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = DpcStack;
    if ( !(_BYTE)CurrentPrcb || (unsigned __int64)(v2 + 3) > DpcStack || (unsigned __int64)(v2 + 3) < DpcStack - 24576 )
      *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = CurrentThread->InitialStack;
    if ( (*(_DWORD *)(a2 + 1672) & 0x8000000) == 0 )
    {
      v58 = __readcr0();
      *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v58;
      __writecr0(v58 & 0xFFFFFFFFFFFEFFFFuLL);
      v59 = a2 + 1880;
      v60 = a2 + 1880 + 16LL * *(unsigned int *)(a2 + 1872);
      v61 = (__int64 **)v60;
      if ( *(_DWORD *)(a2 + 1876) )
      {
        do
        {
          v62 = *v61;
          v63 = (__int64)v61[1];
          *v62 = v63;
          if ( MiPteInShadowRange((__int64)v62) )
            MiWritePteShadow((__int64)v62, v63);
          v64 = __readcr4();
          if ( (v64 & 0x20080) != 0 )
          {
            __writecr4(v64 ^ 0x80);
            __writecr4(v64);
          }
          else
          {
            v65 = __readcr3();
            __writecr3(v65);
          }
          v61 += 2;
          ++v3;
        }
        while ( v3 < *(_DWORD *)(a2 + 1876) );
        v58 = *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
        v54 = *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
      }
      while ( v59 < v60 )
      {
        v66 = *(unsigned int *)(v59 + 8);
        v67 = v61;
        v68 = *(char **)v59;
        v69 = v66;
        if ( (unsigned int)v66 >= 8 )
        {
          v70 = (unsigned __int64)(unsigned int)v66 >> 3;
          do
          {
            v69 -= 8;
            *(_QWORD *)v68 = *v67++;
            v68 += 8;
            --v70;
          }
          while ( v70 );
        }
        if ( v69 )
        {
          v71 = v68 - (char *)v67;
          do
          {
            *((_BYTE *)v67 + v71) = *(_BYTE *)v67;
            v67 = (__int64 **)((char *)v67 + 1);
            --v69;
          }
          while ( v69 );
        }
        v61 = (__int64 **)((char *)v61 + v66);
        v59 += 16LL;
      }
      **(_BYTE **)(a2 + 480) = -61;
      __writecr0(v58);
      CurrentThread = *(struct _KTHREAD **)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
      v51 = *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
      v52 = *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
      v53 = *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
    }
    if ( *(_DWORD *)(a2 + 1584) && KeGetCurrentIrql() < 2u )
      __writecr8(2uLL);
    v72 = *(_DWORD *)(a2 + 1584);
    if ( v72 )
    {
      v73 = v72 - 1;
      if ( v73 )
      {
        v74 = v73 - 1;
        if ( v74 )
        {
          v75 = v74 - 1;
          if ( v75 )
          {
            v76 = v75 - 1;
            if ( v76 )
            {
              if ( v76 == 1 )
                _interlockedbittestandset(&KeGetCurrentThread()->Header.Lock, (*(_DWORD *)(a2 + 1672) >> 10) & 0x1F);
              else
                _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a2 + 1200) + 832LL), 1uLL);
            }
            else
            {
              _interlockedbittestandset(
                &KeGetCurrentThread()->ApcState.Process->Header.Lock,
                (*(_DWORD *)(a2 + 1672) >> 10) & 0x1F);
            }
            goto LABEL_130;
          }
          v77 = *(volatile signed __int32 **)(a2 + 1120);
        }
        else
        {
          v77 = *(volatile signed __int32 **)(a2 + 1112);
        }
      }
      else
      {
        v77 = *(volatile signed __int32 **)(a2 + 1096);
      }
      _interlockedbittestandset64(v77, 0LL);
    }
LABEL_130:
    v93 = *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
    CurrentThread[1].InitialStack = 0LL;
    CurrentThread[1].ApcState.ApcListHead[1].Flink = 0LL;
    SdbpCheckDll(265, v54, v53, v52, v51, *(_QWORD *)(a2 + 328), v93);
    JUMPOUT(0x140286C06LL);
  }
  v78 = a2 + *(unsigned int *)(a2 + 1368);
  if ( (*(_DWORD *)(a2 + 1672) & 0x10000000) != 0 )
  {
    v79 = __rdtsc();
    v80 = __ROR8__(v79, 3) ^ v79;
    LOBYTE(v79) = v80;
    v81 = (v80 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v81;
    v24 = ((unsigned __int8)v79 ^ (unsigned __int8)v81) & 0xF;
    v78 = (unsigned __int64)KiMachineCheckControl + 10 * (unsigned int)v24;
  }
  v82 = *(_QWORD **)(a2 + 1784);
  if ( v82 )
  {
    v83 = __rdtsc();
    v84 = (__ROR8__(v83, 3) ^ v83) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = *((_QWORD *)&v84 + 1);
    *((_QWORD *)&v84 + 1) ^= v84;
    v82[2] = *((_QWORD *)&v84 + 1);
    *(_QWORD *)&v84 = v78 ^ *((_QWORD *)&v84 + 1);
    v24 = a2 ^ *((_QWORD *)&v84 + 1);
    v82[3] = v84;
    v82[1] = v24;
    _InterlockedOr(v92, 0);
    *(_QWORD *)(a2 + 1296) = *(_QWORD *)(a2 + 672);
    *(_QWORD *)(a2 + 1304) = v82;
  }
  else
  {
    *(_QWORD *)(a2 + 1296) = v78;
    *(_QWORD *)(a2 + 1304) = a2;
  }
  *(_QWORD *)(a2 + 1280) = 0LL;
  LOBYTE(v85) = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(a2 + 552))(a2 + 1384, v24);
  (*(void (__fastcall **)(unsigned __int64, __int64))(a2 + 560))(a2 + 1384, v85);
  switch ( *(_DWORD *)(a2 + 1440) )
  {
    case 3:
      *(_QWORD *)(a2 + 1680) = KeGetCurrentThread();
      break;
    case 4:
      v90 = *(_QWORD *)(a2 + 1752);
      *(_QWORD *)(*(_QWORD *)(v90 + 56) ^ *(_QWORD *)(v90 + 64)) = v90 ^ *(_QWORD *)(v90 + 72) ^ *(_QWORD *)(v90 + 64);
      *(_QWORD *)(v90 + 72) = 0LL;
      *(_QWORD *)(v90 + 56) = 0LL;
      break;
    case 5:
      v86 = (char *)(a2 + 1688);
      v87 = (_QWORD *)(*(_QWORD *)(a2 + 1680) + 8LL);
      v88 = 8LL;
      do
      {
        v14 -= 8;
        *v87 = *(_QWORD *)v86;
        v86 += 8;
        ++v87;
        --v88;
      }
      while ( v88 );
      for ( ; v14; --v14 )
      {
        v89 = *v86++;
        *(_BYTE *)v87 = v89;
        v87 = (_QWORD *)((char *)v87 + 1);
      }
      break;
  }
  _InterlockedOr(v92, 0);
  return a2;
}
