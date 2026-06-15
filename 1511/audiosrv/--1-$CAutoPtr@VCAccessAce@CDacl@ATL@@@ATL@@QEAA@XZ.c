/*
 * XREFs of ??1?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAA@XZ @ 0x1800663EC
 * Callers:
 *     _ATL::CDacl::AddAllowedAce_::_1_::dtor$0 @ 0x18004B98E (_ATL--CDacl--AddAllowedAce_--_1_--dtor$0.c)
 *     _ATL::CDacl::Copy_::_1_::dtor$1 @ 0x18004B9DC (_ATL--CDacl--Copy_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAutoPtr<ATL::CDacl::CAccessAce>::~CAutoPtr<ATL::CDacl::CAccessAce>(_QWORD *a1)
{
  return ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(a1);
}
