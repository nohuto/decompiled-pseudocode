/*
 * XREFs of GreExtCreatePen @ 0x14008259C
 * Callers:
 *     NtGdiExtCreatePen @ 0x140081F40 (NtGdiExtCreatePen.c)
 *     NtGdiCreatePen @ 0x140082490 (NtGdiCreatePen.c)
 *     GreCreatePen @ 0x140082518 (GreCreatePen.c)
 * Callees:
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x140082384 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x140082D78 (-bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x140082DE8 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 *     ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x140082EB8 (-hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z.c)
 *     ?GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z @ 0x14028C6C8 (-GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z.c)
 */

__int64 __fastcall GreExtCreatePen(
        Gre::Base *a1,
        int a2,
        int a3,
        unsigned int a4,
        void *a5,
        void *a6,
        unsigned int a7,
        int *a8,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  void *v11; // rbx
  unsigned int v12; // r13d
  int v13; // r15d
  int v14; // r12d
  unsigned int v15; // edi
  __int16 v16; // r14
  int v17; // esi
  struct Gre::Base::SESSION_GLOBALS *v18; // rax
  int v19; // eax
  int v20; // eax
  unsigned int v21; // r14d
  unsigned __int64 v22; // r9
  int v24; // r11d
  _BOOL8 v25; // r9
  HBRUSH SolidBrushInternal; // rax
  HBRUSH v27; // rdi
  Gre::Base *v28; // rcx
  struct Gre::Base::SESSION_GLOBALS *v29; // rax
  __int64 v30; // r8
  struct Gre::Base::SESSION_GLOBALS *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rbx
  Gre::Base *v34; // rcx
  struct Gre::Base::SESSION_GLOBALS *v35; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rsi
  int v39; // r10d
  int v40; // r8d
  void *v41; // rcx
  int v42; // edx
  ULONG v43; // ecx
  int v44; // r10d
  int v45; // edx
  int v46; // r8d
  int v47; // r11d
  int v48; // eax
  bool v49; // zf
  int v50; // eax
  char v51; // [rsp+30h] [rbp-50h]
  int v52; // [rsp+34h] [rbp-4Ch]
  int v53; // [rsp+38h] [rbp-48h]
  struct Gre::Base::SESSION_GLOBALS *v54; // [rsp+40h] [rbp-40h]
  __int64 v55; // [rsp+48h] [rbp-38h] BYREF
  int v56; // [rsp+50h] [rbp-30h]
  _OWORD v57[2]; // [rsp+58h] [rbp-28h] BYREF
  int v58; // [rsp+C0h] [rbp+40h]

  v58 = (int)a1;
  v11 = 0LL;
  v52 = 0;
  v12 = (unsigned int)a1 & 0xF0000;
  v13 = (unsigned __int8)a1 & 0xF;
  v14 = 0;
  v15 = -a2;
  v16 = (__int16)a1;
  if ( a2 > 0 )
    v15 = a2;
  v53 = v15;
  v17 = v15 >> 31;
  if ( ((unsigned int)a1 & 0xFFF000F0) != 0 )
    v17 = 1;
  v18 = Gre::Base::Globals(a1);
  v54 = v18;
  if ( v13 == 5 )
    return *(_QWORD *)(*((_QWORD *)v18 + 386) + 64LL);
  if ( v12 )
  {
    if ( v12 != 0x10000 )
LABEL_119:
      v17 = 1;
  }
  else if ( a3 && (a3 != 2 || (((unsigned __int64)a6 - 8) & 0xFFFFFFFFFFFFFFFDuLL) != 0) )
  {
    goto LABEL_119;
  }
  if ( v15 != 1 && !v12 && !a10 )
    v17 = 1;
  v19 = v16 & 0xF000;
  if ( (v16 & 0xF000) == 0 )
    goto LABEL_10;
  if ( v19 == 0x2000 )
  {
    v51 = 2;
  }
  else
  {
    if ( v19 != 4096 )
    {
      v17 = 1;
LABEL_10:
      v51 = 0;
      goto LABEL_11;
    }
    v51 = 1;
  }
LABEL_11:
  v20 = v16 & 0xF00;
  if ( (v16 & 0xF00) != 0 )
  {
    if ( v20 == 512 )
    {
      v52 = 2;
    }
    else if ( v20 == 256 )
    {
      v52 = 1;
    }
    else
    {
      v17 = 1;
    }
  }
  else
  {
    v52 = 0;
  }
  v21 = a7;
  if ( v13 == 7 )
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
  v17 = 1;
LABEL_16:
  v22 = 6LL;
  if ( v12 == 0x10000 )
  {
    switch ( v13 )
    {
      case 0:
        goto LABEL_18;
      case 1:
        v21 = 2;
        a8 = (int *)&unk_14035E700;
        goto LABEL_18;
      case 2:
        v21 = 2;
        a8 = (int *)&unk_14035E708;
        goto LABEL_18;
      case 3:
        v21 = 4;
        a8 = (int *)&unk_14035E6D8;
        goto LABEL_18;
      case 4:
        v21 = 6;
        a8 = (int *)&unk_14035E6E8;
        goto LABEL_18;
    }
    v50 = v13 - 6;
    v49 = v13 == 6;
  }
  else
  {
    switch ( v13 )
    {
      case 0:
        goto LABEL_18;
      case 1:
        v21 = 2;
        v11 = &unk_140370A60;
        goto LABEL_107;
      case 2:
        v21 = 8;
        v11 = &unk_14035E6B0;
LABEL_107:
        v14 = 1;
        goto LABEL_18;
      case 3:
        v21 = 4;
        v11 = &unk_140370A50;
        goto LABEL_107;
      case 4:
        v21 = 6;
        v11 = &unk_140370A38;
        goto LABEL_107;
      case 6:
        if ( !a10 )
          v17 = 1;
        goto LABEL_18;
    }
    v50 = v13 - 7;
    v49 = v13 == 7;
  }
  if ( !v49 && v50 != 1 )
    goto LABEL_73;
LABEL_18:
  if ( v17 )
  {
LABEL_73:
    v43 = 87;
LABEL_74:
    EngSetLastError(v43);
    return 0LL;
  }
  if ( !v21 || v11 )
  {
    v24 = v53;
    goto LABEL_21;
  }
  if ( !(4 * v21) || (v37 = Win32AllocPool(4 * v21, 2037674823LL, 2LL), (v11 = (void *)v37) == 0LL) )
  {
    v43 = 8;
    goto LABEL_74;
  }
  v22 = v37;
  v38 = v37 + 4LL * v21;
  if ( !v12 || a10 )
  {
    v44 = 0;
    v45 = 1;
    v46 = 1;
    v41 = (void *)v37;
    if ( a8 )
    {
      while ( 1 )
      {
        v47 = v45;
        if ( v22 >= v38 )
          break;
        v45 = *a8;
        v44 += *a8;
        *(_DWORD *)v22 = *a8;
        v48 = v45;
        v22 += 4LL;
        if ( v46 < v45 )
          v48 = v46;
        v46 = v48;
        if ( v47 > v45 )
          v45 = v47;
        if ( !++a8 )
          goto LABEL_72;
      }
      if ( v46 > 0 && v45 <= 0x3FFF && v44 <= 0x3FFF )
      {
        v24 = v53;
        goto LABEL_21;
      }
    }
    goto LABEL_72;
  }
  v39 = 0;
  v40 = 0;
  v41 = (void *)v37;
  if ( !a8 )
    goto LABEL_72;
  v24 = v53;
  while ( v22 < v38 )
  {
    v42 = *a8;
    if ( v13 != 7 )
    {
      if ( v52 != 2 )
        v42 += (((_BYTE)v22 - (_BYTE)v37) & 4) != 0 ? 1 : -1;
      v42 *= v53;
    }
    if ( v40 >= v42 )
      v40 = v42;
    v39 += v42;
    *(float *)v22 = (float)v42;
    v22 += 4LL;
    if ( !++a8 )
      goto LABEL_72;
  }
  if ( v40 < 0 || v39 <= 0 )
  {
LABEL_72:
    Win32FreePool(v41);
    goto LABEL_73;
  }
LABEL_21:
  switch ( a3 )
  {
    case 0:
      v25 = !v24 && !v13;
      SolidBrushInternal = (HBRUSH)hCreateSolidBrushInternal(a4, 1LL, a11, v25);
      break;
    case 1:
      if ( v11 && !v14 )
        Win32FreePool(v11);
      v18 = v54;
      return *(_QWORD *)(*((_QWORD *)v18 + 386) + 64LL);
    case 2:
      SolidBrushInternal = hCreateHatchBrushInternal((unsigned int)a6, a4, 1);
      break;
    case 3:
      SolidBrushInternal = (HBRUSH)GreCreatePatternBrushInternal(a6, 1LL, 0LL, v22);
      break;
    case 6:
      SolidBrushInternal = GreCreateDIBBrush(a6, a4, a9, 0, 1, a5);
      break;
    default:
      EngSetLastError(0x57u);
      goto LABEL_87;
  }
  v27 = SolidBrushInternal;
  if ( !SolidBrushInternal )
  {
LABEL_87:
    if ( v11 && !v14 )
      Win32FreePool(v11);
    return 0LL;
  }
  v56 = 0;
  memset(v57, 0, sizeof(v57));
  PushThreadGuardedObject(v57, &v55, EPALOBJ::~EPALOBJ);
  v29 = Gre::Base::Globals(v28);
  LOBYTE(v30) = 16;
  v31 = v29;
  v55 = HmgShareLock(v29, v27, v30, 0LL);
  if ( !v55
    || (!(unsigned int)XEBRUSHOBJ::bSaveAttributes((XEBRUSHOBJ *)&v55)
      ? (DEC_SHARE_REF_CNT(v31, v55), v32 = 0LL, v55 = 0LL)
      : (v32 = v55),
        !v32) )
  {
    if ( v11 && !v14 )
      Win32FreePool(v11);
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)&v55);
    return 0LL;
  }
  *(_DWORD *)(v32 + 40) |= 0x400u;
  *(_DWORD *)(v55 + 176) = v58;
  *(_BYTE *)(v55 + 185) = v52;
  *(_BYTE *)(v55 + 184) = v51;
  *(_QWORD *)(v55 + 152) = v11;
  *(_DWORD *)(v55 + 180) = v21;
  *(_DWORD *)(v55 + 168) = v53;
  if ( v14 )
    *(_DWORD *)(v55 + 40) |= 0x4000u;
  *(_DWORD *)(v55 + 188) = a3;
  *(_QWORD *)(v55 + 160) = a5;
  if ( a10 || v12 == 0x10000 )
    *(float *)(v55 + 172) = (float)v53;
  v33 = (unsigned __int64)v27 | 0x500000;
  if ( a10 )
  {
    *(_DWORD *)(v55 + 40) |= 0xC00u;
    *(_DWORD *)(v55 + 40) &= ~4u;
    if ( v13 == 6 )
    {
      *(_DWORD *)(v55 + 40) |= 4u;
      *(_DWORD *)(v55 + 40) |= 0x10000u;
    }
    v33 = (unsigned __int64)v27 | 0x300000;
  }
  else if ( v12 )
  {
    if ( v13 == 6 )
      *(_DWORD *)(v55 + 40) |= 0x10000u;
  }
  else
  {
    *(_DWORD *)(v55 + 40) &= ~4u;
  }
  HmgModifyHandleType(v33, 0x10000LL);
  if ( v55 )
  {
    XEBRUSHOBJ::RestoreAttributes((XEBRUSHOBJ *)&v55);
    v35 = Gre::Base::Globals(v34);
    DEC_SHARE_REF_CNT(v35, v55);
  }
  PopThreadGuardedObject(v57);
  return v33;
}
