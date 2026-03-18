/*
 * XREFs of ?CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C0014160
 * Callers:
 *     ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C00224EC (-GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHIL.c)
 * Callees:
 *     <none>
 */

void __fastcall FxChildList::CopyId(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Dest,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Source)
{
  void (__fastcall *m_EvtIdentificationDescriptionCopy)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // r10
  unsigned __int64 v4; // rcx

  m_EvtIdentificationDescriptionCopy = this->m_EvtIdentificationDescriptionCopy;
  if ( m_EvtIdentificationDescriptionCopy )
  {
    if ( this->m_ObjectSize )
      v4 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v4 = 0LL;
    m_EvtIdentificationDescriptionCopy((WDFCHILDLIST__ *)v4, Source, Dest);
  }
  else
  {
    memmove(Dest, Source, this->m_IdentificationDescriptionSize);
  }
}
