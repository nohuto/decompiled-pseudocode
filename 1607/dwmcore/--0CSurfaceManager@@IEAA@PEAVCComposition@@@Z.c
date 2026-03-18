/*
 * XREFs of ??0CSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x180036FA0
 * Callers:
 *     ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x1800B77DC (-Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z.c)
 * Callees:
 *     ??0CLegacySurfaceManager@@QEAA@XZ @ 0x18003771C (--0CLegacySurfaceManager@@QEAA@XZ.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800A8014 (--0CMmcssTask@@QEAA@XZ.c)
 */

CSurfaceManager *__fastcall CSurfaceManager::CSurfaceManager(CSurfaceManager *this, struct CComposition *a2)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = &CCompositionSurfaceManager::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 24),
    CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::CompareTableData,
    CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    CGenericTableMap<unsigned int,PropertyMapEntry>::FreeTableData,
    0LL);
  CLegacySurfaceManager::CLegacySurfaceManager((CSurfaceManager *)((char *)this + 96));
  *((_QWORD *)this + 50) = a2;
  *(_QWORD *)this = &CSurfaceManager::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 2) = &CSurfaceManager::`vftable'{for `CCompositionSurfaceManager'};
  *((_QWORD *)this + 12) = &CSurfaceManager::`vftable'{for `CLegacySurfaceManager'};
  CMmcssTask::CMmcssTask((CSurfaceManager *)((char *)this + 432));
  *((_DWORD *)this + 136) = 0;
  *((_QWORD *)this + 65) = (char *)this + 552;
  *((_QWORD *)this + 66) = (char *)this + 552;
  *((_DWORD *)this + 134) = 2;
  *((_DWORD *)this + 135) = 2;
  return this;
}
