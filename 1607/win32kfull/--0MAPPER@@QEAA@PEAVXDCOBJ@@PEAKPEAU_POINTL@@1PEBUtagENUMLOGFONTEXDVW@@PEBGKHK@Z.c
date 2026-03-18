/*
 * XREFs of ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C00261C8
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0024C7C (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C0026084 (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     GreGetCannonicalName @ 0x1C00280DC (GreGetCannonicalName.c)
 *     ?bUseMetaPtoD@DC@@QEAAHXZ @ 0x1C004A980 (-bUseMetaPtoD@DC@@QEAAHXZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

MAPPER *__fastcall MAPPER::MAPPER(
        MAPPER *this,
        struct XDCOBJ *a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5,
        const struct tagENUMLOGFONTEXDVW *a6,
        unsigned __int16 *Src,
        unsigned int a8,
        int a9,
        char a10)
{
  const struct tagENUMLOGFONTEXDVW *v10; // rax
  unsigned __int16 *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  char v19; // cl
  DC **v20; // r10
  int v21; // r9d
  __int64 v22; // rax
  char v23; // di
  __int64 v24; // rcx
  int v25; // eax
  unsigned __int16 *v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v30; // r8
  const struct tagENUMLOGFONTEXDVW *v31; // rcx
  int v32; // esi
  __int64 v33; // rdx
  bool v34; // cc
  int v35; // eax
  char v36; // al
  const struct tagENUMLOGFONTEXDVW *v37; // rcx
  bool v38; // cf
  const struct tagENUMLOGFONTEXDVW *v39; // rax
  int v40; // r8d
  int v41; // edx
  int v42; // edx
  int v43; // eax
  int v44; // ecx
  int v46; // ecx

  v10 = a6;
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 63) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 1) = v10;
  v14 = Src;
  *((_QWORD *)this + 2) = Src;
  *((_DWORD *)this + 22) = 0;
  GreGetCannonicalName(v14, (char *)this + 24);
  *((_QWORD *)this + 36) = 0LL;
  if ( a8 )
  {
    *((_DWORD *)this + 22) |= 1u;
  }
  else
  {
    v16 = *((_QWORD *)this + 1);
    v17 = *(unsigned int *)(v16 + 352);
    if ( (_DWORD)v17 )
      memmove((char *)this + 92, (const void *)(v16 + 348), 4 * v17 + 8);
    else
      *((_WORD *)this + 12) = 0;
  }
  *((_DWORD *)this + 70) = a9;
  v18 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 45) = -2;
  v19 = *(_BYTE *)(v18 + 23);
  *((_QWORD *)this + 29) = a5;
  *((_BYTE *)this + 284) = v19;
  *a5 = 0;
  *((_DWORD *)this + 52) = -1;
  *((_QWORD *)this + 28) = a4;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 27) = a3;
  *a3 = 0;
  **((_DWORD **)this + 28) = 1;
  *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
  v20 = *(DC ***)this;
  *((_DWORD *)this + 63) |= *(_BYTE *)(*(_QWORD *)(**(_QWORD **)this + 48LL) + 56LL) >= 0 ? 0x40000 : 0;
  v21 = *((_DWORD *)this + 63);
  v22 = *((_QWORD *)*v20 + 10);
  if ( *(_DWORD *)(v22 + 68) == 1 && ((*(_DWORD *)(v22 + 352) & 2) != 0 || !(unsigned int)DC::bUseMetaPtoD(*v20)) )
  {
    v23 = a10;
    *((_DWORD *)this + 63) = v21 | 0x1000;
  }
  else
  {
    v23 = a10 & 0xBF;
  }
  v24 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v24 + 26) == 2 )
    *((_DWORD *)this + 63) |= 0x8000u;
  v25 = *(_DWORD *)(v24 + 16);
  if ( v25 == 400 || v25 == 700 )
    *((_DWORD *)this + 63) |= 0x10000000u;
  v26 = (unsigned __int16 *)*((_QWORD *)this + 2);
  LOWORD(v15) = 83;
  v27 = *v26;
  if ( *(_DWORD *)v26 == 5439565
    && v26[2] == 32
    && v26[3] == 83
    && v26[4] == 72
    && v26[5] == 69
    && v26[6] == 76
    && v26[7] == 76
    && v26[8] == 32
    && v26[9] == 68
    && v26[10] == 76
    && v26[11] == 71
    && !v26[12] )
  {
    *((_DWORD *)this + 63) |= 0x8000000u;
  }
  else if ( (_WORD)v27 == 83 && v26[1] == 89 && v26[2] == 83 && v26[3] == 84 && v26[4] == 69 && v26[5] == 77 && !v26[6] )
  {
    *((_DWORD *)this + 63) |= 0x2000u;
    if ( (*(_BYTE *)(v24 + 27) & 0xF) == 1 )
      *((_QWORD *)this + 2) = L"FIXEDSYS";
  }
  else if ( (_WORD)v27 == 84
         && v26[1] == 77
         && v26[2] == 83
         && v26[3] == 32
         && v26[4] == 82
         && v26[5] == 77
         && v26[6] == 78
         && !v26[7] )
  {
    *((_DWORD *)this + 63) |= 0x800000u;
  }
  else if ( (_WORD)v27 == 83 && v26[1] == 89 && v26[2] == 77 && v26[3] == 66 && v26[4] == 79 && v26[5] == 76 )
  {
    *((_DWORD *)this + 63) |= 0x4000000u;
  }
  else if ( (_WORD)v27 == 64 )
  {
    *((_DWORD *)this + 63) |= 0x2000000u;
  }
  *((_DWORD *)this + 41) = *(_DWORD *)v24;
  v28 = *(_DWORD *)(v24 + 4);
  if ( v28 < 0 )
    v28 = -v28;
  *((_DWORD *)this + 42) = v28;
  a6 = (const struct tagENUMLOGFONTEXDVW *)*((_QWORD *)*v20 + 6);
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a6, v27, v15);
  v31 = a6;
  v32 = 96;
  v33 = *(unsigned int *)&a6->elfEnumLogfontEx.elfLogFont.lfFaceName[14];
  if ( (v33 & 1) == 0 || (v34 = (CurrentThreadDpiAwarenessContext & 0xFu) - 1 <= 1, v35 = 96, v34) )
    v35 = *(_DWORD *)&a6[5].elfEnumLogfontEx.elfFullName[4];
  *((_DWORD *)this + 61) = v35;
  v36 = W32GetCurrentThreadDpiAwarenessContext(v31, v33, v30);
  v37 = a6;
  if ( (*(_DWORD *)&a6->elfEnumLogfontEx.elfLogFont.lfFaceName[14] & 1) == 0 || (v36 & 0xFu) - 1 <= 1 )
    v32 = *(_DWORD *)&a6[5].elfEnumLogfontEx.elfFullName[6];
  *((_DWORD *)this + 62) = v32;
  *((_DWORD *)this + 63) |= (*(_DWORD *)&v37[5].elfEnumLogfontEx.elfFullName[8] >> 5) & 0x100;
  *((_DWORD *)this + 63) |= (v37[5].elfEnumLogfontEx.elfFullName[8] & 8) << 7;
  v38 = PDEVOBJ::cFonts((PDEVOBJ *)&a6) != 0;
  v39 = a6;
  *((_DWORD *)this + 63) |= v38 ? 0x200 : 0;
  v40 = (*(_DWORD *)&v39[5].elfEnumLogfontEx.elfLogFont.lfFaceName[18] == 0 ? 0x10000 : 0) | *((_DWORD *)this + 63);
  v41 = 0;
  *((_DWORD *)this + 63) = v40;
  if ( *(_DWORD *)&v39[5].elfEnumLogfontEx.elfLogFont.lfFaceName[18] == 4 )
    v41 = 0x20000000;
  v42 = v40 | v41;
  *((_DWORD *)this + 63) = v42;
  if ( !*((_DWORD *)this + 41) )
  {
    v46 = *(_DWORD *)&v39[4].elfEnumLogfontEx.elfFullName[40];
    *((_DWORD *)this + 63) = v42 | 8;
    *((_DWORD *)this + 41) = v46;
  }
  v43 = *((_DWORD *)this + 41);
  if ( v43 < 0 )
  {
    *((_DWORD *)this + 63) |= 2u;
    *((_DWORD *)this + 41) = -v43;
  }
  v44 = *(_DWORD *)(*((_QWORD *)this + 1) + 16LL);
  *((_DWORD *)this + 43) = v44;
  if ( !v44 )
  {
    *((_DWORD *)this + 63) |= 0x200000u;
    *((_DWORD *)this + 43) = 400;
  }
  if ( !**((_WORD **)this + 2) )
    MAPPER::bGetFaceName(this);
  *((_DWORD *)this + 63) |= v23 & 0x40 | 1;
  return this;
}
