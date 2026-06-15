/*
 * XREFs of ??1CDacl@ATL@@UEAA@XZ @ 0x18002D120
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18002CA38 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$1 @ 0x18003C6E5 (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$1.c)
 *     ??_ECDacl@ATL@@UEAAPEAXI@Z @ 0x180067340 (--_ECDacl@ATL@@UEAAPEAXI@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18006A8E0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$1 @ 0x18006AC72 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$1.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$2 @ 0x18006AC9A (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$2.c)
 * Callees:
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x18002CFC0 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x1800675C0 (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 */

void __fastcall ATL::CDacl::~CDacl(void **this)
{
  void *v2; // rcx
  void *v3; // rcx

  *this = &ATL::CDacl::`vftable';
  ATL::CDacl::RemoveAllAces(this);
  v2 = this[3];
  if ( v2 )
  {
    ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
      v2,
      this[4]);
    free(this[3]);
  }
  v3 = this[1];
  *this = &ATL::CAcl::`vftable';
  free(v3);
}
