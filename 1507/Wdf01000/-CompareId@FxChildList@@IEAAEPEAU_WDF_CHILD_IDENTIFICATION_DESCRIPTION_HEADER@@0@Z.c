/*
 * XREFs of ?CompareId@FxChildList@@IEAAEPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C001D228
 * Callers:
 *     ?SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C001D6D4 (-SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU.c)
 *     ?SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C001D738 (-SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEA.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxChildList::CompareId(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Lhs,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Rhs)
{
  unsigned __int8 (__fastcall *m_EvtIdentificationDescriptionCompare)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // rax
  unsigned __int64 v4; // rbx

  m_EvtIdentificationDescriptionCompare = this->m_EvtIdentificationDescriptionCompare;
  if ( !m_EvtIdentificationDescriptionCompare )
    return this->m_IdentificationDescriptionSize == RtlCompareMemory(Lhs, Rhs, this->m_IdentificationDescriptionSize);
  if ( this->m_ObjectSize )
    v4 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v4 = 0LL;
  return ((__int64 (__fastcall *)(unsigned __int64, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *))m_EvtIdentificationDescriptionCompare)(
           v4,
           Lhs,
           Rhs,
           Rhs);
}
