/*
 * XREFs of ??0CTokenManager@@AEAA@XZ @ 0x1C003D6B8
 * Callers:
 *     InitializeGre @ 0x1C013A000 (InitializeGre.c)
 * Callees:
 *     <none>
 */

CTokenManager *__fastcall CTokenManager::CTokenManager(CTokenManager *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  *((_QWORD *)this + 26) = (char *)this + 200;
  *((_QWORD *)this + 25) = (char *)this + 200;
  *((_QWORD *)this + 30) = (char *)this + 232;
  *((_QWORD *)this + 29) = (char *)this + 232;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 128),
    DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::CompareTableEntries,
    CTokenManager::TokenQueueTableEntry::Allocate,
    (PRTL_GENERIC_FREE_ROUTINE)rimUserMemAllocNodeFree,
    0LL);
  return this;
}
