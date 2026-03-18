/*
 * XREFs of NtGdiGetDIBitsInternal @ 0x1400B4540
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x14007BED4 (GreGetBitmapBitsSize.c)
 *     ?init_probe@?$umptr_w@E@@SA?AV1@PEAE_K1@Z @ 0x1400A4D70 (-init_probe@-$umptr_w@E@@SA-AV1@PEAE_K1@Z.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1400B4DDC (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400B544C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x1400B5808 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtGdiGetDIBitsInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int *Src,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  unsigned int *v9; // r14
  __int64 v10; // r15
  unsigned int v11; // r12d
  unsigned int v12; // edx
  unsigned int v13; // r10d
  int v14; // r9d
  unsigned __int16 v15; // ax
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  unsigned int v18; // esi
  unsigned int v19; // ecx
  unsigned int *v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // r10d
  int v23; // r9d
  unsigned __int16 v24; // ax
  unsigned int v25; // r8d
  unsigned int v26; // ecx
  unsigned int v27; // eax
  bool v28; // zf
  unsigned int BitmapBitsSize; // r13d
  volatile void *v30; // r11
  unsigned int v31; // eax
  __int64 inited; // rax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  unsigned int DIBits; // esi
  int v41; // [rsp+58h] [rbp-190h]
  __int64 v43; // [rsp+B0h] [rbp-138h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-130h]
  __int64 v45; // [rsp+C0h] [rbp-128h]
  __int16 v46; // [rsp+C8h] [rbp-120h]
  volatile void *v47; // [rsp+D0h] [rbp-118h]
  __int64 v48; // [rsp+D8h] [rbp-110h]
  unsigned int *v49; // [rsp+E0h] [rbp-108h]
  char v50[40]; // [rsp+E8h] [rbp-100h] BYREF
  _BYTE v51[112]; // [rsp+110h] [rbp-D8h] BYREF
  _DWORD v52[8]; // [rsp+180h] [rbp-68h] BYREF
  __int64 v53; // [rsp+1A0h] [rbp-48h]

  v48 = a2;
  v49 = Src;
  v8 = 0;
  v41 = 1;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0;
  memset(v52, 0, sizeof(v52));
  v53 = 0LL;
  v9 = v52;
  if ( a7 > 2 || !Src || !a2 )
    return 0LL;
  v10 = a5 & -(__int64)(a4 != 0);
  v47 = (volatile void *)v10;
  GreProbeForReadFromUntrustedVa(Src, 4uLL, 1uLL);
  v11 = *Src;
  GreProbeForWriteToUntrustedVa(Src, *Src, 1uLL);
  if ( !v10 )
  {
    if ( v11 == 12 && !*((_WORD *)Src + 5) )
    {
      v8 = 12;
      goto LABEL_57;
    }
    if ( v11 >= 0x28 && !*((_WORD *)Src + 7) )
      v8 = 40;
  }
  if ( v8 )
  {
LABEL_57:
    memmove(v52, Src, v8);
    v52[0] = v8;
    goto LABEL_60;
  }
  if ( v11 == 40 )
    Src[8] = 0;
  v12 = a7;
  if ( v11 == 12 )
  {
    v13 = 12;
    v18 = 3;
    v14 = 3;
    v15 = *((_WORD *)Src + 5);
    v16 = 0;
    v17 = 0;
  }
  else
  {
    if ( v11 < 0x28 )
    {
      v18 = 3;
      goto LABEL_97;
    }
    v13 = v11;
    v14 = 4;
    v15 = *((_WORD *)Src + 7);
    v16 = Src[8];
    v17 = Src[4];
    v18 = 3;
  }
  if ( v17 != 3 )
  {
    switch ( v17 )
    {
      case 0u:
        if ( v15 != 1 )
        {
          if ( v15 != 4 )
          {
            if ( v15 != 8 )
            {
              if ( a7 == 1 )
                v12 = 0;
              v19 = 0;
              if ( v15 != 32 && v15 != 16 && v15 != 24 )
                break;
              goto LABEL_23;
            }
LABEL_125:
            v19 = 256;
            goto LABEL_23;
          }
LABEL_139:
          v19 = 16;
          goto LABEL_23;
        }
LABEL_95:
        v19 = 2;
        goto LABEL_23;
      case 0xAu:
        v33 = v15 - 1;
        if ( !v33 )
          goto LABEL_95;
        v34 = v33 - 3;
        if ( !v34 )
          goto LABEL_139;
        v35 = v34 - 4;
        if ( !v35 )
          goto LABEL_125;
        if ( v35 == 24 )
        {
LABEL_137:
          v19 = 0;
          goto LABEL_23;
        }
        break;
      case 2u:
      case 0xCu:
        if ( v15 == 4 )
          goto LABEL_139;
        break;
      case 1u:
      case 0xBu:
        if ( v15 == 8 )
          goto LABEL_125;
        break;
      default:
        if ( v17 - 4 <= 1 )
          goto LABEL_137;
        break;
    }
LABEL_97:
    v8 = 0;
    goto LABEL_29;
  }
  if ( a7 == 1 )
    v12 = 0;
  if ( v15 != 32 && v15 != 16 )
    goto LABEL_97;
  v16 = 0;
  if ( v11 <= 0x28 )
    v16 = 3;
  v19 = 3;
  if ( v11 > 0x28 )
    v19 = 0;
LABEL_23:
  if ( v16 && v16 <= v19 )
    v19 = v16;
  if ( v12 == 1 )
  {
    v14 = 2;
  }
  else if ( v12 == 2 )
  {
    v14 = 0;
  }
  v8 = (v13 + v14 * v19 + 3) & 0xFFFFFFFC;
  if ( v8 < v13 )
    v8 = 0;
LABEL_29:
  if ( v8 )
  {
    v20 = (unsigned int *)Win32AllocPoolZInit(v8, 1886221383LL);
    v9 = v20;
    if ( !v20 )
      goto LABEL_60;
    GreProbeAndReadFromUntrustedVa(v20, v8, Src, v8, 1uLL);
    *v9 = v11;
    v21 = a7;
    if ( v11 == 12 )
    {
      v22 = 12;
      v23 = 3;
      v24 = *((_WORD *)v9 + 5);
      v25 = 0;
      v26 = 0;
    }
    else
    {
      if ( v11 < 0x28 )
        goto LABEL_100;
      v22 = v11;
      v23 = 4;
      v24 = *((_WORD *)v9 + 7);
      v25 = v9[8];
      v26 = v9[4];
    }
    switch ( v26 )
    {
      case 3u:
        if ( a7 == 1 )
          v21 = 0;
        if ( v24 != 32 && v24 != 16 )
          break;
        v25 = 0;
        if ( v11 > 0x28 )
          v18 = 0;
        else
          v25 = 3;
LABEL_41:
        if ( v25 && v25 <= v18 )
          v18 = v25;
        if ( v21 == 1 )
        {
          v23 = 2;
        }
        else if ( v21 == 2 )
        {
          v23 = 0;
        }
        v27 = (v22 + v23 * v18 + 3) & 0xFFFFFFFC;
        if ( v27 < v22 )
          v27 = 0;
LABEL_47:
        if ( v27 != v8 )
        {
LABEL_120:
          v8 = 0;
          goto LABEL_59;
        }
        if ( v11 >= 0x28 )
          v9[8] = 0;
        if ( !a4 )
        {
LABEL_60:
          v30 = v47;
          if ( !v47 || !v9 )
            goto LABEL_59;
          if ( *v9 < 0x28 || (v31 = v9[4], v31 != 1) && v31 != 2 || v9[5] )
          {
            BitmapBitsSize = a8;
            if ( a8 || (BitmapBitsSize = GreGetBitmapBitsSize((__int64)v9)) != 0 )
            {
              inited = umptr_w<unsigned char>::init_probe((__int64)v50, v30, BitmapBitsSize, 4u);
              v43 = *(_QWORD *)inited;
              v44 = *(_QWORD *)(inited + 8);
              v45 = *(_QWORD *)(inited + 16);
              v46 = *(_WORD *)(inited + 24);
            }
            v8 &= -(v43 != 0);
            goto LABEL_147;
          }
          goto LABEL_120;
        }
        if ( v11 < 0x28 )
        {
          if ( *((_WORD *)v9 + 2) && *((_WORD *)v9 + 4) )
          {
            v28 = *((_WORD *)v9 + 5) == 0;
LABEL_55:
            if ( !v28 )
            {
              v41 = 0;
              goto LABEL_60;
            }
          }
        }
        else if ( v9[1] && *((_WORD *)v9 + 6) )
        {
          v28 = *((_WORD *)v9 + 7) == 0;
          goto LABEL_55;
        }
        v41 = 1;
        goto LABEL_60;
      case 0u:
        if ( v24 != 1 )
        {
          if ( v24 != 4 )
          {
            if ( v24 != 8 )
            {
              if ( a7 == 1 )
                v21 = 0;
              v18 = 0;
              if ( v24 != 32 && v24 != 16 && v24 != 24 )
                break;
              goto LABEL_41;
            }
LABEL_130:
            v18 = 256;
            goto LABEL_41;
          }
LABEL_144:
          v18 = 16;
          goto LABEL_41;
        }
LABEL_98:
        v18 = 2;
        goto LABEL_41;
      case 0xAu:
        v36 = v24 - 1;
        if ( !v36 )
          goto LABEL_98;
        v37 = v36 - 3;
        if ( !v37 )
          goto LABEL_144;
        v38 = v37 - 4;
        if ( !v38 )
          goto LABEL_130;
        if ( v38 == 24 )
        {
LABEL_142:
          v18 = 0;
          goto LABEL_41;
        }
        break;
      case 2u:
      case 0xCu:
        if ( v24 == 4 )
          goto LABEL_144;
        break;
      case 1u:
      case 0xBu:
        if ( v24 == 8 )
          goto LABEL_130;
        break;
      default:
        if ( v26 - 4 <= 1 )
          goto LABEL_142;
        break;
    }
LABEL_100:
    v27 = 0;
    goto LABEL_47;
  }
LABEL_59:
  BitmapBitsSize = a8;
LABEL_147:
  if ( v43 && v41 || !v8 || !v9 )
  {
    DIBits = 0;
  }
  else
  {
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v51, a1);
    DIBits = GrepGetDIBits((OPTAPIDCOBJ *)v51, (__int64)&v43, v9, a7, BitmapBitsSize, v8);
    if ( DIBits )
      memmove(Src, v9, v8);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v51);
  }
  if ( v9 )
  {
    if ( v9 != v52 )
      Win32FreePool(v9);
  }
  return DIBits;
}
