/*
 * XREFs of DrvProcessSetDisplayConfigParameters @ 0x1C00C960C
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00B30B4 (VideoPortCalloutThread.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0049DA0 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C0049E20 (DrvQueryDisplayConfig.c)
 *     xxxUserSetDisplayConfig @ 0x1C005D2A0 (xxxUserSetDisplayConfig.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall DrvProcessSetDisplayConfigParameters(
        _DWORD *a1,
        unsigned int a2,
        const void *a3,
        __int64 a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // rdi
  __int64 v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // r12
  __int64 v12; // r14
  _WORD *v13; // rbx
  __int64 v14; // r13
  __int64 result; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  unsigned int v18; // esi
  unsigned int v19; // r15d
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // esi
  unsigned int v24; // esi
  _DWORD *v25; // rcx
  unsigned int v26; // esi
  unsigned int v27; // edx
  char v28; // r14
  char *v29; // rax
  unsigned int v30; // r8d
  char v31; // r14
  __int16 v32; // ax
  __int16 v33; // ax
  int v34; // eax
  int v35; // eax
  __int64 v36; // r9
  unsigned int v37; // r8d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v38; // [rsp+28h] [rbp-71h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v39; // [rsp+28h] [rbp-71h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v40; // [rsp+30h] [rbp-69h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v41; // [rsp+30h] [rbp-69h]
  int v42; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v43; // [rsp+6Ch] [rbp-2Dh]
  unsigned int v44; // [rsp+70h] [rbp-29h]
  unsigned int v45; // [rsp+74h] [rbp-25h]
  int v46; // [rsp+78h] [rbp-21h] BYREF
  int v47; // [rsp+7Ch] [rbp-1Dh] BYREF
  unsigned int v48; // [rsp+80h] [rbp-19h]
  int v49; // [rsp+84h] [rbp-15h]
  void *v50; // [rsp+88h] [rbp-11h]
  __int64 v51; // [rsp+90h] [rbp-9h]
  int v55; // [rsp+100h] [rbp+67h]

  v55 = a4;
  v7 = (unsigned int)a5;
  v46 = -1;
  v9 = grpdeskRitInput;
  v10 = (unsigned int)a5 >> 15;
  LOBYTE(v10) = ((unsigned __int16)a5 & 0x8000) != 0;
  v11 = a2;
  v12 = (unsigned int)a4;
  v51 = grpdeskRitInput;
  v13 = 0LL;
  v50 = 0LL;
  v14 = 0LL;
  v44 = v10;
  if ( ((unsigned __int8)a5 & 0xF) != 0 )
  {
    if ( ((unsigned __int8)a5 & 0x30) == 0 )
    {
      LODWORD(v40) = 0;
      LODWORD(v38) = (_DWORD)a5;
      return xxxUserSetDisplayConfig(a2, (__int64)a1, a4, (__int64)a3, v38, v40, 0, grpdeskRitInput, 0, 0LL, 0LL, a7);
    }
    v16 = (_QWORD *)WdLogNewEntry5_WdError(a1, 0LL, a3, a4);
    v16[3] = v7;
    v16[4] = v9;
    goto LABEL_5;
  }
  if ( !a1 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL, 0LL, a3, a4);
    v17[3] = v11;
    v17[4] = a3;
    v17[5] = v12;
    v17[6] = v7;
    v17[7] = v9;
    WdLogEvent5_WdAssertion(v17);
    return 3221225485LL;
  }
  if ( !a3 && (_DWORD)a4 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(a1, 0LL, 0LL, a4);
    v16[3] = v12;
    v16[4] = v7;
    v16[5] = v9;
LABEL_5:
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  LODWORD(a5) = 0;
  a6 = 0;
  v18 = (v7 & 0x20F) != 0 ? 4 : 2;
  v48 = v18;
  result = DrvGetDisplayConfigBufferSizes(v18, (__int64)&a5, (__int64)&a6);
  if ( (int)result < 0 )
    return result;
  v19 = (unsigned int)a5;
  v45 = (unsigned int)a5;
  v20 = v11 + (_DWORD)a5;
  v43 = a6;
  v21 = v12 + a6;
  LODWORD(a5) = v20;
  a6 += v12;
  if ( v20 )
  {
    v13 = PALLOCMEM2((unsigned int)(72 * v20), 1936876615LL, 1);
    if ( !v13 )
      return 3221225495LL;
    v20 = (int)a5;
    v21 = a6;
  }
  if ( v21 )
  {
    v50 = PALLOCMEM2((unsigned int)(v21 << 6), 1936876615LL, 1);
    v14 = (__int64)v50;
    if ( !v50 )
    {
      if ( v13 )
        Win32FreePool();
      return 3221225495LL;
    }
    v20 = (int)a5;
    v21 = a6;
  }
  v47 = v21;
  v22 = v18 & 4;
  v42 = v20;
  v49 = v22;
  while ( 1 )
  {
    v23 = DrvQueryDisplayConfig(
            v18,
            &v42,
            (__int64)v13,
            (__int64)&v47,
            v14,
            (_DWORD *)((unsigned __int64)&v46 & -(__int64)(v22 != 0)));
    if ( v23 < 0 )
      break;
    if ( v42 != v45 )
    {
      v23 = -1071774893;
      break;
    }
    v24 = 0;
    if ( (_DWORD)v11 )
    {
      while ( v24 < v19 )
      {
        v25 = &v13[36 * v24];
        if ( *v25 == *a1 && v25[1] == a1[1] )
        {
          if ( v24 < (int)a5 - 1 )
            memmove(v25, v25 + 18, 72LL * ((unsigned int)a5 - v24 - 1));
          --v19;
        }
        else
        {
          ++v24;
        }
      }
      memmove(&v13[36 * v19], a1, 72LL * (unsigned int)v11);
    }
    v26 = v43;
    if ( (_DWORD)v12 )
      memmove((void *)(v14 + ((unsigned __int64)v43 << 6)), a3, (unsigned __int64)(unsigned int)v12 << 6);
    if ( (v7 & 0x10) != 0 )
    {
      v27 = 0;
      if ( !(_DWORD)a5 )
        goto LABEL_60;
      v28 = v44;
      do
      {
        v29 = (char *)&v13[36 * v27];
        if ( v28 )
          *((_DWORD *)v29 + 3) |= 0xFFFF0000;
        else
          *((_DWORD *)v29 + 3) = -1;
        *((_DWORD *)v29 + 8) = -1;
        *(_QWORD *)(v29 + 44) = 128LL;
        ++v27;
        *((_DWORD *)v29 + 10) = 1;
        *((_DWORD *)v29 + 14) = 1;
        *((_DWORD *)v29 + 13) = 0;
      }
      while ( v27 < (unsigned int)a5 );
    }
    else
    {
      v30 = v19;
      if ( v19 >= (unsigned int)a5 )
        goto LABEL_60;
      v31 = v44;
      do
      {
        if ( v31 )
        {
          v32 = v13[36 * v30 + 7];
          if ( v32 != -1 )
            v13[36 * v30 + 7] = v26 + v32;
          v33 = v13[36 * v30 + 17];
          if ( v33 != -1 )
            v13[36 * v30 + 17] = v26 + v33;
          if ( (unsigned __int16)*(_DWORD *)&v13[36 * v30 + 16] != 0xFFFF )
            v13[36 * v30 + 16] += v26;
        }
        else
        {
          v34 = *(_DWORD *)&v13[36 * v30 + 6];
          if ( v34 != -1 )
            *(_DWORD *)&v13[36 * v30 + 6] = v26 + v34;
          v35 = *(_DWORD *)&v13[36 * v30 + 16];
          if ( v35 != -1 )
            *(_DWORD *)&v13[36 * v30 + 16] = v26 + v35;
        }
        ++v30;
      }
      while ( v30 < (unsigned int)a5 );
      v14 = (__int64)v50;
    }
    LODWORD(v12) = v55;
LABEL_60:
    v36 = v14;
    v37 = a6;
    if ( (v7 & 0x10) != 0 )
    {
      v36 = 0LL;
      v37 = 0;
    }
    LODWORD(v41) = 0;
    LODWORD(v39) = v7;
    v23 = xxxUserSetDisplayConfig(a2 + v19, (__int64)v13, v37, v36, v39, v41, 0, v51, 0, 0LL, 0LL, a7);
    if ( v23 != -1073741772 || (v7 & 0x10) == 0 )
      break;
    LODWORD(v11) = a2;
    v18 = v48;
    LODWORD(v7) = v7 & 0xFFFFEDCF | 0x1220;
    v22 = v49;
    v19 = v45;
  }
  if ( v13 )
    Win32FreePool();
  if ( v14 )
    Win32FreePool();
  return (unsigned int)v23;
}
