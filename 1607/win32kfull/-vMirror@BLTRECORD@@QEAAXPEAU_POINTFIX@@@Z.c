/*
 * XREFs of ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C0001840
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00018FC (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z @ 0x1C027DF88 (-bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C027E088 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C027E2D4 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTRECORD::vMirror(BLTRECORD *this, struct _POINTFIX *a2)
{
  FIX x; // r8d
  FIX v4; // ecx
  FIX y; // eax
  FIX v6; // r8d
  FIX v7; // eax
  FIX v8; // ecx
  FIX v9; // ecx
  FIX v10; // eax
  FIX v11; // ecx
  FIX v12; // eax
  FIX v13; // ecx
  FIX v14; // eax
  FIX v15; // ecx

  if ( (*((_DWORD *)this + 55) & 8) != 0 )
  {
    x = a2[1].x;
    v4 = a2[3].x;
    a2[1].x = a2->x;
    y = a2->y;
    a2->x = x;
    v6 = a2[1].y;
    a2[1].y = y;
    a2[3].x = a2[2].x;
    v7 = a2[2].y;
    a2[2].x = v4;
    v8 = a2[3].y;
    a2[3].y = v7;
    a2[2].y = v8;
    a2->y = v6;
  }
  if ( (*((_DWORD *)this + 55) & 0x10) != 0 )
  {
    v9 = a2[2].x;
    a2[2].x = a2->x;
    v10 = a2->y;
    a2->x = v9;
    v11 = a2[2].y;
    a2[2].y = v10;
    v12 = a2[1].x;
    a2->y = v11;
    v13 = a2[3].x;
    a2[3].x = v12;
    v14 = a2[1].y;
    a2[1].x = v13;
    v15 = a2[3].y;
    a2[3].y = v14;
    a2[1].y = v15;
  }
}
