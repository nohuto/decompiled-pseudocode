/*
 * XREFs of ?InnerInitializeAPO@CSystemAudioDeviceSharedBase@@MEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x140006350
 * Callers:
 *     ?InitializeAPOs@CSystemAudioDeviceBase@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x140005000 (-InitializeAPOs@CSystemAudioDeviceBase@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::InnerInitializeAPO(
        CSystemAudioDeviceSharedBase *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  int v6; // ebx

  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct IAudioProcessingObject **))(**((_QWORD **)this + 37)
                                                                                            + 24LL))(
         *((_QWORD *)this + 37),
         a2,
         a3,
         a4);
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10LL,
        &WPP_c59105ced4022a196d4cc1b91b2ab5a7_Traceguids,
        (unsigned int)v6);
    }
  }
  else
  {
    *((_QWORD *)this + 36) = a2;
  }
  return (unsigned int)v6;
}
