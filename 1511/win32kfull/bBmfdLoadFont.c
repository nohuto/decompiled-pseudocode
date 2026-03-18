/*
 * XREFs of bBmfdLoadFont @ 0x1C011F62C
 * Callers:
 *     BmfdLoadFontFileTE @ 0x1C0108680 (BmfdLoadFontFileTE.c)
 * Callees:
 *     bDescStr @ 0x1C01035F4 (bDescStr.c)
 *     bConvertFontRes @ 0x1C01175F0 (bConvertFontRes.c)
 *     StringCchLengthA @ 0x1C0117704 (StringCchLengthA.c)
 *     bBMFDIFIMETRICS @ 0x1C011AB60 (bBMFDIFIMETRICS.c)
 *     bInitWinResData @ 0x1C011F988 (bInitWinResData.c)
 *     bGetFntResource @ 0x1C011FB44 (bGetFntResource.c)
 *     bVerifyFNTQuick @ 0x1C0122F94 (bVerifyFNTQuick.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall bBmfdLoadFont(__int64 a1, __int64 a2, __int64 a3, int a4, PVOID *a5)
{
  unsigned int v5; // r14d
  int v6; // eax
  unsigned __int64 v7; // r12
  __int64 v8; // r9
  unsigned int v9; // r15d
  unsigned int v10; // esi
  unsigned int v11; // r13d
  int v12; // edi
  ULONG v13; // edi
  unsigned int v14; // ecx
  unsigned __int64 v15; // rax
  int v16; // ecx
  char *v17; // rax
  _DWORD *v18; // rdi
  unsigned int v19; // r15d
  int v20; // ecx
  char *v21; // r14
  int v22; // edx
  unsigned int v23; // eax
  __int128 v24; // xmm0
  __int64 v25; // xmm1_8
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rbx
  __int128 v30; // xmm0
  __int64 v31; // xmm1_8
  __int64 v32; // rcx
  __int64 v33; // r9
  int v35; // [rsp+34h] [rbp-CCh]
  size_t pcchLength; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B0h]
  unsigned int v39; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h]
  __int64 v41; // [rsp+68h] [rbp-98h]
  _BYTE v42[24]; // [rsp+70h] [rbp-90h] BYREF
  int v43; // [rsp+88h] [rbp-78h]
  char psz[256]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = 0;
  v6 = a4;
  v7 = (unsigned int)a3;
  v8 = a2;
  v40 = a2;
  v9 = 0;
  *a5 = 0LL;
  v41 = a1;
  v37 = 0uLL;
  v38 = 0LL;
  if ( v6 == 2 )
  {
    if ( !(unsigned int)bInitWinResData(a2, (unsigned int)a3, v42) )
      return 0LL;
    v10 = v43;
    v6 = a4;
    v8 = v40;
  }
  else
  {
    v10 = 1;
    *(_QWORD *)&v37 = a2;
    v43 = 1;
    DWORD2(v37) = 0;
    HIDWORD(v37) = a3;
    v38 = 0LL;
  }
  v11 = 0;
  v35 = 0;
  v12 = 176 * v10 + 40;
  if ( v6 == 2 )
  {
    if ( (unsigned int)bDescStr(v8, v7, psz) )
    {
      StringCchLengthA(psz, 0x100uLL, &pcchLength);
      v35 = 176 * v10 + 40;
      v12 += 2 * pcchLength + 2;
      v11 = 2 * pcchLength + 2;
    }
    v6 = a4;
  }
  v13 = (v12 + 7) & 0xFFFFFFF8;
  LODWORD(pcchLength) = v13;
  if ( v10 )
  {
    while ( 1 )
    {
      if ( v6 == 2 )
      {
        if ( !(unsigned int)bGetFntResource(v42, v5, &v37) )
          return 0LL;
        v10 = v43;
      }
      v14 = v9 + HIDWORD(v37);
      if ( v9 + HIDWORD(v37) < v9 )
        return 0LL;
      v9 += HIDWORD(v37);
      if ( v14 > (unsigned int)v7 )
        return 0LL;
      if ( !(unsigned int)bVerifyFNTQuick(&v37, a2, a3, v8) )
        return 0LL;
      if ( !(unsigned int)bBMFDIFIMETRICS(v40, v7, 0LL, (__int64 *)&v37, &v39) )
        return 0LL;
      v15 = 2LL * v39;
      if ( v15 > 0xFFFFFFFF )
        return 0LL;
      v16 = v15 + v13;
      v39 *= 2;
      if ( (unsigned int)v15 + v13 < v13 )
        return 0LL;
      v13 += v15;
      if ( v16 - (int)pcchLength > (unsigned int)(2 * v7) )
        return 0LL;
      if ( ++v5 >= v10 )
        break;
      v6 = a4;
    }
  }
  v17 = (char *)EngAllocMem(0, v13, 0x64666D42u);
  *a5 = v17;
  v18 = v17;
  if ( !v17 )
  {
    EngSetLastError(8u);
    return 0LL;
  }
  v19 = 0;
  v20 = a4;
  v21 = &v17[(unsigned int)pcchLength];
  v22 = v35;
  *((_DWORD *)v17 + 2) = a4;
  *(_QWORD *)v17 = 255LL;
  *((_QWORD *)v17 + 2) = v41;
  v23 = 0;
  LODWORD(pcchLength) = 0;
  v18[7] = v10;
  v18[8] = v11;
  v18[9] = v35;
  if ( v10 )
  {
    while ( 1 )
    {
      if ( v20 == 2 )
      {
        if ( !(unsigned int)bGetFntResource(v42, v23, &v37) )
          break;
        v10 = v43;
      }
      v24 = v37;
      v25 = v38;
      v26 = 88LL * v19;
      v27 = (__int64)v18 + v26 + 40;
      *(_DWORD *)((char *)v18 + v26 + 72) = 0;
      *(_QWORD *)((char *)v18 + v26 + 120) = v21;
      LODWORD(v26) = v40;
      *(_OWORD *)v27 = v24;
      *(_QWORD *)(v27 + 16) = v25;
      if ( !(unsigned int)bConvertFontRes(v26, v7, (__int64 *)&v37, v27) )
        break;
      ++v19;
      v21 += *(unsigned int *)v21;
      if ( LOWORD(v18[22 * v19]) )
      {
        v30 = v37;
        v31 = v38;
        v32 = 88LL * v19;
        v33 = (__int64)v18 + v32 + 40;
        *(_DWORD *)((char *)v18 + v32 + 72) = 1;
        *(_QWORD *)((char *)v18 + v32 + 120) = v21;
        LODWORD(v32) = v40;
        *(_OWORD *)v33 = v30;
        *(_QWORD *)(v33 + 16) = v31;
        if ( !(unsigned int)bConvertFontRes(v32, v7, (__int64 *)&v37, v33) )
          break;
        ++v19;
        v21 += *(unsigned int *)v21;
      }
      v23 = pcchLength + 1;
      LODWORD(pcchLength) = v23;
      if ( v23 >= v10 )
      {
        v22 = v35;
        goto LABEL_31;
      }
      v20 = a4;
    }
    EngFreeMem(*a5);
    *a5 = 0LL;
    return 0LL;
  }
LABEL_31:
  v18[7] = v19;
  if ( v11 )
  {
    v28 = v22;
    RtlMultiByteToUnicodeN((PWCH)((char *)v18 + v22), 2 * (v11 >> 1), 0LL, psz, v11 >> 1);
    *(_WORD *)((char *)v18 + 2 * ((unsigned __int64)v11 >> 1) + v28 - 2) = 0;
  }
  v18[6] = 0;
  return 1LL;
}
