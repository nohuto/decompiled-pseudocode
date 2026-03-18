/*
 * XREFs of ?AllocateHidDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFORMATION@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@@Z @ 0x1C01D3DC4
 * Callers:
 *     HidCreateDeviceInfo @ 0x1C01D5214 (HidCreateDeviceInfo.c)
 * Callees:
 *     CreatePointerDeviceInfo @ 0x1C01C9610 (CreatePointerDeviceInfo.c)
 *     SetUserPTPEnabledPreference @ 0x1C01D1800 (SetUserPTPEnabledPreference.c)
 *     ConfigurePointerDevice @ 0x1C01D48A0 (ConfigurePointerDevice.c)
 *     FindSiblingMouseDevice @ 0x1C01D4E84 (FindSiblingMouseDevice.c)
 *     FreeHidDesc @ 0x1C01D501C (FreeHidDesc.c)
 *     ?TraceLoggingHIDDeviceArrivedEvent@@YAXGPEAUDEVICEINFO@@@Z @ 0x1C0225548 (-TraceLoggingHIDDeviceArrivedEvent@@YAXGPEAUDEVICEINFO@@@Z.c)
 */

struct tagHIDDESC *__fastcall AllocateHidDesc(
        struct DEVICEINFO *a1,
        struct _HIDP_PREPARSED_DATA *a2,
        struct _HIDP_CAPS *a3,
        struct _HID_COLLECTION_INFORMATION *a4,
        struct _DEVICE_OBJECT *a5,
        struct _FILE_OBJECT *a6)
{
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // xmm0_8
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+38h] [rbp-20h]

  if ( !a2 )
    return 0LL;
  if ( !a3->InputReportByteLength )
    return 0LL;
  v11 = Win32AllocPoolZInit(120LL, 1147695957LL);
  v12 = v11;
  if ( !v11 )
    return 0LL;
  *(_OWORD *)(v11 + 40) = *(_OWORD *)&a3->Usage;
  *(_OWORD *)(v11 + 56) = *(_OWORD *)&a3->Reserved[3];
  *(_OWORD *)(v11 + 72) = *(_OWORD *)&a3->Reserved[11];
  *(_OWORD *)(v11 + 88) = *(_OWORD *)&a3->NumberInputValueCaps;
  v13 = Win32AllocPoolNonPaged(10 * *(unsigned __int16 *)(v11 + 44), 1768452949LL);
  *(_QWORD *)(v12 + 24) = v13;
  if ( !v13 )
  {
LABEL_6:
    FreeHidDesc(v12);
    return 0LL;
  }
  *(_QWORD *)(v12 + 16) = a2;
  *(_QWORD *)(v12 + 104) = *(_QWORD *)&a4->DescriptorSize;
  *(_DWORD *)(v12 + 112) = *(_DWORD *)&a4->ProductID;
  if ( a3->UsagePage == 13 && ((unsigned __int16)(a3->Usage - 1) <= 1u || (unsigned __int16)(a3->Usage - 4) <= 1u) )
  {
    EtwTracePointerDeviceArrivalStart();
    v14 = *(_QWORD *)(v12 + 104);
    v16 = *(_DWORD *)(v12 + 112);
    v15 = v14;
    if ( (int)CreatePointerDeviceInfo(a1, a2, a3, a5, a6, (__int64)&v15) >= 0 )
    {
      if ( (unsigned __int16)(a3->Usage - 4) <= 1u )
      {
        ConfigurePointerDevice(a1, (struct tagHIDDESC *)v12);
        if ( a3->Usage == 5 )
          SetUserPTPEnabledPreference(a1, (struct tagHIDDESC *)v12, 0LL);
      }
    }
    else if ( a3->Usage != 5 )
    {
      *(_QWORD *)(v12 + 16) = 0LL;
      *((_QWORD *)a1 + 50) = 0LL;
      goto LABEL_6;
    }
    if ( a3->Usage != 1 )
      FindSiblingMouseDevice((struct tagHIDDESC *)v12);
    TraceLoggingHIDDeviceArrivedEvent(a3->Usage, a1);
    EtwTracePointerDeviceArrivalStop();
  }
  return (struct tagHIDDESC *)v12;
}
