/*
 * XREFs of ?InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x18007D480
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180038050 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180071BD4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?IsEqualObject@?$CComPtrBase@UIAudioMuteAPO@@@ATL@@QEAA_NPEAUIUnknown@@@Z @ 0x18007D6A0 (-IsEqualObject@-$CComPtrBase@UIAudioMuteAPO@@@ATL@@QEAA_NPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CAudioStream::InitializeHardwareStreamControls(CAudioStream *this, struct IAudioDeviceGraph *a2)
{
  int v4; // esi
  int v5; // eax
  TraceLoggingHProvider v6; // rcx
  struct IUnknown *v8; // [rsp+50h] [rbp+30h] BYREF
  struct IUnknown *v9; // [rsp+58h] [rbp+38h] BYREF
  __int64 v10; // [rsp+60h] [rbp+40h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  *((_DWORD *)this + 27) = 2;
  if ( (**(int (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, struct IUnknown **))a2)(
         a2,
         &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
         &v8) >= 0
    && *((struct IUnknown **)this + 19) != v8 )
  {
    ATL::AtlComPtrAssign((struct IUnknown **)this + 19, v8);
  }
  if ( (**(int (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, __int64 *))a2)(
         a2,
         &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd,
         &v10) >= 0
    && !(unsigned __int8)ATL::CComPtrBase<IAudioMuteAPO>::IsEqualObject((char *)this + 160, v8) )
  {
    ATL::AtlComQIPtrAssign((struct IUnknown **)this + 20, v8, &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd);
  }
  v4 = (**(__int64 (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, struct IUnknown **))a2)(
         a2,
         &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
         &v9);
  if ( v4 < 0 )
    goto LABEL_15;
  if ( *((struct IUnknown **)this + 21) != v9 )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 21, v9);
  v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 21) + 32LL))(
         *((_QWORD *)this + 21),
         (char *)this + 76);
  v4 = v5;
  if ( v5 >= 0 )
    goto LABEL_15;
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, v5);
LABEL_15:
    v6 = WPP_GLOBAL_Control;
  }
  if ( !*((_BYTE *)this + 41) && (!*((_QWORD *)this + 19) || !*((_QWORD *)this + 20) || !*((_QWORD *)this + 21)) )
    v4 = -2147467262;
  if ( v4 < 0
    && v6 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)v6 + 28) & 0x40) != 0
    && *((_BYTE *)v6 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v6 + 2), 0x2Bu, (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, v4);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v9 )
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
  if ( v8 )
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  return (unsigned int)v4;
}
