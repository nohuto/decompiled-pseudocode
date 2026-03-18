/*
 * XREFs of GreExtCreatePen @ 0x1C010D128
 * Callers:
 *     GreCreatePen @ 0x1C010D0A8 (GreCreatePen.c)
 *     NtGdiExtCreatePen @ 0x1C02A7320 (NtGdiExtCreatePen.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C010D440 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C010D46C (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1C02B3A70 (-hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z.c)
 *     GreCreateDIBBrush @ 0x1C02B3ABC (GreCreateDIBBrush.c)
 */

void *__fastcall GreExtCreatePen(
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
  int v12; // r13d
  int v13; // r14d
  unsigned int v15; // r10d
  int v17; // r12d
  __int64 v18; // r8
  void *v19; // rsi
  BOOL v20; // ecx
  int v21; // eax
  int v22; // eax
  unsigned int v23; // r15d
  __int64 v24; // r9
  __int64 v26; // r9
  HBRUSH SolidBrushInternal; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  HBRUSH v30; // r14
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdi
  bool v35; // zf
  int v36; // eax
  ULONG v37; // ecx
  __int64 v38; // rax
  float *v39; // r8
  float *v40; // r11
  int v41; // r10d
  __int64 v42; // rdx
  int v43; // ecx
  int v44; // ecx
  int v45; // eax
  int v46; // [rsp+30h] [rbp-50h]
  int v47; // [rsp+34h] [rbp-4Ch]
  char v48; // [rsp+38h] [rbp-48h]
  int v49; // [rsp+3Ch] [rbp-44h]
  int v50; // [rsp+40h] [rbp-40h]
  int v51; // [rsp+44h] [rbp-3Ch]
  _QWORD v52[7]; // [rsp+48h] [rbp-38h] BYREF

  v11 = 0LL;
  v46 = 0;
  v12 = a1 & 0xF0000;
  v48 = 0;
  v13 = a1 & 0xF;
  v51 = a1 & 0xF0000;
  v50 = v13;
  v15 = a4;
  v17 = 0;
  v18 = abs32(a2);
  v19 = 0LL;
  v49 = abs32(a2);
  v20 = v49 < 0;
  if ( (a1 & 0xFFF000F0) != 0 )
    v20 = 1;
  if ( v13 == 5 )
    return gahStockObjects[8];
  if ( v12 )
  {
    if ( v12 == 0x10000 )
      goto LABEL_6;
    goto LABEL_57;
  }
  if ( a3 && (a3 != 2 || ((a6 - 8) & 0xFFFFFFFFFFFFFFFDuLL) != 0) )
LABEL_57:
    v20 = 1;
LABEL_6:
  if ( (_DWORD)v18 != 1 && !v12 && !a10 )
    v20 = 1;
  v21 = a1 & 0xF000;
  if ( (a1 & 0xF000) != 0 )
  {
    if ( v21 == 4096 )
    {
      v48 = 1;
    }
    else if ( v21 == 0x2000 )
    {
      v48 = 2;
    }
    else
    {
      v20 = 1;
    }
  }
  else
  {
    v48 = 0;
  }
  v22 = a1 & 0xF00;
  if ( (a1 & 0xF00) != 0 )
  {
    if ( v22 == 256 )
    {
      v47 = 1;
    }
    else if ( v22 == 512 )
    {
      v47 = 2;
    }
    else
    {
      v20 = 1;
    }
  }
  else
  {
    v47 = 0;
  }
  v23 = a7;
  if ( v13 == 7 )
  {
    if ( a7 )
    {
LABEL_13:
      if ( a7 <= 0x10 )
        goto LABEL_14;
    }
  }
  else if ( !a7 )
  {
    goto LABEL_13;
  }
  v20 = 1;
LABEL_14:
  v24 = 6LL;
  if ( v12 == 0x10000 )
  {
    switch ( v13 )
    {
      case 0:
        goto LABEL_16;
      case 1:
        v23 = 2;
        a8 = (int *)&gaulGeometricDash;
        goto LABEL_16;
      case 2:
        v23 = 2;
        a8 = (int *)&gaulGeometricDot;
        goto LABEL_16;
      case 3:
        v23 = 4;
        a8 = (int *)&gaulGeometricDashDot;
        goto LABEL_16;
      case 4:
        v23 = 6;
        a8 = (int *)&gaulGeometricDashDotDot;
        goto LABEL_16;
    }
    v36 = v13 - 6;
    v35 = v13 == 6;
    goto LABEL_76;
  }
  switch ( v13 )
  {
    case 0:
      goto LABEL_16;
    case 1:
      v23 = 2;
      v19 = &galeCosmeticDash;
      goto LABEL_48;
    case 2:
      v23 = 8;
      v19 = &galeCosmeticDot;
LABEL_48:
      v46 = 1;
      v17 = 1;
      goto LABEL_16;
    case 3:
      v23 = 4;
      v19 = &galeCosmeticDashDot;
      goto LABEL_48;
    case 4:
      v23 = 6;
      v19 = &galeCosmeticDashDotDot;
      goto LABEL_48;
    case 6:
      if ( !a10 )
        v20 = 1;
      goto LABEL_16;
  }
  v36 = v13 - 7;
  v35 = v13 == 7;
LABEL_76:
  if ( !v35 && v36 != 1 )
    goto LABEL_87;
LABEL_16:
  if ( v20 )
  {
LABEL_87:
    v37 = 87;
LABEL_89:
    EngSetLastError(v37);
    return 0LL;
  }
  if ( v23 && !v19 )
  {
    v38 = (__int64)PALLOCMEM2(4 * v23, 2037674823LL, 0);
    v19 = (void *)v38;
    if ( !v38 )
    {
      v37 = 8;
      goto LABEL_89;
    }
    v39 = (float *)v38;
    v40 = (float *)(v38 + 4LL * v23);
    if ( !v12 || a10 )
    {
      v42 = 1LL;
      v24 = 0LL;
      v44 = 1;
      if ( !a8 )
        goto LABEL_86;
      do
      {
        if ( v39 >= v40 )
          break;
        v45 = *a8;
        *(_DWORD *)v39 = *a8;
        if ( v44 >= v45 )
          v44 = v45;
        if ( (int)v42 <= v45 )
          v42 = (unsigned int)v45;
        v24 = (unsigned int)(v45 + v24);
        ++v39;
        ++a8;
      }
      while ( a8 );
      if ( !a8 || v44 <= 0 || (int)v42 > 0x3FFF || (int)v24 > 0x3FFF )
        goto LABEL_86;
    }
    else
    {
      v41 = 0;
      v42 = 0LL;
      if ( !a8 )
        goto LABEL_86;
      v24 = -v38;
      do
      {
        if ( v39 >= v40 )
          break;
        v43 = *a8;
        if ( v13 != 7 )
        {
          if ( v47 != 2 )
            v43 += (((_BYTE)v39 - (_BYTE)v38) & 4) != 0 ? 1 : -1;
          v43 *= v49;
        }
        if ( (int)v42 >= v43 )
          v42 = (unsigned int)v43;
        v41 += v43;
        *v39++ = (float)v43;
        ++a8;
      }
      while ( a8 );
      v17 = v46;
      v12 = v51;
      if ( !a8 || (int)v42 < 0 || v41 <= 0 )
      {
LABEL_86:
        Win32FreePool(v19, v42, v39);
        goto LABEL_87;
      }
    }
    v15 = a4;
    v18 = (unsigned int)v49;
  }
  switch ( a3 )
  {
    case 0:
      if ( (_DWORD)v18 || (v26 = 1LL, v13) )
        v26 = 0LL;
      SolidBrushInternal = (HBRUSH)hCreateSolidBrushInternal(v15, 1LL, a11, v26);
      break;
    case 1:
      if ( v19 && !v17 )
        Win32FreePool(v19, 1LL, v18);
      return gahStockObjects[8];
    case 2:
      SolidBrushInternal = hCreateHatchBrushInternal(a6, v15, 1);
      break;
    case 3:
      SolidBrushInternal = (HBRUSH)GreCreatePatternBrushInternal(a6, 1LL, 0LL, v24);
      break;
    case 6:
      SolidBrushInternal = (HBRUSH)GreCreateDIBBrush(a6, v15, a9, 0LL, 1, a5);
      break;
    default:
      EngSetLastError(0x57u);
      goto LABEL_126;
  }
  v30 = SolidBrushInternal;
  if ( !SolidBrushInternal )
  {
LABEL_126:
    if ( v19 && !v17 )
      Win32FreePool(v19, v28, v29);
    return 0LL;
  }
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v52, SolidBrushInternal);
  if ( v52[0] )
  {
    *(_DWORD *)(v52[0] + 48LL) |= 0x400u;
    *(_DWORD *)(v52[0] + 160LL) = a1;
    *(_BYTE *)(v52[0] + 181LL) = v47;
    *(_BYTE *)(v52[0] + 180LL) = v48;
    *(_QWORD *)(v52[0] + 168LL) = v19;
    *(_DWORD *)(v52[0] + 176LL) = v23;
    *(_DWORD *)(v52[0] + 152LL) = v49;
    if ( v17 )
      *(_DWORD *)(v52[0] + 48LL) |= 0x4000u;
    *(_DWORD *)(v52[0] + 184LL) = a3;
    *(_QWORD *)(v52[0] + 192LL) = a5;
    if ( a10 || v12 == 0x10000 )
      *(float *)(v52[0] + 156LL) = (float)v49;
    v33 = (unsigned __int64)v30 | 0x500000;
    if ( a10 )
    {
      *(_DWORD *)(v52[0] + 48LL) |= 0xC00u;
      *(_DWORD *)(v52[0] + 48LL) &= ~4u;
      if ( v50 == 6 )
      {
        *(_DWORD *)(v52[0] + 48LL) |= 4u;
        *(_DWORD *)(v52[0] + 48LL) |= 0x10000u;
      }
      v33 = (unsigned __int64)v30 | 0x300000;
    }
    else if ( v12 )
    {
      if ( v50 == 6 )
        *(_DWORD *)(v52[0] + 48LL) |= 0x10000u;
    }
    else
    {
      *(_DWORD *)(v52[0] + 48LL) &= ~4u;
    }
    HmgModifyHandleType(v33, 0x10000LL);
    v11 = v33;
  }
  else if ( v19 && !v17 )
  {
    Win32FreePool(v19, v31, v32);
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v52);
  return (void *)v11;
}
