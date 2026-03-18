/*
 * XREFs of DrvProcessSetDisplayConfigParameters @ 0x1C00BC010
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00A53F4 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvQueryDisplayConfig @ 0x1C001E870 (DrvQueryDisplayConfig.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C001E980 (DrvGetDisplayConfigBufferSizes.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     xxxUserSetDisplayConfig @ 0x1C006DFB0 (xxxUserSetDisplayConfig.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

__int64 __fastcall DrvProcessSetDisplayConfigParameters(
        __int64 a1,
        unsigned int a2,
        const void *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // r14
  char *v11; // rbx
  __int64 v12; // r13
  __int64 result; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  unsigned int v16; // esi
  unsigned int v17; // r15d
  unsigned int v18; // ecx
  unsigned int v19; // eax
  int v20; // eax
  int v21; // esi
  unsigned int v22; // esi
  char *v23; // rcx
  unsigned int v24; // edx
  char *v25; // rax
  unsigned int v26; // r8d
  __int16 v27; // ax
  __int16 v28; // ax
  int v29; // eax
  int v30; // eax
  unsigned int v31; // r15d
  __int64 v32; // r9
  __int64 v33; // r8
  unsigned int v34; // [rsp+58h] [rbp-29h]
  bool v35; // [rsp+5Ch] [rbp-25h]
  unsigned int v36; // [rsp+60h] [rbp-21h] BYREF
  unsigned int v37; // [rsp+64h] [rbp-1Dh]
  int v38; // [rsp+68h] [rbp-19h] BYREF
  int v39; // [rsp+6Ch] [rbp-15h]
  unsigned int v40; // [rsp+70h] [rbp-11h] BYREF
  unsigned int v41; // [rsp+74h] [rbp-Dh]
  void *v42; // [rsp+78h] [rbp-9h]
  __int64 v43; // [rsp+80h] [rbp-1h]
  int v47; // [rsp+F0h] [rbp+6Fh]

  v47 = a4;
  v6 = a5;
  v38 = -1;
  v8 = grpdeskRitInput;
  v9 = a2;
  v10 = (unsigned int)a4;
  v43 = grpdeskRitInput;
  v11 = 0LL;
  v42 = 0LL;
  v12 = 0LL;
  v35 = (a5 & 0x8000) != 0;
  if ( (a5 & 0xF) != 0 )
  {
    if ( (a5 & 0x30) == 0 )
      return xxxUserSetDisplayConfig(a2, (char *)a1, (unsigned int)a4, (__int64)a3, a5, 0, 0, grpdeskRitInput, 0, 0LL);
    v14 = (_QWORD *)WdLogNewEntry5_WdError(a1, 0LL, a3, a4);
    v14[3] = v6;
    v14[4] = v8;
    goto LABEL_5;
  }
  if ( !a1 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL);
    v15[3] = v9;
    v15[4] = a3;
    v15[5] = v10;
    v15[6] = v6;
    v15[7] = v8;
    WdLogEvent5_WdAssertion(v15);
    return 3221225485LL;
  }
  if ( !a3 && (_DWORD)a4 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(a1, 0LL, 0LL, a4);
    v14[3] = v10;
    v14[4] = v6;
    v14[5] = v8;
LABEL_5:
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  a5 = 0;
  a6 = 0;
  v16 = (v6 & 0x20F) != 0 ? 4 : 2;
  v41 = v16;
  result = DrvGetDisplayConfigBufferSizes(v16, (__int64)&a5, (__int64)&a6);
  if ( (int)result < 0 )
    return result;
  v17 = a5;
  v37 = a5;
  v18 = v9 + a5;
  v34 = a6;
  v19 = v10 + a6;
  a5 = v18;
  a6 += v10;
  if ( v18 )
  {
    v11 = (char *)PALLOCMEM2(72 * v18, 1936876615LL, 1);
    if ( !v11 )
      return 3221225495LL;
    v18 = a5;
    v19 = a6;
  }
  if ( v19 )
  {
    v42 = PALLOCMEM2(v19 << 6, 1936876615LL, 1);
    v12 = (__int64)v42;
    if ( !v42 )
    {
      if ( v11 )
        Win32FreePool();
      return 3221225495LL;
    }
    v18 = a5;
    v19 = a6;
  }
  v40 = v19;
  v20 = v16 & 4;
  v36 = v18;
  v39 = v20;
  while ( 1 )
  {
    v21 = DrvQueryDisplayConfig(
            v16,
            &v36,
            (__int64)v11,
            (__int64)&v40,
            v12,
            (_DWORD *)((unsigned __int64)&v38 & -(__int64)(v20 != 0)));
    if ( v21 < 0 )
      break;
    if ( v36 != v37 )
    {
      v21 = -1071774893;
      break;
    }
    v22 = 0;
    if ( (_DWORD)v9 )
    {
      while ( v22 < v17 )
      {
        v23 = &v11[72 * v22];
        if ( *(_DWORD *)v23 == *(_DWORD *)a1 && *((_DWORD *)v23 + 1) == *(_DWORD *)(a1 + 4) )
        {
          if ( v22 < a5 - 1 )
            memmove(v23, v23 + 72, 72LL * (a5 - v22 - 1));
          --v17;
        }
        else
        {
          ++v22;
        }
      }
      memmove(&v11[72 * v17], (const void *)a1, 72LL * (unsigned int)v9);
    }
    if ( (_DWORD)v10 )
      memmove((void *)(v12 + ((unsigned __int64)v34 << 6)), a3, (unsigned __int64)(unsigned int)v10 << 6);
    if ( (v6 & 0x10) != 0 )
    {
      v24 = 0;
      if ( !a5 )
        goto LABEL_58;
      do
      {
        v25 = &v11[72 * v24];
        if ( v35 )
          *((_DWORD *)v25 + 3) |= 0xFFFF0000;
        else
          *((_DWORD *)v25 + 3) = -1;
        *((_DWORD *)v25 + 8) = -1;
        *(_QWORD *)(v25 + 44) = 128LL;
        ++v24;
        *((_DWORD *)v25 + 10) = 1;
        *((_DWORD *)v25 + 14) = 1;
        *((_DWORD *)v25 + 13) = 0;
      }
      while ( v24 < a5 );
    }
    else
    {
      v26 = v17;
      if ( v17 >= a5 )
        goto LABEL_58;
      do
      {
        if ( v35 )
        {
          v27 = *(_WORD *)&v11[72 * v26 + 14];
          if ( v27 != -1 )
            *(_WORD *)&v11[72 * v26 + 14] = v34 + v27;
          v28 = *(_WORD *)&v11[72 * v26 + 34];
          if ( v28 != -1 )
            *(_WORD *)&v11[72 * v26 + 34] = v34 + v28;
          if ( (unsigned __int16)*(_DWORD *)&v11[72 * v26 + 32] != 0xFFFF )
            *(_WORD *)&v11[72 * v26 + 32] += v34;
        }
        else
        {
          v29 = *(_DWORD *)&v11[72 * v26 + 12];
          if ( v29 != -1 )
            *(_DWORD *)&v11[72 * v26 + 12] = v34 + v29;
          v30 = *(_DWORD *)&v11[72 * v26 + 32];
          if ( v30 != -1 )
            *(_DWORD *)&v11[72 * v26 + 32] = v34 + v30;
        }
        ++v26;
      }
      while ( v26 < a5 );
      v12 = (__int64)v42;
    }
    LODWORD(v10) = v47;
LABEL_58:
    v31 = a2 + v17;
    v32 = v12;
    v33 = a6;
    if ( (v6 & 0x10) != 0 )
    {
      v32 = 0LL;
      v33 = 0LL;
    }
    v21 = xxxUserSetDisplayConfig(v31, v11, v33, v32, v6, 0, 0, v43, 0, 0LL);
    if ( v21 != -1073741772 || (v6 & 0x10) == 0 )
      break;
    LODWORD(v9) = a2;
    v16 = v41;
    LODWORD(v6) = v6 & 0xFFFFEDCF | 0x1220;
    v20 = v39;
    v17 = v37;
  }
  if ( v11 )
    Win32FreePool();
  if ( v12 )
    Win32FreePool();
  return (unsigned int)v21;
}
