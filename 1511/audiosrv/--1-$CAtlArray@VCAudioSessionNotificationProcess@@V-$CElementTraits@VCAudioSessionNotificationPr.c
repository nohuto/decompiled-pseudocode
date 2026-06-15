/*
 * XREFs of ??1?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800661D0
 * Callers:
 *     _CLockedList_CAudioSessionNotificationProcess_1_0_::ForEachEntry_::_1_::dtor$0 @ 0x18004C306 (_CLockedList_CAudioSessionNotificationProcess_1_0_--ForEachEntry_--_1_--dtor$0.c)
 *     ??1CAudioSessionManager@@UEAA@XZ @ 0x180079E9C (--1CAudioSessionManager@@UEAA@XZ.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@CAXPEAVCAudioSessionNotificationProcess@@_K@Z @ 0x18007A354 (-CallDestructors@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSession.c)
 */

void __fastcall ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::~CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>(
        void **a1)
{
  CAudioSessionNotificationProcess *v2; // rcx

  v2 = (CAudioSessionNotificationProcess *)*a1;
  if ( v2 )
  {
    ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::CallDestructors(v2);
    free(*a1);
  }
}
