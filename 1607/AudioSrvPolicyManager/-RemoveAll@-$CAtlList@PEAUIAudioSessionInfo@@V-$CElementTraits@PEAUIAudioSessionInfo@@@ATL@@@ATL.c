/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x180009E60
 * Callers:
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18000751C (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x18000879C (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x180008A54 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ?RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z @ 0x180008C10 (-RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAUIAudioSessionInfo@@XZ @ 0x1800099F0 (-RemoveHead@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@AT.c)
 *     ??1?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x180009A50 (--1-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAA@X.c)
 *     ?FreeNode@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180009FD0 (-FreeNode@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@.c)
 *     ??1CProcess@@MEAA@XZ @ 0x18000E600 (--1CProcess@@MEAA@XZ.c)
 *     ?RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18000E980 (-RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x180016BD8 (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x1800172D8 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 *     _dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__ @ 0x1800263A0 (_dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180009FD0 (-FreeNode@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  while ( *(_QWORD *)(a1 + 16) )
  {
    if ( !*(_QWORD *)a1 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)a1 = **(_QWORD **)a1;
    ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::FreeNode(a1);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v2 = *(_QWORD **)(a1 + 24);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      free(v2);
      v2 = v3;
    }
    while ( v3 );
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
