/*
 * XREFs of ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C0119E0C
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C011A3D0 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02B34D8 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0015D34 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00184CC (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C001E468 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 */

__int64 __fastcall PFFMEMOBJ::bAddEntry(
        PFFMEMOBJ *this,
        int a2,
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
  int v13; // r14d
  _QWORD *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rcx
  BOOL v17; // ebp
  wchar_t *v18; // rdi
  struct _FLENTRY *BaseFontEntry; // rax
  const unsigned __int16 *v21; // rdx
  _BOOL8 v22; // rbp
  bool v23; // zf
  __int64 v24; // rax
  int v25; // ebp
  __int64 v26; // [rsp+80h] [rbp+8h] BYREF

  v9 = *(_QWORD *)this;
  v26 = *(_QWORD *)(*(_QWORD *)this + 216LL) + (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 208LL) * (a2 - 1));
  if ( !v26 )
    return 0;
  v11 = a8;
  v12 = 1;
  if ( a8 )
  {
    v14 = *(_QWORD **)a8;
    v13 = 1;
  }
  else
  {
    v13 = 0;
    v14 = 0LL;
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
                        v13) )
    return 0;
  if ( v13 )
  {
    v21 = (const unsigned __int16 *)*((_QWORD *)v11 + 1);
    v15 = v26;
    if ( v21 )
    {
      if ( a2 != 1 )
      {
        v22 = *(_WORD *)(*(int *)(*(_QWORD *)(v26 + 32) + 16LL) + *(_QWORD *)(v26 + 32)) == 64;
        if ( !(unsigned int)PFEOBJ::bCheckFamilyName((PFEOBJ *)&v26, v21, 1, 0LL) )
          goto LABEL_8;
        v14[v22] = v15;
        v23 = !v22;
        goto LABEL_17;
      }
    }
    else
    {
      v25 = a2 - 1;
      if ( v25 )
      {
        if ( v25 != 1 )
          goto LABEL_8;
        v23 = *(_WORD *)(*(int *)(*(_QWORD *)(v26 + 32) + 16LL) + *(_QWORD *)(v26 + 32)) == 64;
LABEL_17:
        if ( !v23 )
          goto LABEL_8;
LABEL_20:
        v14[1] = v15;
        goto LABEL_8;
      }
    }
    *v14 = v26;
    goto LABEL_20;
  }
  v15 = v26;
  v16 = *(_QWORD *)(v26 + 32);
  v17 = (*(_DWORD *)(v16 + 48) & 0x8000000) != 0;
  v18 = (wchar_t *)(v16 + *(int *)(v16 + 8));
  BaseFontEntry = FindBaseFontEntry(v18);
  if ( BaseFontEntry )
    goto LABEL_11;
  if ( v17 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v18[v24] );
    BaseFontEntry = FindBaseFontEntry(&v18[v24 + 1]);
    if ( BaseFontEntry )
    {
LABEL_11:
      *(_QWORD *)(v15 + 128) = BaseFontEntry;
      goto LABEL_9;
    }
  }
LABEL_8:
  *(_QWORD *)(v15 + 128) = 0LL;
LABEL_9:
  *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 144LL))++ + 216) = v15;
  return v12;
}
