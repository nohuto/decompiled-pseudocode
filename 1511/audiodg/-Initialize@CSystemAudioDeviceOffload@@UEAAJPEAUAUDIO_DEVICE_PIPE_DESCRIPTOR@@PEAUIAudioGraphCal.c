/*
 * XREFs of ?Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002DF20
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140002A38 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x14000506C (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14002A034 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     WPP_SF_Ds @ 0x14002A548 (WPP_SF_Ds.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::Initialize(
        CSystemAudioDeviceOffload *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  int v8; // edi
  int v9; // eax

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  *((_DWORD *)this + 54) = a4;
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 33);
  v8 = CSystemAudioDeviceBase::ActivateEndpoint(this, a2);
  if ( v8 == -2005139389 )
    v8 = -2005139370;
  if ( v8 < 0 )
  {
LABEL_10:
    (*(void (__fastcall **)(CSystemAudioDeviceOffload *))(*(_QWORD *)this + 200LL))(this);
    goto LABEL_11;
  }
  v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 28))(
         *((_QWORD *)this + 28),
         &GUID_64f1dd49_71ca_4281_8672_3a9eddd1d0b6,
         (char *)this + 384);
  if ( v8 >= 0 )
  {
    v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 28))(
           *((_QWORD *)this + 28),
           &GUID_dfe21355_5ec2_40e0_8d6b_710ac3c00249,
           (char *)this + 392);
    if ( v8 >= 0 )
    {
      v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 28))(
             *((_QWORD *)this + 28),
             &GUID_e1546dce_9dd1_418b_9ab2_348ced161c86,
             (char *)this + 400);
      if ( v8 >= 0 )
      {
        v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 28))(
               *((_QWORD *)this + 28),
               &GUID_076a6922_d802_4f83_baf6_409d9ca11bfe,
               (char *)this + 408);
        if ( v8 >= 0 )
        {
          *((_QWORD *)this + 45) = *((_QWORD *)a2 + 4);
          *((_QWORD *)this + 46) = *((_QWORD *)a2 + 5);
          *((_DWORD *)this + 94) = *((_DWORD *)a2 + 12);
          *((_DWORD *)this + 6) = *((_DWORD *)a2 + 18);
          v9 = CSystemAudioDeviceCollection::Add(*((const unsigned __int16 **)a2 + 7), this);
          *((_DWORD *)this + 95) = v9;
          if ( v9 )
          {
            v8 = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 0);
            goto LABEL_11;
          }
          v8 = -2147024882;
          goto LABEL_10;
        }
      }
    }
  }
LABEL_11:
  LeaveCriticalSection(v4);
  if ( v8 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_Ds(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xAu,
      (__int64)&WPP_0c9f4c97d2e4db079a99cda1b29d38b3_Traceguids,
      v8,
      (__int64)"CSystemAudioDeviceOffload::Initialize");
  }
  return (unsigned int)v8;
}
