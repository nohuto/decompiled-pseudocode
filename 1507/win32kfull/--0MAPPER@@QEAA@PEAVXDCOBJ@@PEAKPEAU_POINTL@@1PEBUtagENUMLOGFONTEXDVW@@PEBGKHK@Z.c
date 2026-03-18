/*
 * XREFs of ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C0028FC8
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0027940 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bUseMetaPtoD@DC@@QEAAHXZ @ 0x1C001CF10 (-bUseMetaPtoD@DC@@QEAAHXZ.c)
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C0028E7C (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     memmove @ 0x1C015D180 (memmove.c)
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
  __int64 v18; // r8
  __int16 v19; // r11
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  char v23; // cl
  unsigned int *v24; // rax
  DC **v25; // r10
  int v26; // r9d
  __int64 v27; // rax
  char v28; // bl
  __int64 v29; // rcx
  int v30; // eax
  unsigned __int16 *v31; // rax
  __int64 v32; // rdx
  int v33; // eax
  DC *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  int y; // esi
  int x; // eax
  struct _POINTL *v39; // rax
  bool v40; // cf
  struct _POINTL *v41; // rax
  int v42; // edx
  int v43; // r8d
  int v44; // edx
  int v45; // eax
  int v46; // ecx
  MAPPER *result; // rax
  LONG v48; // ecx
  unsigned __int16 *v49; // rdx
  __int64 v50; // rax
  __int16 v51; // ax
  int j; // ecx
  struct _POINTL *v53; // [rsp+68h] [rbp+48h] BYREF

  v53 = a4;
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
  v19 = 0;
  *(_WORD *)((char *)this + v17 + 24) = 0;
  if ( *v15 == 95 )
  {
    v49 = (unsigned __int16 *)(v15 + 1);
    if ( (unsigned __int16)(v15[1] - 48) <= 9u )
    {
      while ( 1 )
      {
        v51 = *v49;
        if ( !*v49 )
          break;
        do
        {
          if ( (unsigned __int16)(v51 - 48) <= 9u )
            break;
          v51 = *++v49;
        }
        while ( *v49 );
        if ( !*v49 )
          break;
        for ( j = *v49 - 48; ; j = (unsigned __int16)v18 + 2 * (5 * j - 24) )
        {
          v18 = *++v49;
          if ( !(_WORD)v18 || (unsigned __int16)(v18 - 48) > 9u )
            break;
        }
        v50 = v14++;
        *((_DWORD *)this + v50 + 25) = j;
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
    v20 = *((_QWORD *)this + 1);
    v21 = *(unsigned int *)(v20 + 352);
    if ( (_DWORD)v21 )
    {
      memmove((char *)this + 92, (const void *)(v20 + 348), 4 * v21 + 8);
      v19 = 0;
    }
    else
    {
      *((_WORD *)this + 12) = 0;
    }
  }
  *((_DWORD *)this + 70) = a9;
  v22 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 45) = -2;
  v23 = *(_BYTE *)(v22 + 23);
  v24 = a5;
  *((_QWORD *)this + 29) = a5;
  *((_BYTE *)this + 284) = v23;
  *v24 = 0;
  *((_DWORD *)this + 52) = -1;
  *((_QWORD *)this + 28) = v53;
  *((_QWORD *)this + 27) = a3;
  *((_QWORD *)this + 25) = 0LL;
  *a3 = 0;
  **((_DWORD **)this + 28) = 1;
  *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
  v25 = *(DC ***)this;
  *((_DWORD *)this + 63) |= *(_BYTE *)(*(_QWORD *)(**(_QWORD **)this + 48LL) + 56LL) >= 0 ? 0x40000 : 0;
  v26 = *((_DWORD *)this + 63);
  v27 = *((_QWORD *)*v25 + 10);
  if ( *(_DWORD *)(v27 + 68) == 1 && ((*(_DWORD *)(v27 + 352) & 2) != 0 || !(unsigned int)DC::bUseMetaPtoD(*v25)) )
  {
    v28 = a10;
    *((_DWORD *)this + 63) = v26 | 0x1000;
  }
  else
  {
    v28 = a10 & 0xBF;
  }
  v29 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v29 + 26) == 2 )
    *((_DWORD *)this + 63) |= 0x8000u;
  v30 = *(_DWORD *)(v29 + 16);
  if ( v30 == 400 || v30 == 700 )
    *((_DWORD *)this + 63) |= 0x10000000u;
  v31 = (unsigned __int16 *)*((_QWORD *)this + 2);
  LOWORD(v18) = 83;
  v32 = *v31;
  if ( *(_DWORD *)v31 == 5439565
    && v31[2] == 32
    && v31[3] == 83
    && v31[4] == 72
    && v31[5] == 69
    && v31[6] == 76
    && v31[7] == 76
    && v31[8] == 32
    && v31[9] == 68
    && v31[10] == 76
    && v31[11] == 71
    && v31[12] == v19 )
  {
    *((_DWORD *)this + 63) |= 0x8000000u;
  }
  else if ( (_WORD)v32 == 83
         && v31[1] == 89
         && v31[2] == 83
         && v31[3] == 84
         && v31[4] == 69
         && v31[5] == 77
         && v31[6] == v19 )
  {
    *((_DWORD *)this + 63) |= 0x2000u;
    if ( (*(_BYTE *)(v29 + 27) & 0xF) == 1 )
      *((_QWORD *)this + 2) = L"FIXEDSYS";
  }
  else if ( (_WORD)v32 == 84
         && v31[1] == 77
         && v31[2] == 83
         && v31[3] == 32
         && v31[4] == 82
         && v31[5] == 77
         && v31[6] == 78
         && v31[7] == v19 )
  {
    *((_DWORD *)this + 63) |= 0x800000u;
  }
  else if ( (_WORD)v32 == 83 && v31[1] == 89 && v31[2] == 77 && v31[3] == 66 && v31[4] == 79 && v31[5] == 76 )
  {
    *((_DWORD *)this + 63) |= 0x4000000u;
  }
  else if ( (_WORD)v32 == 64 )
  {
    *((_DWORD *)this + 63) |= 0x2000000u;
  }
  *((_DWORD *)this + 41) = *(_DWORD *)v29;
  v33 = *(_DWORD *)(v29 + 4);
  if ( v33 < 0 )
    v33 = -v33;
  *((_DWORD *)this + 42) = v33;
  v34 = *v25;
  a10 = -1;
  v53 = (struct _POINTL *)*((_QWORD *)v34 + 6);
  UserGetCurrentProcessDpiAwareness(&a10, v32, v18);
  y = 96;
  if ( (v53[7].x & 1) != 0 && a10 - 1 > 1 )
    x = 96;
  else
    x = v53[275].x;
  *((_DWORD *)this + 61) = x;
  a10 = -1;
  UserGetCurrentProcessDpiAwareness(&a10, v35, v36);
  v39 = v53;
  if ( (v53[7].x & 1) == 0 || a10 - 1 <= 1 )
    y = v53[275].y;
  *((_DWORD *)this + 62) = y;
  *((_DWORD *)this + 63) |= ((unsigned int)v39[276].x >> 5) & 0x100;
  *((_DWORD *)this + 63) |= (v39[276].x & 8) << 7;
  v40 = PDEVOBJ::cFonts((PDEVOBJ *)&v53) != 0;
  v41 = v53;
  *((_DWORD *)this + 63) |= v40 ? 0x200 : 0;
  v42 = 0;
  v43 = *((_DWORD *)this + 63) | (v41[270].y == 0 ? 0x10000 : 0);
  *((_DWORD *)this + 63) = v43;
  if ( v41[270].y == 4 )
    v42 = 0x20000000;
  v44 = v43 | v42;
  *((_DWORD *)this + 63) = v44;
  if ( !*((_DWORD *)this + 41) )
  {
    v48 = v41[231].y;
    *((_DWORD *)this + 63) = v44 | 8;
    *((_DWORD *)this + 41) = v48;
  }
  v45 = *((_DWORD *)this + 41);
  if ( v45 < 0 )
  {
    *((_DWORD *)this + 63) |= 2u;
    *((_DWORD *)this + 41) = -v45;
  }
  v46 = *(_DWORD *)(*((_QWORD *)this + 1) + 16LL);
  *((_DWORD *)this + 43) = v46;
  if ( !v46 )
  {
    *((_DWORD *)this + 63) |= 0x200000u;
    *((_DWORD *)this + 43) = 400;
  }
  if ( !**((_WORD **)this + 2) )
    MAPPER::bGetFaceName(this);
  result = this;
  *((_DWORD *)this + 63) |= v28 & 0x40 | 1;
  return result;
}
