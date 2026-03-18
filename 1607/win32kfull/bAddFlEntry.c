/*
 * XREFs of bAddFlEntry @ 0x1C00608E8
 * Callers:
 *     BuildAndLoadLinkedFontRoutine @ 0x1C005F8C0 (BuildAndLoadLinkedFontRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C028937C (GreEudcLoadLinkW.c)
 * Callees:
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0022ABC (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C0024B94 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C005F980 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??1MALLOCOBJ@@QEAA@XZ @ 0x1C00604AC (--1MALLOCOBJ@@QEAA@XZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00604D0 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0060C84 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C0060CFC (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C0060E0C (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1C00614E0 (-FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z.c)
 */

__int64 __fastcall bAddFlEntry(wchar_t *a1, const unsigned __int16 *a2, int a3, int a4, struct _FLENTRY **a5)
{
  __int64 i; // rdx
  __int64 v6; // r8
  wchar_t *v7; // rbx
  unsigned int v8; // edi
  int v9; // r15d
  struct _FLENTRY *v10; // r14
  unsigned __int16 *v11; // r13
  char *v12; // rsi
  struct _FLENTRY *BaseFontEntry; // rax
  struct _LIST_ENTRY *v14; // rcx
  unsigned int v15; // r12d
  unsigned __int16 *v16; // rax
  struct _FONTHASH **v17; // rcx
  char *v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  struct _FLENTRY **v22; // rax
  wchar_t *v23; // rax
  __int64 v24; // rcx
  bool v25; // zf
  char **v26; // r14
  char **v27; // rax
  char *v28; // rax
  unsigned int v30; // [rsp+38h] [rbp-51h] BYREF
  wchar_t *Str1; // [rsp+40h] [rbp-49h] BYREF
  struct _FONTHASH **v32; // [rsp+48h] [rbp-41h] BYREF
  struct PFF *v33; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v34[2]; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v35[2]; // [rsp+68h] [rbp-21h] BYREF
  wchar_t *v36; // [rsp+78h] [rbp-11h] BYREF
  wchar_t *v37; // [rsp+80h] [rbp-9h]
  int v38; // [rsp+88h] [rbp-1h]
  int v39; // [rsp+8Ch] [rbp+3h]

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Str1, 0x450u);
  v7 = Str1;
  v8 = 0;
  if ( !Str1 )
    goto LABEL_45;
  v9 = 1;
  gbAnyLinkedFonts = 1;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( (int)StringCchCopyW(v7 + 260, 0x124uLL, a2) < 0
    || !ParseFontLinkEntry(v7 + 260, (struct FontLinkData *)&v36)
    || !(unsigned int)bAppendSysDirectory(v7, v7 + 260)
    || !_wcsicmp(v7, &Dst) )
  {
LABEL_45:
    v9 = 0;
LABEL_46:
    v8 = v9;
    goto LABEL_47;
  }
  if ( off_1C03207D8 != (_UNKNOWN *)&off_1C03207D8 )
  {
    BaseFontEntry = FindBaseFontEntry(a1);
    v10 = BaseFontEntry;
    if ( BaseFontEntry )
    {
      v14 = (struct _LIST_ENTRY *)((char *)BaseFontEntry + 16);
      if ( v14->Flink != v14 )
      {
        if ( FindLinkedFontEntry(v14, v7, v37) )
          goto LABEL_46;
      }
    }
  }
  v32 = gpPFTPublic;
  v35[0] = v34;
  v15 = 8;
  if ( !a3 )
    v15 = 10;
  v35[1] = v37;
  if ( v37 && !_wcsicmp(v37, L"Segoe UI Symbol") )
    v15 |= 0x4000u;
  if ( v10 )
    goto LABEL_27;
  v16 = (unsigned __int16 *)PALLOCMEM2(0x70uLL, 1718382187LL, 0);
  v10 = (struct _FLENTRY *)v16;
  v11 = v16;
  if ( !v16 )
    goto LABEL_47;
  if ( (int)StringCchCopyW(v16 + 16, 0x21uLL, a1) >= 0 )
  {
LABEL_27:
    v18 = (char *)PALLOCMEM2(0x30uLL, 1718382187LL, 0);
    v12 = v18;
    if ( !v18 )
      goto LABEL_21;
    *((_DWORD *)v18 + 6) = v38;
    *((_DWORD *)v18 + 7) = v39;
    if ( !(unsigned int)PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v32, v7, &v30, v15, &v33, (struct _EUDCLOAD *)v35) )
      goto LABEL_21;
    if ( v34[0] )
    {
      v19 = v34;
      v20 = 2LL;
      do
      {
        v21 = *v19++;
        *(_DWORD *)(v21 + 12) |= 0x200u;
        --v20;
      }
      while ( v20 );
      if ( v11 )
      {
        *(_QWORD *)((char *)v10 + 100) = 0LL;
        *((_QWORD *)v10 + 3) = (char *)v10 + 16;
        *((_QWORD *)v10 + 2) = (char *)v10 + 16;
        v22 = (struct _FLENTRY **)off_1C03207E0;
        if ( *off_1C03207E0 != (_UNKNOWN *)&off_1C03207D8 )
          __fastfail(3u);
        ++dword_1C0329294;
        *((_QWORD *)v10 + 1) = off_1C03207E0;
        *(_QWORD *)v10 = &off_1C03207D8;
        *v22 = v10;
        off_1C03207E0 = (_UNKNOWN **)v10;
        if ( a5 )
          *a5 = v10;
        ++dword_1C0329298;
      }
      v6 = v12 - (char *)v34;
      for ( i = 0LL; i < 2; ++i )
      {
        v23 = (wchar_t *)v34[i];
        v24 = v6 + 8 * i;
        *(wchar_t **)((char *)&v36 + v24) = v23;
      }
      v25 = v37 == 0LL;
      *((_DWORD *)v12 + 4) = a3;
      *((_DWORD *)v12 + 5) = !v25;
      ++*((_DWORD *)v10 + 25);
      ++*((_DWORD *)v10 + 26);
      v26 = (char **)((char *)v10 + 16);
      if ( a4 >= 0 )
      {
        v28 = *v26;
        if ( *((char ***)*v26 + 1) != v26 )
          __fastfail(3u);
        *(_QWORD *)v12 = v28;
        *((_QWORD *)v12 + 1) = v26;
        *((_QWORD *)v28 + 1) = v12;
        *v26 = v12;
      }
      else
      {
        v27 = (char **)v26[1];
        if ( *v27 != (char *)v26 )
          __fastfail(3u);
        *(_QWORD *)v12 = v26;
        *((_QWORD *)v12 + 1) = v27;
        *v27 = v12;
        v26[1] = v12;
      }
      goto LABEL_46;
    }
  }
  PFTOBJ::bUnloadEUDCFont(v17, v7);
LABEL_21:
  if ( v11 )
    Win32FreePool(v11, i, v6);
  if ( v12 )
    Win32FreePool(v12, i, v6);
LABEL_47:
  MALLOCOBJ::~MALLOCOBJ((MALLOCOBJ *)&Str1, i, v6);
  return v8;
}
