/*
 * XREFs of UsbhIoctlGetDescriptorForPDO @ 0x1C0047BC4
 * Callers:
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004802C (UsbhIoctlGetDescriptorFromNodeConnection.c)
 * Callees:
 *     UsbhAcquireFdoPnpLock @ 0x1C00091F4 (UsbhAcquireFdoPnpLock.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C000942C (UsbhReleaseFdoPnpLock.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C001C0A0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001C470 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001C5D4 (UsbhSyncSendCommandToDevice.c)
 *     memmove @ 0x1C0028E40 (memmove.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhIoctlGetDescriptorForPDO(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        char *a6,
        char a7,
        char a8)
{
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r10d
  __int64 v16; // rbx
  unsigned __int8 v17; // al
  _DWORD *v18; // r14
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r10d
  _DWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  _DWORD *v28; // rax
  char v29; // al
  _WORD *v30; // rdx
  unsigned __int16 v31; // bp
  unsigned __int16 v32; // bp
  int v33; // r10d
  __int64 v34; // r9
  int v35; // r8d
  int v36; // r8d
  char v37; // al
  __int64 v39; // [rsp+20h] [rbp-48h]

  Log(a1, 32, 1195659313, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x21u,
      (__int64)&WPP_3ea9b81ba734f165b64302e7a733234f_Traceguids);
    v15 = 32;
  }
  if ( *(_WORD *)(a4 + 6) > *a5 )
  {
    Log(a1, v15, 1195659314, a2, 0LL);
    LODWORD(v16) = -1073741789;
    goto LABEL_57;
  }
  v17 = *(_BYTE *)(a4 + 1);
  if ( v17 != 6 )
  {
    Log(a1, v15, 1195659315, a2, v17);
LABEL_7:
    LODWORD(v16) = -1073741811;
    goto LABEL_57;
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
      UsbhReleaseFdoPnpLock(a1, (__int64)(v24 + 434));
    }
    v16 = (int)UsbhSyncSendCommandToDevice(a1, a2, (_BYTE *)a4, (__int64)a6, a5);
    UsbhDerefPdoDeviceHandle(a1, v19, a3, 1212444263LL);
    if ( a7 )
    {
      v28 = FdoExt(a1, v25, v26, v27);
      UsbhAcquireFdoPnpLock(a1, (__int64)(v28 + 434), 11, -267583477, 0);
    }
    Log(a1, 32, 1195659316, v16, (int)a5);
    goto LABEL_57;
  }
  v29 = *(_BYTE *)(a4 + 3);
  if ( v29 == 2 && !*(_BYTE *)(a4 + 2) )
  {
    v30 = (_WORD *)*((_QWORD *)v18 + 298);
LABEL_20:
    if ( v30 )
    {
      v31 = *a5;
      if ( *a5 > v30[1] )
        v31 = v30[1];
      if ( v31 <= *(_WORD *)(a4 + 6) && v31 <= *a5 && v31 )
      {
        memmove(a6, v30, v31);
        *a5 = v31;
LABEL_27:
        LODWORD(v16) = 0;
        goto LABEL_55;
      }
    }
    goto LABEL_53;
  }
  if ( v29 != 1 || *(_BYTE *)(a4 + 2) )
  {
    if ( v29 == 15 && !*(_BYTE *)(a4 + 2) )
    {
      v30 = (_WORD *)*((_QWORD *)v18 + 299);
      goto LABEL_20;
    }
    if ( v29 != 3 )
      goto LABEL_54;
    v37 = *(_BYTE *)(a4 + 2);
    if ( !v37 || v37 != *((_BYTE *)v18 + 1408) || !*((_QWORD *)v18 + 266) || !v18[531] || *(_WORD *)(a4 + 4) != 1033 )
      goto LABEL_54;
    v32 = *(unsigned __int8 *)a5;
    if ( v32 > *((_WORD *)v18 + 1062) )
      v32 = *((_WORD *)v18 + 1062);
    Log(a1, v23, 1195659319, *(unsigned __int16 *)(a4 + 6), *a5);
    if ( v32 <= *(_WORD *)(a4 + 6) && v32 <= *a5 )
    {
      *a6 = v32;
      a6[1] = 3;
      memmove(a6 + 2, *((const void **)v18 + 266), (unsigned int)v18[531] - 2LL);
      v34 = (__int64)a6;
      v39 = v32;
      v35 = 1195659320;
      goto LABEL_35;
    }
    v36 = 1195659321;
  }
  else
  {
    v32 = *a5;
    if ( *a5 > 0x12u )
      v32 = 18;
    Log(a1, v23, 1195659316, *(unsigned __int16 *)(a4 + 6), *a5);
    if ( v32 <= *(_WORD *)(a4 + 6) && v32 <= *a5 )
    {
      memmove(a6, v18 + 348, v32);
      v34 = (__int64)a6;
      v35 = 1195659317;
      v39 = v32;
LABEL_35:
      *a5 = v32;
      Log(a1, 32, v35, v34, v39);
      goto LABEL_27;
    }
    v36 = 1195659318;
  }
  Log(a1, v33, v36, (__int64)a6, v32);
LABEL_53:
  *a5 = 0;
LABEL_54:
  LODWORD(v16) = -1073741823;
LABEL_55:
  if ( v19 )
    UsbhDerefPdoDeviceHandle(a1, v19, a3, 1212444263LL);
LABEL_57:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x22u,
      (__int64)&WPP_3ea9b81ba734f165b64302e7a733234f_Traceguids,
      v16);
  return (unsigned int)v16;
}
