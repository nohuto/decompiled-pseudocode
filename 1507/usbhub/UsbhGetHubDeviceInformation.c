/*
 * XREFs of UsbhGetHubDeviceInformation @ 0x1C0018E48
 * Callers:
 *     UsbhInitialize @ 0x1C00189A0 (UsbhInitialize.c)
 * Callees:
 *     Usbh_HubDerefDeviceHandle @ 0x1C0003B38 (Usbh_HubDerefDeviceHandle.c)
 *     UsbhValidateDeviceDescriptor @ 0x1C0006F6C (UsbhValidateDeviceDescriptor.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhGetDeviceHandle @ 0x1C00256D4 (UsbhGetDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhGetHubDeviceInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // r13
  __int64 DeviceHandle; // r14
  unsigned int v8; // esi
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 (__fastcall *v18)(_QWORD, __int64, _DWORD *, _QWORD, char *); // r10
  int v19; // ebp
  int v20; // esi
  _DWORD *v21; // rax
  __int64 v22; // r8
  int v24; // [rsp+48h] [rbp-40h]
  int v25; // [rsp+A0h] [rbp+18h] BYREF
  char v26; // [rsp+A8h] [rbp+20h] BYREF

  v6 = FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      24,
      (__int64)&WPP_7089f250826f62cd62a41d7a765d92e3_Traceguids);
  DeviceHandle = UsbhGetDeviceHandle(a1, a2);
  if ( !DeviceHandle )
    return 3221225473LL;
  v8 = 64;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x42554855u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
    {
      Usbh_HubDerefDeviceHandle(a1, DeviceHandle, a2, 0x48447472u);
      return 3221225626LL;
    }
    memset(PoolWithTag, 0, v8);
    *v10 = 0;
    v14 = FdoExt(a1, v11, v12, v13);
    v18 = (__int64 (__fastcall *)(_QWORD, __int64, _DWORD *, _QWORD, char *))*((_QWORD *)v14 + 538);
    if ( !v18 )
      break;
    v19 = v18(*((_QWORD *)v14 + 529), DeviceHandle, v10, v8, &v26);
    v20 = v19;
    if ( v19 != -1073741789 )
      goto LABEL_8;
    v8 = v10[1];
    ExFreePoolWithTag(v10, 0);
  }
  v19 = -1073741822;
  v20 = -1073741822;
LABEL_8:
  v21 = FdoExt(a1, v15, v16, v17);
  if ( *((_QWORD *)v21 + 559) )
    (*((void (__fastcall **)(_QWORD, __int64, __int64, __int64))v21 + 559))(
      *((_QWORD *)v21 + 529),
      DeviceHandle,
      a2,
      1212445810LL);
  if ( v19 >= 0 )
  {
    v6[633] = v10[11];
    v6[634] = v10[10];
    *(_OWORD *)(v6 + 635) = *(_OWORD *)(v10 + 3);
    *((_WORD *)v6 + 1278) = *((_WORD *)v10 + 14);
    Log(a1, 8, 1768842800, (__int64)v10, (__int64)v6);
    Log(a1, 8, 1768842872, (int)v6[634], (int)v6[633]);
    if ( !UsbhValidateDeviceDescriptor(a1, (__int64)(v6 + 635), v22, &v25, 0LL) )
    {
      LOBYTE(v24) = 0;
      v20 = -1073741811;
      UsbhException(a1, 0, 64, (_DWORD)v6 + 2540, 18, -1073741811, v25, usbfile_hub_c, 4193, v24);
    }
  }
  ExFreePoolWithTag(v10, 0);
  Log(a1, 8, 1768842814, v20, 0LL);
  return (unsigned int)v20;
}
