/*
 * XREFs of ?SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z @ 0x18000F964
 * Callers:
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18000DD80 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180012B18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??$?4UIMMDevice@@@?$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV?$CComPtr@UIMMDevice@@@1@@Z @ 0x180027688 (--$-4UIMMDevice@@@-$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV-$CComP.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::SetEndpointId(CAudioSessionManager *this, const unsigned __int16 *a2)
{
  const unsigned __int16 *v2; // rbx
  CAudioSessionManager *v3; // rdi
  int v4; // ebx
  ATL::CAtlException *v6; // rbx
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  ATL::CAtlException *v8; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+70h] [rbp+18h]
  struct IUnknown *v12; // [rsp+78h] [rbp+20h] BYREF

  v7[1] = -2LL;
  v2 = a2;
  v3 = this;
  v7[0] = 0LL;
  v12 = 0LL;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString((char *)this + 240);
  }
  catch ( ATL::CAtlException *v8 )
  {
    v6 = v8;
    if ( *(_DWORD *)v8 == -1073741571 )
      _o__resetstkoflw();
    v11 = *(_DWORD *)v6;
    v4 = *(_DWORD *)v6;
    if ( v11 < 0 )
      goto LABEL_13;
    v3 = this;
    v2 = a2;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v2,
         v7);
  if ( v4 >= 0 )
  {
    ATL::CComPtr<IMMEndpointInternal>::operator=<IMMDevice>(&v12);
    if ( v12 )
    {
      v4 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v12->lpVtbl[2].Release)(v12, (char *)v3 + 248);
      if ( v4 >= 0 )
        goto LABEL_5;
    }
    else
    {
      v4 = -2147024809;
    }
  }
LABEL_13:
  AudSrvTraceLoggingErrorHelper("CAudioSessionManager::SetEndpointId", 0x60Au, v4);
LABEL_5:
  if ( v12 )
    ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
  if ( v7[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7[0] + 16LL))(v7[0]);
  return (unsigned int)v4;
}
