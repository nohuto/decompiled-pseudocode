/*
 * XREFs of ?SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z @ 0x180016658
 * Callers:
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180013AE0 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180018760 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??$?4UIMMDevice@@@?$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV?$CComPtr@UIMMDevice@@@1@@Z @ 0x180037FF0 (--$-4UIMMDevice@@@-$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV-$CComP.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::SetEndpointId(CAudioSessionManager *this, const unsigned __int16 *a2)
{
  const unsigned __int16 *v2; // rsi
  CAudioSessionManager *v3; // r14
  int v4; // esi
  struct IUnknown *v5; // rbx
  ATL::CAtlException *v7; // rbx
  _QWORD v8[2]; // [rsp+20h] [rbp-48h] BYREF
  ATL::CAtlException *v9; // [rsp+30h] [rbp-38h] BYREF
  struct IUnknown *v12; // [rsp+88h] [rbp+20h] BYREF

  v8[1] = -2LL;
  v2 = a2;
  v3 = this;
  v8[0] = 0LL;
  v12 = 0LL;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString((char *)this + 240, a2);
  }
  catch ( ATL::CAtlException *v9 )
  {
    v7 = v9;
    if ( *(_DWORD *)v9 == -1073741571 )
      _resetstkoflw();
    v4 = *(_DWORD *)v7;
    if ( *(int *)v7 < 0 )
      goto LABEL_11;
    v3 = this;
    v2 = a2;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v2,
         v8);
  if ( v4 >= 0 )
  {
    ATL::CComPtr<IMMEndpointInternal>::operator=<IMMDevice>(&v12);
    v5 = v12;
    if ( !v12 )
    {
      v4 = -2147024809;
      goto LABEL_15;
    }
    v4 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v12->lpVtbl[2].Release)(v12, (char *)v3 + 248);
    if ( v4 >= 0 )
    {
LABEL_5:
      v5 = v12;
      goto LABEL_6;
    }
  }
LABEL_11:
  v5 = v12;
LABEL_15:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      64LL,
      &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      (unsigned int)v4);
    goto LABEL_5;
  }
LABEL_6:
  if ( v5 )
    ((void (__fastcall *)(struct IUnknown *))v5->lpVtbl->Release)(v5);
  if ( v8[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
  return (unsigned int)v4;
}
