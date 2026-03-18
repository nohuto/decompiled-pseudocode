/*
 * XREFs of bDeleteFlEntry @ 0x140324924
 * Callers:
 *     GreEudcUnloadLinkW @ 0x140324810 (GreEudcUnloadLinkW.c)
 * Callees:
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x140102324 (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x140103ABC (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x140103DF4 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     bUnloadEudcFont @ 0x140104924 (bUnloadEudcFont.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14010EE3C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x140186E18 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140187408 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1401D8454 (-FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z.c)
 *     vUnlinkEudcRFONTs @ 0x140325380 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1403254C8 (vUnlinkEudcRFONTsAndPFEs.c)
 */

__int64 __fastcall bDeleteFlEntry(wchar_t *Str1, char *a2, int a3)
{
  wchar_t *v6; // rdi
  unsigned __int16 *v7; // rbx
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _FLENTRY *BaseFontEntry; // rax
  struct _FLENTRY *v14; // rbx
  struct _LIST_ENTRY *LinkedFontEntry; // rax
  struct PFE **v16; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  bool v19; // zf
  struct PFE **v20; // rcx
  _QWORD *v21; // rcx
  void **v22; // rax
  unsigned __int16 *v24; // [rsp+20h] [rbp-30h] BYREF
  wchar_t *Str1a; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int16 *v26[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27; // [rsp+40h] [rbp-10h]

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Str1a, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v24, 0x24Au);
  v6 = Str1a;
  if ( Str1a )
  {
    v7 = v24;
    if ( v24 )
    {
      v27 = 0LL;
      *(_OWORD *)v26 = 0LL;
      if ( (int)StringCchCopyW((char *)v24, 293LL, a2) >= 0 && ParseFontLinkEntry(v7, (struct FontLinkData *)v26) )
      {
        if ( (unsigned int)bAppendSysDirectory(v6, (char *)v7) )
        {
          v10 = *(_QWORD *)(W32GetSessionState(v9, v8) + 96);
          if ( _wcsicmp(v6, (const wchar_t *)(v10 + 13536)) )
          {
            if ( *(_QWORD *)(v10 + 14112) != v10 + 14112 )
            {
              BaseFontEntry = FindBaseFontEntry(Str1, v11, v12);
              v14 = BaseFontEntry;
              if ( BaseFontEntry )
              {
                LinkedFontEntry = FindLinkedFontEntry((struct _LIST_ENTRY *)BaseFontEntry + 1, v6, v26[1]);
                v16 = (struct PFE **)LinkedFontEntry;
                if ( LinkedFontEntry )
                {
                  if ( LODWORD(LinkedFontEntry[1].Flink) == a3 )
                  {
                    Flink = LinkedFontEntry->Flink;
                    if ( LinkedFontEntry->Flink->Blink == LinkedFontEntry )
                    {
                      Blink = LinkedFontEntry->Blink;
                      if ( (struct PFE **)Blink->Flink == v16 )
                      {
                        Blink->Flink = Flink;
                        Flink->Blink = Blink;
                        v19 = (*((_DWORD *)v14 + 25))-- == 1;
                        v20 = v16 + 4;
                        if ( !v19 )
                        {
                          vUnlinkEudcRFONTs(v20);
                          ++*((_DWORD *)v14 + 26);
                          goto LABEL_18;
                        }
                        vUnlinkEudcRFONTsAndPFEs(v20, v14);
                        v21 = *(_QWORD **)v14;
                        if ( *(struct _FLENTRY **)(*(_QWORD *)v14 + 8LL) == v14 )
                        {
                          v22 = (void **)*((_QWORD *)v14 + 1);
                          if ( *v22 == v14 )
                          {
                            *v22 = v21;
                            v21[1] = v22;
                            Win32FreePool(v14);
                            --*(_DWORD *)(v10 + 14104);
                            ++*(_DWORD *)(v10 + 14100);
LABEL_18:
                            bUnloadEudcFont(v16 + 4);
                            Win32FreePool(v16);
                            AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v24);
                            AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&Str1a);
                            return 1LL;
                          }
                        }
                      }
                    }
                    __fastfail(3u);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v24);
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&Str1a);
  return 0LL;
}
