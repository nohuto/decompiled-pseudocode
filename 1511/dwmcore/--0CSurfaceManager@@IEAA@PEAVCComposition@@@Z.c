/*
 * XREFs of ??0CSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x18006CB80
 * Callers:
 *     ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x18006A340 (-Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z.c)
 * Callees:
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800A4E04 (--0CMmcssTask@@QEAA@XZ.c)
 *     ??0CLegacySurfaceManager@@QEAA@XZ @ 0x1800A59EC (--0CLegacySurfaceManager@@QEAA@XZ.c)
 */

CSurfaceManager *__fastcall CSurfaceManager::CSurfaceManager(CSurfaceManager *this, struct CComposition *a2)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = &CCompositionSurfaceManager::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 24),
    CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::CompareTableData,
    CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::AllocTableData,
    WPF::Free,
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
