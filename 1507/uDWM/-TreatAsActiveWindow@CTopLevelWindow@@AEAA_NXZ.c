/*
 * XREFs of ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x180024AFC
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180023058 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023350 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CTopLevelWindow::TreatAsActiveWindow(CTopLevelWindow *this)
{
  return (*((_BYTE *)this + 608) & 0x40) != 0 || (*(_BYTE *)(*((_QWORD *)this + 93) + 555LL) & 0x20) != 0;
}
