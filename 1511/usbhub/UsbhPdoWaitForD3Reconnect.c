/*
 * XREFs of UsbhPdoWaitForD3Reconnect @ 0x1C0046430
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C001FF90 (UsbhPdoSetD0.c)
 * Callees:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C00138F0 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhQueryPortState @ 0x1C0019A40 (UsbhQueryPortState.c)
 *     UsbhWait @ 0x1C001E700 (UsbhWait.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0028044 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041718 (UsbhQueueSoftConnectChange.c)
 */

__int64 __fastcall UsbhPdoWaitForD3Reconnect(PDEVICE_OBJECT DeviceObject, PDEVICE_OBJECT a2, __int64 a3, __int64 a4)
{
  char v6; // r15
  int v7; // edi
  _DWORD *v8; // rax
  _DWORD *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  int v14; // r10d
  _DWORD *v15; // rax
  _DWORD *v16; // rax
  __int64 v17; // r9
  _DWORD *v18; // rax
  int v20; // [rsp+70h] [rbp+18h] BYREF
  int v21; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0;
  v8 = PdoExt((__int64)a2, (__int64)a2, a3, a4);
  v9 = v8;
  if ( (*((_BYTE *)v8 + 1415) & 1) != 0 )
  {
    v6 = 1;
    v7 = UsbhWaitEventWithTimeoutEx((__int64)DeviceObject, v8 + 722, v8[734], 1684222788, 0, 0LL);
  }
  KeWaitForSingleObject(v9 + 728, Executive, 0, 0, 0LL);
  v9[353] &= ~0x4000000u;
  KeSetEvent((PRKEVENT)(v9 + 728), 0, 0);
  Log((__int64)DeviceObject, 16, 1144210290, v7, *((unsigned __int16 *)v9 + 710));
  if ( !v6 )
  {
    v7 = UsbhQueryPortState((__int64)DeviceObject, *((_WORD *)v9 + 710), &v20, &v21);
    if ( v7 < 0 )
    {
LABEL_17:
      v18 = PdoExt((__int64)a2, v10, v11, v12);
      UsbhQueueSoftConnectChange((__int64)DeviceObject, *((_WORD *)v9 + 710), (__int64)(v18 + 236), 0);
      return UsbhSet_Pdo_Dx(a2, (POWER_STATE)1);
    }
    if ( (v20 & 3) == 1 )
    {
      Log((__int64)DeviceObject, 16, 1144210284, (unsigned __int16)v20, *((unsigned __int16 *)v9 + 710));
      v6 = 1;
    }
    else if ( (v20 & 1) == 0 )
    {
      Log((__int64)DeviceObject, 16, 1144210279, (unsigned __int16)v20, *((unsigned __int16 *)v9 + 710));
      v7 = -1073741823;
    }
  }
  if ( v7 < 0 )
    goto LABEL_17;
  if ( v6 == 1 )
  {
    UsbhWait((__int64)DeviceObject, 0x64u);
    v13 = UsbhQueryPortState((__int64)DeviceObject, *((_WORD *)v9 + 710), &v20, &v21);
    Log((__int64)DeviceObject, 16, 1144210291, v13, (unsigned __int16)v20);
    if ( v14 >= 0 && (v20 & 1) != 0 )
    {
      v15 = PdoExt((__int64)a2, v10, v11, v12);
      v7 = UsbhSyncResetDeviceInternal(DeviceObject, (__int64)(v15 + 236), (__int64)a2);
    }
    else
    {
      v7 = -1073741823;
    }
  }
  else
  {
    v16 = PdoExt((__int64)a2, v10, v11, v12);
    UsbhSyncResumeDeviceInternal((__int64)DeviceObject, (__int64)(v16 + 236), a2, v17);
  }
  if ( v7 < 0 )
    goto LABEL_17;
  return UsbhSet_Pdo_Dx(a2, (POWER_STATE)1);
}
