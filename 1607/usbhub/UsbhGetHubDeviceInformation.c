/*
 * XREFs of UsbhGetHubDeviceInformation @ 0x1C0007A3C
 * Callers:
 *     UsbhInitialize @ 0x1C0019A10 (UsbhInitialize.c)
 * Callees:
 *     Usbh_HubDerefDeviceHandle @ 0x1C0003D38 (Usbh_HubDerefDeviceHandle.c)
 *     UsbhValidateDeviceDescriptor @ 0x1C0007C14 (UsbhValidateDeviceDescriptor.c)
 *     UsbhGetDeviceHandle @ 0x1C0007C44 (UsbhGetDeviceHandle.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029900 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhGetHubDeviceInformation(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 DeviceHandle; // r14
  unsigned int v6; // esi
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rdi
  __int64 v9; // rax
  __int64 (__fastcall *v10)(_QWORD, __int64, _DWORD *, _QWORD, char *); // r10
  int v11; // ebp
  unsigned int v12; // esi
  __int64 v13; // rax
  int v14; // r8d
  int v16; // [rsp+48h] [rbp-40h]
  int v17; // [rsp+A0h] [rbp+18h] BYREF
  char v18; // [rsp+A8h] [rbp+20h] BYREF

  v4 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      24,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids);
  DeviceHandle = UsbhGetDeviceHandle(a1, a2);
  if ( !DeviceHandle )
    return 3221225473LL;
  v6 = 64;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x42554855u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
    {
      Usbh_HubDerefDeviceHandle(a1, DeviceHandle, a2, 0x48447472u);
      return 3221225626LL;
    }
    memset(PoolWithTag, 0, v6);
    *v8 = 0;
    v9 = FdoExt(a1);
    v10 = *(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, _QWORD, char *))(v9 + 4304);
    if ( !v10 )
      break;
    v11 = v10(*(_QWORD *)(v9 + 4232), DeviceHandle, v8, v6, &v18);
    v12 = v11;
    if ( v11 != -1073741789 )
      goto LABEL_8;
    v6 = v8[1];
    ExFreePoolWithTag(v8, 0);
  }
  v11 = -1073741822;
  v12 = -1073741822;
LABEL_8:
  v13 = FdoExt(a1);
  if ( *(_QWORD *)(v13 + 4472) )
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v13 + 4472))(
      *(_QWORD *)(v13 + 4232),
      DeviceHandle,
      a2,
      1212445810LL);
  if ( v11 >= 0 )
  {
    *(_DWORD *)(v4 + 2532) = v8[11];
    *(_DWORD *)(v4 + 2536) = v8[10];
    *(_OWORD *)(v4 + 2540) = *(_OWORD *)(v8 + 3);
    *(_WORD *)(v4 + 2556) = *((_WORD *)v8 + 14);
    Log(a1, 8, 1768842800, (_DWORD)v8, v4);
    Log(a1, 8, 1768842872, *(_DWORD *)(v4 + 2536), *(int *)(v4 + 2532));
    if ( !(unsigned __int8)UsbhValidateDeviceDescriptor(a1, (int)v4 + 2540, v14, (unsigned int)&v17, 0LL) )
    {
      LOBYTE(v16) = 0;
      v12 = -1073741811;
      UsbhException(a1, 0, 64, v4 + 2540, 18, -1073741811, v17, usbfile_hub_c, 4193, v16);
    }
  }
  ExFreePoolWithTag(v8, 0);
  Log(a1, 8, 1768842814, v12, 0LL);
  return v12;
}
