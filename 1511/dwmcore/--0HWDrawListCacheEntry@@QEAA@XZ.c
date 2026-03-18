/*
 * XREFs of ??0HWDrawListCacheEntry@@QEAA@XZ @ 0x18002F5E0
 * Callers:
 *     ?SetNewPrimitives@CHWDrawListCache@@QEAAJ_KW4D2D1_ANTIALIAS_MODE@@_N2PEAUHWDrawListCacheEntry@@I@Z @ 0x18002D13C (-SetNewPrimitives@CHWDrawListCache@@QEAAJ_KW4D2D1_ANTIALIAS_MODE@@_N2PEAUHWDrawListCacheEntry@@I.c)
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18002F770 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 * Callees:
 *     <none>
 */

HWDrawListCacheEntry *__fastcall HWDrawListCacheEntry::HWDrawListCacheEntry(HWDrawListCacheEntry *this)
{
  char *v1; // rax
  int v2; // edx

  v1 = (char *)this + 8;
  v2 = 1;
  do
  {
    --v2;
    *(_WORD *)v1 = 1;
    v1[2] = 0;
    v1 += 3;
  }
  while ( v2 >= 0 );
  return this;
}
