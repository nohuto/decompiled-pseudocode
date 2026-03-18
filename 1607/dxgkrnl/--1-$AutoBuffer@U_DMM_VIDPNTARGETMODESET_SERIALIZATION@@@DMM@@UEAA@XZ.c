/*
 * XREFs of ??1?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0033F28
 * Callers:
 *     ??_G?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@UEAAPEAXI@Z @ 0x1C0034070 (--_G-$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@UEAAPEAXI@Z.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01A7D44 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

void **__fastcall DMM::AutoBuffer<_DMM_VIDPNTARGETMODESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDPNTARGETMODESET_SERIALIZATION>(
        _QWORD *a1)
{
  void *v2; // rcx
  void **result; // rax

  *a1 = &DMM::AutoBuffer<_DMM_VIDPNTARGETMODESET_SERIALIZATION>::`vftable'{for `SetElement'};
  a1[3] = &DMM::AutoBuffer<_DMM_VIDPNTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v2 = (void *)a1[4];
  if ( v2 )
  {
    operator delete(v2);
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  a1[3] = &NonReferenceCounted::`vftable';
  result = &DoublyLinkedListElement::`vftable';
  *a1 = &DoublyLinkedListElement::`vftable';
  return result;
}
