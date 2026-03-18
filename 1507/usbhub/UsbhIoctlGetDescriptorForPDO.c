/*
 * XREFs of UsbhIoctlGetDescriptorForPDO @ 0x1C0047B44
 * Callers:
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C0047EDC (UsbhIoctlGetDescriptorFromNodeConnection.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001DFAC (UsbhReleaseFdoPnpLock.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C001E124 (UsbhAcquireFdoPnpLock.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001F6F0 (UsbhSyncSendCommandToDevice.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001FB10 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C001FC80 (UsbhRefPdoDeviceHandle.c)
 *     memmove @ 0x1C0029E80 (memmove.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhIoctlGetDescriptorForPDO(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        void *a6,
        char a7,
        char a8)
{
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r10d
  __int64 v16; // rbx
  unsigned __int8 v17; // al
  _QWORD *v18; // r14
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r10d
  _DWORD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  _DWORD *v30; // rax
  char v31; // al
  _WORD *v32; // rdx
  unsigned __int16 v33; // bp
  unsigned __int16 v34; // bp
  int v35; // r10d

  Log(a1, 32, 1195659313, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x21u,
      (__int64)&WPP_c5061be8c249ed4c77ab6f516d1c6e21_Traceguids);
    v15 = 32;
  }
  if ( *(_WORD *)(a4 + 6) > *a5 )
  {
    Log(a1, v15, 1195659314, a2, 0LL);
    LODWORD(v16) = -1073741789;
    goto LABEL_40;
  }
  v17 = *(_BYTE *)(a4 + 1);
  if ( v17 != 6 )
  {
    Log(a1, v15, 1195659315, a2, v17);
LABEL_7:
    LODWORD(v16) = -1073741811;
    goto LABEL_40;
  }
  if ( *(char *)a4 >= 0 )
  {
    Log(a1, v15, 1195659316, a2, 0LL);
    goto LABEL_7;
  }
  v18 = PdoExt(a2, v12, v13, v14);
  v19 = UsbhRefPdoDeviceHandle(a1, a2, a3, 1212444263LL);
  Log(a1, 32, 1919304753, 0LL, v19);
  if ( v19 && !a8 )
  {
    if ( a7 )
    {
      v24 = FdoExt(a1, v20, v21, v22);
      UsbhReleaseFdoPnpLock(a1, (__int64)(v24 + 434), v25, v26);
    }
    v16 = (int)UsbhSyncSendCommandToDevice(a1, a2, (_BYTE *)a4, (__int64)a6, a5);
    UsbhDerefPdoDeviceHandle(a1, v19, a3, 1212444263LL);
    if ( a7 )
    {
      v30 = FdoExt(a1, v27, v28, v29);
      UsbhAcquireFdoPnpLock(a1, (__int64)(v30 + 434), 11LL, 4027383819LL, 0);
    }
    Log(a1, 32, 1195659316, v16, (int)a5);
    goto LABEL_40;
  }
  v31 = *(_BYTE *)(a4 + 3);
  if ( v31 != 2 || *(_BYTE *)(a4 + 2) )
  {
    if ( v31 == 1 && !*(_BYTE *)(a4 + 2) )
    {
      v34 = *a5;
      if ( *a5 > 0x12u )
        v34 = 18;
      Log(a1, v23, 1195659316, *(unsigned __int16 *)(a4 + 6), *a5);
      if ( v34 <= *(_WORD *)(a4 + 6) && v34 <= *a5 )
      {
        memmove(a6, v18 + 174, v34);
        *a5 = v34;
        Log(a1, 32, 1195659317, (__int64)a6, v34);
        goto LABEL_27;
      }
      Log(a1, v35, 1195659318, (__int64)a6, v34);
      goto LABEL_36;
    }
    if ( v31 != 15 || *(_BYTE *)(a4 + 2) )
      goto LABEL_37;
    v32 = (_WORD *)v18[299];
  }
  else
  {
    v32 = (_WORD *)v18[298];
  }
  if ( v32 )
  {
    v33 = *a5;
    if ( *a5 > v32[1] )
      v33 = v32[1];
    if ( v33 <= *(_WORD *)(a4 + 6) && v33 <= *a5 && v33 )
    {
      memmove(a6, v32, v33);
      *a5 = v33;
LABEL_27:
      LODWORD(v16) = 0;
      goto LABEL_38;
    }
  }
LABEL_36:
  *a5 = 0;
LABEL_37:
  LODWORD(v16) = -1073741823;
LABEL_38:
  if ( v19 )
    UsbhDerefPdoDeviceHandle(a1, v19, a3, 1212444263LL);
LABEL_40:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x22u,
      (__int64)&WPP_c5061be8c249ed4c77ab6f516d1c6e21_Traceguids,
      v16);
  return (unsigned int)v16;
}
