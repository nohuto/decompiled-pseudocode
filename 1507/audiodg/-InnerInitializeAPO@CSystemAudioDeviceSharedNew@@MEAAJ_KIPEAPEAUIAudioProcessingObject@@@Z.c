/*
 * XREFs of ?InnerInitializeAPO@CSystemAudioDeviceSharedNew@@MEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x14000DDD0
 * Callers:
 *     ?InitializeAPOs@CSystemAudioDeviceBase@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1400106D0 (-InitializeAPOs@CSystemAudioDeviceBase@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedNew::InnerInitializeAPO(
        CSystemAudioDeviceSharedNew *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  int v6; // ebx

  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct IAudioProcessingObject **))(**((_QWORD **)this + 44)
                                                                                            + 24LL))(
         *((_QWORD *)this + 44),
         a2,
         a3,
         a4);
  if ( v6 < 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        10LL,
        &WPP_c0a199d1e000f5a39bc1451c73891527_Traceguids,
        (unsigned int)v6);
    }
  }
  else
  {
    *((_QWORD *)this + 43) = a2;
  }
  return (unsigned int)v6;
}
