/*
 * XREFs of ?ExtendModeFromD2DExtendMode@@YA?AW4Enum@ExtendMode@@W4D2D1_EXTEND_MODE@@@Z @ 0x1800302C8
 * Callers:
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18002F770 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 * Callees:
 *     <none>
 */

char __fastcall ExtendModeFromD2DExtendMode(int a1)
{
  int v2; // ecx

  if ( !a1 )
    return 0;
  v2 = a1 - 1;
  if ( !v2 )
    return 1;
  if ( v2 != 1 )
    return 0;
  return 2;
}
