/*
 * XREFs of ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C007BC34
 * Callers:
 *     bInitBrush @ 0x1C0138488 (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C0138530 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0042E90 (HmgSetOwner.c)
 */

void __fastcall BRUSHMEMOBJ::vGlobal(__int64 **this)
{
  *((_DWORD *)*this + 12) |= 0x40200u;
  HmgSetOwner(**this, 0, 0x10u);
  HmgMarkUndeletable(**this, 16);
}
