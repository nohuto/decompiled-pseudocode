/*
 * XREFs of DrvProcessSetDisplayConfigParameters @ 0x1C00BD928
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00A9D78 (VideoPortCalloutThread.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     DrvQueryDisplayConfig @ 0x1C004C1B0 (DrvQueryDisplayConfig.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C004C2C0 (DrvGetDisplayConfigBufferSizes.c)
 *     xxxUserSetDisplayConfig @ 0x1C006D7B0 (xxxUserSetDisplayConfig.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall DrvProcessSetDisplayConfigParameters(
        _DWORD *a1,
        unsigned int a2,
        const void *a3,
        __int64 a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // r14
  _DWORD *v11; // rbx
  __int64 v12; // r13
  __int64 result; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  unsigned int v16; // esi
  unsigned int v17; // r15d
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // eax
  int v21; // esi
  unsigned int v22; // esi
  _DWORD *v23; // rcx
  unsigned int v24; // edx
  _DWORD *v25; // rax
  unsigned int v26; // r8d
  __int16 v27; // ax
  __int16 v28; // ax
  int v29; // eax
  int v30; // eax
  unsigned int v31; // r15d
  __int64 v32; // r9
  unsigned int v33; // r8d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v34; // [rsp+28h] [rbp-59h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v35; // [rsp+28h] [rbp-59h]
  unsigned int v36; // [rsp+58h] [rbp-29h]
  bool v37; // [rsp+5Ch] [rbp-25h]
  int v38; // [rsp+60h] [rbp-21h] BYREF
  unsigned int v39; // [rsp+64h] [rbp-1Dh]
  int v40; // [rsp+68h] [rbp-19h] BYREF
  int v41; // [rsp+6Ch] [rbp-15h]
  unsigned int v42; // [rsp+70h] [rbp-11h] BYREF
  unsigned int v43; // [rsp+74h] [rbp-Dh]
  void *v44; // [rsp+78h] [rbp-9h]
  __int64 v45; // [rsp+80h] [rbp-1h]
  int v49; // [rsp+F0h] [rbp+6Fh]

  v49 = a4;
  v6 = (unsigned int)a5;
  v40 = -1;
  v8 = grpdeskRitInput;
  v9 = a2;
  v10 = (unsigned int)a4;
  v45 = grpdeskRitInput;
  v11 = 0LL;
  v44 = 0LL;
  v12 = 0LL;
  v37 = ((unsigned __int16)a5 & 0x8000) != 0;
  if ( ((unsigned __int8)a5 & 0xF) != 0 )
  {
    if ( ((unsigned __int8)a5 & 0x30) == 0 )
    {
      LODWORD(v34) = (_DWORD)a5;
      return xxxUserSetDisplayConfig(a2, a1, a4, (__int64)a3, v34, 0, 0, grpdeskRitInput, 0, 0LL);
    }
    v14 = (_QWORD *)WdLogNewEntry5_WdError(a1, 0LL, a3, a4);
    v14[3] = v6;
    v14[4] = v8;
    goto LABEL_5;
  }
  if ( !a1 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL, 0LL, a3, a4);
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
  LODWORD(a5) = 0;
  a6 = 0;
  v16 = (v6 & 0x20F) != 0 ? 4 : 2;
  v43 = v16;
  result = DrvGetDisplayConfigBufferSizes(v16, (__int64)&a5, (__int64)&a6);
  if ( (int)result < 0 )
    return result;
  v17 = (unsigned int)a5;
  v39 = (unsigned int)a5;
  v18 = v9 + (_DWORD)a5;
  v36 = a6;
  v19 = v10 + a6;
  LODWORD(a5) = v18;
  a6 += v10;
  if ( v18 )
  {
    v11 = PALLOCMEM2((unsigned int)(72 * v18), 1936876615LL, 1);
    if ( !v11 )
      return 3221225495LL;
    v18 = (int)a5;
    v19 = a6;
  }
  if ( v19 )
  {
    v44 = PALLOCMEM2(v19 << 6, 1936876615LL, 1);
    v12 = (__int64)v44;
    if ( !v44 )
    {
      if ( v11 )
        Win32FreePool();
      return 3221225495LL;
    }
    v18 = (int)a5;
    v19 = a6;
  }
  v42 = v19;
  v20 = v16 & 4;
  v38 = v18;
  v41 = v20;
  while ( 1 )
  {
    v21 = DrvQueryDisplayConfig(
            v16,
            &v38,
            (__int64)v11,
            (__int64)&v42,
            v12,
            (_DWORD *)((unsigned __int64)&v40 & -(__int64)(v20 != 0)));
    if ( v21 < 0 )
      break;
    if ( v38 != v39 )
    {
      v21 = -1071774893;
      break;
    }
    v22 = 0;
    if ( (_DWORD)v9 )
    {
      while ( v22 < v17 )
      {
        v23 = &v11[18 * v22];
        if ( *v23 == *a1 && v23[1] == a1[1] )
        {
          if ( v22 < (int)a5 - 1 )
            memmove(v23, v23 + 18, 72LL * ((unsigned int)a5 - v22 - 1));
          --v17;
        }
        else
        {
          ++v22;
        }
      }
      memmove(&v11[18 * v17], a1, 72LL * (unsigned int)v9);
    }
    if ( (_DWORD)v10 )
      memmove((void *)(v12 + ((unsigned __int64)v36 << 6)), a3, (unsigned __int64)(unsigned int)v10 << 6);
    if ( (v6 & 0x10) != 0 )
    {
      v24 = 0;
      if ( !(_DWORD)a5 )
        goto LABEL_58;
      do
      {
        v25 = &v11[18 * v24];
        if ( v37 )
          v25[3] |= 0xFFFF0000;
        else
          v25[3] = -1;
        v25[8] = -1;
        *(_QWORD *)(v25 + 11) = 128LL;
        ++v24;
        v25[10] = 1;
        v25[14] = 1;
        v25[13] = 0;
      }
      while ( v24 < (unsigned int)a5 );
    }
    else
    {
      v26 = v17;
      if ( v17 >= (unsigned int)a5 )
        goto LABEL_58;
      do
      {
        if ( v37 )
        {
          v27 = HIWORD(v11[18 * v26 + 3]);
          if ( v27 != -1 )
            HIWORD(v11[18 * v26 + 3]) = v36 + v27;
          v28 = HIWORD(v11[18 * v26 + 8]);
          if ( v28 != -1 )
            HIWORD(v11[18 * v26 + 8]) = v36 + v28;
          if ( (unsigned __int16)v11[18 * v26 + 8] != 0xFFFF )
            LOWORD(v11[18 * v26 + 8]) += v36;
        }
        else
        {
          v29 = v11[18 * v26 + 3];
          if ( v29 != -1 )
            v11[18 * v26 + 3] = v36 + v29;
          v30 = v11[18 * v26 + 8];
          if ( v30 != -1 )
            v11[18 * v26 + 8] = v36 + v30;
        }
        ++v26;
      }
      while ( v26 < (unsigned int)a5 );
      v12 = (__int64)v44;
    }
    LODWORD(v10) = v49;
LABEL_58:
    v31 = a2 + v17;
    v32 = v12;
    v33 = a6;
    if ( (v6 & 0x10) != 0 )
    {
      v32 = 0LL;
      v33 = 0;
    }
    LODWORD(v35) = v6;
    v21 = xxxUserSetDisplayConfig(v31, v11, v33, v32, v35, 0, 0, v45, 0, 0LL);
    if ( v21 != -1073741772 || (v6 & 0x10) == 0 )
      break;
    LODWORD(v9) = a2;
    v16 = v43;
    LODWORD(v6) = v6 & 0xFFFFEDCF | 0x1220;
    v20 = v41;
    v17 = v39;
  }
  if ( v11 )
    Win32FreePool();
  if ( v12 )
    Win32FreePool();
  return (unsigned int)v21;
}
