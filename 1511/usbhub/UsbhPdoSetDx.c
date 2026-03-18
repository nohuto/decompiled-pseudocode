/*
 * XREFs of UsbhPdoSetDx @ 0x1C001FC88
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C000C4B4 (UsbhPdoDevicePowerState.c)
 * Callees:
 *     UsbhCompletePdoWakeIrp @ 0x1C000A9A0 (UsbhCompletePdoWakeIrp.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C000CAA4 (UsbhSyncSuspendPdoPort.c)
 *     UsbhSetPdoPowerState @ 0x1C000D064 (UsbhSetPdoPowerState.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     GET_FDO_POWER_STATE @ 0x1C00111D8 (GET_FDO_POWER_STATE.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSetPdoIdleReady @ 0x1C001C3B0 (UsbhSetPdoIdleReady.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x1C001FBE8 (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhCompletePdoIdleIrp @ 0x1C001FE08 (UsbhCompletePdoIdleIrp.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0020500 (UsbhReleaseFdoPwrLock.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPdoSetDx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v7; // rax
  __int64 v8; // rsi
  _DWORD *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  bool v21; // di
  __int64 v22; // r8
  int v23; // r9d
  __int64 v24; // r9
  unsigned int v25; // r14d
  __int64 v27; // r9
  int v28; // [rsp+60h] [rbp+8h]

  v7 = PdoExt(a2, a2, a3, a4);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = v7;
  FdoExt(v8, v10, v11, v12);
  v13 = *(_QWORD *)(a3 + 184);
  v14 = *(_DWORD *)(v13 + 24);
  v28 = (unsigned __int8)HIBYTE(*(_WORD *)(v13 + 8)) >> 4;
  FdoExt(*(_QWORD *)(a1 + 8), v15, v16, v13);
  Log(v8, 16, 1346651256, a3, a2);
  v9[353] &= ~0x2000000u;
  v17 = GET_FDO_POWER_STATE(a1);
  if ( v17 == 201 )
  {
    v21 = 1;
    v23 = PdoExt(a2, v18, v19, v20)[282];
    if ( v23 == 1 )
    {
      UsbhSetPdoPowerState(a1, a2, v22, 4, 4);
      v21 = v14 == 4;
      UsbhReleaseFdoPwrLock(v8, a1);
      UsbhPdoAbortAllDevicePipes(v8, a2);
      if ( !v9[694] || v28 != 5 )
        UsbhSyncSuspendPdoPort(a1, a2, v14 == 4);
      v9[594] = v14 != 4;
      v25 = 0;
      UsbhSetPdoIdleReady(v8, a2, a3, v24);
LABEL_6:
      if ( !v21 )
        return v25;
      goto LABEL_7;
    }
    if ( v23 > 1 )
    {
      if ( v23 <= 3 )
        goto LABEL_26;
      if ( v23 <= 5 )
      {
        if ( v14 == 4 )
        {
          v9[594] = 0;
        }
        else
        {
          v9[594] = 1;
          v21 = 0;
        }
        UsbhSetPdoPowerState(a1, a2, v22, v23, 4);
        UsbhReleaseFdoPwrLock(v8, a1);
        UsbhSetPdoIdleReady(v8, a2, a3, v27);
        v25 = 0;
        goto LABEL_6;
      }
      if ( v23 == 6 )
LABEL_26:
        UsbhSetPdoPowerState(a1, a2, v22, v23, 5);
    }
    UsbhReleaseFdoPwrLock(v8, a1);
    v25 = -1073741101;
LABEL_7:
    UsbhCompletePdoWakeIrp(v8, *((_QWORD *)v9 + 105), -1073741101);
    if ( (v9[353] & 0x100000) == 0 )
      UsbhCompletePdoIdleIrp(v8, *((_QWORD *)v9 + 105), 3221226195LL);
    return v25;
  }
  if ( v17 <= 201 )
    goto LABEL_21;
  if ( v17 <= 206 )
  {
LABEL_15:
    v25 = -1073741101;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        19,
        (__int64)&WPP_37c6835c01158ea489aacca15d43b0a5_Traceguids,
        *((_WORD *)v9 + 710));
    UsbhSetPdoPowerState(a1, a2, v19, 4, 5);
    UsbhReleaseFdoPwrLock(v8, a1);
    return v25;
  }
  if ( v17 <= 208 )
  {
LABEL_21:
    UsbhReleaseFdoPwrLock(v8, a1);
    return (unsigned int)-1073741823;
  }
  if ( v17 > 211 )
  {
    if ( v17 == 212 )
      goto LABEL_15;
    goto LABEL_21;
  }
  UsbhSetPdoPowerState(a1, a2, v19, 5, 4);
  Log(v8, 16, 1349862520, a3, a2);
  UsbhReleaseFdoPwrLock(v8, a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_37c6835c01158ea489aacca15d43b0a5_Traceguids,
      *((_WORD *)v9 + 710));
  return 0;
}
