/*
 * XREFs of ?InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x180082030
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800342D0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??$?4UIAudioVolume@@@?$CComPtr@UIAudioMuteAPO@@@ATL@@QEAAPEAUIAudioMuteAPO@@AEBV?$CComPtr@UIAudioVolume@@@1@@Z @ 0x1800818C4 (--$-4UIAudioVolume@@@-$CComPtr@UIAudioMuteAPO@@@ATL@@QEAAPEAUIAudioMuteAPO@@AEBV-$CComPtr@UIAudi.c)
 */

__int64 __fastcall CAudioStream::InitializeHardwareStreamControls(CAudioStream *this, struct IAudioDeviceGraph *a2)
{
  int v2; // esi
  int v5; // eax
  struct IUnknown *v6; // rbx
  __int64 v8; // [rsp+20h] [rbp-10h] BYREF
  struct IUnknown *v9; // [rsp+70h] [rbp+40h] BYREF
  struct IUnknown *v10; // [rsp+78h] [rbp+48h] BYREF

  v2 = 0;
  if ( !g_UseNewGraphBuilder )
    return (unsigned int)v2;
  v9 = 0LL;
  v10 = 0LL;
  v8 = 0LL;
  *((_DWORD *)this + 29) = 2;
  if ( (**(int (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, struct IUnknown **))a2)(
         a2,
         &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
         &v9) >= 0
    && *((struct IUnknown **)this + 20) != v9 )
  {
    ATL::AtlComPtrAssign((struct IUnknown **)this + 20, v9);
  }
  if ( (**(int (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, __int64 *))a2)(
         a2,
         &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd,
         &v8) >= 0 )
    ATL::CComPtr<IAudioMuteAPO>::operator=<IAudioVolume>((struct IUnknown **)this + 21, &v9);
  v2 = (**(__int64 (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, struct IUnknown **))a2)(
         a2,
         &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
         &v10);
  if ( v2 >= 0 )
  {
    if ( *((struct IUnknown **)this + 22) != v10 )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 22, v10);
    v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 22) + 32LL))(
           *((_QWORD *)this + 22),
           (char *)this + 84);
    v2 = v5;
    if ( v5 < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x2Eu,
        (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
        v5);
    }
  }
  if ( *((_QWORD *)this + 20) && *((_QWORD *)this + 21) && *((_QWORD *)this + 22) )
  {
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v10 )
      ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
    v6 = v9;
    if ( !v9 )
    {
LABEL_30:
      if ( v2 >= 0 )
        return (unsigned int)v2;
      goto LABEL_31;
    }
LABEL_29:
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
    goto LABEL_30;
  }
  v2 = -2147467262;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v10 )
    ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
  v6 = v9;
  if ( v9 )
    goto LABEL_29;
LABEL_31:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x2Fu,
      (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
      v2);
  }
  return (unsigned int)v2;
}
