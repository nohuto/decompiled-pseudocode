/*
 * XREFs of ??1?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAA@XZ @ 0x180067AD4
 * Callers:
 *     _ATL::CDacl::Copy_::_1_::dtor$1 @ 0x180045871 (_ATL--CDacl--Copy_--_1_--dtor$1.c)
 *     _ATL::CDacl::AddAllowedAce_::_1_::dtor$0 @ 0x18004590B (_ATL--CDacl--AddAllowedAce_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAutoPtr<ATL::CDacl::CAccessAce>::~CAutoPtr<ATL::CDacl::CAccessAce>(_QWORD *a1)
{
  return ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(a1);
}
