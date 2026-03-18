/*
 * XREFs of ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C003E060
 * Callers:
 *     GreSetDCOrg @ 0x1C00547B0 (GreSetDCOrg.c)
 *     GreRestoreDCInternal @ 0x1C00BF7E0 (GreRestoreDCInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vCalcFillOrigin(DC *this)
{
  int v2; // r8d
  int v3; // ecx
  int v4; // ecx

  v2 = *((_DWORD *)this + 10) & 1;
  if ( v2 )
    v3 = *((_DWORD *)this + 354);
  else
    v3 = *((_DWORD *)this + 352);
  *((_DWORD *)this + 394) = *((_DWORD *)this + 34) + v3;
  if ( v2 )
    v4 = *((_DWORD *)this + 355);
  else
    v4 = *((_DWORD *)this + 353);
  *((_DWORD *)this + 395) = *((_DWORD *)this + 35) + v4;
}
