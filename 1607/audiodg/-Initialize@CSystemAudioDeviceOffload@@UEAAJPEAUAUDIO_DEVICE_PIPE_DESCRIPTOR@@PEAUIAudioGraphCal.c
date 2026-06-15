/*
 * XREFs of ?Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002C930
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x14000364C (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x1400161B0 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140028DB0 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     WPP_SF_Ds @ 0x140029210 (WPP_SF_Ds.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x14002C364 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::Initialize(
        CSystemAudioDeviceOffload *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  AEError *v8; // rbx
  int v9; // eax

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  *((_DWORD *)this + 54) = a4;
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 34);
  v8 = (AEError *)(unsigned int)CSystemAudioDeviceBase::ActivateEndpoint(this, a2);
  if ( AEError::DeviceInUse(v8) )
    LODWORD(v8) = -2005139370;
  if ( (int)v8 < 0 )
    goto LABEL_10;
  LODWORD(v8) = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 28))(
                  *((_QWORD *)this + 28),
                  &GUID_64f1dd49_71ca_4281_8672_3a9eddd1d0b6,
                  (char *)this + 384);
  if ( (int)v8 >= 0 )
  {
    LODWORD(v8) = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 28))(
                    *((_QWORD *)this + 28),
                    &GUID_dfe21355_5ec2_40e0_8d6b_710ac3c00249,
                    (char *)this + 392);
    if ( (int)v8 >= 0 )
    {
      LODWORD(v8) = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 28))(
                      *((_QWORD *)this + 28),
                      &GUID_e1546dce_9dd1_418b_9ab2_348ced161c86,
                      (char *)this + 400);
      if ( (int)v8 >= 0 )
      {
        LODWORD(v8) = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 28))(
                        *((_QWORD *)this + 28),
                        &GUID_076a6922_d802_4f83_baf6_409d9ca11bfe,
                        (char *)this + 408);
        if ( (int)v8 >= 0 )
        {
          *((_QWORD *)this + 45) = *((_QWORD *)a2 + 4);
          *((_QWORD *)this + 46) = *((_QWORD *)a2 + 5);
          *((_DWORD *)this + 94) = *((_DWORD *)a2 + 12);
          *((_DWORD *)this + 6) = *((_DWORD *)a2 + 18);
          v9 = CSystemAudioDeviceCollection::Add(*((const unsigned __int16 **)a2 + 7), this);
          *((_DWORD *)this + 95) = v9;
          if ( !v9 )
          {
            LODWORD(v8) = -2147024882;
LABEL_10:
            (*(void (__fastcall **)(CSystemAudioDeviceOffload *))(*(_QWORD *)this + 200LL))(this);
            goto LABEL_11;
          }
          LODWORD(v8) = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 0);
        }
      }
    }
  }
LABEL_11:
  LeaveCriticalSection(v4);
  if ( (int)v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Ds(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        (__int64)&WPP_e6e3cf044f7b3ed66ff982009b51436b_Traceguids,
        (int)v8,
        (__int64)"CSystemAudioDeviceOffload::Initialize");
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffload::Initialize", 144, (int)v8);
  }
  return (unsigned int)v8;
}
