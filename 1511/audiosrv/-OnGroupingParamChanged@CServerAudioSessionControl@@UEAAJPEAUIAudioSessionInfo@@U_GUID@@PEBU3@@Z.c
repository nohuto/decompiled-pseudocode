/*
 * XREFs of ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x180015D90
 * Callers:
 *     ?Invoke@CAudioSessionGroupingParamChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180039A60 (-Invoke@CAudioSessionGroupingParamChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180036FCC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnGroupingParamChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        struct _GUID *a3,
        struct _GUID *a4)
{
  int MediaEvent; // edi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  unsigned int *v12; // rax
  unsigned int *v13; // rbx
  unsigned __int16 *v14; // rcx
  GUID *v15; // rax
  GUID v16; // xmm0
  _BYTE v18[40]; // [rsp+30h] [rbp-28h] BYREF

  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, 0LL);
  }
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)v18,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 32),
    (bool)a3);
  v8 = *((_QWORD *)this + 9);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 856);
    v10 = 2 * *(_DWORD *)(v9 - 16) + 2;
    v11 = 2 * *(_DWORD *)(v9 - 16) + 66;
    v12 = (unsigned int *)operator new(v11);
    v13 = v12;
    if ( v12 )
    {
      *v12 = v11;
      v14 = (unsigned __int16 *)(v12 + 16);
      v15 = &GUID_00000000_0000_0000_0000_000000000000;
      if ( a4 )
        v15 = a4;
      v16 = *v15;
      v13[6] = v10;
      v13[1] = 4;
      *(GUID *)(v13 + 7) = v16;
      *((struct _GUID *)v13 + 3) = *a3;
      StringCbCopyW(v14, v10, *(const unsigned __int16 **)(*((_QWORD *)this + 9) + 856LL));
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          28LL,
          &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
          v13,
          *((_DWORD *)this + 20));
      }
      MediaEvent = GenerateMediaEvent(v13, *((unsigned int *)this + 20));
      operator delete(v13);
      if ( MediaEvent < 0
        && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          29LL,
          &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
          (unsigned int)MediaEvent);
      }
    }
  }
  if ( v18[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v18);
  return (unsigned int)MediaEvent;
}
