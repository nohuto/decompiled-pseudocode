/*
 * XREFs of GreExtCreatePen @ 0x1C00E4EE8
 * Callers:
 *     GreCreatePen @ 0x1C00E4E68 (GreCreatePen.c)
 *     NtGdiExtCreatePen @ 0x1C02A6670 (NtGdiExtCreatePen.c)
 * Callees:
 *     ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1C0005888 (-hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00E5208 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00E5234 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     GreCreateDIBBrush @ 0x1C02B1998 (GreCreateDIBBrush.c)
 */

__int64 __fastcall GreExtCreatePen(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        int *a8,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  __int64 v11; // rbx
  int v13; // r14d
  int v14; // r13d
  unsigned int v15; // r10d
  void *v17; // rsi
  BOOL v18; // ecx
  __int64 v19; // r9
  int v20; // eax
  int v21; // eax
  unsigned int v22; // r15d
  __int64 v24; // r9
  HBRUSH SolidBrushInternal; // rax
  HBRUSH v26; // r14
  __int64 v27; // rdi
  bool v29; // zf
  int v30; // eax
  ULONG v31; // ecx
  __int64 v32; // rax
  float *v33; // r8
  float *v34; // r11
  int v35; // r10d
  int v36; // edx
  int v37; // ecx
  int v38; // edx
  int v39; // ecx
  int v40; // eax
  int v41; // [rsp+38h] [rbp-51h]
  char v42; // [rsp+3Ch] [rbp-4Dh]
  int v43; // [rsp+40h] [rbp-49h]
  _QWORD v44[15]; // [rsp+50h] [rbp-39h] BYREF
  int v46; // [rsp+E0h] [rbp+57h]

  v11 = 0LL;
  v46 = 0;
  v13 = a1 & 0xF0000;
  v42 = 0;
  v43 = a1 & 0xF0000;
  v14 = a1 & 0xF;
  v15 = a4;
  v17 = 0LL;
  if ( a2 < 0 )
    a2 = -a2;
  v18 = a2 < 0;
  if ( (a1 & 0xFFF000F0) != 0 )
    v18 = 1;
  if ( v14 == 5 )
    return (__int64)*(&gahStockObjects + 8);
  v19 = 0x10000LL;
  if ( v13 )
  {
    if ( v13 == 0x10000 )
      goto LABEL_8;
    goto LABEL_60;
  }
  if ( a3 && (a3 != 2 || ((a6 - 8) & 0xFFFFFFFFFFFFFFFDuLL) != 0) )
LABEL_60:
    v18 = 1;
LABEL_8:
  if ( a2 != 1 && !v13 && !a10 )
    v18 = 1;
  v20 = a1 & 0xF000;
  if ( (a1 & 0xF000) != 0 )
  {
    if ( v20 == 4096 )
    {
      v42 = 1;
    }
    else if ( v20 == 0x2000 )
    {
      v42 = 2;
    }
    else
    {
      v18 = 1;
    }
  }
  else
  {
    v42 = 0;
  }
  v21 = a1 & 0xF00;
  if ( (a1 & 0xF00) != 0 )
  {
    if ( v21 == 256 )
    {
      v41 = 1;
    }
    else if ( v21 == 512 )
    {
      v41 = 2;
    }
    else
    {
      v18 = 1;
    }
  }
  else
  {
    v41 = 0;
  }
  v22 = a7;
  if ( v14 == 7 )
  {
    if ( a7 )
    {
LABEL_15:
      if ( a7 <= 0x10 )
        goto LABEL_16;
    }
  }
  else if ( !a7 )
  {
    goto LABEL_15;
  }
  v18 = 1;
LABEL_16:
  if ( v13 == 0x10000 )
  {
    switch ( v14 )
    {
      case 0:
        goto LABEL_18;
      case 1:
        v22 = 2;
        a8 = (int *)&gaulGeometricDash;
        goto LABEL_18;
      case 2:
        v22 = 2;
        a8 = (int *)&gaulGeometricDot;
        goto LABEL_18;
      case 3:
        v22 = 4;
        a8 = (int *)&gaulGeometricDashDot;
        goto LABEL_18;
      case 4:
        v22 = 6;
        a8 = (int *)&gaulGeometricDashDotDot;
        goto LABEL_18;
    }
    v30 = v14 - 6;
    v29 = v14 == 6;
  }
  else
  {
    switch ( v14 )
    {
      case 0:
        goto LABEL_18;
      case 1:
        v22 = 2;
        v17 = &galeCosmeticDash;
        goto LABEL_45;
      case 2:
        v22 = 8;
        v17 = &galeCosmeticDot;
        goto LABEL_45;
      case 3:
        v22 = 4;
        v17 = &galeCosmeticDashDot;
        goto LABEL_45;
      case 4:
        v22 = 6;
        v17 = &galeCosmeticDashDotDot;
LABEL_45:
        v46 = 1;
        goto LABEL_18;
      case 6:
        if ( !a10 )
          v18 = 1;
        goto LABEL_18;
    }
    v30 = v14 - 7;
    v29 = v14 == 7;
  }
  if ( !v29 && v30 != 1 )
    goto LABEL_89;
LABEL_18:
  if ( v18 )
  {
LABEL_89:
    v31 = 87;
LABEL_91:
    EngSetLastError(v31);
    return 0LL;
  }
  if ( v22 && !v17 )
  {
    v32 = (__int64)PALLOCMEM2(4 * v22, 2037674823LL, 0);
    v17 = (void *)v32;
    if ( !v32 )
    {
      v31 = 8;
      goto LABEL_91;
    }
    v33 = (float *)v32;
    v34 = (float *)(v32 + 4LL * v22);
    if ( !v13 || a10 )
    {
      v38 = 1;
      v19 = 0LL;
      v39 = 1;
      if ( !a8 )
        goto LABEL_88;
      do
      {
        if ( v33 >= v34 )
          break;
        v40 = *a8;
        *(_DWORD *)v33 = *a8;
        if ( v39 >= v40 )
          v39 = v40;
        if ( v38 <= v40 )
          v38 = v40;
        v19 = (unsigned int)(v40 + v19);
        ++v33;
        ++a8;
      }
      while ( a8 );
      if ( !a8 || v39 <= 0 || v38 > 0x3FFF || (int)v19 > 0x3FFF )
        goto LABEL_88;
    }
    else
    {
      v35 = 0;
      v36 = 0;
      if ( !a8 )
        goto LABEL_88;
      v19 = -v32;
      do
      {
        if ( v33 >= v34 )
          break;
        v37 = *a8;
        if ( v14 != 7 )
        {
          if ( v41 != 2 )
            v37 += (((_BYTE)v33 - (_BYTE)v32) & 4) != 0 ? 1 : -1;
          v37 *= a2;
        }
        if ( v36 >= v37 )
          v36 = v37;
        v35 += v37;
        *v33++ = (float)v37;
        ++a8;
      }
      while ( a8 );
      v17 = (void *)v32;
      if ( !a8 || v36 < 0 || v35 <= 0 )
      {
LABEL_88:
        Win32FreePool(v17);
        goto LABEL_89;
      }
    }
    v15 = a4;
  }
  switch ( a3 )
  {
    case 0:
      if ( a2 || (v24 = 1LL, v14) )
        v24 = 0LL;
      SolidBrushInternal = (HBRUSH)hCreateSolidBrushInternal(v15, 1LL, a11, v24);
      break;
    case 1:
      if ( v17 && !v46 )
        Win32FreePool(v17);
      return (__int64)*(&gahStockObjects + 8);
    case 2:
      SolidBrushInternal = (HBRUSH)hCreateHatchBrushInternal(a6, v15, 1);
      break;
    case 3:
      SolidBrushInternal = (HBRUSH)GreCreatePatternBrushInternal(a6, 1LL, 0LL, v19);
      break;
    case 6:
      SolidBrushInternal = (HBRUSH)GreCreateDIBBrush(a6, v15, a9, 0LL, 1, a5);
      break;
    default:
      EngSetLastError(0x57u);
      goto LABEL_128;
  }
  v26 = SolidBrushInternal;
  if ( !SolidBrushInternal )
  {
LABEL_128:
    if ( v17 && !v46 )
      Win32FreePool(v17);
    return 0LL;
  }
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v44, SolidBrushInternal);
  if ( v44[0] )
  {
    *(_DWORD *)(v44[0] + 48LL) |= 0x400u;
    *(_DWORD *)(v44[0] + 160LL) = a1;
    *(_BYTE *)(v44[0] + 181LL) = v41;
    *(_BYTE *)(v44[0] + 180LL) = v42;
    *(_QWORD *)(v44[0] + 168LL) = v17;
    *(_DWORD *)(v44[0] + 176LL) = v22;
    *(_DWORD *)(v44[0] + 152LL) = a2;
    if ( v46 )
      *(_DWORD *)(v44[0] + 48LL) |= 0x4000u;
    *(_DWORD *)(v44[0] + 184LL) = a3;
    *(_QWORD *)(v44[0] + 192LL) = a5;
    if ( a10 || v43 == 0x10000 )
      *(float *)(v44[0] + 156LL) = (float)a2;
    v27 = (unsigned __int64)v26 | 0x500000;
    if ( a10 )
    {
      *(_DWORD *)(v44[0] + 48LL) |= 0xC00u;
      *(_DWORD *)(v44[0] + 48LL) &= ~4u;
      if ( v14 == 6 )
      {
        *(_DWORD *)(v44[0] + 48LL) |= 4u;
        *(_DWORD *)(v44[0] + 48LL) |= 0x10000u;
      }
      v27 = (unsigned __int64)v26 | 0x300000;
    }
    else if ( v43 )
    {
      if ( v14 == 6 )
        *(_DWORD *)(v44[0] + 48LL) |= 0x10000u;
    }
    else
    {
      *(_DWORD *)(v44[0] + 48LL) &= ~4u;
    }
    HmgModifyHandleType(v27, 0x10000LL);
    v11 = v27;
  }
  else if ( v17 && !v46 )
  {
    Win32FreePool(v17);
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v44);
  return v11;
}
