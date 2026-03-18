/*
 * XREFs of ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800A0020
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800A0628 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800A9608 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1801179F0 (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x180117CC0 (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 */

void __fastcall CAnimationTracking::UpdateLongtermStatistics(
        CAnimationTracking *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  CAnimationTracking *v9; // r10
  const unsigned __int16 *v11; // r13
  __int64 v13; // r14
  unsigned __int64 v14; // r9
  __int64 v15; // rdi
  unsigned __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r9d
  int v20; // r9d
  const struct _GUID *v21; // r8
  __int64 v22; // r9
  __int64 Data1_low; // rax
  __int64 v24; // rbx
  __int64 v25; // r11
  int v26; // r9d
  char *v27; // rax
  signed __int64 v28; // r8
  int v29; // ecx
  int v30; // edx
  bool v31; // zf
  unsigned int v32; // eax
  __int64 v33; // rax
  int v34; // r9d
  int v35; // r9d
  int v36; // r9d
  int v37; // r9d
  __int64 v38; // rax
  int v39; // r15d
  unsigned int v40; // r9d
  __int64 v41; // rdx
  __int64 v42; // r9
  unsigned __int64 v43; // r14
  __int64 v44; // rax
  unsigned __int16 *v45; // rax
  __int64 v47; // [rsp+60h] [rbp+18h]

  v9 = this;
  v11 = a3;
  v13 = 0LL;
  if ( !a3 )
  {
    v21 = a2;
    v15 = 314159LL;
    v22 = 2LL;
    do
    {
      Data1_low = LOBYTE(v21->Data1);
      v21 = (const struct _GUID *)((char *)v21 + 8);
      v15 = v21[-1].Data4[7]
          + 37
          * (v21[-1].Data4[6]
           + 37
           * (v21[-1].Data4[5]
            + 37
            * (v21[-1].Data4[4]
             + 37 * (v21[-1].Data4[3] + 37 * (v21[-1].Data4[2] + 37 * (v21[-1].Data4[1] + 37 * (Data1_low + 37 * v15)))))));
      --v22;
    }
    while ( v22 );
    goto LABEL_15;
  }
  v13 = -1LL;
  do
    ++v13;
  while ( a3[v13] );
  v14 = 2 * v13;
  v15 = 314159LL;
  if ( 2 * v13 >= 8 )
  {
    v16 = v14 >> 3;
    v14 -= 8 * (v14 >> 3);
    do
    {
      v17 = *((unsigned __int8 *)a3 + 6)
          + 37
          * (*((unsigned __int8 *)a3 + 5)
           + 37
           * (*((unsigned __int8 *)a3 + 4)
            + 37
            * (*((unsigned __int8 *)a3 + 3)
             + 37
             * (*((unsigned __int8 *)a3 + 2)
              + 37 * (*((unsigned __int8 *)a3 + 1) + 37 * (*(unsigned __int8 *)a3 + 37 * v15))))));
      v18 = *((unsigned __int8 *)a3 + 7);
      a3 += 4;
      v15 = v18 + 37 * v17;
      --v16;
    }
    while ( v16 );
    v9 = this;
  }
  if ( v14 - 1 > 6 )
    goto LABEL_15;
  v19 = v14 - 1;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      v34 = v20 - 1;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( v36 )
          {
            v37 = v36 - 1;
            if ( v37 )
            {
              if ( v37 != 1 )
                goto LABEL_15;
              v15 = *(unsigned __int8 *)a3 + 37 * v15;
              a3 = (const unsigned __int16 *)((char *)a3 + 1);
            }
            v15 = *(unsigned __int8 *)a3 + 37 * v15;
            a3 = (const unsigned __int16 *)((char *)a3 + 1);
          }
          v15 = *(unsigned __int8 *)a3 + 37 * v15;
          a3 = (const unsigned __int16 *)((char *)a3 + 1);
        }
        v15 = *(unsigned __int8 *)a3 + 37 * v15;
        a3 = (const unsigned __int16 *)((char *)a3 + 1);
      }
      v15 = *(unsigned __int8 *)a3 + 37 * v15;
      a3 = (const unsigned __int16 *)((char *)a3 + 1);
    }
    v15 = *(unsigned __int8 *)a3 + 37 * v15;
    a3 = (const unsigned __int16 *)((char *)a3 + 1);
  }
  v15 = *(unsigned __int8 *)a3 + 37 * v15;
LABEL_15:
  v24 = 0LL;
  v25 = v15 & (-1LL << (*((_BYTE *)v9 + 548) & 0x1F));
  while ( 1 )
  {
    if ( v24 )
      goto LABEL_19;
    v26 = *((_DWORD *)v9 + 137) >> 5;
    if ( !v26 )
      break;
    v24 = *((_QWORD *)v9 + 69)
        + 8LL
        * ((37
          * (BYTE6(v25)
           + 37
           * (BYTE5(v25)
            + 37
            * (BYTE4(v25)
             + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
          + HIBYTE(v25)) & (unsigned int)(v26 - 1));
LABEL_19:
    while ( 1 )
    {
      v24 = *(_QWORD *)v24;
      if ( (v24 & 1) != 0 )
        break;
      if ( v25 == ((-1LL << (*((_BYTE *)v9 + 548) & 0x1F)) & *(_QWORD *)(v24 + 8)) )
        goto LABEL_21;
    }
    v24 = 0LL;
LABEL_21:
    if ( !v24 )
      break;
    if ( a2 )
    {
      v33 = *(_QWORD *)(v24 + 32) - *(_QWORD *)&a2->Data1;
      if ( !v33 )
        v33 = *(_QWORD *)(v24 + 40) - *(_QWORD *)a2->Data4;
      v31 = v33 == 0;
      goto LABEL_28;
    }
    if ( *(_QWORD *)(v24 + 24) == v13 )
    {
      v27 = *(char **)(v24 + 16);
      v28 = (char *)v11 - v27;
      do
      {
        v29 = *(unsigned __int16 *)&v27[v28];
        v30 = *(unsigned __int16 *)v27 - v29;
        if ( v30 )
          break;
        v27 += 2;
      }
      while ( v29 );
      v31 = v30 == 0;
LABEL_28:
      if ( v31 )
        goto LABEL_29;
    }
  }
  if ( *((_DWORD *)v9 + 136) >= 0x40u )
    goto LABEL_41;
  v38 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          152LL);
  v24 = v38;
  if ( !v38 )
  {
LABEL_92:
    v24 = 0LL;
    goto LABEL_70;
  }
  *(_DWORD *)(v38 + 120) = -1;
  v39 = 0;
  *(_QWORD *)(v38 + 48) = v15;
  if ( a2 )
  {
    *(struct _GUID *)(v38 + 32) = *a2;
  }
  else
  {
    *(_QWORD *)(v38 + 24) = v13;
    v43 = v13 + 1;
    v44 = 2 * v43;
    if ( !is_mul_ok(v43, 2uLL) )
      v44 = -1LL;
    v45 = (unsigned __int16 *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                v44);
    *(_QWORD *)(v24 + 16) = v45;
    if ( v45 )
      StringCchCopyW(v45, v43, v11);
    else
      v39 = -2147024882;
  }
  *(_QWORD *)(v24 + 8) = v15;
  v40 = *((_DWORD *)this + 137);
  v47 = v15 & (-1LL << (v40 & 0x1F));
  v41 = *((_QWORD *)this + 69);
  v42 = (37
       * (BYTE6(v47)
        + 37
        * (BYTE5(v47)
         + 37
         * (BYTE4(v47)
          + 37
          * ((((unsigned int)v15 & (-1 << (v40 & 0x1F))) >> 24)
           + 37 * (BYTE2(v47) + 37 * (BYTE1(v47) + 37 * ((unsigned __int8)v47 + 11623883)))))))
       + HIBYTE(v47)) & ((v40 >> 5) - 1);
  *(_QWORD *)v24 = *(_QWORD *)(v41 + 8 * v42);
  *(_QWORD *)(v41 + 8 * v42) = v24;
  ++*((_DWORD *)this + 136);
  if ( v39 < 0 )
  {
    CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'(
      (CAnimationTracking::AnimationScenarioLongtermStatistics *)v24,
      v41);
    goto LABEL_92;
  }
LABEL_70:
  if ( !v24 )
    goto LABEL_41;
LABEL_29:
  ++*(_DWORD *)(v24 + 56);
  if ( a5 < *(_DWORD *)(v24 + 120) )
    *(_DWORD *)(v24 + 120) = a5;
  if ( a5 > *(_DWORD *)(v24 + 124) )
    *(_DWORD *)(v24 + 124) = a5;
  *(_QWORD *)(v24 + 128) += a6;
  *(_QWORD *)(v24 + 136) += a9;
  *(_QWORD *)(v24 + 144) += a7;
  if ( a4 )
  {
    if ( a4 > 5 )
    {
      if ( a4 <= 0xA )
      {
        ++*(_DWORD *)(v24 + 104);
      }
      else if ( a4 <= 0xF )
      {
        ++*(_DWORD *)(v24 + 108);
      }
      else if ( a4 > 0x19 )
      {
        if ( a4 <= 0x32 )
          ++*(_DWORD *)(v24 + 116);
      }
      else
      {
        ++*(_DWORD *)(v24 + 112);
      }
    }
    else
    {
      ++*(_DWORD *)(v24 + 100);
    }
  }
  else
  {
    ++*(_DWORD *)(v24 + 96);
  }
  if ( a7 >= 0x32 )
  {
    if ( a7 >= 0x64 )
    {
      if ( a7 < 0xC8 )
      {
        ++*(_DWORD *)(v24 + 76);
      }
      else if ( a7 < 0x1F4 )
      {
        ++*(_DWORD *)(v24 + 80);
      }
    }
    else
    {
      ++*(_DWORD *)(v24 + 72);
    }
  }
  else
  {
    ++*(_DWORD *)(v24 + 68);
  }
  if ( a8 < 0xC8 )
  {
    ++*(_DWORD *)(v24 + 84);
  }
  else if ( a8 >= 0x1F4 )
  {
    if ( a8 < 0x7D0 )
      ++*(_DWORD *)(v24 + 92);
  }
  else
  {
    ++*(_DWORD *)(v24 + 88);
  }
  v32 = 1000 * a9 / a5;
  if ( v32 >= 0x32 )
  {
    if ( v32 >= 0x96 )
      ++*(_DWORD *)(v24 + 64);
    else
      ++*(_DWORD *)(v24 + 60);
  }
LABEL_41:
  if ( GetTickCount64() >= *((_QWORD *)this + 70) )
    CAnimationTracking::SendLongtermStatistics(this);
}
