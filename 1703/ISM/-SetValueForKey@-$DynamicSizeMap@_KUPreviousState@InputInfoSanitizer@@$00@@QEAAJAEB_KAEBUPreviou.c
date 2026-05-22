/*
 * XREFs of ?SetValueForKey@?$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_KAEBUPreviousState@InputInfoSanitizer@@@Z @ 0x18007F1D8
 * Callers:
 *     ?OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z @ 0x18007E4D8 (-OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

__int64 __fastcall DynamicSizeMap<unsigned __int64,InputInfoSanitizer::PreviousState,1>::SetValueForKey(
        __int64 a1,
        _QWORD *a2,
        _OWORD *a3)
{
  __int64 v3; // r14
  unsigned int v4; // edi
  char v5; // r9
  __int64 v6; // r11
  _QWORD *v8; // r12
  __int64 v9; // rsi
  char v10; // di
  int v11; // r9d
  unsigned int v12; // r8d
  unsigned int v13; // edx
  __int64 v14; // r10
  unsigned int v15; // r15d
  _OWORD *v16; // rax
  __int64 v17; // r8
  __int128 v18; // xmm1
  void *v19; // rdi
  unsigned int v20; // r13d
  unsigned __int64 v21; // r15
  _DWORD *v22; // rax
  __int64 v23; // rcx
  void *v24; // r14
  _DWORD *v25; // rdi
  _DWORD *v26; // r12
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  _OWORD *v30; // rcx
  __int64 v31; // r8
  __int128 v32; // xmm1
  unsigned int v34; // [rsp+80h] [rbp+8h]
  void *v36; // [rsp+98h] [rbp+20h]

  v3 = *a2;
  v4 = 0;
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 16);
  v8 = a2;
  v9 = a1;
  if ( *a2 == v6 )
  {
    v10 = 87;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_5;
    v11 = 153;
LABEL_4:
    Template_qqq(a1, &MinInput_Warning_CheckResult, 0, v11, v10);
LABEL_5:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v12 = *(_DWORD *)(a1 + 8);
  v13 = 0;
  if ( !v12 )
    goto LABEL_16;
  v14 = *(_QWORD *)a1;
  v15 = 0;
  do
  {
    a1 = 536LL * v13;
    if ( *(_QWORD *)(a1 + v14) == v3 )
    {
      v16 = (_OWORD *)(536LL * v13 + v14 + 8);
      v17 = 4LL;
      do
      {
        *v16 = *a3;
        v16[1] = a3[1];
        v16[2] = a3[2];
        v16[3] = a3[3];
        v16[4] = a3[4];
        v16[5] = a3[5];
        v16[6] = a3[6];
        v16 += 8;
        v18 = a3[7];
        a3 += 8;
        *(v16 - 1) = v18;
        --v17;
      }
      while ( v17 );
      *v16 = *a3;
      return v4;
    }
    if ( !v5 && *(_QWORD *)(a1 + v14) == v6 )
    {
      v15 = v13;
      v5 = 1;
    }
    ++v13;
  }
  while ( v13 < v12 );
  if ( v5 )
  {
LABEL_38:
    v29 = 536LL * v15;
    *(_QWORD *)(v29 + *(_QWORD *)v9) = *v8;
    v30 = (_OWORD *)(v29 + *(_QWORD *)v9 + 8LL);
    v31 = 4LL;
    do
    {
      *v30 = *a3;
      v30[1] = a3[1];
      v30[2] = a3[2];
      v30[3] = a3[3];
      v30[4] = a3[4];
      v30[5] = a3[5];
      v30[6] = a3[6];
      v30 += 8;
      v32 = a3[7];
      a3 += 8;
      *(v30 - 1) = v32;
      --v31;
    }
    while ( v31 );
    *v30 = *a3;
    ++*(_DWORD *)(v9 + 12);
    return v4;
  }
LABEL_16:
  if ( *(_DWORD *)(v9 + 12) == v12 )
  {
    v19 = *(void **)v9;
    v20 = 2 * v12;
    v21 = 2 * v12;
    v34 = v12;
    v36 = *(void **)v9;
    v22 = operator new[](saturated_mul(v21, 0x218uLL));
    v24 = v22;
    if ( v22 )
    {
      if ( v20 )
      {
        v25 = v22 + 132;
        do
        {
          *v25 = -1;
          v26 = v25 - 130;
          --v21;
          memset(v25 - 130, 0, 0x208uLL);
          v23 = 10LL;
          do
          {
            *v26 = *v25;
            v26 += 13;
            --v23;
          }
          while ( v23 );
          v25[1] = 0;
          v25 += 134;
        }
        while ( v21 );
        v19 = v36;
        v8 = a2;
      }
    }
    else
    {
      v24 = 0LL;
    }
    *(_QWORD *)v9 = v24;
    if ( !v24 )
    {
      v10 = 14;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_5;
      Template_qqq(v23, &MinInput_Warning_CheckResult, 0, 386, 14);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_5;
      v11 = 185;
      goto LABEL_4;
    }
    memcpy_0(v24, v19, 536LL * *(unsigned int *)(v9 + 8));
    if ( *(_DWORD *)(v9 + 8) < v20 )
    {
      v27 = 536LL * *(unsigned int *)(v9 + 8);
      v28 = v20 - *(_DWORD *)(v9 + 8);
      do
      {
        *(_QWORD *)(v27 + *(_QWORD *)v9) = *(_QWORD *)(v9 + 16);
        v27 += 536LL;
        --v28;
      }
      while ( v28 );
    }
    *(_DWORD *)(v9 + 8) = v20;
    operator delete(v19);
    v15 = v34;
    v4 = 0;
    goto LABEL_38;
  }
  v4 = -2147467259;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(a1, &MinInput_Warning_CheckResult, 0, 180, 5);
  return v4;
}
