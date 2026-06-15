/*
 * XREFs of ?NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ @ 0x180001A00
 * Callers:
 *     ?NotifyAudioDGTerminated@CVolumeStrip@@QEAAXXZ @ 0x180001938 (-NotifyAudioDGTerminated@CVolumeStrip@@QEAAXXZ.c)
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x180001A70 (-Release@-$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

void __fastcall CMeterSoftware::NotifyAudioDGTerminated(CMeterSoftware *this)
{
  char *v2; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      32LL,
      &WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids,
      this);
  }
  v3 = 0;
  v2 = (char *)this + 48;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v2);
  ATL::CComPtrBase<IAudioMeter>::Release((char *)this + 40);
  if ( v3 )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v2);
}
