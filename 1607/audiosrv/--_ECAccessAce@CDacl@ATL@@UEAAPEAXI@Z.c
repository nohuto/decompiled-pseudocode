/*
 * XREFs of ??_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x18000CD90
 * Callers:
 *     ?SetCount@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x18002D1D8 (-SetCount@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccess.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall ATL::CDacl::CAccessAce::`vector deleting destructor'(void **this, char a2)
{
  ATL::CStringData *v4; // rcx

  *this = &ATL::CAcl::CAce::`vftable';
  free(this[17]);
  v4 = (ATL::CStringData *)((char *)this[15] - 24);
  this[1] = &ATL::CSid::`vftable';
  ATL::CStringData::Release(v4);
  ATL::CStringData::Release((ATL::CStringData *)((char *)this[14] - 24));
  ATL::CStringData::Release((ATL::CStringData *)((char *)this[13] - 24));
  ATL::CStringData::Release((ATL::CStringData *)((char *)this[12] - 24));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x98);
  return this;
}
