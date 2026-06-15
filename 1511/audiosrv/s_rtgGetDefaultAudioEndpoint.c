/*
 * XREFs of s_rtgGetDefaultAudioEndpoint @ 0x1800375B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAG@Z @ 0x18001B150 (-GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180036FCC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180038050 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     MIDL_user_allocate @ 0x180038320 (MIDL_user_allocate.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall s_rtgGetDefaultAudioEndpoint(
        void *a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        unsigned __int16 **a4,
        _DWORD *a5)
{
  unsigned __int16 *v5; // r15
  struct IUnknown *v8; // rdi
  int MMDeviceFromInterfaceId; // r14d
  HANDLE ProcessHeap; // rax
  _DWORD *v12; // r12
  RPC_STATUS v13; // eax
  CPolicyConfig *v14; // rcx
  int ApplicationDefaultEndpoint; // eax
  struct IUnknown *v16; // rbx
  __int64 v17; // rax
  size_t v19; // rbx
  unsigned __int16 *v20; // rax
  struct IUnknown *v21; // [rsp+30h] [rbp-20h] BYREF
  struct IUnknown *v22; // [rsp+38h] [rbp-18h] BYREF
  LPVOID pv[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int Pid; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int16 **v26; // [rsp+A8h] [rbp+58h]

  v26 = a4;
  v5 = 0LL;
  pv[0] = 0LL;
  v22 = 0LL;
  v8 = 0LL;
  if ( a3 >= ERole_enum_count )
  {
    MMDeviceFromInterfaceId = -2147024809;
    goto LABEL_3;
  }
  if ( !a4 || (v12 = a5) == 0LL )
  {
    MMDeviceFromInterfaceId = -2147467261;
    goto LABEL_3;
  }
  *a5 = 0;
  v13 = I_RpcBindingInqLocalClientPID(a1, &Pid);
  MMDeviceFromInterfaceId = v13;
  if ( v13 > 0 )
    MMDeviceFromInterfaceId = (unsigned __int16)v13 | 0x80070000;
  if ( MMDeviceFromInterfaceId < 0 )
    goto LABEL_3;
  ApplicationDefaultEndpoint = CPolicyConfig::GetApplicationDefaultEndpoint(v14, Pid, a3, a2, (unsigned __int16 **)&v22);
  v8 = v22;
  if ( ApplicationDefaultEndpoint < 0 )
  {
    MMDeviceFromInterfaceId = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, _QWORD, _QWORD, LPVOID *))(*(_QWORD *)g_PolicyManager + 160LL))(
                                g_PolicyManager,
                                (unsigned int)a2,
                                (unsigned int)a3,
                                pv);
    if ( MMDeviceFromInterfaceId < 0 )
      goto LABEL_3;
    goto LABEL_30;
  }
  v22 = 0LL;
  v21 = 0LL;
  MMDeviceFromInterfaceId = mmdDevGetMMDeviceFromInterfaceId(v8, &v22);
  if ( MMDeviceFromInterfaceId >= 0 )
  {
    v16 = v21;
    if ( v21 != v22 )
    {
      ATL::AtlComQIPtrAssign(&v21, v22, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211);
      v16 = v21;
    }
    if ( !v16 )
    {
      MMDeviceFromInterfaceId = -2147023728;
      CoTaskMemFree(0LL);
      if ( v21 )
        ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
      if ( v22 )
        ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl->Release)(v22);
      goto LABEL_3;
    }
    MMDeviceFromInterfaceId = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))v16->lpVtbl[2].AddRef)(v16, pv);
    if ( MMDeviceFromInterfaceId >= 0 )
    {
      *v12 = 1;
      CoTaskMemFree(0LL);
      if ( v21 )
        ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
      if ( v22 )
        ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl->Release)(v22);
LABEL_30:
      v17 = -1LL;
      while ( *((_WORD *)pv[0] + ++v17) != 0 )
        ;
      v19 = 2 * v17 + 2;
      v20 = (unsigned __int16 *)MIDL_user_allocate(v19);
      v5 = v20;
      if ( !v20 )
      {
        MMDeviceFromInterfaceId = -2147024882;
        goto LABEL_3;
      }
      MMDeviceFromInterfaceId = StringCbCopyW(v20, v19, (size_t *)pv[0]);
      goto LABEL_35;
    }
  }
  CoTaskMemFree(0LL);
  if ( v21 )
    ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
  if ( v22 )
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl->Release)(v22);
LABEL_35:
  if ( MMDeviceFromInterfaceId >= 0 )
  {
    *v26 = v5;
    goto LABEL_4;
  }
LABEL_3:
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v5);
LABEL_4:
  CoTaskMemFree(v8);
  CoTaskMemFree(pv[0]);
  return (unsigned int)MMDeviceFromInterfaceId;
}
