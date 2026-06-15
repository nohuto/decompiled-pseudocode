/*
 * XREFs of ?RemoveAt@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180005A28
 * Callers:
 *     ?RemoveInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x180005F1C (-RemoveInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x180005FD4 (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ??1CDuckingManager@@UEAA@XZ @ 0x1800A428C (--1CDuckingManager@@UEAA@XZ.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@CAXPEAVCDuckingNotification@@_K@Z @ 0x1800059F0 (-CallDestructors@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@AT.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  errno_t v7; // eax

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v4 = a1[1], v2 > v4) )
    ATL::AtlThrowImpl(-2147024809);
  v5 = 32 * a2;
  ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::CallDestructors(
    (CDuckingNotification *)(32 * a2 + *a1),
    1LL);
  v6 = v4 - v2;
  if ( v6 )
  {
    v7 = memmove_s((void *const)(*a1 + v5), 32 * v6, (const void *const)(*a1 + 32 * v2), 32 * v6);
    if ( v7 )
    {
      if ( v7 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v7 == 22 || v7 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v7 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
  }
  --a1[1];
}
