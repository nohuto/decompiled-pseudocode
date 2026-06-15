/*
 * XREFs of ?UpdateStreamControls@CAudioStream@@QEAAJXZ @ 0x180082DAC
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014990 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800342D0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??$?4UIAudioVolume@@@?$CComPtr@UIAudioMuteAPO@@@ATL@@QEAAPEAUIAudioMuteAPO@@AEBV?$CComPtr@UIAudioVolume@@@1@@Z @ 0x1800818C4 (--$-4UIAudioVolume@@@-$CComPtr@UIAudioMuteAPO@@@ATL@@QEAAPEAUIAudioMuteAPO@@AEBV-$CComPtr@UIAudi.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioStream::UpdateStreamControls(CAudioStream *this)
{
  int v2; // esi
  int v3; // eax
  __int64 v4; // rcx
  struct IUnknown *v6; // [rsp+68h] [rbp+38h] BYREF
  struct IUnknown *v7; // [rsp+70h] [rbp+40h] BYREF
  __int64 v8; // [rsp+78h] [rbp+48h] BYREF

  v2 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !g_UseNewGraphBuilder )
  {
    if ( *((_DWORD *)this + 29) == 1 )
      goto LABEL_26;
    *((_DWORD *)this + 29) = 2;
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))this + 6))(
           *((_QWORD *)this + 6),
           &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
           &v6) >= 0
      && *((struct IUnknown **)this + 20) != v6 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)this + 20, v6);
    }
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 6))(
           *((_QWORD *)this + 6),
           &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd,
           &v8) >= 0 )
      ATL::CComPtr<IAudioMuteAPO>::operator=<IAudioVolume>((struct IUnknown **)this + 21, &v6);
    v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))this + 6))(
           *((_QWORD *)this + 6),
           &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
           &v7);
    if ( v2 >= 0 )
    {
      if ( *((struct IUnknown **)this + 22) != v7 )
        ATL::AtlComPtrAssign((struct IUnknown **)this + 22, v7);
      v3 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 22) + 32LL))(
             *((_QWORD *)this + 22),
             (char *)this + 84);
      v2 = v3;
      if ( v3 < 0 )
      {
        v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
        {
          goto LABEL_17;
        }
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x2Cu,
          (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
          v3);
      }
    }
  }
  v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_17:
  if ( !*((_QWORD *)this + 20) || !*((_QWORD *)this + 21) || !*((_QWORD *)this + 22) )
    v2 = -2147467262;
  if ( v2 < 0
    && (struct _GUID *)v4 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(v4 + 28) & 0x40) != 0
    && *(_BYTE *)(v4 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v4 + 16), 0x2Du, (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids, v2);
  }
LABEL_26:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v7 )
    ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
  if ( v6 )
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
  return (unsigned int)v2;
}
