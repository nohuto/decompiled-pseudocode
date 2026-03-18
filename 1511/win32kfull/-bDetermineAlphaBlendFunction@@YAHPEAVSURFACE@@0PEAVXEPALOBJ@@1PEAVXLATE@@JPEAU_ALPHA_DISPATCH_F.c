/*
 * XREFs of ?bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_FORMAT@@H@Z @ 0x1C003D638
 * Callers:
 *     EngAlphaBlend @ 0x1C003CDC0 (EngAlphaBlend.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bDetermineAlphaBlendFunction(
        struct SURFACE *a1,
        struct SURFACE *a2,
        struct XEPALOBJ *a3,
        struct XEPALOBJ *a4,
        struct XLATE *a5,
        int a6,
        struct _ALPHA_DISPATCH_FORMAT *a7)
{
  unsigned int v8; // edi
  char v9; // al
  __int64 (__fastcall *v10)(); // rax
  void (__fastcall *v11)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // r11
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  __int64 v20; // rax
  void (__fastcall *v21)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *); // rax
  __int64 v22; // rax
  void *v23; // rax
  int v24; // eax
  __int64 v25; // rax
  void *v26; // rax
  _DWORD *v27; // rcx
  void *v28; // rax
  int v29; // eax
  __int64 v30; // rax
  void (__fastcall *v31)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *); // rax
  _DWORD *v32; // rcx
  void (__fastcall *v33)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // rax
  __int64 (__fastcall *v34)(); // rax

  v8 = 1;
  v9 = *((_BYTE *)a7 + 43);
  *((_DWORD *)a7 + 11) = 0;
  *((_QWORD *)a7 + 4) = vAlphaPerPixelOnly;
  if ( (v9 & 1) != 0 )
  {
    v10 = vAlphaPerPixelAndConst;
    if ( *((_BYTE *)a7 + 42) == 0xFF )
      v10 = vAlphaPerPixelOnly;
    *((_QWORD *)a7 + 4) = v10;
  }
  else
  {
    *((_QWORD *)a7 + 4) = vAlphaConstOnly;
  }
  v11 = vLoadAndConvert32BitfieldsToBGRA;
  v12 = *((_DWORD *)a1 + 24) - 1;
  if ( !v12 )
  {
    *((_QWORD *)a7 + 2) = vLoadAndConvert1ToBGRA;
    v26 = &vConvertAndSaveBGRATo1;
    *(_DWORD *)a7 = 1;
    goto LABEL_68;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    *((_QWORD *)a7 + 2) = vLoadAndConvert4ToBGRA;
    v26 = &vConvertAndSaveBGRATo4;
    *(_DWORD *)a7 = 4;
    goto LABEL_68;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    *((_QWORD *)a7 + 2) = vLoadAndConvert8ToBGRA;
    v26 = &vConvertAndSaveBGRATo8;
    *(_DWORD *)a7 = 8;
LABEL_68:
    *((_QWORD *)a7 + 3) = v26;
    goto LABEL_14;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v27 = *(_DWORD **)(*(_QWORD *)a3 + 128LL);
    if ( *(_QWORD *)v27 == 0x7E00000F800LL && v27[2] == 31 )
    {
      *((_QWORD *)a7 + 2) = vLoadAndConvertRGB16_565ToBGRA;
      v28 = &vConvertAndSaveBGRAToRGB16_565;
    }
    else if ( *v27 == 31744 && v27[1] == 992 && v27[2] == 31 )
    {
      *((_QWORD *)a7 + 2) = vLoadAndConvertRGB16_555ToBGRA;
      v28 = &vConvertAndSaveBGRAToRGB16_555;
    }
    else
    {
      *((_QWORD *)a7 + 2) = vLoadAndConvert16BitfieldsToBGRA;
      v28 = &vConvertAndSaveBGRAToRGB16Bitfields;
    }
    *((_QWORD *)a7 + 3) = v28;
    *(_DWORD *)a7 = 16;
    goto LABEL_14;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v24 = *(_DWORD *)(*(_QWORD *)a3 + 24LL);
    if ( (v24 & 8) != 0
      || (v24 & 2) != 0
      && ((v25 = *(_QWORD *)(*(_QWORD *)a3 + 128LL), *(_QWORD *)v25 == 0xFF0000FF0000LL) && *(_DWORD *)(v25 + 8) == 255
       || !*(_DWORD *)v25 && !*(_DWORD *)(v25 + 4) && !*(_DWORD *)(v25 + 8)) )
    {
      *((_QWORD *)a7 + 2) = vLoadAndConvertBGR24ToBGRA;
      v26 = &vConvertAndSaveBGRAToBGR24;
    }
    else
    {
      *((_QWORD *)a7 + 2) = vLoadAndConvertRGB24ToBGRA;
      v26 = &vConvertAndSaveBGRAToRGB24;
    }
    *(_DWORD *)a7 = 24;
    goto LABEL_68;
  }
  if ( v16 == 1 )
  {
    v17 = *(_DWORD *)(*(_QWORD *)a3 + 24LL);
    if ( (v17 & 8) != 0
      || (v17 & 2) != 0
      && ((v22 = *(_QWORD *)(*(_QWORD *)a3 + 128LL), *(_QWORD *)v22 == 0xFF0000FF0000LL) && *(_DWORD *)(v22 + 8) == 255
       || !*(_DWORD *)v22 && !*(_DWORD *)(v22 + 4) && !*(_DWORD *)(v22 + 8)) )
    {
      *((_QWORD *)a7 + 2) = 0LL;
      *((_QWORD *)a7 + 3) = 0LL;
    }
    else
    {
      if ( (v17 & 4) != 0 )
      {
        *((_QWORD *)a7 + 2) = vLoadAndConvertRGB32ToBGRA;
        v23 = &vConvertAndSaveBGRAToRGB32;
      }
      else
      {
        *((_QWORD *)a7 + 2) = vLoadAndConvert32BitfieldsToBGRA;
        v23 = &vConvertAndSaveBGRATo32Bitfields;
      }
      *((_QWORD *)a7 + 3) = v23;
    }
    *(_DWORD *)a7 = 32;
  }
  else
  {
    v8 = 0;
  }
LABEL_14:
  switch ( *((_DWORD *)a2 + 24) )
  {
    case 1:
      *((_QWORD *)a7 + 1) = vLoadAndConvert1ToBGRA;
      *((_DWORD *)a7 + 1) = 1;
      break;
    case 2:
      *((_QWORD *)a7 + 1) = vLoadAndConvert4ToBGRA;
      *((_DWORD *)a7 + 1) = 4;
      break;
    case 3:
      *((_DWORD *)a7 + 1) = 8;
      *((_QWORD *)a7 + 1) = vLoadAndConvert8ToBGRA;
      break;
    case 4:
      v32 = *(_DWORD **)(*(_QWORD *)a4 + 128LL);
      if ( *(_QWORD *)v32 == 0x7E00000F800LL && v32[2] == 31 )
      {
        v33 = vLoadAndConvertRGB16_565ToBGRA;
      }
      else
      {
        if ( *v32 == 31744 && v32[1] == 992 && v32[2] == 31 )
        {
          *((_QWORD *)a7 + 1) = vLoadAndConvertRGB16_555ToBGRA;
LABEL_95:
          *((_DWORD *)a7 + 1) = 16;
          break;
        }
        v33 = vLoadAndConvert16BitfieldsToBGRA;
      }
      *((_QWORD *)a7 + 1) = v33;
      goto LABEL_95;
    case 5:
      v29 = *(_DWORD *)(*(_QWORD *)a4 + 24LL);
      if ( (v29 & 8) != 0
        || (v29 & 2) != 0
        && ((v30 = *(_QWORD *)(*(_QWORD *)a4 + 128LL), *(_QWORD *)v30 == 0xFF0000FF0000LL)
         && *(_DWORD *)(v30 + 8) == 255
         || !*(_DWORD *)v30 && !*(_DWORD *)(v30 + 4) && !*(_DWORD *)(v30 + 8)) )
      {
        v31 = vLoadAndConvertBGR24ToBGRA;
      }
      else
      {
        v31 = vLoadAndConvertRGB24ToBGRA;
      }
      *((_QWORD *)a7 + 1) = v31;
      *((_DWORD *)a7 + 1) = 24;
      break;
    case 6:
      if ( !a5
        || (v18 = *(_DWORD *)(*(_QWORD *)a4 + 24LL), (v18 & 8) != 0)
        || (v18 & 2) != 0
        && ((v20 = *(_QWORD *)(*(_QWORD *)a4 + 128LL), *(_QWORD *)v20 == 0xFF0000FF0000LL)
         && *(_DWORD *)(v20 + 8) == 255
         || !*(_DWORD *)v20 && !*(_DWORD *)(v20 + 4) && !*(_DWORD *)(v20 + 8)) )
      {
        *((_QWORD *)a7 + 1) = 0LL;
      }
      else
      {
        if ( (v18 & 4) != 0 )
          v11 = vLoadAndConvertRGB32ToBGRA;
        *((_QWORD *)a7 + 1) = v11;
      }
      *((_DWORD *)a7 + 1) = 32;
      break;
    default:
      v8 = 0;
      break;
  }
  if ( *((__int64 (__fastcall **)())a7 + 4) != vAlphaConstOnly )
    return v8;
  v21 = (void (__fastcall *)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))*((_QWORD *)a7 + 1);
  if ( *(_OWORD *)((char *)a7 + 8) == __PAIR128__(vLoadAndConvertRGB16_555ToBGRA, vLoadAndConvertRGB16_555ToBGRA) )
  {
    v34 = vAlphaConstOnly16_555;
LABEL_100:
    *((_QWORD *)a7 + 4) = v34;
    *((_BYTE *)a7 + 42) = (31 * *((unsigned __int8 *)a7 + 42) + 128) / 255;
LABEL_105:
    *((_QWORD *)a7 + 1) = 0LL;
    *((_QWORD *)a7 + 2) = 0LL;
    *((_QWORD *)a7 + 3) = 0LL;
    return v8;
  }
  if ( v21 == vLoadAndConvertRGB16_565ToBGRA
    && *((void (__fastcall **)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))a7 + 2) == vLoadAndConvertRGB16_565ToBGRA )
  {
    v34 = vAlphaConstOnly16_565;
    goto LABEL_100;
  }
  if ( v21 == vLoadAndConvertRGB24ToBGRA
    && *((void (__fastcall **)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))a7 + 2) == vLoadAndConvertRGB24ToBGRA )
  {
    *((_QWORD *)a7 + 4) = vAlphaConstOnly24;
    goto LABEL_105;
  }
  return v8;
}
