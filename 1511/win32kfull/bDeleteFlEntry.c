/*
 * XREFs of bDeleteFlEntry @ 0x1C028B16C
 * Callers:
 *     GreEudcUnloadLinkW @ 0x1C028AC40 (GreEudcUnloadLinkW.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C000E074 (bUnloadEudcFont.c)
 *     ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1C001783C (-FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00184CC (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C0018610 (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0018720 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C001A988 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C001B5E8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     vUnlinkEudcRFONTs @ 0x1C028B6D0 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C028B780 (vUnlinkEudcRFONTsAndPFEs.c)
 */

__int64 __fastcall bDeleteFlEntry(wchar_t *Str1, char *a2, int a3)
{
  unsigned __int16 *v6; // rdi
  unsigned __int16 *v7; // rbx
  struct _LIST_ENTRY *BaseFontEntry; // rax
  struct _LIST_ENTRY *v9; // rsi
  struct _LIST_ENTRY *LinkedFontEntry; // rax
  struct _LIST_ENTRY *v11; // r14
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  bool v14; // zf
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *v17; // rax
  unsigned int v18; // ebp
  wchar_t *Str1a; // [rsp+20h] [rbp-38h] BYREF
  char v21[8]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int16 *v22; // [rsp+30h] [rbp-28h]
  unsigned __int16 *v23; // [rsp+78h] [rbp+20h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Str1a, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v23, 0x24Au);
  v6 = Str1a;
  v7 = v23;
  if ( Str1a
    && v23
    && (int)StringCchCopyW((char *)v23, 293LL, a2) >= 0
    && ParseFontLinkEntry(v7, (struct FontLinkData *)v21)
    && (unsigned int)bAppendSysDirectory(v6, v7)
    && _wcsicmp(v6, Dst)
    && off_1C031E848 != (_UNKNOWN *)&off_1C031E848
    && (BaseFontEntry = (struct _LIST_ENTRY *)FindBaseFontEntry(Str1), (v9 = BaseFontEntry) != 0LL)
    && (LinkedFontEntry = FindLinkedFontEntry(BaseFontEntry + 1, v6, v22), (v11 = LinkedFontEntry) != 0LL)
    && LODWORD(LinkedFontEntry[1].Flink) == a3 )
  {
    Flink = LinkedFontEntry->Flink;
    Blink = LinkedFontEntry->Blink;
    if ( Flink->Blink != v11 || Blink->Flink != v11 )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    v14 = HIDWORD(v9[6].Flink)-- == 1;
    v15 = v11 + 2;
    if ( v14 )
    {
      vUnlinkEudcRFONTsAndPFEs(v15, v9);
      v16 = v9->Flink;
      v17 = v9->Blink;
      if ( v9->Flink->Blink != v9 || v17->Flink != v9 )
        __fastfail(3u);
      v17->Flink = v16;
      v16->Blink = v17;
      Win32FreePool(v9);
      --dword_1C0323BA4;
      v18 = 1;
      ++dword_1C0323BA8;
    }
    else
    {
      vUnlinkEudcRFONTs(v15);
      v18 = 1;
      ++LODWORD(v9[6].Blink);
    }
    bUnloadEudcFont((__int64 *)&v11[2]);
    Win32FreePool(v11);
  }
  else
  {
    v18 = 0;
  }
  if ( v7 )
    Win32FreePool(v7);
  if ( v6 )
    Win32FreePool(v6);
  return v18;
}
