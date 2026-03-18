/*
 * XREFs of ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C013E4D8
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C013EA70 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C02B4510 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 * Callees:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C013ECC4 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C013F9EC (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C0140CCC (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?IsCHSBaseFont@@YAHPEBGI@Z @ 0x1C02B3FDC (-IsCHSBaseFont@@YAHPEBGI@Z.c)
 */

__int64 __fastcall PFFMEMOBJ::bAddEntry(
        PFFMEMOBJ *this,
        unsigned int a2,
        struct _FD_GLYPHSET *a3,
        unsigned __int64 a4,
        struct _IFIMETRICS *a5,
        unsigned __int64 a6,
        struct _UNIVERSAL_FONT_ID *a7,
        struct _EUDCLOAD *a8)
{
  __int64 v9; // rdx
  struct _EUDCLOAD *v11; // rbx
  unsigned int v12; // esi
  _QWORD *v13; // rdi
  int v14; // r15d
  const unsigned __int16 *v15; // rdx
  __int64 v16; // rbx
  unsigned int v17; // ebp
  bool v18; // zf
  _BOOL8 v19; // rbp
  __int64 v20; // rcx
  BOOL v21; // r15d
  wchar_t *v22; // rdi
  struct _FLENTRY *BaseFontEntry; // rbp
  __int64 v24; // rax
  __int64 v26; // [rsp+80h] [rbp+8h] BYREF

  v9 = *(_QWORD *)this;
  v26 = *(_QWORD *)(*(_QWORD *)this + 216LL) + *(_DWORD *)(*(_QWORD *)this + 208LL) * (a2 - 1);
  if ( !v26 )
    return 0;
  v11 = a8;
  v12 = 1;
  if ( a8 )
  {
    v13 = *(_QWORD **)a8;
    v14 = 1;
  }
  else
  {
    v14 = 0;
    v13 = 0LL;
  }
  if ( !(unsigned int)PFEMEMOBJ::bInit(
                        (PFEMEMOBJ *)&v26,
                        (struct PFF *)v9,
                        a2,
                        a3,
                        a4,
                        a5,
                        a6,
                        *(_QWORD *)(v9 + 80) == 0LL,
                        a7,
                        v14) )
    return 0;
  if ( !v14 )
  {
    v16 = v26;
    v20 = *(_QWORD *)(v26 + 32);
    v21 = (*(_DWORD *)(v20 + 48) & 0x8000000) != 0;
    v22 = (wchar_t *)(v20 + *(int *)(v20 + 8));
    BaseFontEntry = FindBaseFontEntry(v22);
    if ( BaseFontEntry )
      goto LABEL_31;
    if ( v21 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( v22[v24] );
      BaseFontEntry = FindBaseFontEntry(&v22[v24 + 1]);
      if ( BaseFontEntry )
      {
LABEL_31:
        if ( (unsigned int)IsCHSBaseFont(
                             *(const unsigned __int16 **)(*(_QWORD *)this + 24LL),
                             *(_DWORD *)(*(_QWORD *)this + 32LL)) )
          *(_DWORD *)(*(_QWORD *)this + 52LL) |= 0x8000u;
        *(_QWORD *)(v16 + 128) = BaseFontEntry;
        goto LABEL_26;
      }
    }
    goto LABEL_17;
  }
  v15 = (const unsigned __int16 *)*((_QWORD *)v11 + 1);
  v16 = v26;
  if ( !v15 )
  {
    v17 = a2 - 1;
    if ( v17 )
    {
      if ( v17 != 1 )
        goto LABEL_17;
      v18 = *(_WORD *)(*(int *)(*(_QWORD *)(v26 + 32) + 16LL) + *(_QWORD *)(v26 + 32)) == 64;
      goto LABEL_15;
    }
LABEL_11:
    *v13 = v26;
LABEL_16:
    v13[1] = v16;
    goto LABEL_17;
  }
  if ( a2 == 1 )
    goto LABEL_11;
  v19 = *(_WORD *)(*(int *)(*(_QWORD *)(v26 + 32) + 16LL) + *(_QWORD *)(v26 + 32)) == 64;
  if ( !PFEOBJ::bCheckFamilyName((PFEOBJ *)&v26, v15, 1, 0LL) )
    goto LABEL_17;
  v13[v19] = v16;
  v18 = !v19;
LABEL_15:
  if ( v18 )
    goto LABEL_16;
LABEL_17:
  *(_QWORD *)(v16 + 128) = 0LL;
LABEL_26:
  *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 144LL))++ + 216) = v16;
  return v12;
}
