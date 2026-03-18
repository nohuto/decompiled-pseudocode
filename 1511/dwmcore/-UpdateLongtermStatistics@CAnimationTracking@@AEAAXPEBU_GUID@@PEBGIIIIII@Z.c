/*
 * XREFs of ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800289D0
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180028FF8 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800A89A8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x180102424 (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x180102718 (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 */

void __fastcall CAnimationTracking::UpdateLongtermStatistics(
        CAnimationTracking *this,
        const struct _GUID *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  CAnimationTracking *v9; // rdi
  const unsigned __int16 *v11; // r10
  __int64 v13; // r12
  unsigned __int64 v14; // r9
  __int64 v15; // rbp
  unsigned __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r9d
  int v20; // r9d
  __int64 v21; // r14
  __int64 v22; // r11
  int v23; // r9d
  char *v24; // rax
  signed __int64 v25; // r8
  int v26; // ecx
  int v27; // edx
  bool v28; // zf
  unsigned int v29; // eax
  const struct _GUID *v30; // r8
  __int64 v31; // r9
  __int64 Data1_low; // rax
  __int64 v33; // rax
  int v34; // r9d
  int v35; // r9d
  int v36; // r9d
  int v37; // r9d
  __int64 v38; // rax
  int v39; // ebx
  unsigned __int64 v40; // r12
  __int64 v41; // rdi
  unsigned __int16 *v42; // rax
  unsigned int v43; // r9d
  __int64 v44; // rdx
  __int64 v45; // r9
  unsigned __int16 *v47; // [rsp+70h] [rbp+18h]
  unsigned __int16 *v48; // [rsp+70h] [rbp+18h]

  v47 = a3;
  v9 = this;
  v11 = a3;
  v13 = 0LL;
  if ( !a3 )
  {
    v30 = a2;
    v15 = 314159LL;
    v31 = 2LL;
    do
    {
      Data1_low = LOBYTE(v30->Data1);
      v30 = (const struct _GUID *)((char *)v30 + 8);
      v15 = v30[-1].Data4[7]
          + 37
          * (v30[-1].Data4[6]
           + 37
           * (v30[-1].Data4[5]
            + 37
            * (v30[-1].Data4[4]
             + 37 * (v30[-1].Data4[3] + 37 * (v30[-1].Data4[2] + 37 * (v30[-1].Data4[1] + 37 * (Data1_low + 37 * v15)))))));
      --v31;
    }
    while ( v31 );
    goto LABEL_13;
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
    v11 = v47;
  }
  if ( v14 - 1 > 6 )
    goto LABEL_13;
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
                goto LABEL_13;
              v15 = *(unsigned __int8 *)a3 + 37 * v15;
              a3 = (unsigned __int16 *)((char *)a3 + 1);
            }
            v15 = *(unsigned __int8 *)a3 + 37 * v15;
            a3 = (unsigned __int16 *)((char *)a3 + 1);
          }
          v15 = *(unsigned __int8 *)a3 + 37 * v15;
          a3 = (unsigned __int16 *)((char *)a3 + 1);
        }
        v15 = *(unsigned __int8 *)a3 + 37 * v15;
        a3 = (unsigned __int16 *)((char *)a3 + 1);
      }
      v15 = *(unsigned __int8 *)a3 + 37 * v15;
      a3 = (unsigned __int16 *)((char *)a3 + 1);
    }
    v15 = *(unsigned __int8 *)a3 + 37 * v15;
    a3 = (unsigned __int16 *)((char *)a3 + 1);
  }
  v15 = *(unsigned __int8 *)a3 + 37 * v15;
LABEL_13:
  v21 = 0LL;
  v22 = v15 & (-1LL << (*((_BYTE *)v9 + 548) & 0x1F));
  while ( 1 )
  {
    if ( v21 )
      goto LABEL_17;
    v23 = *((_DWORD *)v9 + 137) >> 5;
    if ( !v23 )
      break;
    v21 = *((_QWORD *)v9 + 69)
        + 8LL
        * ((37
          * (BYTE6(v22)
           + 37
           * (BYTE5(v22)
            + 37
            * (BYTE4(v22)
             + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))
          + HIBYTE(v22)) & (unsigned int)(v23 - 1));
LABEL_17:
    while ( 1 )
    {
      v21 = *(_QWORD *)v21;
      if ( (v21 & 1) != 0 )
        break;
      if ( v22 == ((-1LL << (*((_BYTE *)v9 + 548) & 0x1F)) & *(_QWORD *)(v21 + 8)) )
        goto LABEL_19;
    }
    v21 = 0LL;
LABEL_19:
    if ( !v21 )
      break;
    if ( a2 )
    {
      v33 = *(_QWORD *)(v21 + 32) - *(_QWORD *)&a2->Data1;
      if ( !v33 )
        v33 = *(_QWORD *)(v21 + 40) - *(_QWORD *)a2->Data4;
      v28 = v33 == 0;
      goto LABEL_26;
    }
    if ( *(_QWORD *)(v21 + 24) == v13 )
    {
      v24 = *(char **)(v21 + 16);
      v25 = (char *)v11 - v24;
      do
      {
        v26 = *(unsigned __int16 *)&v24[v25];
        v27 = *(unsigned __int16 *)v24 - v26;
        if ( v27 )
          break;
        v24 += 2;
      }
      while ( v26 );
      v28 = v27 == 0;
LABEL_26:
      if ( v28 )
        goto LABEL_27;
    }
  }
  if ( *((_DWORD *)v9 + 136) >= 0x40u )
    goto LABEL_40;
  v38 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          152LL);
  v21 = v38;
  if ( !v38 )
  {
    v9 = this;
    goto LABEL_94;
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
    v40 = v13 + 1;
    v41 = 2 * v40;
    if ( !is_mul_ok(v40, 2uLL) )
      v41 = -1LL;
    v42 = (unsigned __int16 *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                v41);
    *(_QWORD *)(v21 + 16) = v42;
    if ( v42 )
    {
      v39 = 0;
      StringCchCopyW(v42, v40, v47);
    }
    else
    {
      v39 = -2147024882;
    }
  }
  v9 = this;
  *(_QWORD *)(v21 + 8) = v15;
  v43 = *((_DWORD *)this + 137);
  v48 = (unsigned __int16 *)(v15 & (-1LL << (v43 & 0x1F)));
  v44 = *((_QWORD *)this + 69);
  v45 = (37
       * (BYTE6(v48)
        + 37
        * (BYTE5(v48)
         + 37
         * (BYTE4(v48)
          + 37
          * ((((unsigned int)v15 & (-1 << (v43 & 0x1F))) >> 24)
           + 37 * (BYTE2(v48) + 37 * (BYTE1(v48) + 37 * ((unsigned __int8)v48 + 11623883)))))))
       + HIBYTE(v48)) & ((v43 >> 5) - 1);
  *(_QWORD *)v21 = *(_QWORD *)(v44 + 8 * v45);
  *(_QWORD *)(v44 + 8 * v45) = v21;
  ++*((_DWORD *)this + 136);
  if ( v39 < 0 )
  {
    CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'(
      (CAnimationTracking::AnimationScenarioLongtermStatistics *)v21,
      v44);
LABEL_94:
    v21 = 0LL;
  }
  if ( !v21 )
    goto LABEL_40;
LABEL_27:
  ++*(_DWORD *)(v21 + 56);
  if ( a5 < *(_DWORD *)(v21 + 120) )
    *(_DWORD *)(v21 + 120) = a5;
  if ( a5 > *(_DWORD *)(v21 + 124) )
    *(_DWORD *)(v21 + 124) = a5;
  *(_QWORD *)(v21 + 128) += a6;
  *(_QWORD *)(v21 + 136) += a9;
  *(_QWORD *)(v21 + 144) += a7;
  if ( a4 )
  {
    if ( a4 > 5 )
    {
      if ( a4 <= 0xA )
      {
        ++*(_DWORD *)(v21 + 104);
      }
      else if ( a4 <= 0xF )
      {
        ++*(_DWORD *)(v21 + 108);
      }
      else if ( a4 > 0x19 )
      {
        if ( a4 <= 0x32 )
          ++*(_DWORD *)(v21 + 116);
      }
      else
      {
        ++*(_DWORD *)(v21 + 112);
      }
    }
    else
    {
      ++*(_DWORD *)(v21 + 100);
    }
  }
  else
  {
    ++*(_DWORD *)(v21 + 96);
  }
  if ( a7 >= 0x32 )
  {
    if ( a7 < 0x64 )
    {
      ++*(_DWORD *)(v21 + 72);
    }
    else if ( a7 >= 0xC8 )
    {
      if ( a7 < 0x1F4 )
        ++*(_DWORD *)(v21 + 80);
    }
    else
    {
      ++*(_DWORD *)(v21 + 76);
    }
  }
  else
  {
    ++*(_DWORD *)(v21 + 68);
  }
  if ( a8 < 0xC8 )
  {
    ++*(_DWORD *)(v21 + 84);
  }
  else if ( a8 < 0x1F4 )
  {
    ++*(_DWORD *)(v21 + 88);
  }
  else if ( a8 < 0x7D0 )
  {
    ++*(_DWORD *)(v21 + 92);
  }
  v29 = 1000 * a9 / a5;
  if ( v29 >= 0x32 )
  {
    if ( v29 >= 0x96 )
      ++*(_DWORD *)(v21 + 64);
    else
      ++*(_DWORD *)(v21 + 60);
  }
LABEL_40:
  if ( GetTickCount64() >= *((_QWORD *)v9 + 70) )
    CAnimationTracking::SendLongtermStatistics(v9);
}
