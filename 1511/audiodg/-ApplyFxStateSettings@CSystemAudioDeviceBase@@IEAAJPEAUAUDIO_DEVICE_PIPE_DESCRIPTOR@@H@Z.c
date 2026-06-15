/*
 * XREFs of ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x14000506C
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140005F50 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002B920 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 *     ?Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002DF20 (-Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCal.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000AB80 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z @ 0x14002A748 (-GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceBase::ApplyFxStateSettings(
        CSystemAudioDeviceBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        int a3)
{
  HRESULT v6; // esi
  LPVOID v7; // rbx
  _QWORD *v9; // r13
  _QWORD *v10; // r15
  unsigned int AggregatedGfxSettings; // eax
  LPVOID ppv; // [rsp+70h] [rbp+8h] BYREF

  v6 = 0;
  v7 = 0LL;
  ppv = 0LL;
  if ( *((_DWORD *)this + 58) )
  {
    *((_DWORD *)this + 59) = *((_DWORD *)a2 + 35);
    v6 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv);
    if ( v6 < 0 )
      goto LABEL_19;
    v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, char *))(*(_QWORD *)ppv + 40LL))(
           ppv,
           *((_QWORD *)a2 + 7),
           (char *)this + 264);
    if ( v6 < 0 )
      goto LABEL_19;
    v9 = (_QWORD *)((char *)this + 240);
    v6 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)this + 33) + 24LL))(
           *((_QWORD *)this + 33),
           &GUID_eddce3e4_f3c1_453a_b461_223563cbd886,
           1LL);
    if ( v6 < 0 )
      goto LABEL_19;
    if ( a3 || *((_DWORD *)a2 + 24) != 1 )
    {
      v10 = (_QWORD *)((char *)this + 248);
      if ( *((_QWORD *)this + 31) )
        ATL::AtlComPtrAssign((struct IUnknown **)this + 31, 0LL);
    }
    else
    {
      v10 = (_QWORD *)((char *)this + 248);
      v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 28))(
             *((_QWORD *)this + 28),
             &GUID_076a6922_d802_4f83_baf6_409d9ca11bfe,
             (char *)this + 248);
      if ( v6 < 0 )
      {
LABEL_19:
        v7 = ppv;
        goto LABEL_2;
      }
    }
    if ( !*v9
      || (AggregatedGfxSettings = CSystemAudioDeviceCollection::GetAggregatedGfxSettings(this),
          v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v9 + 48LL))(
                 *v9,
                 *((_QWORD *)this + 33),
                 AggregatedGfxSettings),
          v6 >= 0) )
    {
      if ( !a3 && *v10 )
        v6 = (*(__int64 (__fastcall **)(_QWORD, bool))(*(_QWORD *)*v10 + 24LL))(*v10, *((_DWORD *)this + 59) == 0);
    }
    goto LABEL_19;
  }
LABEL_2:
  if ( v7 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
