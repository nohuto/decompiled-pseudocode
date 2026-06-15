/*
 * XREFs of ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x180015F90
 * Callers:
 *     ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800141D0 (-Invoke@CAudioSessionStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180014FF0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180015730 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Invoke@CAudioStreamDestroy@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180017930 (-Invoke@CAudioStreamDestroy@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioStreamCreate@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180017A50 (-Invoke@CAudioStreamCreate@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioStreamStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180018B40 (-Invoke@CAudioStreamStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180016000 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

void __fastcall CServerAudioSessionControl::FinalRelease(CServerAudioSessionControl *this)
{
  __int64 (__fastcall *v2)(CServerAudioSessionControl *__hidden); // rdi

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, 0LL);
  }
  v2 = *(__int64 (__fastcall **)(CServerAudioSessionControl *__hidden))(*((_QWORD *)this - 1) + 104LL);
  if ( v2 == CServerAudioSessionControl::Dispose )
    CServerAudioSessionControl::Dispose((CServerAudioSessionControl *)((char *)this - 8));
  else
    v2((CServerAudioSessionControl *)((char *)this - 8));
}
