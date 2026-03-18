/*
 * XREFs of UsbhPdoPnp_QueryDeviceText @ 0x1C000BAB0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     UsbhGetProductIdString @ 0x1C0027D34 (UsbhGetProductIdString.c)
 *     memmove @ 0x1C0028E40 (memmove.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D418 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00456B4 (WPP_RECORDER_SF_S.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0054FE8 (WPP_RECORDER_SF_qDD.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryDeviceText(__int64 a1, IRP *a2)
{
  __int64 v3; // rsi
  __int64 v5; // rax
  int v6; // r8d
  int v7; // r9d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v9; // rdi
  unsigned int Length; // ebp
  unsigned __int16 Size; // r14
  PDEVICE_OBJECT v12; // rcx
  int Status; // ebx
  PVOID PoolWithTag; // rax
  void *v15; // rdi
  unsigned int v16; // eax
  const void *v17; // rdx
  int v18; // r8d
  int v20; // [rsp+20h] [rbp-58h]
  int v21; // [rsp+48h] [rbp-30h]

  v3 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      1,
      17,
      (__int64)&WPP_028cdac27fb3dffc4d89443566e788cd_Traceguids,
      a1);
  v5 = PdoExt(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v9 = v5;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Size = CurrentStackLocation->Parameters.QueryInterface.Size;
  v12 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_qDD(WPP_GLOBAL_Control->DeviceExtension, Size, v6, v7, v20, a1, Length, Size);
    v12 = WPP_GLOBAL_Control;
  }
  if ( !Size )
    Size = 1033;
  Status = a2->IoStatus.Status;
  if ( Length )
  {
    if ( Length == 1 )
    {
      if ( LOWORD(v12->DeviceType) )
      {
        WPP_RECORDER_SF_(v12->DeviceExtension, 0, 1, 19, (__int64)&WPP_028cdac27fb3dffc4d89443566e788cd_Traceguids);
        v12 = WPP_GLOBAL_Control;
      }
      if ( !*(_DWORD *)(v9 + 2220) )
      {
        Status = -1073741637;
        goto LABEL_26;
      }
      v3 = v9 + 2216;
      goto LABEL_13;
    }
  }
  else
  {
    if ( LOWORD(v12->DeviceType) )
    {
      WPP_RECORDER_SF_(v12->DeviceExtension, 0, 1, 20, (__int64)&WPP_028cdac27fb3dffc4d89443566e788cd_Traceguids);
      v12 = WPP_GLOBAL_Control;
    }
    if ( !*(_BYTE *)(v9 + 1407) || (*(_DWORD *)(v9 + 1424) & 0x800) != 0 )
    {
      if ( *(_DWORD *)(v9 + 2188) )
      {
        v3 = v9 + 2184;
LABEL_13:
        Status = 0;
        goto LABEL_14;
      }
      Status = -1073741637;
    }
    else
    {
      v3 = v9 + 2152;
      Status = UsbhGetProductIdString(*(_QWORD *)(v9 + 1176));
      if ( Status == -1073741637 && Size != 1033 )
        Status = UsbhGetProductIdString(*(_QWORD *)(v9 + 1176));
      if ( (Status & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)Status) )
      {
        LOBYTE(v21) = 0;
        UsbhException(
          *(_QWORD *)(v9 + 1176),
          *(unsigned __int16 *)(v9 + 1420),
          58,
          0,
          0,
          Status,
          0,
          usbfile_pdo_c,
          2351,
          v21);
      }
      v12 = WPP_GLOBAL_Control;
    }
  }
  if ( Status < 0 )
    goto LABEL_26;
LABEL_14:
  if ( !v3 )
    goto LABEL_26;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(v3 + 4), 0x42554855u);
  v15 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, *(unsigned int *)(v3 + 4));
    v16 = *(_DWORD *)(v3 + 4);
    if ( v16 )
    {
      v17 = *(const void **)(v3 + 8);
      if ( v17 )
      {
        memmove(v15, v17, v16);
        a2->IoStatus.Information = (unsigned __int64)v15;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          goto LABEL_19;
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v18,
          21,
          (__int64)&WPP_028cdac27fb3dffc4d89443566e788cd_Traceguids,
          (__int64)v15);
        goto LABEL_42;
      }
    }
    ExFreePoolWithTag(v15, 0);
  }
  Status = -1073741670;
LABEL_42:
  v12 = WPP_GLOBAL_Control;
LABEL_26:
  if ( LOWORD(v12->DeviceType) )
    WPP_RECORDER_SF_d(v12->DeviceExtension, 0, 1, 22, (__int64)&WPP_028cdac27fb3dffc4d89443566e788cd_Traceguids, Status);
LABEL_19:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
