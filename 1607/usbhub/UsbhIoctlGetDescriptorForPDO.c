/*
 * XREFs of UsbhIoctlGetDescriptorForPDO @ 0x1C0047FB4
 * Callers:
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C0048440 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001E9FC (UsbhReleaseFdoPnpLock.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C001EA4C (UsbhAcquireFdoPnpLock.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001FEA0 (UsbhSyncSendCommandToDevice.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C00202C0 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0020430 (UsbhRefPdoDeviceHandle.c)
 *     memmove @ 0x1C00295C0 (memmove.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
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
  __int64 v36; // r9
  int v37; // edx
  int v38; // r8d
  int v39; // r8d
  char v40; // al
  int v41; // r11d
  __int64 v43; // [rsp+20h] [rbp-48h]

  Log(a1, 32, 1195659313, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x21u,
      (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids);
    v15 = 32;
  }
  if ( *(_WORD *)(a4 + 6) > *a5 )
  {
    Log(a1, v15, 1195659314, a2, 0LL);
    LODWORD(v16) = -1073741789;
    goto LABEL_62;
  }
  v17 = *(_BYTE *)(a4 + 1);
  if ( v17 != 6 )
  {
    Log(a1, v15, 1195659315, a2, v17);
LABEL_7:
    LODWORD(v16) = -1073741811;
    goto LABEL_62;
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
    goto LABEL_62;
  }
  v31 = *(_BYTE *)(a4 + 3);
  if ( v31 == 2 && !*(_BYTE *)(a4 + 2) )
  {
    v32 = (_WORD *)*((_QWORD *)v18 + 298);
LABEL_20:
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
        goto LABEL_60;
      }
    }
    goto LABEL_58;
  }
  if ( v31 != 1 || *(_BYTE *)(a4 + 2) )
  {
    if ( v31 == 15 && !*(_BYTE *)(a4 + 2) )
    {
      v32 = (_WORD *)*((_QWORD *)v18 + 299);
      goto LABEL_20;
    }
    if ( v31 != 3 )
      goto LABEL_59;
    v40 = *(_BYTE *)(a4 + 2);
    if ( !v40 || v40 != *((_BYTE *)v18 + 1408) || !*((_QWORD *)v18 + 266) || !v18[531] || *(_WORD *)(a4 + 4) != 1033 )
      goto LABEL_59;
    v34 = *(unsigned __int8 *)a5;
    if ( v34 > *((_WORD *)v18 + 1062) )
      v34 = *((_WORD *)v18 + 1062);
    Log(a1, v23, 1195659319, *(unsigned __int16 *)(a4 + 6), *a5);
    if ( v34 <= *(_WORD *)(a4 + 6) && v34 <= *a5 )
    {
      if ( v34 )
        *a6 = v34;
      if ( v34 >= (unsigned __int16)v41 )
      {
        a6[1] = 3;
        if ( v34 > (unsigned __int16)v41 )
        {
          memmove(a6 + 2, *((const void **)v18 + 266), v34 - v41);
          v35 = 32;
        }
      }
      v36 = (__int64)a6;
      v43 = v34;
      v38 = 1195659320;
      v37 = v35;
      goto LABEL_35;
    }
    v39 = 1195659321;
  }
  else
  {
    v34 = *a5;
    if ( *a5 > 0x12u )
      v34 = 18;
    Log(a1, v23, 1195659316, *(unsigned __int16 *)(a4 + 6), *a5);
    if ( v34 <= *(_WORD *)(a4 + 6) && v34 <= *a5 )
    {
      memmove(a6, v18 + 348, v34);
      v36 = (__int64)a6;
      v37 = 32;
      v38 = 1195659317;
      v43 = v34;
LABEL_35:
      *a5 = v34;
      Log(a1, v37, v38, v36, v43);
      goto LABEL_27;
    }
    v39 = 1195659318;
  }
  Log(a1, v35, v39, (__int64)a6, v34);
LABEL_58:
  *a5 = 0;
LABEL_59:
  LODWORD(v16) = -1073741823;
LABEL_60:
  if ( v19 )
    UsbhDerefPdoDeviceHandle(a1, v19, a3, 1212444263LL);
LABEL_62:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x22u,
      (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids,
      v16);
  return (unsigned int)v16;
}
