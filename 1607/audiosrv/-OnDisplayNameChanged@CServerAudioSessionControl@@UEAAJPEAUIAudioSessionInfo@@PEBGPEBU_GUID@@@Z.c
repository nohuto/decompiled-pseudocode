/*
 * XREFs of ?OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x180060790
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180027BAC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     WPP_SF_SS @ 0x1800615EC (WPP_SF_SS.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnDisplayNameChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        size_t *a3,
        struct _GUID *a4)
{
  int MediaEvent; // edi
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rax
  unsigned int v11; // r14d
  unsigned __int64 v12; // r15
  unsigned int v13; // r12d
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  unsigned __int16 *v16; // rcx
  GUID *v17; // rax
  GUID v18; // xmm0
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION v23; // [rsp+30h] [rbp-38h] BYREF
  char v24; // [rsp+38h] [rbp-30h]

  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      18,
      (unsigned int)&WPP_02a005b273c630b7ddf937521d6439fa_Traceguids,
      0,
      (__int64)a3);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v23, (struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  v8 = *((_QWORD *)this + 9);
  if ( v8 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(v8 + 856) - 16LL);
    v10 = -1LL;
    v11 = 2 * v9 + 2;
    do
      ++v10;
    while ( *((_WORD *)a3 + v10) );
    v12 = 2 * v10 + 2;
    v13 = v12 + 2 * v9 + 66;
    v14 = operator new(v13);
    v15 = v14;
    if ( v14 )
    {
      *v14 = v13;
      v16 = (unsigned __int16 *)(v14 + 16);
      v17 = &GUID_00000000_0000_0000_0000_000000000000;
      if ( a4 )
        v17 = a4;
      v18 = *v17;
      v15[1] = 16;
      v15[6] = v11;
      *(GUID *)(v15 + 7) = v18;
      v15[12] = v12;
      v15[13] = v11 + 64;
      StringCbCopyW(v16, v11, *(size_t **)(*((_QWORD *)this + 9) + 856LL));
      StringCbCopyW((unsigned __int16 *)((char *)v15 + (unsigned int)v15[13]), v12, a3);
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        LODWORD(v22) = *((_DWORD *)this + 20);
        WPP_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x13u,
          (__int64)&WPP_02a005b273c630b7ddf937521d6439fa_Traceguids,
          v15,
          v22);
      }
      MediaEvent = GenerateMediaEvent(v15, *((unsigned int *)this + 20), v19, v20);
      operator delete(v15);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnDisplayNameChanged", 406, MediaEvent);
    }
  }
  if ( v24 )
    ATL::CCritSecLock::Unlock(&v23);
  return (unsigned int)MediaEvent;
}
