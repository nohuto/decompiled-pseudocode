/*
 * XREFs of UsbhPdoPnp_QueryDeviceText @ 0x1C0025C50
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     UsbhGetProductIdString @ 0x1C0028D74 (UsbhGetProductIdString.c)
 *     memmove @ 0x1C0029E80 (memmove.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D1E8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0045584 (WPP_RECORDER_SF_S.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0054E80 (WPP_RECORDER_SF_qDD.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryDeviceText(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rsi
  _DWORD *v7; // rax
  int v8; // r8d
  int v9; // r9d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _DWORD *v11; // rdi
  unsigned int Length; // ebp
  unsigned __int16 Size; // r14
  PDEVICE_OBJECT v14; // rcx
  int Status; // ebx
  PVOID PoolWithTag; // rax
  void *v17; // rdi
  unsigned int v18; // eax
  const void *v19; // rdx
  int v20; // r8d
  int v22; // [rsp+20h] [rbp-58h]
  int v23; // [rsp+48h] [rbp-30h]

  v5 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      1,
      17,
      (__int64)&WPP_eb1fb4854d83e9122fff90925f566374_Traceguids,
      a1);
  v7 = PdoExt(a1, (__int64)a2, a3, a4);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v11 = v7;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Size = CurrentStackLocation->Parameters.QueryInterface.Size;
  v14 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_qDD(WPP_GLOBAL_Control->DeviceExtension, Size, v8, v9, v22, a1, Length, Size);
    v14 = WPP_GLOBAL_Control;
  }
  if ( !Size )
    Size = 1033;
  Status = a2->IoStatus.Status;
  if ( Length )
  {
    if ( Length == 1 )
    {
      if ( LOWORD(v14->DeviceType) )
      {
        WPP_RECORDER_SF_(v14->DeviceExtension, 0, 1, 19, (__int64)&WPP_eb1fb4854d83e9122fff90925f566374_Traceguids);
        v14 = WPP_GLOBAL_Control;
      }
      if ( !v11[555] )
      {
        Status = -1073741637;
        goto LABEL_26;
      }
      v5 = v11 + 554;
      goto LABEL_13;
    }
  }
  else
  {
    if ( LOWORD(v14->DeviceType) )
    {
      WPP_RECORDER_SF_(v14->DeviceExtension, 0, 1, 20, (__int64)&WPP_eb1fb4854d83e9122fff90925f566374_Traceguids);
      v14 = WPP_GLOBAL_Control;
    }
    if ( !*((_BYTE *)v11 + 1407) || (v11[356] & 0x800) != 0 )
    {
      if ( v11[547] )
      {
        v5 = v11 + 546;
LABEL_13:
        Status = 0;
        goto LABEL_14;
      }
      Status = -1073741637;
    }
    else
    {
      v5 = v11 + 538;
      Status = UsbhGetProductIdString(*((_QWORD *)v11 + 147));
      if ( Status == -1073741637 && Size != 1033 )
        Status = UsbhGetProductIdString(*((_QWORD *)v11 + 147));
      if ( (Status & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)Status) )
      {
        LOBYTE(v23) = 0;
        UsbhException(
          *((_QWORD *)v11 + 147),
          *((unsigned __int16 *)v11 + 710),
          58,
          0,
          0,
          Status,
          0,
          usbfile_pdo_c,
          2352,
          v23);
      }
      v14 = WPP_GLOBAL_Control;
    }
  }
  if ( Status < 0 )
    goto LABEL_26;
LABEL_14:
  if ( !v5 )
    goto LABEL_26;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v5[1], 0x42554855u);
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v5[1]);
    v18 = v5[1];
    if ( v18 )
    {
      v19 = (const void *)*((_QWORD *)v5 + 1);
      if ( v19 )
      {
        memmove(v17, v19, v18);
        a2->IoStatus.Information = (unsigned __int64)v17;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          goto LABEL_19;
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v20,
          21,
          (__int64)&WPP_eb1fb4854d83e9122fff90925f566374_Traceguids,
          (__int64)v17);
        goto LABEL_42;
      }
    }
    ExFreePoolWithTag(v17, 0);
  }
  Status = -1073741670;
LABEL_42:
  v14 = WPP_GLOBAL_Control;
LABEL_26:
  if ( LOWORD(v14->DeviceType) )
    WPP_RECORDER_SF_d(v14->DeviceExtension, 0, 1, 22, (__int64)&WPP_eb1fb4854d83e9122fff90925f566374_Traceguids, Status);
LABEL_19:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
