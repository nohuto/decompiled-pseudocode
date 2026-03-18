/*
 * XREFs of ?LogShaderStats@CTelemetryTracking@@QEAAXPEBGIIIMMM@Z @ 0x180118BD4
 * Callers:
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x18014E6CC (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTelemetryTracking::LogShaderStats(
        CTelemetryTracking *this,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        float a6,
        float a7,
        float a8)
{
  unsigned int v9; // esi
  __int64 v10; // r10
  unsigned __int8 *v13; // r11
  __int64 v14; // r10
  __int64 v15; // rbx
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r10d
  int v20; // r10d
  int v21; // r10d
  int v22; // r10d
  int v23; // r10d
  int v24; // r10d
  int v25; // r10d
  __int64 v26; // r11
  __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rsi
  unsigned __int64 v31; // rsi
  __int64 v32; // rax
  wchar_t *v33; // rax
  const wchar_t *v34; // r14
  wchar_t *v35; // rax
  const wchar_t *v36; // rax
  unsigned int v37; // r8d
  __int64 v38; // rcx
  __int64 v39; // rdx
  float v40; // xmm3_4
  unsigned int v41; // eax
  int v42; // eax
  float v43; // xmm1_4
  float v44; // xmm3_4
  float v45; // xmm2_4
  int v46; // eax
  __int64 v47; // [rsp+68h] [rbp+10h]
  __int64 v48; // [rsp+68h] [rbp+10h]

  if ( !a2 )
    return;
  v9 = a3;
  v10 = -1LL;
  v13 = a2;
  do
    ++v10;
  while ( *(_WORD *)&a2[2 * v10] );
  v14 = 2 * v10;
  v15 = 314159LL;
  if ( v14 >= 8 )
  {
    v16 = (unsigned __int64)v14 >> 3;
    v14 -= 8 * ((unsigned __int64)v14 >> 3);
    do
    {
      v17 = v13[6]
          + 37 * (v13[5] + 37 * (v13[4] + 37 * (v13[3] + 37 * (v13[2] + 37 * (v13[1] + 37 * (*v13 + 37 * v15))))));
      v18 = v13[7];
      v13 += 8;
      v15 = v18 + 37 * v17;
      --v16;
    }
    while ( v16 );
  }
  if ( (unsigned __int64)(v14 - 1) <= 6 )
  {
    v19 = v14 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( v24 )
              {
                if ( v24 != 1 )
                  goto LABEL_22;
                v15 = *v13++ + 37 * v15;
              }
              v15 = *v13++ + 37 * v15;
            }
            v15 = *v13++ + 37 * v15;
          }
          v15 = *v13++ + 37 * v15;
        }
        v15 = *v13++ + 37 * v15;
      }
      v15 = *v13++ + 37 * v15;
    }
    v15 = *v13 + 37 * v15;
  }
LABEL_22:
  v25 = *((_DWORD *)this + 129) >> 5;
  v26 = -1LL << (*((_BYTE *)this + 516) & 0x1F);
  v27 = v26 & v15;
  if ( v25 )
  {
    v47 = v26 & v15;
    v28 = *((_QWORD *)this + 65)
        + 8LL
        * ((37
          * (BYTE6(v47)
           + 37
           * (BYTE5(v47)
            + 37
            * (BYTE4(v47)
             + 37 * (BYTE3(v47) + 37 * (BYTE2(v47) + 37 * (BYTE1(v47) + 37 * ((unsigned __int8)v27 + 11623883)))))))
          + HIBYTE(v47)) & (unsigned int)(v25 - 1));
    while ( 1 )
    {
      v28 = *(_QWORD *)v28;
      if ( (v28 & 1) != 0 )
        break;
      if ( v27 == (v26 & *(_QWORD *)(v28 + 8)) )
        goto LABEL_28;
    }
    v28 = 0LL;
LABEL_28:
    if ( v28 )
      goto LABEL_47;
  }
  if ( *((_DWORD *)this + 128) < 0x40u )
  {
    v29 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            72LL);
    v28 = v29;
    if ( v29 )
    {
      *(_QWORD *)(v29 + 32) = v15;
      v30 = -1LL;
      do
        ++v30;
      while ( *(_WORD *)&a2[2 * v30] );
      v31 = v30 + 1;
      v32 = 2 * v31;
      if ( !is_mul_ok(v31, 2uLL) )
        v32 = -1LL;
      v33 = (wchar_t *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         v32);
      v34 = v33;
      if ( v33 )
      {
        if ( wcscpy_s(v33, v31, (const wchar_t *)a2) )
        {
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, const wchar_t *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v34);
          *(_QWORD *)(v28 + 16) = a2;
          *(_QWORD *)(v28 + 24) = 0LL;
        }
        else
        {
          v35 = wcschr(v34, 1u);
          if ( v35 )
            *v35 = 0;
          *(_QWORD *)(v28 + 16) = v34;
          if ( v35 )
            v36 = v35 + 1;
          else
            v36 = L"0.0.0.0";
          *(_QWORD *)(v28 + 24) = v36;
        }
      }
      v9 = a3;
      *(_QWORD *)(v28 + 8) = v15;
      v37 = *((_DWORD *)this + 129);
      v48 = v15 & (-1LL << (v37 & 0x1F));
      v38 = *((_QWORD *)this + 65);
      v39 = (37
           * (BYTE6(v48)
            + 37
            * (BYTE5(v48)
             + 37
             * (BYTE4(v48)
              + 37 * (BYTE3(v48) + 37 * (BYTE2(v48) + 37 * (BYTE1(v48) + 37 * ((unsigned __int8)v48 + 11623883)))))))
           + HIBYTE(v48)) & ((v37 >> 5) - 1);
      *(_QWORD *)v28 = *(_QWORD *)(v38 + 8 * v39);
      *(_QWORD *)(v38 + 8 * v39) = v28;
      ++*((_DWORD *)this + 128);
    }
    else
    {
      v28 = 0LL;
    }
    if ( v28 )
    {
LABEL_47:
      ++*(_DWORD *)(v28 + 64);
      v40 = *(float *)(v28 + 52);
      if ( *(_DWORD *)(v28 + 40) > v9 )
        v9 = *(_DWORD *)(v28 + 40);
      v41 = a5;
      if ( *(_DWORD *)(v28 + 44) > a4 )
        a4 = *(_DWORD *)(v28 + 44);
      if ( *(_DWORD *)(v28 + 48) > a5 )
        v41 = *(_DWORD *)(v28 + 48);
      *(_DWORD *)(v28 + 48) = v41;
      v42 = *(_DWORD *)(v28 + 64);
      *(_DWORD *)(v28 + 40) = v9;
      *(_DWORD *)(v28 + 44) = a4;
      v43 = a6 / (float)v42;
      v44 = v40 - (float)(v40 / (float)v42);
      v45 = (float)*(int *)(v28 + 64);
      v46 = *(_DWORD *)(v28 + 64);
      *(float *)(v28 + 52) = v44 + v43;
      *(float *)(v28 + 56) = (float)(*(float *)(v28 + 56) - (float)(*(float *)(v28 + 56) / v45)) + (float)(a7 / v45);
      *(float *)(v28 + 60) = (float)(*(float *)(v28 + 60) - (float)(*(float *)(v28 + 60) / (float)v46))
                           + (float)(a8 / (float)v46);
    }
  }
}
