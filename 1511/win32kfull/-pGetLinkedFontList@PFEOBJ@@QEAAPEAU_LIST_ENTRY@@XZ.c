/*
 * XREFs of ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C001E44C
 * Callers:
 *     ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C001EA78 (-jMapCharset@@YAEEAEAVPFEOBJ@@@Z.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C001F8E0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C00264C8 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002667C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029A7D0 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall PFEOBJ::pGetLinkedFontList(PFEOBJ *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*(_QWORD *)this + 128LL);
  if ( v1 )
    return (struct _LIST_ENTRY *)(v1 + 16);
  else
    return &NullListHead;
}
