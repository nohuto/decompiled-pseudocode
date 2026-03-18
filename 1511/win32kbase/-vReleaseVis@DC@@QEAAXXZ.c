/*
 * XREFs of ?vReleaseVis@DC@@QEAAXXZ @ 0x1C002C90C
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0025350 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C0025FD0 (GreCreateDisplayDC.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003ECE0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall DC::vReleaseVis(DC *this)
{
  int v1; // eax

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v1 + 15) |= 4u;
  REGION::vDeleteREGION(*((REGION **)this + 189));
  *((_QWORD *)this + 189) = prgnDefault;
}
