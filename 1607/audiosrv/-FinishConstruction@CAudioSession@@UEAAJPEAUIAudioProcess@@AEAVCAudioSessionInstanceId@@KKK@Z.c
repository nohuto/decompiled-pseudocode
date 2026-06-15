/*
 * XREFs of ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x180014D80
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800104D0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x180002C30 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800090E0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x1800118AC (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z @ 0x1800127D0 (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180012B18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?StartInactiveTimer@CAudioSession@@AEAAJXZ @ 0x1800137D8 (-StartInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_SD @ 0x180059B60 (WPP_SF_SD.c)
 */

__int64 __fastcall CAudioSession::FinishConstruction(
        CAudioSession *this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v10; // rbx
  int v11; // eax
  __int64 (__fastcall *v12)(CPerEndpointVolumeAudioSession *); // rax
  int v13; // eax
  int started; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-40h] BYREF
  char v17; // [rsp+50h] [rbp-38h]

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      53,
      (unsigned int)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      *((_QWORD *)a3 + 9),
      a4);
  }
  *((_QWORD *)this + 108) = a2;
  (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( (int)CAudioSessionInstanceId::Copy((CAudioSession *)((char *)this + 784), a3) < 0 )
    goto LABEL_38;
  v10 = *((_QWORD *)this + 107);
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 108) + 40LL))(*((_QWORD *)this + 108));
  *((_QWORD *)this + 120) = v10;
  *((_DWORD *)this + 242) = v11;
  *((_BYTE *)this + 370) = a4 & 1;
  if ( (a4 & 4) != 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(
      (_QWORD *)this + 48,
      (char *)L"@%SystemRoot%\\System32\\AudioSrv.Dll,-202");
    ATL::CSimpleStringT<unsigned short,0>::SetString(
      (_QWORD *)this + 49,
      (char *)L"@%SystemRoot%\\System32\\AudioSrv.Dll,-203");
    JUMPOUT(0x180041DA0LL);
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=((LPWSTR *)this + 48);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=((LPWSTR *)this + 49);
  *((_DWORD *)this + 152) = ((unsigned __int8)a4 >> 5) & 1;
  *((_DWORD *)this + 93) = a5;
  *((_DWORD *)this + 94) = a4;
  *((_DWORD *)this + 87) = a6;
  if ( UuidCreate((UUID *)this + 22) )
    JUMPOUT(0x180041DB6LL);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    JUMPOUT(0x180041E0ALL);
  }
  if ( UuidCreate((UUID *)this + 25) )
    JUMPOUT(0x180041E28LL);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    JUMPOUT(0x180041E59LL);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 872);
  v17 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  *((_DWORD *)this + 228) = 1065353216;
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  if ( PSCreateMemoryPropertyStore(&IID_IPropertyStore, (void **)this + 77) < 0 )
    goto LABEL_38;
  v12 = *(__int64 (__fastcall **)(CPerEndpointVolumeAudioSession *))(*(_QWORD *)this + 200LL);
  if ( (char *)v12 == (char *)CPerStreamVolumeAudioSession::CompleteConstruction )
  {
    v13 = CPerStreamVolumeAudioSession::CompleteConstruction(this, a4);
  }
  else
  {
    if ( v12 != CPerEndpointVolumeAudioSession::CompleteConstruction )
      JUMPOUT(0x180041E77LL);
    v13 = CPerEndpointVolumeAudioSession::CompleteConstruction(this);
  }
  if ( v13 < 0
    || (*(int (__fastcall **)(_QWORD, CAudioSession *))(**((_QWORD **)this + 108) + 24LL))(
         *((_QWORD *)this + 108),
         this) < 0
    || (started = CAudioSession::StartInactiveTimer((struct _TP_TIMER **)this), started < 0) )
  {
LABEL_38:
    JUMPOUT(0x180041E83LL);
  }
  return (unsigned int)started;
}
