/*
 * XREFs of ??1?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAA@XZ @ 0x1800A425C
 * Callers:
 *     ??1CDuckingManager@@UEAA@XZ @ 0x1800A428C (--1CDuckingManager@@UEAA@XZ.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800A4790 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z.c)
 *     _CLockedList_CDuckingNotification_1_0_::ForEachEntry_::_1_::dtor$0 @ 0x1800A48AF (_CLockedList_CDuckingNotification_1_0_--ForEachEntry_--_1_--dtor$0.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@CAXPEAVCDuckingNotification@@_K@Z @ 0x1800059F0 (-CallDestructors@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@AT.c)
 */

void __fastcall ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::~CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>(
        __int64 a1)
{
  CDuckingNotification *v2; // rcx

  v2 = *(CDuckingNotification **)a1;
  if ( v2 )
  {
    ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::CallDestructors(
      v2,
      *(_QWORD *)(a1 + 8));
    free(*(void **)a1);
  }
}
