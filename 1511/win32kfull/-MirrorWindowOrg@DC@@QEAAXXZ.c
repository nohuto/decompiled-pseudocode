/*
 * XREFs of ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C01306B8
 * Callers:
 *     GreSetWindowOrg @ 0x1C013F02C (GreSetWindowOrg.c)
 *     NtGdiMirrorWindowOrg @ 0x1C02A75F0 (NtGdiMirrorWindowOrg.c)
 *     GreScaleWindowExtEx @ 0x1C02B0990 (GreScaleWindowExtEx.c)
 *     NtGdiScaleViewportExtEx @ 0x1C02B0AB0 (NtGdiScaleViewportExtEx.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::MirrorWindowOrg(DC *this)
{
  _DWORD *v1; // r8
  int v2; // r9d

  v1 = (_DWORD *)*((_QWORD *)this + 10);
  if ( (v1[78] & 1) != 0 )
  {
    v2 = v1[86];
    if ( v2 )
      v1[80] = v1[79] - v1[82] * (*((_DWORD *)this + 358) - *((_DWORD *)this + 356) - 1) / v2;
  }
  else
  {
    v1[80] = v1[79];
  }
}
