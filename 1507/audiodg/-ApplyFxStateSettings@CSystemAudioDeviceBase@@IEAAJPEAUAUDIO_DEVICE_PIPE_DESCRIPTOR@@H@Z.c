/*
 * XREFs of ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x140010960
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140001C10 (-Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCal.c)
 *     ?Initialize@CSystemAudioDeviceSharedNew@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000E690 (-Initialize@CSystemAudioDeviceSharedNew@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002B520 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 *     ?Initialize@CSystemAudioDeviceShared@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002CC40 (-Initialize@CSystemAudioDeviceShared@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCall.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z @ 0x1400113C8 (-GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceBase::ApplyFxStateSettings(
        CSystemAudioDeviceBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        int a3)
{
  LPVOID v6; // rdi
  HRESULT v7; // ebx
  _QWORD *v8; // r14
  _QWORD *v9; // r13
  __int64 AggregatedGfxSettings; // rbp
  LPVOID v12; // [rsp+70h] [rbp+8h] BYREF

  v6 = 0LL;
  v7 = 0;
  v12 = 0LL;
  if ( *((_DWORD *)this + 58) )
  {
    *((_DWORD *)this + 59) = *((_DWORD *)a2 + 33);
    v7 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &v12);
    if ( v7 < 0 )
      goto LABEL_11;
    v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, char *))(*(_QWORD *)v12 + 40LL))(
           v12,
           *((_QWORD *)a2 + 7),
           (char *)this + 264);
    if ( v7 < 0 )
      goto LABEL_11;
    v8 = (_QWORD *)((char *)this + 240);
    v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, _QWORD, char *))(**((_QWORD **)this + 33) + 24LL))(
           *((_QWORD *)this + 33),
           &GUID_eddce3e4_f3c1_453a_b461_223563cbd886,
           1LL,
           0LL,
           (char *)this + 240);
    if ( v7 < 0 )
      goto LABEL_11;
    if ( a3 || *((_DWORD *)a2 + 22) != 1 )
    {
      v9 = (_QWORD *)((char *)this + 248);
      if ( *((_QWORD *)this + 31) )
        ATL::AtlComPtrAssign((struct IUnknown **)this + 31, 0LL);
    }
    else
    {
      v9 = (_QWORD *)((char *)this + 248);
      v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 28))(
             *((_QWORD *)this + 28),
             &GUID_076a6922_d802_4f83_baf6_409d9ca11bfe,
             (char *)this + 248);
      if ( v7 < 0 )
      {
LABEL_11:
        v6 = v12;
        goto LABEL_12;
      }
    }
    if ( !*v8
      || (AggregatedGfxSettings = (unsigned int)CSystemAudioDeviceCollection::GetAggregatedGfxSettings(this),
          v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v8 + 48LL))(
                 *v8,
                 *((_QWORD *)this + 33),
                 AggregatedGfxSettings),
          v7 >= 0) )
    {
      if ( !a3 && *v9 )
      {
        if ( !*((_DWORD *)this + 59) )
          LODWORD(v6) = 1;
        v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v9 + 24LL))(*v9, (unsigned int)v6);
      }
    }
    goto LABEL_11;
  }
LABEL_12:
  if ( v6 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v7;
}
