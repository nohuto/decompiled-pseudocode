/*
 * XREFs of ?RemoveAt@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180034B00
 * Callers:
 *     ?RemoveInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x180034310 (-RemoveInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x1800343C8 (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ??1CDuckingManager@@UEAA@XZ @ 0x1800A15F8 (--1CDuckingManager@@UEAA@XZ.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@CAXPEAVCDuckingNotification@@_K@Z @ 0x180035204 (-CallDestructors@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@AT.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

errno_t __fastcall ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rbp
  __int64 v5; // rsi
  errno_t result; // eax
  unsigned __int64 v7; // rbp

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v4 = a1[1], v2 > v4) )
    ATL::AtlThrowImpl(-2147024809);
  v5 = 32 * a2;
  result = ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::CallDestructors((CDuckingNotification *)(32 * a2 + *a1));
  v7 = v4 - v2;
  if ( v7 )
  {
    result = memmove_s((void *const)(*a1 + v5), 32 * v7, (const void *const)(*a1 + 32 * v2), 32 * v7);
    if ( result )
    {
      if ( result == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( result == 22 || result == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( result != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
  }
  --a1[1];
  return result;
}
