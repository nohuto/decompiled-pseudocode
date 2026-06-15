/*
 * XREFs of ?InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800649A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180002144 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800276E8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ?IsEqualObject@?$CComPtrBase@UIAudioMuteAPO@@@ATL@@QEAA_NPEAUIUnknown@@@Z @ 0x180064B6C (-IsEqualObject@-$CComPtrBase@UIAudioMuteAPO@@@ATL@@QEAA_NPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CAudioStream::InitializeHardwareStreamControls(CAudioStream *this, struct IAudioDeviceGraph *a2)
{
  int v4; // edi
  struct IUnknown *v6; // [rsp+40h] [rbp+20h] BYREF
  struct IUnknown *v7; // [rsp+48h] [rbp+28h] BYREF
  __int64 v8; // [rsp+50h] [rbp+30h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  *((_DWORD *)this + 31) = 2;
  if ( (**(int (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, struct IUnknown **))a2)(
         a2,
         &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
         &v6) >= 0
    && *((struct IUnknown **)this + 21) != v6 )
  {
    ATL::AtlComPtrAssign((struct IUnknown **)this + 21, v6);
  }
  if ( (**(int (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, __int64 *))a2)(
         a2,
         &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd,
         &v8) >= 0
    && !(unsigned __int8)ATL::CComPtrBase<IAudioMuteAPO>::IsEqualObject((char *)this + 176, v6) )
  {
    ATL::AtlComQIPtrAssign((struct IUnknown **)this + 22, v6, &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd);
  }
  v4 = (**(__int64 (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, struct IUnknown **))a2)(
         a2,
         &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
         &v7);
  if ( v4 >= 0 )
  {
    if ( *((struct IUnknown **)this + 23) != v7 )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 23, v7);
    v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 23) + 32LL))(
           *((_QWORD *)this + 23),
           (char *)this + 84);
    if ( v4 < 0
      && WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Eu,
        (__int64)&WPP_56c0583fd767319afe66d4370de2ea71_Traceguids,
        v4);
    }
  }
  if ( !*((_BYTE *)this + 41) && (!*((_QWORD *)this + 21) || !*((_QWORD *)this + 22) || !*((_QWORD *)this + 23)) )
    v4 = -2147467262;
  if ( v4 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::InitializeHardwareStreamControls", 1103, v4);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v7 )
    ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
  if ( v6 )
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
  return (unsigned int)v4;
}
