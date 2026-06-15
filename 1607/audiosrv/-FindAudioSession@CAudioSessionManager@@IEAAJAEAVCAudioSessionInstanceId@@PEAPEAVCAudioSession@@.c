/*
 * XREFs of ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180010DAC
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800104D0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     AudioSessionManagerGetExistingSession @ 0x180063440 (AudioSessionManagerGetExistingSession.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x180063D80 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x18002BFDC (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CreateNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x1800503F8 (-CreateNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 *     WPP_SF_SS @ 0x1800615EC (WPP_SF_SS.c)
 */

__int64 __fastcall CAudioSessionManager::FindAudioSession(
        CAudioSessionManager *this,
        struct CAudioSessionInstanceId *a2,
        struct CAudioSession **a3)
{
  struct CAudioSession *v4; // rdi
  char *v7; // rbx
  __int64 Node; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-10h] BYREF
  char v11; // [rsp+38h] [rbp-8h]
  unsigned int v12; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+40h] BYREF
  char v14; // [rsp+88h] [rbp+48h] BYREF

  v4 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v11 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v7 = (char *)this + 64;
  if ( ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNode(
         (_DWORD)v7,
         (_DWORD)a2,
         (unsigned int)&v13,
         (unsigned int)&v12,
         (__int64)&v14) )
  {
    Node = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNode(
             (_DWORD)v7,
             (_DWORD)a2,
             (unsigned int)&v13,
             (unsigned int)&v12,
             (__int64)&v14);
    if ( !Node )
      Node = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::CreateNode(
               v7,
               a2,
               v13,
               v12);
    v4 = *(struct CAudioSession **)(Node + 80);
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10,
        (unsigned int)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
        0,
        *((_QWORD *)a2 + 9));
    }
    if ( v4 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  *a3 = v4;
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v4 == 0LL ? 0x80070002 : 0;
}
