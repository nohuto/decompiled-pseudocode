/*
 * XREFs of ?NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ @ 0x1800020E0
 * Callers:
 *     ?NotifyAudioDGTerminated@CVolumeStrip@@QEAAXXZ @ 0x180001F70 (-NotifyAudioDGTerminated@CVolumeStrip@@QEAAXXZ.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x1800288E8 (-Release@-$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 */

void __fastcall CMeterSoftware::NotifyAudioDGTerminated(CMeterSoftware *this, __int64 a2, bool a3)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_b86362f75b6f31617a79fa28476bc3ef_Traceguids, this, v4);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v4, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48), a3);
  ATL::CComPtrBase<IAudioMeter>::Release((char *)this + 40);
  if ( v5 )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v4);
}
