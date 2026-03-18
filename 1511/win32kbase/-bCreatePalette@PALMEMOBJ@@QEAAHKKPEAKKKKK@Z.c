/*
 * XREFs of ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKK@Z @ 0x1C0022CF0
 * Callers:
 *     GreCreatePaletteInternal @ 0x1C005CF0C (GreCreatePaletteInternal.c)
 *     EngCreatePalette @ 0x1C005E000 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00B9798 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00C06DC (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C013A6D4 (bInitPALOBJ.c)
 * Callees:
 *     IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C38 (IsWin32AllocateFromPagedLookasideListImplSupported_0.c)
 *     Win32AllocateFromPagedLookasideListImpl_0 @ 0x1C0002C40 (Win32AllocateFromPagedLookasideListImpl_0.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     FreeObject @ 0x1C0022A50 (FreeObject.c)
 *     ?vComputeCallTables@XEPALOBJ@@QEAAXXZ @ 0x1C00233F0 (-vComputeCallTables@XEPALOBJ@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00B2E1C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00B2E2C (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

__int64 __fastcall PALMEMOBJ::bCreatePalette(
        PALMEMOBJ *this,
        int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v9; // r15d
  unsigned int v10; // r12d
  unsigned int v11; // edi
  unsigned int v12; // ebx
  unsigned int v13; // esi
  __int64 v14; // r14
  int v15; // r13d
  int v16; // r13d
  int v17; // r13d
  _DWORD *v18; // rdx
  unsigned int i; // ecx
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // ecx
  _DWORD *v23; // rdi
  unsigned int j; // ecx
  unsigned int v25; // eax
  unsigned int v26; // eax
  int v27; // edx
  int v28; // ecx
  _DWORD *v29; // rdi
  unsigned int k; // ecx
  unsigned int v31; // eax
  unsigned int v32; // eax
  _DWORD *v33; // rdi
  unsigned int *v34; // rdx
  unsigned int m; // ecx
  int v36; // eax
  __int64 n; // rcx
  int v39; // [rsp+30h] [rbp-68h]
  __int64 v40; // [rsp+38h] [rbp-60h] BYREF
  int v41; // [rsp+40h] [rbp-58h]
  unsigned int v42; // [rsp+44h] [rbp-54h]
  _QWORD v43[10]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v45; // [rsp+B0h] [rbp+18h]

  v45 = a3;
  v41 = 1;
  v9 = 152;
  if ( a2 == 1 )
  {
    v9 = 4 * a3 + 152;
    v10 = a8 & 0x1102F00;
    if ( !a3 )
      return 0LL;
    goto LABEL_16;
  }
  if ( a2 != 2 )
  {
    if ( a2 != 4 && a2 != 8 && a2 != 16 )
      return 0LL;
    v10 = a8 & 0x1100100 | 0x200;
    v45 = 0;
    if ( a2 != 16 )
    {
      if ( a2 == 4 )
      {
        v11 = 255;
        v12 = 65280;
        v13 = 16711680;
      }
      else
      {
        v11 = 16711680;
        v12 = 65280;
        v13 = 255;
      }
      v9 = 200;
      goto LABEL_17;
    }
LABEL_16:
    v11 = a5;
    v12 = a6;
    v13 = a7;
    goto LABEL_17;
  }
  v10 = a8 & 0x1100300;
  v45 = 0;
  v11 = a5;
  if ( !a5 )
    return 0LL;
  v13 = a7;
  if ( !a7 )
    return 0LL;
  v12 = a6;
  if ( !a6 )
    return 0LL;
  v9 = 200;
LABEL_17:
  v14 = 0LL;
  if ( LODWORD(WPP_MAIN_CB.SecurityDescriptor) == 8 )
  {
    v39 = 1;
    v9 += 160;
  }
  else
  {
    v39 = 0;
  }
  if ( dword_1C0103620 < v9 )
    goto LABEL_26;
  if ( (int)IsWin32AllocateFromPagedLookasideListImplSupported_0() >= 0 )
  {
    v14 = Win32AllocateFromPagedLookasideListImpl_0();
    if ( v14 )
    {
      *(_QWORD *)v14 = 0LL;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = 0LL;
      if ( v39 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v9 + v14 - 160), 0LL);
      LOWORD(v40) = *(_WORD *)(v14 + 12);
      WORD1(v40) = *(_WORD *)(v14 + 14) | 0x8000;
      _InterlockedExchange((volatile __int32 *)(v14 + 12), v40);
    }
LABEL_26:
    if ( v14 )
      goto LABEL_32;
  }
  v14 = (__int64)PALLOCMEM2(v9, 942696519LL, 0);
  if ( v14 )
  {
    *(_QWORD *)v14 = 0LL;
    *(_QWORD *)(v14 + 8) = 0LL;
    *(_QWORD *)(v14 + 16) = 0LL;
    if ( v39 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v9 + v14 - 160), 0LL);
  }
  else
  {
    EngSetLastError(8u);
    v14 = 0LL;
  }
LABEL_32:
  *(_QWORD *)this = v14;
  if ( v14 )
  {
    *(_DWORD *)(v14 + 24) = v10 | a2;
    *(_DWORD *)(v14 + 28) = v45;
    *(_DWORD *)(v14 + 32) = _InterlockedIncrement((volatile signed __int32 *)&ulXlatePalUnique);
    *(_QWORD *)(v14 + 40) = 0LL;
    *(_QWORD *)(v14 + 48) = 0LL;
    *(_QWORD *)(v14 + 56) = 0LL;
    *(_QWORD *)(v14 + 72) = 0LL;
    *(_QWORD *)(v14 + 80) = 0LL;
    *(_QWORD *)(v14 + 88) = 0LL;
    *(_DWORD *)(v14 + 112) = 0;
    *(_QWORD *)(v14 + 120) = 0LL;
    *(_QWORD *)(v14 + 136) = v14;
    *(_QWORD *)(v14 + 128) = v14 + 144;
    v15 = a2 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 || (v17 = v16 - 2) == 0 || v17 == 4 )
      {
        **(_DWORD **)(*(_QWORD *)this + 128LL) = v11;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 4LL) = v12;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 8LL) = v13;
        if ( v11 == 255 && v12 == 65280 && v13 == 16711680 )
        {
          *(_DWORD *)(v14 + 24) |= 4u;
        }
        else if ( v11 == 63488 && v12 == 2016 && v13 == 31 )
        {
          *(_DWORD *)(v14 + 24) |= 0x400000u;
        }
        else if ( v11 == 31744 && v12 == 992 && v13 == 31 )
        {
          *(_DWORD *)(v14 + 24) |= 0x200000u;
        }
        v18 = *(_DWORD **)(*(_QWORD *)this + 128LL);
        for ( i = 0; (v11 & 1) == 0; ++i )
          v11 >>= 1;
        v20 = i;
        do
        {
          v11 >>= 1;
          ++v20;
        }
        while ( (v11 & 1) != 0 );
        v21 = v20 - i;
        v18[9] = v21;
        if ( v21 > 8 )
          i = v21 + i - 8;
        v18[6] = i;
        if ( v21 <= 8 )
          v22 = 8 - v21;
        else
          v22 = 0;
        v18[3] = v22;
        v23 = *(_DWORD **)(*(_QWORD *)this + 128LL);
        for ( j = 0; (v12 & 1) == 0; ++j )
          v12 >>= 1;
        v25 = j;
        do
        {
          v12 >>= 1;
          ++v25;
        }
        while ( (v12 & 1) != 0 );
        v26 = v25 - j;
        v23[10] = v26;
        if ( v26 > 8 )
          j = v26 + j - 8;
        v23[7] = j;
        v27 = 16;
        if ( v26 <= 8 )
          v28 = 16 - v26;
        else
          v28 = 8;
        v23[4] = v28;
        v29 = *(_DWORD **)(*(_QWORD *)this + 128LL);
        for ( k = 0; (v13 & 1) == 0; ++k )
          v13 >>= 1;
        v31 = k;
        do
        {
          v13 >>= 1;
          ++v31;
        }
        while ( (v13 & 1) != 0 );
        v32 = v31 - k;
        v29[11] = v32;
        if ( v32 > 8 )
          k = v32 + k - 8;
        v29[8] = k;
        if ( v32 <= 8 )
          v27 = 24 - v32;
        v29[5] = v27;
      }
    }
    else
    {
      v33 = *(_DWORD **)(*(_QWORD *)this + 128LL);
      v34 = a4;
      if ( a4 )
      {
        for ( m = 0; ; ++m )
        {
          v42 = m;
          if ( m >= v45 )
            break;
          v36 = *v34++;
          *v33++ = v36;
          v43[1] = v33;
        }
      }
      else if ( v45 )
      {
        for ( n = v45; n; --n )
          *v33++ = 0;
      }
    }
    v43[0] = v14;
    XEPALOBJ::vComputeCallTables((XEPALOBJ *)v43);
    if ( v41 )
    {
      v40 = 0LL;
      if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v40, (struct OBJECT *)v14, 1, 1, 8u) )
      {
        HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)&v40);
        return 1LL;
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)&v40);
    }
    FreeObject(v14);
    *(_QWORD *)this = 0LL;
  }
  return 0LL;
}
