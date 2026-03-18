/*
 * XREFs of bAddFlEntry @ 0x1C013F410
 * Callers:
 *     BuildAndLoadLinkedFontRoutine @ 0x1C013F350 (BuildAndLoadLinkedFontRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C028A9D4 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0031DE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ??1MALLOCOBJ@@QEAA@XZ @ 0x1C00F9B94 (--1MALLOCOBJ@@QEAA@XZ.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0129B00 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C013F73C (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C013F8A4 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C013F8DC (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C013F9EC (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C0140390 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1C0140478 (-FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z.c)
 */

__int64 __fastcall bAddFlEntry(wchar_t *a1, char *a2, int a3, int a4, struct _FLENTRY **a5)
{
  wchar_t *v5; // rbx
  unsigned int v6; // edi
  int v7; // r15d
  struct _FLENTRY *v8; // r14
  char *v9; // r13
  char *v10; // rsi
  unsigned int v11; // r8d
  struct _FLENTRY *BaseFontEntry; // rax
  struct _LIST_ENTRY *v13; // rcx
  unsigned int v14; // r12d
  char *v15; // rax
  struct _FONTHASH **v16; // rcx
  char *v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  struct _FLENTRY **v21; // rax
  __int64 i; // rdx
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
  v5 = Str1;
  v6 = 0;
  if ( !Str1 )
    goto LABEL_45;
  v7 = 1;
  gbAnyLinkedFonts = 1;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( (int)StringCchCopyW((char *)v5 + 520, 292LL, a2) < 0
    || !ParseFontLinkEntry(v5 + 260, (struct FontLinkData *)&v36)
    || !(unsigned int)bAppendSysDirectory(v5, v5 + 260, v11)
    || !_wcsicmp(v5, &Dst) )
  {
LABEL_45:
    v7 = 0;
LABEL_46:
    v6 = v7;
    goto LABEL_47;
  }
  if ( off_1C031EAB0 != (_UNKNOWN *)&off_1C031EAB0 )
  {
    BaseFontEntry = FindBaseFontEntry(a1);
    v8 = BaseFontEntry;
    if ( BaseFontEntry )
    {
      v13 = (struct _LIST_ENTRY *)((char *)BaseFontEntry + 16);
      if ( v13->Flink != v13 )
      {
        if ( FindLinkedFontEntry(v13, v5, v37) )
          goto LABEL_46;
      }
    }
  }
  v32 = gpPFTPublic;
  v35[0] = v34;
  v14 = 8;
  if ( !a3 )
    v14 = 10;
  v35[1] = v37;
  if ( v37 && !_wcsicmp(v37, L"Segoe UI Symbol") )
    v14 |= 0x4000u;
  if ( v8 )
    goto LABEL_27;
  v15 = (char *)PALLOCMEM2(0x70uLL, 1718382187LL, 0);
  v8 = (struct _FLENTRY *)v15;
  v9 = v15;
  if ( !v15 )
    goto LABEL_47;
  if ( (int)StringCchCopyW(v15 + 32, 33LL, (char *)a1) >= 0 )
  {
LABEL_27:
    v17 = (char *)PALLOCMEM2(0x30uLL, 1718382187LL, 0);
    v10 = v17;
    if ( !v17 )
      goto LABEL_21;
    *((_DWORD *)v17 + 6) = v38;
    *((_DWORD *)v17 + 7) = v39;
    if ( !(unsigned int)PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v32, v5, &v30, v14, &v33, (struct _EUDCLOAD *)v35) )
      goto LABEL_21;
    if ( v34[0] )
    {
      v18 = v34;
      v19 = 2LL;
      do
      {
        v20 = *v18++;
        *(_DWORD *)(v20 + 12) |= 0x200u;
        --v19;
      }
      while ( v19 );
      if ( v9 )
      {
        *(_QWORD *)((char *)v8 + 100) = 0LL;
        *((_QWORD *)v8 + 3) = (char *)v8 + 16;
        *((_QWORD *)v8 + 2) = (char *)v8 + 16;
        v21 = (struct _FLENTRY **)off_1C031EAB8;
        *(_QWORD *)v8 = &off_1C031EAB0;
        *((_QWORD *)v8 + 1) = v21;
        if ( *v21 != (struct _FLENTRY *)&off_1C031EAB0 )
          __fastfail(3u);
        ++dword_1C03234C8;
        *v21 = v8;
        off_1C031EAB8 = (_UNKNOWN **)v8;
        if ( a5 )
          *a5 = v8;
        ++dword_1C03234CC;
      }
      for ( i = 0LL; i < 2; ++i )
      {
        v23 = (wchar_t *)v34[i];
        v24 = v10 - (char *)v34 + 8 * i;
        *(wchar_t **)((char *)&v36 + v24) = v23;
      }
      v25 = v37 == 0LL;
      *((_DWORD *)v10 + 4) = a3;
      *((_DWORD *)v10 + 5) = !v25;
      ++*((_DWORD *)v8 + 25);
      ++*((_DWORD *)v8 + 26);
      v26 = (char **)((char *)v8 + 16);
      if ( a4 >= 0 )
      {
        v28 = *v26;
        *(_QWORD *)v10 = *v26;
        *((_QWORD *)v10 + 1) = v26;
        if ( *((char ***)v28 + 1) != v26 )
          __fastfail(3u);
        *((_QWORD *)v28 + 1) = v10;
        *v26 = v10;
      }
      else
      {
        v27 = (char **)v26[1];
        *(_QWORD *)v10 = v26;
        *((_QWORD *)v10 + 1) = v27;
        if ( *v27 != (char *)v26 )
          __fastfail(3u);
        *v27 = v10;
        v26[1] = v10;
      }
      goto LABEL_46;
    }
  }
  PFTOBJ::bUnloadEUDCFont(v16, v5);
LABEL_21:
  if ( v9 )
    Win32FreePool(v9);
  if ( v10 )
    Win32FreePool(v10);
LABEL_47:
  MALLOCOBJ::~MALLOCOBJ((MALLOCOBJ *)&Str1);
  return v6;
}
