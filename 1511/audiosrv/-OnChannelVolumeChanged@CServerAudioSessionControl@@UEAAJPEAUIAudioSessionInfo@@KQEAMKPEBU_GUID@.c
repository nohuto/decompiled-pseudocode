/*
 * XREFs of ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x180078190
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180036FCC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     WPP_SF_Sdg @ 0x18006F7B4 (WPP_SF_Sdg.c)
 *     WPP_SF_Sdd @ 0x180077528 (WPP_SF_Sdd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnChannelVolumeChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        unsigned int a3,
        float *const a4,
        unsigned int a5,
        struct _GUID *a6)
{
  int MediaEvent; // edi
  TraceLoggingHProvider v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // r13d
  char *v13; // rax
  unsigned __int16 *v14; // rbx
  GUID *v15; // rcx
  __int64 v16; // r14
  GUID v17; // xmm0
  char *v18; // r14
  signed __int64 v19; // r14
  int v21; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION v22; // [rsp+30h] [rbp-38h] BYREF
  char v23; // [rsp+38h] [rbp-30h]

  MediaEvent = 0;
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Eu,
        (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
        0LL);
      v10 = WPP_GLOBAL_Control;
    }
    if ( v10 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v10 + 28) & 0x40) != 0
      && *((_BYTE *)v10 + 25) >= 4u )
    {
      WPP_SF_Sdd(*((_QWORD *)v10 + 2), 0x2Fu, (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, 0LL);
    }
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v22, (struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  v11 = *((_QWORD *)this + 9);
  if ( v11 )
  {
    v12 = 2 * *(_DWORD *)(*(_QWORD *)(v11 + 856) - 16LL) + 2;
    v13 = (char *)operator new((v12 + 4 * a3 + 67) & 0xFFFFFFFC);
    v14 = (unsigned __int16 *)v13;
    if ( v13 )
    {
      *(_DWORD *)v13 = (v12 + 4 * a3 + 67) & 0xFFFFFFFC;
      v15 = &GUID_00000000_0000_0000_0000_000000000000;
      if ( a6 )
        v15 = a6;
      v16 = (v12 + 67) & 0xFFFFFFFC;
      v17 = *v15;
      *((_DWORD *)v13 + 12) = v16;
      v18 = &v13[v16];
      *((_DWORD *)v13 + 13) = a5;
      *((_DWORD *)v13 + 1) = 2;
      *((_DWORD *)v13 + 6) = v12;
      *((_DWORD *)v13 + 14) = a3;
      *(GUID *)(v13 + 28) = v17;
      if ( a3 )
      {
        v19 = v18 - (char *)a4;
        do
        {
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_Sdg(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x30u,
              (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
              0LL);
          }
          ++MediaEvent;
          *(float *const)((char *)a4 + v19) = *a4;
          ++a4;
        }
        while ( MediaEvent < a3 );
      }
      StringCbCopyW(v14 + 32, v12, *(size_t **)(*((_QWORD *)this + 9) + 856LL));
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v21 = *((_DWORD *)this + 20);
        WPP_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x31u,
          (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
          v14,
          v21);
      }
      MediaEvent = GenerateMediaEvent(v14, *((unsigned int *)this + 20));
      operator delete(v14);
      if ( MediaEvent < 0
        && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x32u,
          (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
          MediaEvent);
      }
    }
  }
  if ( v23 )
    ATL::CCritSecLock::Unlock(&v22);
  return (unsigned int)MediaEvent;
}
