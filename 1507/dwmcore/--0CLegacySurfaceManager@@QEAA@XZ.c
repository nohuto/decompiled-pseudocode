/*
 * XREFs of ??0CLegacySurfaceManager@@QEAA@XZ @ 0x18009394C
 * Callers:
 *     ??0CSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x180092418 (--0CSurfaceManager@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CLegacySurfaceManager *__fastcall CLegacySurfaceManager::CLegacySurfaceManager(CLegacySurfaceManager *this)
{
  CLegacySurfaceManager *result; // rax

  *(_QWORD *)this = &CLogicalSurfaceHandleMap::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 8),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<unsigned __int64,CWindowManager::SPRITEENTRY>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData,
    0LL);
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  *(_QWORD *)this = &CLegacySurfaceManager::`vftable';
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 136),
    CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData,
    0LL);
  *((_QWORD *)this + 27) = 0LL;
  result = this;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  return result;
}
