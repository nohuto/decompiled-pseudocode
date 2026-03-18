/*
 * XREFs of ?AllocateHidConfigDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFORMATION@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@@Z @ 0x1C01D3C48
 * Callers:
 *     HidCreateDeviceInfo @ 0x1C01D5214 (HidCreateDeviceInfo.c)
 * Callees:
 *     ?FindInputDeviceForConfig@@YAHPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAH2PEAPEAU2@@Z @ 0x1C01D3FB4 (-FindInputDeviceForConfig@@YAHPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAH2PEAPEAU2@@Z.c)
 *     DeliverConfigRequest @ 0x1C01D49C4 (DeliverConfigRequest.c)
 *     FreeHidDesc @ 0x1C01D501C (FreeHidDesc.c)
 *     GetDeviceParent @ 0x1C01D5064 (GetDeviceParent.c)
 *     SendPTPLatencyMgtDeviceRequest @ 0x1C01D56BC (SendPTPLatencyMgtDeviceRequest.c)
 */

struct tagHIDDESC *__fastcall AllocateHidConfigDesc(
        struct DEVICEINFO *a1,
        void *a2,
        struct _HIDP_CAPS *a3,
        struct _HID_COLLECTION_INFORMATION *a4,
        struct _DEVICE_OBJECT *a5,
        struct _FILE_OBJECT *a6)
{
  unsigned int v6; // ebx
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int v14; // ebp
  __int16 v15; // ax
  struct _FILE_OBJECT *v16; // r8
  struct _DEVICE_OBJECT *v17; // rdx
  int v18; // [rsp+30h] [rbp-28h] BYREF
  struct DEVICEINFO *v19; // [rsp+38h] [rbp-20h] BYREF
  int v20; // [rsp+68h] [rbp+10h] BYREF

  v6 = 0;
  if ( !a2 )
    return 0LL;
  if ( !a3->FeatureReportByteLength )
    return 0LL;
  v12 = Win32AllocPoolZInit(120LL, 1667789653LL);
  if ( !v12 )
    return 0LL;
  v13 = Win32AllocPoolNonPaged(a3->FeatureReportByteLength, 1718121301LL);
  *(_QWORD *)(v12 + 32) = v13;
  if ( !v13 )
  {
    FreeHidDesc(v12);
    return 0LL;
  }
  *(_OWORD *)(v12 + 40) = *(_OWORD *)&a3->Usage;
  v20 = 0;
  *(_OWORD *)(v12 + 56) = *(_OWORD *)&a3->Reserved[3];
  v18 = 0;
  *(_OWORD *)(v12 + 72) = *(_OWORD *)&a3->Reserved[11];
  v19 = 0LL;
  *(_OWORD *)(v12 + 88) = *(_OWORD *)&a3->NumberInputValueCaps;
  *(_QWORD *)(v12 + 16) = a2;
  *(_QWORD *)(v12 + 104) = *(_QWORD *)&a4->DescriptorSize;
  *(_DWORD *)(v12 + 112) = *(_DWORD *)&a4->ProductID;
  GetDeviceParent(0LL, a1);
  if ( (unsigned int)FindInputDeviceForConfig((struct tagHIDDESC *)v12, a1, &v20, &v18, &v19) && v20 )
  {
    if ( v18 )
    {
      v14 = 2;
      v15 = 128;
    }
    else
    {
      v14 = 3;
      v15 = 256;
    }
    v16 = a6;
    v17 = a5;
    *((_WORD *)a1 + 32) = v15;
    if ( (int)DeliverConfigRequest(v12, v17, v16, v14) >= 0 && v14 == 3 )
    {
      if ( (*gpsi & 0x2000) != 0 || (*gpsi & 0x4000) != 0 )
        v6 = 1;
      SendPTPLatencyMgtDeviceRequest(v19, *((_QWORD *)v19 + 50), v6);
    }
  }
  *((_BYTE *)a1 + 48) = 3;
  return (struct tagHIDDESC *)v12;
}
