/*
 * XREFs of sub_14023706C @ 0x14023706C
 * Callers:
 *     RtlpComputeEpilogueOffset @ 0x14014FBE0 (RtlpComputeEpilogueOffset.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     SdbpCheckDll @ 0x140237C10 (SdbpCheckDll.c)
 */

unsigned __int64 __fastcall sub_14023706C(__int64 a1, unsigned __int64 a2)
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
  int v16; // r12d
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // ecx
  _BYTE *v21; // rax
  int v22; // ecx
  __int64 v23; // rdx
  unsigned int v24; // r13d
  unsigned int v25; // esi
  unsigned int v26; // r14d
  int v27; // r15d
  unsigned __int64 v28; // r11
  unsigned int v29; // r9d
  int *v30; // r8
  __int64 v31; // r10
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  __int64 v37; // rax
  int v38; // eax
  _QWORD *v39; // r11
  unsigned __int64 v40; // r9
  const char *v41; // rax
  int v42; // ebx
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // r10
  __int64 v45; // rax
  unsigned __int64 i; // rax
  __int64 v47; // rax
  unsigned int v48; // edx
  __int64 v49; // rcx
  __int64 v50; // r9
  __int64 v51; // r10
  __int64 v52; // r11
  __int64 v53; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int64 DpcStack; // rcx
  unsigned __int64 v57; // r11
  unsigned __int64 v58; // rsi
  unsigned int v59; // r13d
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
  unsigned __int64 v90; // r8
  signed __int32 v92[8]; // [rsp+200h] [rbp+200h] BYREF
  __int64 v93; // [rsp+230h] [rbp+230h]
  _BYTE v94[512]; // [rsp+2C0h] [rbp+2C0h] BYREF

  v2 = (_QWORD *)((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL);
  if ( (*(_DWORD *)(a2 + 1680) & 0x110000) != 0x110000 )
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
    v7 = *(_OWORD *)(a2 + 1456);
    *(_WORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = 304;
    v8 = *(_OWORD *)(a2 + 1472);
    *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x22) = ((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL)
                                                                        + 128;
    *(_OWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v7;
    *(_WORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = a2 + 1504;
    v9 = *(_OWORD *)(a2 + 1488);
    *(_DWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = (a2 + 1504) >> 32;
    *(_OWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = v8;
    *(_WORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x96) = (unsigned int)(a2 + 1504) >> 16;
    *(_OWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) = v9;
    _disable();
    if ( *(int *)(a2 + 1680) >= 0 )
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
  v10 = *(_DWORD *)(a2 + 196);
  v11 = *(_DWORD *)(a2 + 1412);
  v12 = 1264;
  *(_DWORD *)(a2 + 1432) += 1264;
  v13 = (_QWORD *)a2;
  v14 = *(_QWORD *)(a2 + 1416);
  v15 = (const char *)a2;
  *(_DWORD *)(a2 + 196) = 0;
  v16 = 64;
  if ( a2 < a2 + 1264 )
  {
    do
    {
      _mm_prefetch(v15, 0);
      v15 += 64;
    }
    while ( (unsigned __int64)v15 < a2 + 1264 );
  }
  v17 = 158LL;
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
  if ( *(_QWORD *)(a2 + 1816) != v14 )
  {
    v19 = *(_QWORD *)(a2 + 1176);
    v20 = *(_DWORD *)(a2 + 1364);
    *(_QWORD *)v19 = a2;
    *(_DWORD *)(v19 + 16) = v20;
    if ( !*(_DWORD *)(a2 + 1544) )
    {
      *(_QWORD *)(*(_QWORD *)(a2 + 1176) + 24LL) = *(_QWORD *)(a2 + 1816) ^ v14;
      if ( !*(_DWORD *)(a2 + 1544) )
      {
        *(_QWORD *)(a2 + 1560) = 0LL;
        *(_QWORD *)(a2 + 1552) = a2 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a2 + 1568) = 265LL;
        *(_QWORD *)(a2 + 1576) = v14;
        *(_DWORD *)(a2 + 1544) = 1;
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
  v23 = 2LL;
  v24 = 0;
  if ( *(_DWORD *)(a2 + 1360) )
  {
    v25 = *(_DWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 8);
    v26 = *(_DWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 4);
    v27 = *(_DWORD *)v2;
    while ( 1 )
    {
      v28 = a2;
      if ( *(_QWORD *)(a2 + 1840) )
        v28 = *(_QWORD *)(a2 + 1840);
      v29 = 0;
      v30 = (int *)(v28 + *(unsigned int *)(v28 + 1400));
      if ( v27 && v26 <= v24 )
      {
        v29 = v26;
        v30 = (int *)(v28 + v25);
      }
      if ( v29 != v24 )
        break;
LABEL_53:
      v27 = 1;
      v25 = (_DWORD)v30 - v28;
      v26 = v29;
      if ( *v30 != 11 || *(_QWORD *)(a2 + 1672) )
      {
        v39 = (_QWORD *)*((_QWORD *)v30 + 1);
        v40 = (unsigned int)v30[4];
        v41 = (const char *)v39;
        *(_DWORD *)(a2 + 1432) += v40;
        v42 = *(_DWORD *)(a2 + 1412);
        v43 = *(_QWORD *)(a2 + 1416);
        if ( v39 < (_QWORD *)((char *)v39 + v40) )
        {
          do
          {
            _mm_prefetch(v41, 0);
            v41 += 64;
          }
          while ( v41 < (const char *)v39 + v40 );
        }
        if ( (unsigned int)v40 >= 8 )
        {
          v44 = v40 >> 3;
          do
          {
            v43 = __ROL8__(*v39++ ^ v43, v42);
            LODWORD(v40) = v40 - 8;
            --v44;
          }
          while ( v44 );
        }
        for ( ; (_DWORD)v40; LODWORD(v40) = v40 - 1 )
        {
          v45 = *(unsigned __int8 *)v39;
          v39 = (_QWORD *)((char *)v39 + 1);
          v43 = __ROL8__(v45 ^ v43, v42);
        }
        for ( i = v43; ; LODWORD(v43) = i ^ v43 )
        {
          i >>= 31;
          if ( !i )
            break;
        }
        v47 = (unsigned int)v30[5];
        v48 = v43 & 0x7FFFFFFF;
        if ( v48 != (_DWORD)v47 )
        {
          if ( !*(_DWORD *)(a2 + 1544) )
            *(_QWORD *)(*(_QWORD *)(a2 + 1176) + 24LL) = v47 ^ v48;
          v49 = *((_QWORD *)v30 + 1);
          if ( !*(_DWORD *)(a2 + 1544) )
          {
            *(_QWORD *)(a2 + 1552) = a2 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(a2 + 1560) = (char *)v30 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(a2 + 1568) = *v30;
            *(_QWORD *)(a2 + 1576) = v49;
            *(_DWORD *)(a2 + 1544) = 1;
          }
        }
      }
      ++v24;
      v23 = 2LL;
      if ( v24 >= *(_DWORD *)(a2 + 1360) )
      {
        *(_DWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v25;
        *(_DWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 4) = v26;
        *(_DWORD *)v2 = 1;
        goto LABEL_72;
      }
    }
    v31 = v24 - v29;
    v29 = v24;
    while ( 1 )
    {
      v32 = *v30;
      if ( *v30 > 17 )
      {
        switch ( v32 )
        {
          case 19:
LABEL_51:
            v37 = 56LL;
            goto LABEL_52;
          case 28:
            v38 = *((unsigned __int16 *)v30 + 20);
            goto LABEL_41;
          case 30:
            v37 = (((v30[9] - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v30 + 20) + 2);
            goto LABEL_52;
        }
        if ( (unsigned int)(v32 - 33) <= 1 )
        {
          v37 = 20 * (unsigned int)(((v30[8] & 0xFFF) + (unsigned __int64)(unsigned int)v30[10] + 4095) >> 12) + 48;
          goto LABEL_52;
        }
      }
      else
      {
        if ( v32 == 17 )
          goto LABEL_51;
        v33 = v32 - 1;
        if ( !v33 )
        {
LABEL_43:
          v37 = 4 * (v30[4] / 0xCu) + 48;
          goto LABEL_52;
        }
        v34 = v33 - 6;
        if ( !v34 )
        {
          v37 = (unsigned int)(24 * (v30[6] + 2));
          goto LABEL_52;
        }
        v35 = v34 - 1;
        if ( !v35 )
        {
          v38 = *((unsigned __int16 *)v30 + 16);
LABEL_41:
          v37 = (v38 + 55) & 0xFFFFFFF8;
          goto LABEL_52;
        }
        v36 = v35 - 2;
        if ( !v36 )
        {
          v37 = (unsigned int)(16 * (v30[7] + 3));
          goto LABEL_52;
        }
        if ( v36 == 2 )
          goto LABEL_43;
      }
      v37 = 48LL;
LABEL_52:
      v30 = (int *)((char *)v30 + v37);
      if ( !--v31 )
        goto LABEL_53;
    }
  }
LABEL_72:
  if ( *(_DWORD *)(a2 + 1544) )
  {
    v50 = *(_QWORD *)(a2 + 1568);
    v51 = *(_QWORD *)(a2 + 1576);
    v52 = *(_QWORD *)(a2 + 1560);
    v53 = *(_QWORD *)(a2 + 1552);
    *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v50;
    *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v51;
    *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v52;
    *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v53;
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
    if ( (*(_DWORD *)(a2 + 1680) & 0x8000000) == 0 )
    {
      v57 = __readcr0();
      *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v57;
      __writecr0(v57 & 0xFFFFFFFFFFFEFFFFuLL);
      v58 = a2 + 1880;
      v59 = 0;
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
          ++v59;
        }
        while ( v59 < *(_DWORD *)(a2 + 1876) );
        v57 = *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
        v53 = *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
      }
      while ( v58 < v60 )
      {
        v66 = *(unsigned int *)(v58 + 8);
        v67 = v61;
        v68 = *(char **)v58;
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
        v58 += 16LL;
      }
      **(_BYTE **)(a2 + 488) = -61;
      __writecr0(v57);
      CurrentThread = *(struct _KTHREAD **)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
      v50 = *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
      v51 = *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
      v52 = *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
    }
    if ( *(_DWORD *)(a2 + 1592) && KeGetCurrentIrql() < 2u )
      __writecr8(2uLL);
    v72 = *(_DWORD *)(a2 + 1592);
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
                _interlockedbittestandset(&KeGetCurrentThread()->Header.Lock, (*(_DWORD *)(a2 + 1680) >> 10) & 0x1F);
              else
                _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a2 + 1216) + 832LL), 1uLL);
            }
            else
            {
              _interlockedbittestandset(
                &KeGetCurrentThread()->ApcState.Process->Header.Lock,
                (*(_DWORD *)(a2 + 1680) >> 10) & 0x1F);
            }
            goto LABEL_129;
          }
          v77 = *(volatile signed __int32 **)(a2 + 1136);
        }
        else
        {
          v77 = *(volatile signed __int32 **)(a2 + 1128);
        }
      }
      else
      {
        v77 = *(volatile signed __int32 **)(a2 + 1112);
      }
      _interlockedbittestandset64(v77, 0LL);
    }
LABEL_129:
    v93 = *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
    CurrentThread[1].InitialStack = 0LL;
    CurrentThread[1].ApcState.ApcListHead[1].Flink = 0LL;
    SdbpCheckDll(265, v53, v52, v51, v50, *(_QWORD *)(a2 + 336), v93);
    JUMPOUT(0x140237990LL);
  }
  v78 = a2 + *(unsigned int *)(a2 + 1376);
  if ( (*(_DWORD *)(a2 + 1680) & 0x10000000) != 0 )
  {
    v79 = __rdtsc();
    v80 = __ROR8__(v79, 3) ^ v79;
    LOBYTE(v79) = v80;
    v81 = (v80 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v81;
    v23 = ((unsigned __int8)v79 ^ (unsigned __int8)v81) & 0xF;
    v78 = (unsigned __int64)KiMachineCheckControl + 10 * (unsigned int)v23;
  }
  v82 = *(_QWORD **)(a2 + 1792);
  if ( v82 )
  {
    v83 = __rdtsc();
    v84 = (__ROR8__(v83, 3) ^ v83) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v94 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = *((_QWORD *)&v84 + 1);
    *((_QWORD *)&v84 + 1) ^= v84;
    v82[3] = *((_QWORD *)&v84 + 1);
    *(_QWORD *)&v84 = v78 ^ *((_QWORD *)&v84 + 1);
    v23 = a2 ^ *((_QWORD *)&v84 + 1);
    v82[4] = v84;
    v82[2] = v23;
    _InterlockedOr(v92, 0);
    *(_QWORD *)(a2 + 1304) = *(_QWORD *)(a2 + 680);
    *(_QWORD *)(a2 + 1312) = v82;
  }
  else
  {
    *(_QWORD *)(a2 + 1304) = v78;
    *(_QWORD *)(a2 + 1312) = a2;
  }
  *(_QWORD *)(a2 + 1288) = 0LL;
  LOBYTE(v85) = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(a2 + 560))(a2 + 1392, v23);
  (*(void (__fastcall **)(unsigned __int64, __int64))(a2 + 568))(a2 + 1392, v85);
  switch ( *(_DWORD *)(a2 + 1448) )
  {
    case 3:
      *(_QWORD *)(a2 + 1688) = KeGetCurrentThread();
      break;
    case 4:
      v90 = *(_QWORD *)(a2 + 1760);
      *(_QWORD *)(*(_QWORD *)(v90 + 64) ^ *(_QWORD *)(v90 + 56)) = v90 ^ *(_QWORD *)(v90 + 64) ^ *(_QWORD *)(v90 + 72);
      *(_QWORD *)(v90 + 72) = 0LL;
      *(_QWORD *)(v90 + 56) = 0LL;
      break;
    case 5:
      v86 = (char *)(a2 + 1696);
      v87 = (_QWORD *)(*(_QWORD *)(a2 + 1688) + 8LL);
      v88 = 8LL;
      do
      {
        v16 -= 8;
        *v87 = *(_QWORD *)v86;
        v86 += 8;
        ++v87;
        --v88;
      }
      while ( v88 );
      for ( ; v16; --v16 )
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
