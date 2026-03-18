/*
 * XREFs of ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C0020714
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C001EF54 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C00205C8 (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     ?bUseMetaPtoD@DC@@QEAAHXZ @ 0x1C00275DC (-bUseMetaPtoD@DC@@QEAAHXZ.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

MAPPER *__fastcall MAPPER::MAPPER(
        MAPPER *this,
        struct XDCOBJ *a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5,
        const struct tagENUMLOGFONTEXDVW *a6,
        const unsigned __int16 *Src,
        unsigned int a8,
        int a9,
        unsigned int a10)
{
  const struct tagENUMLOGFONTEXDVW *v10; // rax
  const unsigned __int16 *v12; // rdx
  unsigned int v14; // r14d
  const unsigned __int16 *v15; // rsi
  unsigned __int16 i; // ax
  size_t v17; // rbx
  __int16 v18; // r11
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // cl
  unsigned int *v23; // rax
  DC **v24; // r10
  int v25; // r9d
  __int64 v26; // rax
  char v27; // bl
  __int64 v28; // rcx
  int v29; // eax
  __int16 *v30; // rax
  __int16 v31; // dx
  int v32; // eax
  DC *v33; // rax
  int y; // esi
  int x; // eax
  struct _POINTL *v36; // rax
  bool v37; // cf
  struct _POINTL *v38; // rax
  int v39; // edx
  int v40; // r8d
  int v41; // edx
  int v42; // eax
  int v43; // ecx
  MAPPER *result; // rax
  LONG v45; // ecx
  unsigned __int16 *v46; // rdx
  __int64 v47; // rax
  __int16 v48; // ax
  int j; // ecx
  unsigned __int16 v50; // r8
  struct _POINTL *v51; // [rsp+68h] [rbp+48h] BYREF

  v51 = a4;
  v10 = a6;
  *(_QWORD *)this = a2;
  v12 = Src;
  *((_DWORD *)this + 63) = 0;
  v14 = 0;
  *((_QWORD *)this + 32) = 0LL;
  v15 = v12;
  *((_QWORD *)this + 1) = v10;
  *((_QWORD *)this + 2) = v12;
  *((_DWORD *)this + 22) = 0;
  for ( i = *v12; i && (i != 95 || (unsigned __int16)(v15[1] - 48) > 9u); i = *v15 )
    ++v15;
  v17 = 2LL * (unsigned int)(v15 - v12);
  memmove((char *)this + 24, v12, v17);
  v18 = 0;
  *(_WORD *)((char *)this + v17 + 24) = 0;
  if ( *v15 == 95 )
  {
    v46 = (unsigned __int16 *)(v15 + 1);
    if ( (unsigned __int16)(v15[1] - 48) <= 9u )
    {
      while ( 1 )
      {
        v48 = *v46;
        if ( !*v46 )
          break;
        do
        {
          if ( (unsigned __int16)(v48 - 48) <= 9u )
            break;
          v48 = *++v46;
        }
        while ( *v46 );
        if ( !*v46 )
          break;
        for ( j = *v46 - 48; ; j = v50 + 2 * (5 * j - 24) )
        {
          v50 = *++v46;
          if ( !*v46 || (unsigned __int16)(v50 - 48) > 9u )
            break;
        }
        v47 = v14++;
        *((_DWORD *)this + v47 + 25) = j;
      }
    }
  }
  *((_DWORD *)this + 24) = v14;
  *((_DWORD *)this + 23) = 134248036;
  *((_QWORD *)this + 36) = 0LL;
  if ( v14 )
  {
    *((_DWORD *)this + 22) |= 1u;
  }
  else
  {
    v19 = *((_QWORD *)this + 1);
    v20 = *(unsigned int *)(v19 + 352);
    if ( (_DWORD)v20 )
    {
      memmove((char *)this + 92, (const void *)(v19 + 348), 4 * v20 + 8);
      v18 = 0;
    }
    else
    {
      *((_WORD *)this + 12) = 0;
    }
  }
  *((_DWORD *)this + 70) = a9;
  v21 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 45) = -2;
  v22 = *(_BYTE *)(v21 + 23);
  v23 = a5;
  *((_QWORD *)this + 29) = a5;
  *((_BYTE *)this + 284) = v22;
  *v23 = 0;
  *((_DWORD *)this + 52) = -1;
  *((_QWORD *)this + 28) = v51;
  *((_QWORD *)this + 27) = a3;
  *((_QWORD *)this + 25) = 0LL;
  *a3 = 0;
  **((_DWORD **)this + 28) = 1;
  *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
  v24 = *(DC ***)this;
  *((_DWORD *)this + 63) |= *(_BYTE *)(*(_QWORD *)(**(_QWORD **)this + 48LL) + 56LL) >= 0 ? 0x40000 : 0;
  v25 = *((_DWORD *)this + 63);
  v26 = *((_QWORD *)*v24 + 10);
  if ( *(_DWORD *)(v26 + 68) == 1 && ((*(_DWORD *)(v26 + 352) & 2) != 0 || !(unsigned int)DC::bUseMetaPtoD(*v24)) )
  {
    v27 = a10;
    *((_DWORD *)this + 63) = v25 | 0x1000;
  }
  else
  {
    v27 = a10 & 0xBF;
  }
  v28 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v28 + 26) == 2 )
    *((_DWORD *)this + 63) |= 0x8000u;
  v29 = *(_DWORD *)(v28 + 16);
  if ( v29 == 400 || v29 == 700 )
    *((_DWORD *)this + 63) |= 0x10000000u;
  v30 = (__int16 *)*((_QWORD *)this + 2);
  v31 = *v30;
  if ( *v30 == 77
    && v30[1] == 83
    && v30[2] == 32
    && v30[3] == 83
    && v30[4] == 72
    && v30[5] == 69
    && v30[6] == 76
    && v30[7] == 76
    && v30[8] == 32
    && v30[9] == 68
    && v30[10] == 76
    && v30[11] == 71
    && v30[12] == v18 )
  {
    *((_DWORD *)this + 63) |= 0x8000000u;
  }
  else if ( v31 == 83 && v30[1] == 89 && v30[2] == 83 && v30[3] == 84 && v30[4] == 69 && v30[5] == 77 && v30[6] == v18 )
  {
    *((_DWORD *)this + 63) |= 0x2000u;
    if ( (*(_BYTE *)(v28 + 27) & 0xF) == 1 )
      *((_QWORD *)this + 2) = L"FIXEDSYS";
  }
  else if ( v31 == 84
         && v30[1] == 77
         && v30[2] == 83
         && v30[3] == 32
         && v30[4] == 82
         && v30[5] == 77
         && v30[6] == 78
         && v30[7] == v18 )
  {
    *((_DWORD *)this + 63) |= 0x800000u;
  }
  else if ( v31 == 83 && v30[1] == 89 && v30[2] == 77 && v30[3] == 66 && v30[4] == 79 && v30[5] == 76 )
  {
    *((_DWORD *)this + 63) |= 0x4000000u;
  }
  else if ( v31 == 64 )
  {
    *((_DWORD *)this + 63) |= 0x2000000u;
  }
  *((_DWORD *)this + 41) = *(_DWORD *)v28;
  v32 = *(_DWORD *)(v28 + 4);
  if ( v32 < 0 )
    v32 = -v32;
  *((_DWORD *)this + 42) = v32;
  v33 = *v24;
  a10 = -1;
  v51 = (struct _POINTL *)*((_QWORD *)v33 + 6);
  UserGetCurrentProcessDpiAwareness(&a10);
  y = 96;
  if ( (v51[7].x & 1) != 0 && a10 - 1 > 1 )
    x = 96;
  else
    x = v51[275].x;
  *((_DWORD *)this + 61) = x;
  a10 = -1;
  UserGetCurrentProcessDpiAwareness(&a10);
  v36 = v51;
  if ( (v51[7].x & 1) == 0 || a10 - 1 <= 1 )
    y = v51[275].y;
  *((_DWORD *)this + 62) = y;
  *((_DWORD *)this + 63) |= ((unsigned int)v36[276].x >> 5) & 0x100;
  *((_DWORD *)this + 63) |= (v36[276].x & 8) << 7;
  v37 = PDEVOBJ::cFonts((PDEVOBJ *)&v51) != 0;
  v38 = v51;
  *((_DWORD *)this + 63) |= v37 ? 0x200 : 0;
  v39 = 0;
  v40 = *((_DWORD *)this + 63) | (v38[270].y == 0 ? 0x10000 : 0);
  *((_DWORD *)this + 63) = v40;
  if ( v38[270].y == 4 )
    v39 = 0x20000000;
  v41 = v40 | v39;
  *((_DWORD *)this + 63) = v41;
  if ( !*((_DWORD *)this + 41) )
  {
    v45 = v38[231].y;
    *((_DWORD *)this + 63) = v41 | 8;
    *((_DWORD *)this + 41) = v45;
  }
  v42 = *((_DWORD *)this + 41);
  if ( v42 < 0 )
  {
    *((_DWORD *)this + 63) |= 2u;
    *((_DWORD *)this + 41) = -v42;
  }
  v43 = *(_DWORD *)(*((_QWORD *)this + 1) + 16LL);
  *((_DWORD *)this + 43) = v43;
  if ( !v43 )
  {
    *((_DWORD *)this + 63) |= 0x200000u;
    *((_DWORD *)this + 43) = 400;
  }
  if ( !**((_WORD **)this + 2) )
    MAPPER::bGetFaceName(this);
  result = this;
  *((_DWORD *)this + 63) |= v27 & 0x40 | 1;
  return result;
}
