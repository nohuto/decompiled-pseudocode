/*
 * XREFs of UsbhGetDeviceBusInfo @ 0x1C003C3B4
 * Callers:
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C003F264 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhAcquireBusInfo @ 0x1C004DB50 (UsbhAcquireBusInfo.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029900 (memset.c)
 *     Usbh_UsbdInterfaceDereference @ 0x1C003D394 (Usbh_UsbdInterfaceDereference.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C003D59C (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D674 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhGetDeviceBusInfo(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  _DWORD *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // rax
  int v20; // ebx
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r10
  void (__fastcall *v27)(__int64); // rax
  int v28; // r9d
  unsigned int v29; // r8d
  _DWORD *PoolWithTag; // rax
  _DWORD *v31; // rdi
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 (__fastcall *v34)(__int64, __int64, _DWORD *, size_t *, _DWORD *); // r10
  int v35; // edx
  int v36; // r8d
  int v37; // r9d
  int v38; // [rsp+20h] [rbp-58h]
  _DWORD v39[4]; // [rsp+40h] [rbp-38h] BYREF
  size_t Size; // [rsp+98h] [rbp+20h] BYREF

  v4 = (unsigned int)a4;
  v5 = 0LL;
  v9 = FdoExt(a1, a2, (__int64)a3, a4);
  Log(a1, 8, 1734632041, (unsigned int)v4, (__int64)a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
      v4);
  if ( (unsigned int)v4 < 0x10 )
  {
    Log(a1, 8, 1734632005, v4, (__int64)a3);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 12, v13);
    return 3221225507LL;
  }
  if ( a2 )
  {
    v15 = *((_QWORD *)PdoExt(a2, v10, v11, v12) + 144);
    v19 = FdoExt(a1, v16, v17, v18);
    if ( *((_QWORD *)v19 + 543) )
    {
      v5 = (*((__int64 (__fastcall **)(_QWORD, __int64))v19 + 543))(*((_QWORD *)v19 + 529), v15);
      v20 = 0;
    }
    else
    {
      v20 = -1073741822;
    }
    Log(a1, 8, 1734631985, v20, v5);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v21,
        v22,
        13,
        (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
        v20,
        v5);
  }
  else
  {
    Log(a1, 8, 1734631986, 0LL, 0LL);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 14, v26);
    v5 = *((_QWORD *)v9 + 570);
    v27 = (void (__fastcall *)(__int64))*((_QWORD *)FdoExt(a1, v23, v24, v25) + 571);
    if ( v27 )
      v27(v5);
    v20 = 0;
  }
  if ( v20 >= 0 )
  {
    Log(a1, 8, 1734631987, 0LL, 0LL);
    v29 = v28 + 16;
    LODWORD(Size) = v28 + 16;
    while ( 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v29, 0x42554855u);
      v31 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memset(PoolWithTag, 0, (unsigned int)Size);
      v32 = *(_QWORD *)(a1 + 64);
      v33 = 0;
      v39[0] = 0;
      v34 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *, size_t *, _DWORD *))(v32 + 4608);
      if ( v34 )
      {
        v20 = v34(v5, 1LL, v31, &Size, v39);
        v33 = v39[0];
      }
      else
      {
        v20 = -1073741822;
      }
      Log(a1, 8, 1734631988, (__int64)v31, v33);
      if ( v20 != -1073741789 )
        goto LABEL_27;
      LODWORD(Size) = v39[0];
      Log(a1, 8, 1734631989, v39[0], -1073741789LL);
      ExFreePoolWithTag(v31, 0);
      v29 = Size;
    }
    v20 = -1073741670;
LABEL_27:
    Usbh_UsbdInterfaceDereference(a1, v5);
    if ( v20 < 0 )
      goto LABEL_31;
    if ( v31 )
    {
      a3[1] = *v31;
      a3[2] = v31[1];
      a3[3] = v31[2];
      Log(a1, 8, 1734629425, (unsigned int)*v31, (unsigned int)v31[1]);
      Log(a1, 8, 1734629426, (unsigned int)v31[2], 0LL);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_ddd(WPP_GLOBAL_Control->DeviceExtension, v35, v36, v37, v38, *v31, v31[1], v31[2]);
LABEL_31:
      if ( v31 )
        ExFreePoolWithTag(v31, 0);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
      v20);
  return (unsigned int)v20;
}
