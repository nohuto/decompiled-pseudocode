/*
 * XREFs of s_rtgGetDefaultAudioEndpoint @ 0x1800110E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAG@Z @ 0x180011380 (-GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ??4?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@B@ATL@@QEAAPEAUIMMEndpointInternal@@PEAUIUnknown@@@Z @ 0x180027844 (--4-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180027BAC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     MIDL_user_allocate @ 0x1800282C0 (MIDL_user_allocate.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_rtgGetDefaultAudioEndpoint(
        void *a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        unsigned __int16 **a4,
        _DWORD *a5)
{
  unsigned __int16 *v5; // rdi
  _DWORD *v9; // rsi
  RPC_STATUS v10; // eax
  CPolicyConfig *v11; // rcx
  signed int MMDeviceFromInterfaceId; // ebx
  HANDLE ProcessHeap; // rax
  __int64 v15; // rax
  size_t v17; // rbx
  unsigned __int16 *v18; // rax
  LPVOID v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int16 *v21; // [rsp+40h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-8h] BYREF
  unsigned int Pid; // [rsp+90h] [rbp+40h] BYREF

  v5 = 0LL;
  v21 = 0LL;
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
    MMDeviceFromInterfaceId = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, unsigned __int16 **))(*(_QWORD *)g_PolicyManager + 152LL))(
                                g_PolicyManager,
                                (unsigned int)a2,
                                (unsigned int)a3,
                                &v21);
    if ( MMDeviceFromInterfaceId < 0 )
      goto LABEL_9;
    goto LABEL_30;
  }
  v20 = 0LL;
  v19 = 0LL;
  MMDeviceFromInterfaceId = mmdDevGetMMDeviceFromInterfaceId(pv, &v20);
  if ( MMDeviceFromInterfaceId >= 0 )
  {
    ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_eecca8a7_a629_4dba_9f23_20f6db42d990>::operator=(&v19, v20);
    if ( !v19 )
    {
      MMDeviceFromInterfaceId = -2147023728;
      CoTaskMemFree(0LL);
      if ( v19 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v19 + 16LL))(v19);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      goto LABEL_9;
    }
    MMDeviceFromInterfaceId = (*(__int64 (__fastcall **)(LPVOID, unsigned __int16 **))(*(_QWORD *)v19 + 56LL))(
                                v19,
                                &v21);
    if ( MMDeviceFromInterfaceId >= 0 )
    {
      *v9 = 1;
      CoTaskMemFree(0LL);
      if ( v19 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v19 + 16LL))(v19);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_30:
      v15 = -1LL;
      while ( v21[++v15] != 0 )
        ;
      v17 = 2 * v15 + 2;
      v18 = (unsigned __int16 *)MIDL_user_allocate(v17);
      v5 = v18;
      if ( !v18 )
      {
        MMDeviceFromInterfaceId = -2147024882;
        goto LABEL_9;
      }
      MMDeviceFromInterfaceId = StringCbCopyW(v18, v17, v21);
      goto LABEL_35;
    }
    CoTaskMemFree(0LL);
    if ( v19 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  else
  {
    CoTaskMemFree(0LL);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
LABEL_35:
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
  CoTaskMemFree(v21);
  return (unsigned int)MMDeviceFromInterfaceId;
}
