/*
 * XREFs of ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C013A07C
 * Callers:
 *     GreSetWindowOrg @ 0x1C0144ABC (GreSetWindowOrg.c)
 *     NtGdiMirrorWindowOrg @ 0x1C02A9000 (NtGdiMirrorWindowOrg.c)
 *     GreScaleWindowExtEx @ 0x1C02B3584 (GreScaleWindowExtEx.c)
 *     NtGdiScaleViewportExtEx @ 0x1C02B3870 (NtGdiScaleViewportExtEx.c)
 * Callees:
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C012683C (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 */

void __fastcall DC::MirrorWindowOrg(DC *this)
{
  _DWORD *v1; // r10
  int v2; // edx
  __int64 v3; // r10
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 10);
  if ( (v1[78] & 1) != 0 )
  {
    v2 = v1[86];
    if ( v2 )
    {
      v4 = v1[82] * (*((_DWORD *)this + 356) - *((_DWORD *)this + 358) + 1);
      if ( (int)SafeDivide<long,long,long>(v4, v2, &v4) >= 0 )
        *(_DWORD *)(v3 + 320) = v4 + *(_DWORD *)(v3 + 316);
    }
  }
  else
  {
    v1[80] = v1[79];
  }
}
