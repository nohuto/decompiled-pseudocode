/*
 * XREFs of GreExtCreatePen @ 0x1C00EDBE8
 * Callers:
 *     GreCreatePen @ 0x1C00EDB68 (GreCreatePen.c)
 *     NtGdiExtCreatePen @ 0x1C02A5E80 (NtGdiExtCreatePen.c)
 * Callees:
 *     ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1C00094D8 (-hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z.c)
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00EDEF0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00EDF2C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     GreCreateDIBBrush @ 0x1C02B0C10 (GreCreateDIBBrush.c)
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
  int v13; // r13d
  int v14; // r12d
  unsigned int v15; // r10d
  int v17; // ebp
  void *v18; // rsi
  BOOL v19; // ecx
  __int64 v20; // r9
  int v21; // eax
  int v22; // eax
  unsigned int v23; // r14d
  __int64 v25; // r9
  HBRUSH SolidBrushInternal; // rax
  HBRUSH v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rdi
  unsigned int v30; // ecx
  bool v32; // zf
  int v33; // eax
  ULONG v34; // ecx
  __int64 v35; // rax
  float *v36; // r8
  float *v37; // r11
  int v38; // r10d
  int v39; // edx
  int v40; // ecx
  int v41; // edx
  int v42; // ecx
  int v43; // eax
  int v44; // [rsp+30h] [rbp-68h]
  char v45; // [rsp+34h] [rbp-64h]
  _QWORD v46[12]; // [rsp+38h] [rbp-60h] BYREF
  int v48; // [rsp+A8h] [rbp+10h]

  v11 = 0LL;
  v48 = 0;
  v45 = 0;
  v13 = a1 & 0xF0000;
  v14 = a1 & 0xF;
  v15 = a4;
  v17 = 0;
  v18 = 0LL;
  if ( a2 < 0 )
    a2 = -a2;
  v19 = a2 < 0;
  if ( (a1 & 0xFFF000F0) != 0 )
    v19 = 1;
  if ( v14 == 5 )
    return (__int64)*(&gahStockObjects + 8);
  v20 = 0x10000LL;
  if ( v13 )
  {
    if ( v13 == 0x10000 )
      goto LABEL_8;
    goto LABEL_59;
  }
  if ( a3 && (a3 != 2 || ((a6 - 8) & 0xFFFFFFFFFFFFFFFDuLL) != 0) )
LABEL_59:
    v19 = 1;
LABEL_8:
  if ( a2 != 1 && !v13 && !a10 )
    v19 = 1;
  v21 = a1 & 0xF000;
  if ( (a1 & 0xF000) != 0 )
  {
    if ( v21 == 4096 )
    {
      v45 = 1;
    }
    else if ( v21 == 0x2000 )
    {
      v45 = 2;
    }
    else
    {
      v19 = 1;
    }
  }
  else
  {
    v45 = 0;
  }
  v22 = a1 & 0xF00;
  if ( (a1 & 0xF00) != 0 )
  {
    if ( v22 == 256 )
    {
      v44 = 1;
    }
    else if ( v22 == 512 )
    {
      v44 = 2;
    }
    else
    {
      v19 = 1;
    }
  }
  else
  {
    v44 = 0;
  }
  v23 = a7;
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
  v19 = 1;
LABEL_16:
  if ( v13 == 0x10000 )
  {
    switch ( v14 )
    {
      case 0:
        goto LABEL_18;
      case 1:
        v23 = 2;
        a8 = (int *)&gaulGeometricDash;
        goto LABEL_18;
      case 2:
        v23 = 2;
        a8 = (int *)&gaulGeometricDot;
        goto LABEL_18;
      case 3:
        v23 = 4;
        a8 = (int *)&gaulGeometricDashDot;
        goto LABEL_18;
      case 4:
        v23 = 6;
        a8 = (int *)&gaulGeometricDashDotDot;
        goto LABEL_18;
    }
    v33 = v14 - 6;
    v32 = v14 == 6;
    goto LABEL_78;
  }
  switch ( v14 )
  {
    case 0:
      goto LABEL_18;
    case 1:
      v23 = 2;
      v18 = &galeCosmeticDash;
      goto LABEL_50;
    case 2:
      v23 = 8;
      v18 = &galeCosmeticDot;
LABEL_50:
      v48 = 1;
      v17 = 1;
      goto LABEL_18;
    case 3:
      v23 = 4;
      v18 = &galeCosmeticDashDot;
      goto LABEL_50;
    case 4:
      v23 = 6;
      v18 = &galeCosmeticDashDotDot;
      goto LABEL_50;
    case 6:
      if ( !a10 )
        v19 = 1;
      goto LABEL_18;
  }
  v33 = v14 - 7;
  v32 = v14 == 7;
LABEL_78:
  if ( !v32 && v33 != 1 )
    goto LABEL_89;
LABEL_18:
  if ( v19 )
  {
LABEL_89:
    v34 = 87;
LABEL_91:
    EngSetLastError(v34);
    return 0LL;
  }
  if ( v23 && !v18 )
  {
    v35 = (__int64)PALLOCMEM2(4 * v23, 2037674823LL, 0);
    v18 = (void *)v35;
    if ( !v35 )
    {
      v34 = 8;
      goto LABEL_91;
    }
    v36 = (float *)v35;
    v37 = (float *)(v35 + 4LL * v23);
    if ( !v13 || a10 )
    {
      v41 = 1;
      v20 = 0LL;
      v42 = 1;
      if ( !a8 )
        goto LABEL_88;
      do
      {
        if ( v36 >= v37 )
          break;
        v43 = *a8;
        *(_DWORD *)v36 = *a8;
        if ( v42 >= v43 )
          v42 = v43;
        if ( v41 <= v43 )
          v41 = v43;
        v20 = (unsigned int)(v43 + v20);
        ++v36;
        ++a8;
      }
      while ( a8 );
      if ( !a8 || v42 <= 0 || v41 > 0x3FFF || (int)v20 > 0x3FFF )
        goto LABEL_88;
    }
    else
    {
      v38 = 0;
      v39 = 0;
      if ( !a8 )
        goto LABEL_88;
      v20 = -v35;
      do
      {
        if ( v36 >= v37 )
          break;
        v40 = *a8;
        if ( v14 != 7 )
        {
          if ( v44 != 2 )
            v40 += (((_BYTE)v36 - (_BYTE)v35) & 4) != 0 ? 1 : -1;
          v40 *= a2;
        }
        if ( v39 >= v40 )
          v39 = v40;
        v38 += v40;
        *v36++ = (float)v40;
        ++a8;
      }
      while ( a8 );
      v17 = v48;
      if ( !a8 || v39 < 0 || v38 <= 0 )
      {
LABEL_88:
        Win32FreePool(v18);
        goto LABEL_89;
      }
    }
    v15 = a4;
  }
  switch ( a3 )
  {
    case 0:
      if ( a2 || (v25 = 1LL, v14) )
        v25 = 0LL;
      SolidBrushInternal = (HBRUSH)hCreateSolidBrushInternal(v15, 1LL, a11, v25);
      break;
    case 1:
      if ( v18 && !v17 )
        Win32FreePool(v18);
      return (__int64)*(&gahStockObjects + 8);
    case 2:
      SolidBrushInternal = (HBRUSH)hCreateHatchBrushInternal(a6, v15, 1);
      break;
    case 3:
      SolidBrushInternal = (HBRUSH)GreCreatePatternBrushInternal(a6, 1LL, 0LL, v20);
      break;
    case 6:
      SolidBrushInternal = (HBRUSH)GreCreateDIBBrush(a6, v15, a9, 0LL, 1, a5);
      break;
    default:
      EngSetLastError(0x57u);
      goto LABEL_128;
  }
  v27 = SolidBrushInternal;
  if ( !SolidBrushInternal )
  {
LABEL_128:
    if ( v18 && !v48 )
      Win32FreePool(v18);
    return 0LL;
  }
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v46, SolidBrushInternal);
  v28 = v46[0];
  if ( v46[0] )
  {
    *(_DWORD *)(v46[0] + 48LL) |= 0x400u;
    *(_DWORD *)(v28 + 160) = a1;
    *(_BYTE *)(v28 + 181) = v44;
    *(_BYTE *)(v28 + 180) = v45;
    *(_QWORD *)(v28 + 168) = v18;
    *(_DWORD *)(v28 + 176) = v23;
    *(_DWORD *)(v28 + 152) = a2;
    if ( v48 )
      *(_DWORD *)(v28 + 48) |= 0x4000u;
    *(_DWORD *)(v28 + 184) = a3;
    *(_QWORD *)(v28 + 192) = a5;
    if ( a10 || v13 == 0x10000 )
      *(float *)(v28 + 156) = (float)a2;
    v29 = (unsigned __int64)v27 | 0x500000;
    if ( a10 )
    {
      v30 = *(_DWORD *)(v28 + 48) & 0xFFFFF3FB | 0xC00;
      *(_DWORD *)(v28 + 48) = v30;
      if ( v14 == 6 )
        *(_DWORD *)(v28 + 48) = v30 | 0x10004;
      v29 = (unsigned __int64)v27 | 0x300000;
    }
    else if ( v13 )
    {
      if ( v14 == 6 )
        *(_DWORD *)(v28 + 48) |= 0x10000u;
    }
    else
    {
      *(_DWORD *)(v28 + 48) &= ~4u;
    }
    HmgModifyHandleType(v29);
    v11 = v29;
  }
  else if ( v18 && !v48 )
  {
    Win32FreePool(v18);
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v46);
  return v11;
}
