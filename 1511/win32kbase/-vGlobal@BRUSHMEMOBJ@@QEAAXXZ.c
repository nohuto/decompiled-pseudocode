/*
 * XREFs of ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C005D1AC
 * Callers:
 *     bInitBrush @ 0x1C013A910 (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C013A9B0 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0023D60 (HmgSetOwner.c)
 */

void __fastcall BRUSHMEMOBJ::vGlobal(BRUSHMEMOBJ *this)
{
  __int64 v2; // rdx

  *(_DWORD *)(*(_QWORD *)this + 48LL) |= 0x40200u;
  HmgSetOwner(**(_QWORD **)this, 0, 16);
  LOBYTE(v2) = 16;
  HmgMarkUndeletable(**(_QWORD **)this, v2);
}
