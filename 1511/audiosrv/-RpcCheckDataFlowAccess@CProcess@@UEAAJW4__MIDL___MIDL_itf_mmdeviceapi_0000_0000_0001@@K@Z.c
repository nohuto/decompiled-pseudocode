/*
 * XREFs of ?RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@K@Z @ 0x1800299E0
 * Callers:
 *     AudioServerCreateStream @ 0x18002B8A0 (AudioServerCreateStream.c)
 * Callees:
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CProcess::RpcCheckDataFlowAccess(CProcess *this, unsigned int a2, unsigned int a3)
{
  __int64 v5; // r14
  int v6; // esi
  IID *v8; // rax
  RPC_STATUS v9; // eax
  HRESULT v10; // eax
  __int64 v11; // rax
  int v12; // eax
  LPVOID ppv; // [rsp+30h] [rbp-30h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-28h] BYREF
  IID rclsid; // [rsp+40h] [rbp-20h] BYREF

  ppv = 0LL;
  pv = 0LL;
  if ( a2 > 1 )
    return (unsigned int)-2147024809;
  v5 = (int)a2;
  v6 = *((_DWORD *)this + (int)a2 + 50);
  if ( v6 < 0 )
  {
    v8 = (IID *)&DEVINTERFACE_AUDIO_RENDER;
    if ( a2 )
      v8 = (IID *)&DEVINTERFACE_AUDIO_CAPTURE;
    rclsid = *v8;
    v6 = StringFromCLSID(&rclsid, (LPOLESTR *)&pv);
    if ( v6 >= 0 )
    {
      v6 = CoInitializeEx(0LL, 0);
      if ( v6 >= 0 )
      {
        v9 = RpcImpersonateClient(0LL);
        v6 = v9;
        if ( v9 )
        {
          if ( v9 > 0 )
            v6 = (unsigned __int16)v9 | 0x80070000;
          goto LABEL_19;
        }
        v10 = CoCreateInstance(
                &CLSID_DeviceAccessPolicyCheck,
                0LL,
                1u,
                &GUID_7d276ff2_ce90_4275_a2a8_9a48b10d3e0b,
                &ppv);
        v6 = v10;
        if ( v10 == -2147221164 )
        {
          v6 = 0;
        }
        else
        {
          if ( v10 < 0 )
          {
LABEL_18:
            RpcRevertToSelf();
LABEL_19:
            CoUninitialize();
            goto LABEL_3;
          }
          v11 = *(_QWORD *)ppv;
          if ( a3 )
            v12 = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD))(v11 + 48))(ppv, pv, a3);
          else
            v12 = (*(__int64 (__fastcall **)(LPVOID, LPVOID))(v11 + 40))(ppv, pv);
          v6 = v12;
          if ( v12 == -2147020646 )
            v6 = 0;
        }
        *((_DWORD *)this + v5 + 50) = v6;
        goto LABEL_18;
      }
    }
  }
LABEL_3:
  CoTaskMemFree(pv);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v6;
}
