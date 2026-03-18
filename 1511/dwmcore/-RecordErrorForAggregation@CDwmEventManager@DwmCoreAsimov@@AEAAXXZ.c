/*
 * XREFs of ?RecordErrorForAggregation@CDwmEventManager@DwmCoreAsimov@@AEAAXXZ @ 0x1800B6494
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180073480 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800B6448 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 * Callees:
 *     ?ProcessEvent@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@IEAAXQEAU?$AsimovEvent@W4DwmEventType@DwmCoreAsimov@@@2@IIIII@Z @ 0x1800692FC (-ProcessEvent@-$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@IEAAXQEAU-$Asi.c)
 */

void __fastcall DwmCoreAsimov::CDwmEventManager::RecordErrorForAggregation(DwmCoreAsimov::CDwmEventManager *this)
{
  time_t v2; // rdi
  _QWORD *v3; // rcx

  if ( !*((_DWORD *)this + 4) )
  {
    ++*((_DWORD *)this + 3);
    v2 = time(0LL);
    if ( (unsigned __int64)(v2 - *((_QWORD *)this + 6)) >= 0xE10 || *((_DWORD *)this + 3) > 0x708u )
    {
      if ( *((_DWORD *)this + 3) >= 0x12Cu )
      {
        v3 = *(_QWORD **)this;
        *((_QWORD *)this + 5) = *((unsigned int *)this + 3);
        *((_QWORD *)this + 7) = v2;
        DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ProcessEvent(
          v3,
          (__int64 (__fastcall ***)(_QWORD, _QWORD))this + 3);
      }
      *((_QWORD *)this + 7) = 0LL;
      *((_QWORD *)this + 5) = 0LL;
      *((_DWORD *)this + 3) = 0;
      *((_QWORD *)this + 6) = v2;
    }
    *((_DWORD *)this + 4) = 1;
  }
}
