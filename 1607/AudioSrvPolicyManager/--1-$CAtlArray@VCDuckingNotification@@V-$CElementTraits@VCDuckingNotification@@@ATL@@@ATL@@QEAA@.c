/*
 * XREFs of ??1?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAA@XZ @ 0x180009858
 * Callers:
 *     _CLockedList_CDuckingNotification_1_0_::ForEachEntry_::_1_::dtor$0 @ 0x1800250D8 (_CLockedList_CDuckingNotification_1_0_--ForEachEntry_--_1_--dtor$0.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@CAXPEAVCDuckingNotification@@_K@Z @ 0x180009D68 (-CallDestructors@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@AT.c)
 */

void __fastcall ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::~CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::CallDestructors(
      v2,
      *(_QWORD *)(a1 + 8));
    free(*(void **)a1);
  }
}
