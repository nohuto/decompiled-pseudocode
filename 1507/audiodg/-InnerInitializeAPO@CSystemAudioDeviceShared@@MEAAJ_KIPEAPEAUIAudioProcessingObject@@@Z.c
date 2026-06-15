/*
 * XREFs of ?InnerInitializeAPO@CSystemAudioDeviceShared@@MEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x14002CE10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
 */

__int64 __fastcall CSystemAudioDeviceShared::InnerInitializeAPO(
        CSystemAudioDeviceShared *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  int v6; // ebx

  if ( *((_DWORD *)this + 92) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct IAudioProcessingObject **))(**((_QWORD **)this + 44)
                                                                                              + 24LL))(
           *((_QWORD *)this + 44),
           a2,
           a3,
           a4);
    goto LABEL_5;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct IAudioProcessingObject **))(**((_QWORD **)this + 43)
                                                                                            + 24LL))(
         *((_QWORD *)this + 43),
         a2,
         a3,
         a4);
  if ( v6 >= 0 )
  {
    *((_QWORD *)this + 42) = a2;
LABEL_5:
    if ( v6 >= 0 )
      return (unsigned int)v6;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_Ds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xAu,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
      v6,
      (__int64)"CSystemAudioDeviceShared::InnerInitializeAPO");
  }
  return (unsigned int)v6;
}
