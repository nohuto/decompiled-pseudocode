/*
 * XREFs of s_rtgGetDefaultAudioEndpoint @ 0x18002FF30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAG@Z @ 0x18001EFC0 (-GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002B950 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18002EF60 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     MIDL_user_allocate @ 0x180030500 (MIDL_user_allocate.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall s_rtgGetDefaultAudioEndpoint(
        void *a1,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        char **a4,
        _DWORD *a5)
{
  char *v5; // r14
  _DWORD *v9; // rsi
  RPC_STATUS v10; // eax
  CPolicyConfig *v11; // rcx
  int MMDeviceFromInterfaceId; // edi
  HANDLE ProcessHeap; // rax
  struct IUnknown *v15; // rbx
  __int64 v16; // rax
  size_t v18; // rbx
  char *v19; // rax
  struct IUnknown *v20; // [rsp+30h] [rbp-20h] BYREF
  struct IUnknown *v21; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int16 *v22; // [rsp+40h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-8h] BYREF
  unsigned int Pid; // [rsp+90h] [rbp+40h] BYREF

  v5 = 0LL;
  v22 = 0LL;
  pv = 0LL;
  if ( a3 >= ERole_enum_count )
  {
    MMDeviceFromInterfaceId = -2147024809;
    goto LABEL_9;
  }
  if ( !a4 || (v9 = a5) == 0LL )
  {
    MMDeviceFromInterfaceId = -2147467261;
    goto LABEL_9;
  }
  *a5 = 0;
  v10 = I_RpcBindingInqLocalClientPID(a1, &Pid);
  MMDeviceFromInterfaceId = v10;
  if ( v10 > 0 )
    MMDeviceFromInterfaceId = (unsigned __int16)v10 | 0x80070000;
  if ( MMDeviceFromInterfaceId < 0 )
    goto LABEL_9;
  if ( (int)CPolicyConfig::GetApplicationDefaultEndpoint(v11, Pid, a3, a2, (unsigned __int16 **)&pv) < 0 )
  {
    MMDeviceFromInterfaceId = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, _QWORD, _QWORD, unsigned __int16 **))(*(_QWORD *)g_PolicyManager + 160LL))(
                                g_PolicyManager,
                                a2,
                                (unsigned int)a3,
                                &v22);
    if ( MMDeviceFromInterfaceId < 0 )
      goto LABEL_9;
    goto LABEL_32;
  }
  v21 = 0LL;
  v20 = 0LL;
  MMDeviceFromInterfaceId = mmdDevGetMMDeviceFromInterfaceId(pv, &v21);
  if ( MMDeviceFromInterfaceId >= 0 )
  {
    v15 = v20;
    if ( v20 != v21 )
    {
      ATL::AtlComQIPtrAssign(&v20, v21, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211);
      v15 = v20;
    }
    if ( !v15 )
    {
      MMDeviceFromInterfaceId = -2147023728;
      CoTaskMemFree(0LL);
      if ( v20 )
        ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
      if ( v21 )
        ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
      goto LABEL_9;
    }
    MMDeviceFromInterfaceId = ((__int64 (__fastcall *)(struct IUnknown *, unsigned __int16 **))v15->lpVtbl[2].AddRef)(
                                v15,
                                &v22);
    if ( MMDeviceFromInterfaceId >= 0 )
    {
      *v9 = 1;
      CoTaskMemFree(0LL);
      if ( v20 )
        ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
      if ( v21 )
        ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
LABEL_32:
      v16 = -1LL;
      while ( v22[++v16] != 0 )
        ;
      v18 = 2 * v16 + 2;
      v19 = (char *)MIDL_user_allocate(v18);
      v5 = v19;
      if ( !v19 )
      {
        MMDeviceFromInterfaceId = -2147024882;
        goto LABEL_9;
      }
      MMDeviceFromInterfaceId = StringCbCopyW(v19, v18, (char *)v22);
      goto LABEL_37;
    }
    CoTaskMemFree(0LL);
    if ( v20 )
      ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
  }
  else
  {
    CoTaskMemFree(0LL);
  }
  if ( v21 )
    ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
LABEL_37:
  if ( MMDeviceFromInterfaceId >= 0 )
  {
    *a4 = v5;
    goto LABEL_10;
  }
LABEL_9:
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v5);
LABEL_10:
  CoTaskMemFree(pv);
  CoTaskMemFree(v22);
  return (unsigned int)MMDeviceFromInterfaceId;
}
