/*
 * XREFs of bAddFlEntry @ 0x1C0019CB8
 * Callers:
 *     BuildAndLoadLinkedFontRoutine @ 0x1C0018550 (BuildAndLoadLinkedFontRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C028AA00 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C000E2DC (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1C001783C (-FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00184CC (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C0018610 (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0018720 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C001A988 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C001B5E8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C00215DC (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 */

__int64 __fastcall bAddFlEntry(wchar_t *a1, const unsigned __int16 *a2, int a3, int a4, __int64 *a5)
{
  wchar_t *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rdi
  unsigned int v9; // r15d
  int v10; // r14d
  struct _FLENTRY *BaseFontEntry; // rax
  struct _LIST_ENTRY *v12; // rcx
  unsigned int v13; // r12d
  __int64 v14; // rax
  struct _FONTHASH **v15; // rcx
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 i; // rdx
  unsigned __int16 *v20; // rax
  __int64 v21; // rcx
  bool v22; // zf
  int v23; // eax
  __int64 *v24; // rsi
  __int64 *v25; // rax
  __int64 v27; // rax
  __int64 *v28; // rax
  __int64 v29; // rax
  wchar_t *Str1; // [rsp+38h] [rbp-41h] BYREF
  struct _FONTHASH **v31; // [rsp+40h] [rbp-39h] BYREF
  struct PFF *v32; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v33[2]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v34[2]; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int16 *v35; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int16 *v36; // [rsp+78h] [rbp-1h]
  int v37; // [rsp+80h] [rbp+7h]
  int v38; // [rsp+84h] [rbp+Bh]

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Str1, 0x450u);
  v5 = Str1;
  if ( !Str1 )
    goto LABEL_49;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 1;
  gbAnyLinkedFonts = 1;
  if ( a5 )
    *a5 = 0LL;
  if ( (int)StringCchCopyW(v5 + 260, 0x124uLL, a2) < 0
    || !ParseFontLinkEntry(v5 + 260, (struct FontLinkData *)&v35)
    || !(unsigned int)bAppendSysDirectory(v5, v5 + 260)
    || !_wcsicmp(v5, &Dst) )
  {
LABEL_49:
    v10 = 0;
LABEL_28:
    v9 = v10;
    goto LABEL_29;
  }
  if ( off_1C031E848 != (_UNKNOWN *)&off_1C031E848 )
  {
    BaseFontEntry = FindBaseFontEntry(a1);
    v6 = (__int64)BaseFontEntry;
    if ( BaseFontEntry )
    {
      v12 = (struct _LIST_ENTRY *)((char *)BaseFontEntry + 16);
      if ( v12->Flink != v12 )
      {
        if ( FindLinkedFontEntry(v12, v5, v36) )
          goto LABEL_28;
      }
    }
  }
  v31 = gpPFTPublic;
  v34[0] = v33;
  v34[1] = v36;
  v13 = 8;
  if ( !a3 )
    v13 = 10;
  if ( v6 )
    goto LABEL_15;
  v27 = PALLOCMEM2(0x70uLL);
  v6 = v27;
  v7 = v27;
  if ( !v27 )
    goto LABEL_29;
  if ( (int)StringCchCopyW((unsigned __int16 *)(v27 + 32), 0x21uLL, a1) >= 0 )
  {
LABEL_15:
    v14 = PALLOCMEM2(0x30uLL);
    v8 = v14;
    if ( !v14 )
      goto LABEL_32;
    *(_DWORD *)(v14 + 24) = v37;
    *(_DWORD *)(v14 + 28) = v38;
    if ( !(unsigned int)PUBLIC_PFTOBJ::bLoadAFont(
                          (PUBLIC_PFTOBJ *)&v31,
                          v5,
                          (unsigned int *)&Str1,
                          v13,
                          &v32,
                          (struct _EUDCLOAD *)v34) )
      goto LABEL_32;
    if ( v33[0] )
    {
      v16 = v33;
      v17 = 2LL;
      do
      {
        v18 = *v16++;
        *(_DWORD *)(v18 + 12) |= 0x200u;
        --v17;
      }
      while ( v17 );
      if ( v7 )
      {
        *(_DWORD *)(v6 + 100) = 0;
        *(_DWORD *)(v6 + 104) = 0;
        *(_QWORD *)(v6 + 24) = v6 + 16;
        *(_QWORD *)(v6 + 16) = v6 + 16;
        v28 = (__int64 *)off_1C031E850;
        *(_QWORD *)v6 = &off_1C031E848;
        *(_QWORD *)(v6 + 8) = v28;
        if ( (_UNKNOWN **)*v28 != &off_1C031E848 )
          __fastfail(3u);
        ++dword_1C0323BA4;
        *v28 = v6;
        off_1C031E850 = (_UNKNOWN **)v6;
        if ( a5 )
          *a5 = v6;
        ++dword_1C0323BA8;
      }
      for ( i = 0LL; i < 2; ++i )
      {
        v20 = (unsigned __int16 *)v33[i];
        v21 = v8 - (_QWORD)v33 + 8 * i;
        *(unsigned __int16 **)((char *)&v35 + v21) = v20;
      }
      *(_DWORD *)(v8 + 20) = 0;
      v22 = v36 == 0LL;
      *(_DWORD *)(v8 + 16) = a3;
      v23 = *(_DWORD *)(v8 + 20);
      if ( !v22 )
        v23 = 1;
      *(_DWORD *)(v8 + 20) = v23;
      ++*(_DWORD *)(v6 + 100);
      ++*(_DWORD *)(v6 + 104);
      v24 = (__int64 *)(v6 + 16);
      if ( a4 >= 0 )
      {
        v29 = *v24;
        *(_QWORD *)v8 = *v24;
        *(_QWORD *)(v8 + 8) = v24;
        if ( *(__int64 **)(v29 + 8) != v24 )
          __fastfail(3u);
        *(_QWORD *)(v29 + 8) = v8;
        *v24 = v8;
      }
      else
      {
        v25 = (__int64 *)v24[1];
        *(_QWORD *)v8 = v24;
        *(_QWORD *)(v8 + 8) = v25;
        if ( (__int64 *)*v25 != v24 )
          __fastfail(3u);
        *v25 = v8;
        v24[1] = v8;
      }
      goto LABEL_28;
    }
  }
  PFTOBJ::bUnloadEUDCFont(v15, v5);
LABEL_32:
  if ( v7 )
    Win32FreePool(v7);
  if ( v8 )
    Win32FreePool(v8);
LABEL_29:
  if ( v5 )
    Win32FreePool(v5);
  return v9;
}
