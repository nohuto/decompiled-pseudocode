/*
 * XREFs of ??1CSecurityDesc@ATL@@UEAA@XZ @ 0x180050CE4
 * Callers:
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$0 @ 0x18003C6D9 (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$0.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$0 @ 0x18006AC66 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSecurityDesc::~CSecurityDesc(PSECURITY_DESCRIPTOR *this)
{
  *this = &ATL::CSecurityDesc::`vftable';
  ATL::CSecurityDesc::Clear(this);
}
