/*
 * XREFs of USBD_IsochUrbAllocate @ 0x1C00A5A48
 * Callers:
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008BEA8 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 * Callees:
 *     memset @ 0x1C00333C0 (memset.c)
 */

__int64 __fastcall USBD_IsochUrbAllocate(USBD_HANDLE__ *USBDHandle, __int64 NumberOfIsochPackets, _URB **Urb)
{
  char v3; // bp
  int v6; // edi
  __int64 (__fastcall *v7)(_QWORD, __int64); // rax
  SIZE_T v8; // rdi
  _URB *PoolWithTag; // rax
  void (__fastcall *v10)(_QWORD, __int64); // rax

  v3 = 0;
  if ( !USBDHandle )
  {
    if ( LOBYTE(WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject) )
      DbgPrintEx(0x4Du, 0, "USBDHandle cant be NULL\n");
    v6 = -1073741811;
LABEL_33:
    if ( Urb )
      *Urb = 0LL;
    return (unsigned int)v6;
  }
  if ( Urb )
  {
    if ( *((_BYTE *)USBDHandle + 177) )
    {
      if ( LOBYTE(WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject) )
        DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete is set, UsbdHandleInfo 0x%p\n", USBDHandle);
    }
    else
    {
      if ( *((int *)USBDHandle + 43) >= 1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)USBDHandle + 43);
        v7 = (__int64 (__fastcall *)(_QWORD, __int64))*((_QWORD *)USBDHandle + 16);
        v3 = 1;
        if ( v7 )
        {
          v6 = v7(*((_QWORD *)USBDHandle + 6), NumberOfIsochPackets);
        }
        else
        {
          v8 = (unsigned int)(12 * NumberOfIsochPackets + 152);
          PoolWithTag = (_URB *)ExAllocatePoolWithTag(g_NonPagedPoolType, v8, *((_DWORD *)USBDHandle + 16));
          *Urb = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, v8);
            v6 = 0;
          }
          else
          {
            if ( LOBYTE(WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject) )
              DbgPrintEx(0x4Du, 0, "Insufficient Memory to allocate Isoch URB\n");
            v6 = -1073741670;
          }
        }
        goto $__tryLabel_4;
      }
      if ( LOBYTE(WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject) )
        DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->ReferenceCount must be 1 or higher 0x%p\n", USBDHandle);
    }
    v6 = -1073741436;
    if ( LOBYTE(WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject) )
      DbgPrintEx(0x4Du, 0, "USBDInternal_ReferenceHandle failed %x\n", -1073741436);
$__tryLabel_4:
    if ( v6 >= 0 )
      return (unsigned int)v6;
    if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)USBDHandle + 43, 0xFFFFFFFF) <= 1 )
    {
      if ( *((_BYTE *)USBDHandle + 177) )
      {
        v10 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)USBDHandle + 14);
        if ( v10 )
          v10(*((_QWORD *)USBDHandle + 6), NumberOfIsochPackets);
        ExFreePoolWithTag(USBDHandle, *((_DWORD *)USBDHandle + 16));
      }
      else if ( LOBYTE(WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject) )
      {
        DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", USBDHandle);
      }
    }
    goto LABEL_33;
  }
  if ( LOBYTE(WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject) )
    DbgPrintEx(0x4Du, 0, "Urb cant be NULL\n");
  return (unsigned int)-1073741811;
}
