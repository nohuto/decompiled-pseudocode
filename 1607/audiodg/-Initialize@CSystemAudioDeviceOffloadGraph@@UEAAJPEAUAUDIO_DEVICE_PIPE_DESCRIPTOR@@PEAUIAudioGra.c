/*
 * XREFs of ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002D8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x140004BD0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400059E0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140005C10 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400079C0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x14002696C (WPP_SF_.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140028DB0 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     WPP_SF_q @ 0x14002B2DC (WPP_SF_q.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x14002C364 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ?AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z @ 0x14003C22C (-AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::Initialize(
        CSystemAudioDeviceOffloadGraph *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IUnknown *a3,
        int a4)
{
  AEError *v8; // rbx
  __int64 v9; // r9
  _UNKNOWN **v10; // rcx
  void *v11; // rdx
  unsigned int v12; // ecx
  unsigned __int8 v13; // r8
  unsigned __int64 v15; // [rsp+20h] [rbp-38h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v18; // [rsp+38h] [rbp-20h]

  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 176));
  *((_DWORD *)this + 54) = a4;
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 34);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_05e6a62393a835ce563e39861fdcaf3f_Traceguids);
  }
  v8 = (AEError *)(unsigned int)CSystemAudioDeviceBase::ActivateEndpoint(this, a2);
  if ( AEError::DeviceInUse(v8) )
  {
    LODWORD(v8) = -2005139370;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_26;
    }
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_05e6a62393a835ce563e39861fdcaf3f_Traceguids);
  }
  if ( (int)v8 >= 0 )
  {
    LODWORD(v8) = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 28))(
                    *((_QWORD *)this + 28),
                    &GUID_64f1dd49_71ca_4281_8672_3a9eddd1d0b6,
                    (char *)this + 424);
    if ( (int)v8 >= 0 )
    {
      LODWORD(v8) = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 28))(
                      *((_QWORD *)this + 28),
                      &GUID_dfe21355_5ec2_40e0_8d6b_710ac3c00249,
                      (char *)this + 432);
      if ( (int)v8 >= 0 )
      {
        LODWORD(v8) = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 28))(
                        *((_QWORD *)this + 28),
                        &GUID_e1546dce_9dd1_418b_9ab2_348ced161c86,
                        (char *)this + 440);
        if ( (int)v8 >= 0 )
        {
          LODWORD(v8) = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 28))(
                          *((_QWORD *)this + 28),
                          &GUID_076a6922_d802_4f83_baf6_409d9ca11bfe,
                          (char *)this + 448);
          if ( (int)v8 >= 0 )
          {
            v9 = *((_QWORD *)this + 28);
            *((_QWORD *)this + 28) = 0LL;
            *((_QWORD *)a2 + 8) = v9;
            if ( v9 )
            {
              v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control )
                goto LABEL_25;
              if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
              {
LABEL_21:
                if ( v10 != &WPP_GLOBAL_Control && (*((_DWORD *)v10 + 7) & 0x200) != 0 && *((_BYTE *)v10 + 25) >= 4u )
                  WPP_SF_((__int64)v10[2], 0xDu, (__int64)&WPP_05e6a62393a835ce563e39861fdcaf3f_Traceguids);
LABEL_25:
                LODWORD(v8) = CSystemAudioDeviceSharedBase::Initialize(this, a2, a3, a4);
                if ( (int)v8 >= 0 )
                  goto LABEL_27;
                goto LABEL_26;
              }
              WPP_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0xCu,
                (__int64)&WPP_05e6a62393a835ce563e39861fdcaf3f_Traceguids,
                v9);
            }
            v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
            goto LABEL_21;
          }
        }
      }
    }
  }
LABEL_26:
  CSystemAudioDeviceSharedBase::Cleanup(this);
LABEL_27:
  AEWMILOG_PERFORMANCE(v12, v11, v13, 0xAu, v15, v16);
  if ( (int)v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xEu,
        (__int64)&WPP_05e6a62393a835ce563e39861fdcaf3f_Traceguids,
        (int)v8);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffloadGraph::Initialize", 98, (int)v8);
  }
  PublishDeviceGraphWnfState();
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v8;
}
