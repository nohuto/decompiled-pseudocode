/*
 * XREFs of ?RpcAudioDataFlowAccessCheck@@YAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAPEAUIAudioProcess@@@Z @ 0x18002F880
 * Callers:
 *     AudioServerCreateStream @ 0x18002F590 (AudioServerCreateStream.c)
 * Callees:
 *     ?GetDataFlowAccessCheckResult@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x180011C10 (-GetDataFlowAccessCheckResult@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEA.c)
 *     ?SetDataFlowAccessCheckResult@CProcess@@UEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@J@Z @ 0x180011C40 (-SetDataFlowAccessCheckResult@CProcess@@UEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@J@Z.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180021EB0 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall RpcAudioDataFlowAccessCheck(
        void *a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        unsigned int a3,
        struct IAudioProcess **a4)
{
  int v7; // r14d
  __int64 (__fastcall *v8)(CWindowsPolicyManager *, void *, struct IAudioProcess **); // rdi
  int Process; // eax
  int v10; // edi
  CProcess *v11; // rbx
  __int64 (__fastcall *v12)(CProcess *, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001, int *); // rdi
  int v13; // eax
  const GUID *v15; // rcx
  RPC_STATUS v16; // eax
  HRESULT Instance; // eax
  __int64 v18; // rax
  int v19; // eax
  void (__fastcall *v20)(CProcess *, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001, int); // r12
  LPVOID pv; // [rsp+30h] [rbp-20h] BYREF
  LPVOID ppv[3]; // [rsp+38h] [rbp-18h] BYREF
  int v23; // [rsp+90h] [rbp+40h] BYREF
  int v24; // [rsp+94h] [rbp+44h]
  CProcess *v25; // [rsp+A8h] [rbp+58h] BYREF

  v24 = HIDWORD(a1);
  ppv[1] = (LPVOID)-2LL;
  ppv[0] = 0LL;
  ppv[2] = 0LL;
  v7 = 0;
  v23 = 0;
  pv = 0LL;
  v25 = 0LL;
  *a4 = 0LL;
  v8 = *(__int64 (__fastcall **)(CWindowsPolicyManager *, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                          + 32LL);
  if ( v8 == CWindowsPolicyManager::RpcGetProcess )
    Process = CWindowsPolicyManager::RpcGetProcess(g_PolicyManager, 0LL, &v25);
  else
    Process = v8(g_PolicyManager, 0LL, &v25);
  v10 = Process;
  if ( Process >= 0 )
  {
    v11 = v25;
    v12 = *(__int64 (__fastcall **)(CProcess *, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001, int *))(*(_QWORD *)v25 + 144LL);
    if ( v12 == CProcess::GetDataFlowAccessCheckResult )
    {
      v13 = CProcess::GetDataFlowAccessCheckResult(v25, a2, &v23);
    }
    else
    {
      v13 = v12(v25, a2, &v23);
      v11 = v25;
    }
    v10 = v13;
    if ( v13 >= 0 )
    {
      *a4 = v11;
      v25 = 0LL;
    }
    if ( !v23 )
    {
      if ( a2 )
      {
        if ( a2 != eCapture )
        {
          v10 = -2147024809;
          goto LABEL_9;
        }
        v15 = &DEVINTERFACE_AUDIO_CAPTURE;
      }
      else
      {
        v15 = &DEVINTERFACE_AUDIO_RENDER;
      }
      v10 = StringFromCLSID(v15, (LPOLESTR *)&pv);
      if ( v10 >= 0 )
      {
        v10 = CoInitializeEx(0LL, 0);
        if ( v10 >= 0 )
        {
          v7 = 1;
          v16 = RpcImpersonateClient(0LL);
          v10 = v16;
          if ( !v16 )
          {
            Instance = CoCreateInstance(
                         &CLSID_DeviceAccessPolicyCheck,
                         0LL,
                         1u,
                         &GUID_7d276ff2_ce90_4275_a2a8_9a48b10d3e0b,
                         ppv);
            v10 = Instance;
            if ( Instance == -2147221164 )
            {
              v10 = 0;
            }
            else
            {
              if ( Instance < 0 )
              {
LABEL_31:
                RpcRevertToSelf();
                goto LABEL_9;
              }
              v18 = *(_QWORD *)ppv[0];
              if ( a3 )
                v19 = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD))(v18 + 48))(ppv[0], pv, a3);
              else
                v19 = (*(__int64 (__fastcall **)(LPVOID, LPVOID))(v18 + 40))(ppv[0], pv);
              v10 = v19;
              if ( v19 == -2147020646 )
                v10 = 0;
            }
            v20 = *(void (__fastcall **)(CProcess *, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001, int))(*(_QWORD *)v25 + 136LL);
            if ( v20 == CProcess::SetDataFlowAccessCheckResult )
              CProcess::SetDataFlowAccessCheckResult(v25, a2, v10);
            else
              v20(v25, a2, v10);
            if ( v10 >= 0 )
            {
              *a4 = v25;
              v25 = 0LL;
            }
            goto LABEL_31;
          }
          if ( v16 > 0 )
            v10 = (unsigned __int16)v16 | 0x80070000;
        }
      }
    }
  }
LABEL_9:
  CoTaskMemFree(pv);
  if ( v7 )
    CoUninitialize();
  if ( v25 )
  {
    (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v25 + 16LL))(v25);
    v25 = 0LL;
  }
  if ( ppv[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
  return (unsigned int)v10;
}
