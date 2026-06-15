/*
 * XREFs of ?Initialize@CSystemAudioDeviceShared@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002CC40
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x140010960 (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140010F40 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
 *     ?AEWMILOG_PERFORMANCE@@YAXKPEAXE_K1@Z @ 0x14003E188 (-AEWMILOG_PERFORMANCE@@YAXKPEAXE_K1@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceShared::Initialize(
        CSystemAudioDeviceShared *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IUnknown *a3,
        unsigned __int64 a4)
{
  int v5; // esi
  HRESULT Instance; // edi
  __int64 v9; // rsi
  int v10; // eax
  void *v11; // rdx
  unsigned int v12; // ecx
  unsigned __int64 v13; // r9
  LPVOID *ppv; // [rsp+20h] [rbp-28h]
  LPVOID *ppva; // [rsp+20h] [rbp-28h]

  v5 = a4;
  AEWMILOG_PERFORMANCE((unsigned int)this, a2, 9u, a4, (unsigned __int64)ppv);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  if ( a2 && a3 )
  {
    Instance = CoCreateInstance(
                 &GUID_add18bf7_ab60_4283_a580_d7544dd255d2,
                 0LL,
                 0x17u,
                 &GUID_e2bd719f_11ad_4d4d_b5cb_e1b102141726,
                 (LPVOID *)this + 45);
    if ( Instance < 0 )
      goto LABEL_12;
    *((_DWORD *)this + 92) = 0;
    *((_DWORD *)this + 54) = v5;
    if ( *((struct IUnknown **)this + 43) != a3 )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 43, a3);
    v9 = *((_QWORD *)this + 45);
    *((_DWORD *)this + 58) = *((_DWORD *)a2 + 31);
    Instance = (*(__int64 (__fastcall **)(__int64, struct AUDIO_DEVICE_PIPE_DESCRIPTOR *, char *, _QWORD))(*(_QWORD *)v9 + 24LL))(
                 v9,
                 a2,
                 (char *)this + 8,
                 *((unsigned int *)this + 54));
    if ( Instance < 0 )
      goto LABEL_12;
    *((_DWORD *)this + 92) = 1;
    *((_DWORD *)this + 6) = *((_DWORD *)a2 + 16);
    v10 = CSystemAudioDeviceCollection::Add(*((_QWORD *)a2 + 7), this);
    *((_DWORD *)this + 93) = v10;
    if ( !v10 )
    {
      Instance = -2147024882;
LABEL_12:
      (*(void (__fastcall **)(CSystemAudioDeviceShared *))(*(_QWORD *)this + 184LL))(this);
      goto LABEL_13;
    }
    Instance = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 1);
  }
  else
  {
    Instance = -2147024809;
  }
  if ( Instance < 0 )
    goto LABEL_12;
LABEL_13:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  AEWMILOG_PERFORMANCE(v12, v11, 0xAu, v13, (unsigned __int64)ppva);
  if ( Instance < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_Ds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x12u,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
      Instance,
      (__int64)"CSystemAudioDeviceShared::Initialize");
  }
  return (unsigned int)Instance;
}
