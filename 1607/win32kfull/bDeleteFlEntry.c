/*
 * XREFs of bDeleteFlEntry @ 0x1C0289B84
 * Callers:
 *     GreEudcUnloadLinkW @ 0x1C02895C8 (GreEudcUnloadLinkW.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C0021F90 (bUnloadEudcFont.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C005F980 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00604D0 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0060C84 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C0060CFC (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C0060E0C (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1C00614E0 (-FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z.c)
 *     vUnlinkEudcRFONTs @ 0x1C028A270 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C028A358 (vUnlinkEudcRFONTsAndPFEs.c)
 */

__int64 __fastcall bDeleteFlEntry(wchar_t *Str1, char *a2, int a3)
{
  __int64 v6; // rdx
  unsigned __int16 *v7; // rdi
  unsigned __int16 *v8; // rbx
  struct _LIST_ENTRY *BaseFontEntry; // rax
  struct _LIST_ENTRY *v10; // rsi
  struct _LIST_ENTRY *LinkedFontEntry; // rax
  struct _LIST_ENTRY *v12; // r14
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  bool v15; // zf
  struct _LIST_ENTRY *v16; // rcx
  __int64 v17; // rdx
  struct _LIST_ENTRY *v18; // rcx
  struct _LIST_ENTRY *v19; // rax
  unsigned int v20; // ebp
  __int64 v21; // rdx
  wchar_t *Str1a; // [rsp+20h] [rbp-38h] BYREF
  char v24[8]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int16 *v25; // [rsp+30h] [rbp-28h]
  unsigned __int16 *v26; // [rsp+78h] [rbp+20h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Str1a, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v26, 0x24Au);
  v7 = Str1a;
  v8 = v26;
  if ( Str1a
    && v26
    && (int)StringCchCopyW((char *)v26, 293LL, a2) >= 0
    && ParseFontLinkEntry(v8, (struct FontLinkData *)v24)
    && (unsigned int)bAppendSysDirectory(v7, v8)
    && _wcsicmp(v7, Dst)
    && off_1C03207D8 != (_UNKNOWN *)&off_1C03207D8
    && (BaseFontEntry = (struct _LIST_ENTRY *)FindBaseFontEntry(Str1), (v10 = BaseFontEntry) != 0LL)
    && (LinkedFontEntry = FindLinkedFontEntry(BaseFontEntry + 1, v7, v25), (v12 = LinkedFontEntry) != 0LL)
    && LODWORD(LinkedFontEntry[1].Flink) == a3 )
  {
    Flink = LinkedFontEntry->Flink;
    Blink = LinkedFontEntry->Blink;
    if ( Flink->Blink != v12 || Blink->Flink != v12 )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    v15 = HIDWORD(v10[6].Flink)-- == 1;
    v16 = v12 + 2;
    if ( v15 )
    {
      vUnlinkEudcRFONTsAndPFEs(v16, v10);
      v18 = v10->Flink;
      v19 = v10->Blink;
      if ( v10->Flink->Blink != v10 || v19->Flink != v10 )
        __fastfail(3u);
      v19->Flink = v18;
      v18->Blink = v19;
      Win32FreePool(v10, v17);
      --dword_1C0329294;
      v20 = 1;
      ++dword_1C0329298;
    }
    else
    {
      vUnlinkEudcRFONTs(v16);
      v20 = 1;
      ++LODWORD(v10[6].Blink);
    }
    bUnloadEudcFont((__int64 *)&v12[2]);
    Win32FreePool(v12, v21);
  }
  else
  {
    v20 = 0;
  }
  if ( v8 )
    Win32FreePool(v8, v6);
  if ( v7 )
    Win32FreePool(v7, v6);
  return v20;
}
