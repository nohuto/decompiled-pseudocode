/*
 * XREFs of ?AddRef@CArrayBasedCoverageSet@@UEAAKXZ @ 0x1800A3F60
 * Callers:
 *     ?AddRef@CConnection@@W7EAAKXZ @ 0x1800BD0B0 (-AddRef@CConnection@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CArrayBasedCoverageSet::AddRef(CArrayBasedCoverageSet *this)
{
  return CBitmapOfDeviceBitmaps::AddRef((CArrayBasedCoverageSet *)((char *)this + 8));
}
