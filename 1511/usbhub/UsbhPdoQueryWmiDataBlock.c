/*
 * XREFs of UsbhPdoQueryWmiDataBlock @ 0x1C004E080
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C001C0A0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001C470 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C004DA10 (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetPerformanceInfo @ 0x1C004DEFC (UsbhGetPerformanceInfo.c)
 */

__int64 __fastcall UsbhPdoQueryWmiDataBlock(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        __int64 a3,
        __int64 a4,
        int a5,
        ULONG *a6,
        unsigned int a7,
        _DWORD *a8)
{
  int v8; // ebx
  ULONG v9; // edi
  _DWORD *v12; // rax
  _DWORD *v13; // rsi
  int v14; // ebx
  NTSTATUS v15; // ebx
  __int64 v16; // rax
  __int64 v17; // r15
  int DeviceNodeInfo; // eax
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r8
  int PerformanceInfo; // eax
  _WORD *v23; // r9
  unsigned __int16 v24; // cx
  NTSTATUS v25; // eax
  unsigned int v26; // r10d
  ULONG v28; // [rsp+70h] [rbp+18h] BYREF

  v8 = a3;
  v9 = 0;
  v28 = 0;
  v12 = PdoExt((__int64)DeviceObject, (__int64)Irp, a3, a4);
  v13 = v12;
  if ( v8 )
  {
    v14 = v8 - 1;
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        Log(*((_QWORD *)v12 + 147), 8, 2003659060, 0LL, 0LL);
LABEL_5:
        v15 = -1073741163;
        goto LABEL_26;
      }
      if ( (v12[353] & 0x24) != 0 )
        goto LABEL_5;
      v16 = UsbhRefPdoDeviceHandle(*((_QWORD *)v12 + 147), (__int64)DeviceObject, (__int64)Irp, 1212441710LL);
      v17 = v16;
      if ( v16 )
      {
        DeviceNodeInfo = UsbhGetDeviceNodeInfo((__int64)DeviceObject, a8, a7, &v28, v16);
        v9 = v28;
        v15 = DeviceNodeInfo;
        if ( DeviceNodeInfo >= 0 && a5 == 1 && a6 )
          *a6 = v28;
        v19 = 1212441710LL;
LABEL_13:
        UsbhDerefPdoDeviceHandle(*((_QWORD *)v13 + 147), v17, (__int64)Irp, v19);
        goto LABEL_26;
      }
    }
    else
    {
      if ( a7 < 0xE4 )
      {
        v15 = -1073741789;
        v9 = 228;
        goto LABEL_26;
      }
      v20 = UsbhRefPdoDeviceHandle(*((_QWORD *)v12 + 147), (__int64)DeviceObject, (__int64)Irp, 1212444774LL);
      v17 = v20;
      if ( v20 )
      {
        PerformanceInfo = UsbhGetPerformanceInfo((__int64)DeviceObject, a8, v21, &v28, v20);
        v9 = v28;
        v15 = PerformanceInfo;
        if ( PerformanceInfo >= 0 && a5 == 1 && a6 )
          *a6 = v28;
        v19 = 1212444774LL;
        goto LABEL_13;
      }
    }
    v15 = -1073741810;
    goto LABEL_26;
  }
  Log(*((_QWORD *)v12 + 147), 8, 2003659059, (__int64)a8, a7);
  v9 = 16;
  if ( a7 >= 0x10 )
  {
    v24 = *((_WORD *)v13 + 702);
    v23[6] = 0;
    v15 = 0;
    v23[1] = (v24 >> 12) + 48;
    v23[2] = (HIBYTE(v24) & 0xF) + 48;
    v23[3] = 46;
    v23[4] = ((unsigned __int8)v24 >> 4) + 48;
    v23[5] = (v24 & 0xF) + 48;
    *v23 = 12;
    *a6 = 16;
  }
  else
  {
    v15 = -1073741789;
  }
LABEL_26:
  Log(*((_QWORD *)v13 + 147), 8, 2003659075, (__int64)Irp, v9);
  v25 = WmiCompleteRequest(DeviceObject, Irp, v15, v9, 0);
  Log(*((_QWORD *)v13 + 147), 8, 2003659088, 0LL, v25);
  return v26;
}
