/*
 * XREFs of UsbhSetWmiDataBlock @ 0x1C004E570
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSetPdoRegistryParameter @ 0x1C0009514 (UsbhSetPdoRegistryParameter.c)
 *     UsbhSshEnableDisable @ 0x1C0009F68 (UsbhSshEnableDisable.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSetHubSelectiveSuspend @ 0x1C004BFEC (UsbhSetHubSelectiveSuspend.c)
 */

NTSTATUS __fastcall UsbhSetWmiDataBlock(
        struct _DEVICE_OBJECT *a1,
        IRP *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6)
{
  int v6; // esi
  int v7; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // r11d
  int v14; // edi
  NTSTATUS v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // r8
  _BYTE *v18; // r9
  __int64 v19; // r10
  PDEVICE_OBJECT *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  BOOL Data; // [rsp+50h] [rbp+18h] BYREF

  v6 = a4;
  v7 = a3;
  FdoExt((__int64)a1, (__int64)a2, a3, a4);
  Log((__int64)a1, 64, 1935101257, 0LL, 0LL);
  if ( !v7 )
    goto LABEL_20;
  v14 = v7 - 2;
  if ( !v14 )
  {
    if ( !a5 )
      goto LABEL_7;
    if ( !v6 && *(_DWORD *)(v12 + 3280) != 6 )
    {
      if ( *a6 == (_BYTE)v11 )
      {
        UsbhSshEnableDisable((__int64)a1, 5, v10, v11);
        v23 = 0LL;
      }
      else
      {
        UsbhSshEnableDisable((__int64)a1, 4, v10, v11);
        LOBYTE(v23) = 1;
      }
      UsbhSetHubSelectiveSuspend((__int64)a1, v23, v21, v22);
      goto LABEL_12;
    }
LABEL_20:
    v15 = -1073741808;
    return WmiCompleteRequest(a1, a2, v15, 0, 0);
  }
  if ( v14 == 1 )
  {
    if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) == 3 )
    {
      Log((__int64)a1, v13, 2003659059, (__int64)a6, a5);
      if ( !a5 )
      {
LABEL_7:
        v15 = -1073741789;
        return WmiCompleteRequest(a1, a2, v15, 0, 0);
      }
      if ( *v18 )
        *(_DWORD *)(v19 + 2560) |= 0x1000000u;
      else
        *(_DWORD *)(v19 + 2560) &= ~0x1000000u;
      Data = *v18 != 0;
      v20 = (PDEVICE_OBJECT *)FdoExt((__int64)a1, v16, v17, (__int64)v18);
      UsbhSetPdoRegistryParameter(v20[149], L"WakeSystemOnConnect", 4u, &Data, 4u);
LABEL_12:
      v15 = 0;
      return WmiCompleteRequest(a1, a2, v15, 0, 0);
    }
    goto LABEL_20;
  }
  v15 = -1073741163;
  return WmiCompleteRequest(a1, a2, v15, 0, 0);
}
