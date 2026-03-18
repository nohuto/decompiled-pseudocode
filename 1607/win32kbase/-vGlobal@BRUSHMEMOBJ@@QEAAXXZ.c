/*
 * XREFs of ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C005B918
 * Callers:
 *     bInitBrush @ 0x1C0155DCC (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C0155E74 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0035D00 (HmgSetOwner.c)
 */

void __fastcall BRUSHMEMOBJ::vGlobal(__int64 **this)
{
  *((_DWORD *)*this + 12) |= 0x40200u;
  HmgSetOwner(**this, 0, 0x10u);
  HmgMarkUndeletable(**this, 16);
}
