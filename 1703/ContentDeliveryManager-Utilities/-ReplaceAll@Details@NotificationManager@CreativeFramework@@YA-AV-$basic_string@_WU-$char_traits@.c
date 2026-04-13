/*
 * XREFs of ?ReplaceAll@Details@NotificationManager@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x180065484
 * Callers:
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x180065870 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 * Callees:
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K@Z @ 0x1800498F4 (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180049A60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180049C60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x18005D53C (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall CreativeFramework::NotificationManager::Details::ReplaceAll(char *Src, char *a2, _WORD *a3, char *a4)
{
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rax
  void **v10; // rax
  unsigned __int64 v11; // rcx

  *((_QWORD *)Src + 3) = 7LL;
  *((_QWORD *)Src + 2) = 0LL;
  *(_WORD *)Src = 0;
  if ( *(_WORD *)a2 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)&a2[2 * v7] );
  }
  else
  {
    v7 = 0LL;
  }
  std::wstring::assign(Src, a2, v7);
  while ( 1 )
  {
    v11 = std::wstring::find(Src, a3, 0LL);
    if ( v11 == -1LL )
      break;
    v8 = -1LL;
    do
      ++v8;
    while ( a3[v8] );
    if ( *(_WORD *)a4 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)&a4[2 * v9] );
    }
    else
    {
      v9 = 0LL;
    }
    v10 = (void **)std::wstring::replace(Src, v11, v8, a4, v9);
    if ( Src != (char *)v10 )
      std::wstring::assign((void **)Src, v10, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  }
  return Src;
}
