/*
 * XREFs of ?NotifyAudioDGTerminated@CVolumeProvider@@QEAAXXZ @ 0x180001890
 * Callers:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180001AB0 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?NotifyAudioDGTerminated@CVolumeStrip@@QEAAXXZ @ 0x180001938 (-NotifyAudioDGTerminated@CVolumeStrip@@QEAAXXZ.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

void __fastcall CVolumeProvider::NotifyAudioDGTerminated(struct _RTL_CRITICAL_SECTION *this)
{
  _QWORD *p_Type; // rdi
  __int64 v3; // rcx
  CVolumeStrip *v4; // rdi
  _QWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  EnterCriticalSection(this);
  p_Type = &this[1].DebugInfo->Type;
  v5 = p_Type;
  v3 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x14u,
      (__int64)&WPP_890e168e4d5dba4455ca7d4f19a944e5_Traceguids);
  }
  if ( p_Type )
  {
    do
    {
      v4 = (CVolumeStrip *)*ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v3, &v5);
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_S(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          21LL,
          &WPP_890e168e4d5dba4455ca7d4f19a944e5_Traceguids,
          *((_QWORD *)v4 + 28));
      }
      CVolumeStrip::NotifyAudioDGTerminated(v4);
    }
    while ( v5 );
  }
  LeaveCriticalSection(this);
}
