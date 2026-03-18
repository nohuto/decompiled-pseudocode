/*
 * XREFs of ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C0267010
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0266614 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C02672B8 (GreDrawEscape.c)
 * Callees:
 *     ?GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C026B05C (-GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 */

void __fastcall DEVEXCLUDERECT::vExclude(DEVEXCLUDERECT *this, struct XDCOBJ *a2, struct _RECTL *a3)
{
  HDEV v4; // rcx

  *((_QWORD *)this + 4) = a2;
  v4 = *(HDEV *)(*(_QWORD *)a2 + 48LL);
  *((_QWORD *)this + 1) = v4;
  *((struct _RECTL *)this + 1) = *a3;
  *(_DWORD *)this = GreTearDownSprites(v4, a3, (int)a3);
}
