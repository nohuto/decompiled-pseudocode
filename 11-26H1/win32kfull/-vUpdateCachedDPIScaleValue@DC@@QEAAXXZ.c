/*
 * XREFs of ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1400D19C4
 * Callers:
 *     GreHintDCWnd @ 0x1400D1780 (GreHintDCWnd.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1400D3508 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x140015840 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 */

void __fastcall DC::vUpdateCachedDPIScaleValue(DC *this)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  DC *v3; // r10
  int v4; // r9d
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rax

  if ( (unsigned int)DC::bDpiScaleTransform(this) )
  {
    v4 = *(_DWORD *)(v1 + 524);
    v5 = (unsigned __int8)(v4 >> 23);
    if ( v5 <= 0x9E )
    {
      v6 = v4 & 0x7FFFFF | 0x800000LL;
      if ( v5 < (int)v2 + 117 )
        v7 = v6 >> ((unsigned __int8)v2 + 117 - (unsigned __int8)v5);
      else
        v7 = v6 << ((unsigned __int8)v5 - 118);
      v2 = (v7 + 0x80000000LL) >> 32;
      if ( v4 < 0 )
        LODWORD(v2) = -(int)v2;
    }
  }
  DC::SetCachedDpiScaleValue(v3, v2);
}
