/*
 * XREFs of ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C00B4BBC
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00B40F4 (xxxDrawMenuItem.c)
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C00B4A74 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z.c)
 *     xxxMNInvertItem @ 0x1C013F324 (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1C023882C (xxxRealDrawMenuItem.c)
 * Callees:
 *     MNIsUAHMenu @ 0x1C006F6BC (MNIsUAHMenu.c)
 */

__int64 __fastcall MNDrawHilite(struct tagMENU *a1, struct tagITEM *a2)
{
  __int64 v2; // r8
  __int64 v4; // r9
  int v5; // r10d

  LODWORD(v2) = 0;
  if ( (*((_DWORD *)a2 + 1) & 0xC0000080) == 0x80
    && ((unsigned int)MNIsUAHMenu((__int64)a1) || (v5 & 0x20000000) == 0 || *(_QWORD *)(v4 + 40) != v2) )
  {
    LODWORD(v2) = 1;
  }
  return (unsigned int)v2;
}
