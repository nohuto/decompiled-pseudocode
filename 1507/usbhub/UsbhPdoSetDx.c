/*
 * XREFs of UsbhPdoSetDx @ 0x1C002208C
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C001D9C0 (UsbhPdoDevicePowerState.c)
 * Callees:
 *     UsbhSyncSuspendPdoPort @ 0x1C000ABE8 (UsbhSyncSuspendPdoPort.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     GET_FDO_POWER_STATE @ 0x1C0015DA0 (GET_FDO_POWER_STATE.c)
 *     UsbhSetPdoIdleReady @ 0x1C001FA4C (UsbhSetPdoIdleReady.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C0020B20 (UsbhCompletePdoWakeIrp.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0021180 (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetPdoPowerState @ 0x1C0021280 (UsbhSetPdoPowerState.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x1C0022014 (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhCompletePdoIdleIrp @ 0x1C002220C (UsbhCompletePdoIdleIrp.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  bool v24; // di
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r9
  unsigned int v30; // r14d
  __int64 v31; // r9
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r9
  int v40; // [rsp+60h] [rbp+8h]

  v7 = PdoExt(a2, a2, a3, a4);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = v7;
  FdoExt(v8, v10, v11, v12);
  v13 = *(_QWORD *)(a3 + 184);
  v14 = *(_DWORD *)(v13 + 24);
  v40 = (unsigned __int8)HIBYTE(*(_WORD *)(v13 + 8)) >> 4;
  FdoExt(*(_QWORD *)(a1 + 8), v15, v16, v13);
  Log(v8, 16, 1346651256, a3, a2);
  v9[353] &= ~0x2000000u;
  v20 = GET_FDO_POWER_STATE(a1, v17, v18, v19);
  if ( v20 == 201 )
  {
    v24 = 1;
    v26 = (unsigned int)PdoExt(a2, v21, v22, v23)[282];
    if ( (_DWORD)v26 == 1 )
    {
      UsbhSetPdoPowerState(a1, a2, v25, 4LL, 4);
      v24 = v14 == 4;
      UsbhReleaseFdoPwrLock(v8, a1, v27, v28);
      UsbhPdoAbortAllDevicePipes(v8, a2);
      if ( !v9[692] || v40 != 5 )
        UsbhSyncSuspendPdoPort(a1, a2, v14 == 4);
      v9[594] = v14 != 4;
      v30 = 0;
      UsbhSetPdoIdleReady(v8, a2, a3, v29);
LABEL_6:
      if ( !v24 )
        return v30;
      goto LABEL_7;
    }
    if ( (int)v26 > 1 )
    {
      if ( (int)v26 <= 3 )
        goto LABEL_26;
      if ( (int)v26 <= 5 )
      {
        if ( v14 == 4 )
        {
          v9[594] = 0;
        }
        else
        {
          v9[594] = 1;
          v24 = 0;
        }
        UsbhSetPdoPowerState(a1, a2, v25, v26, 4);
        UsbhReleaseFdoPwrLock(v8, a1, v37, v38);
        UsbhSetPdoIdleReady(v8, a2, a3, v39);
        v30 = 0;
        goto LABEL_6;
      }
      if ( (_DWORD)v26 == 6 )
LABEL_26:
        UsbhSetPdoPowerState(a1, a2, v25, v26, 5);
    }
    UsbhReleaseFdoPwrLock(v8, a1, v25, v26);
    v30 = -1073741101;
LABEL_7:
    UsbhCompletePdoWakeIrp(v8, *((_QWORD *)v9 + 105), 3221226195LL, v31);
    if ( (v9[353] & 0x100000) == 0 )
      UsbhCompletePdoIdleIrp(v8, *((_QWORD *)v9 + 105), 3221226195LL);
    return v30;
  }
  if ( v20 <= 201 )
    goto LABEL_21;
  if ( v20 <= 206 )
  {
LABEL_15:
    v30 = -1073741101;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        19,
        (__int64)&WPP_37c6835c01158ea489aacca15d43b0a5_Traceguids,
        *((_WORD *)v9 + 710));
    UsbhSetPdoPowerState(a1, a2, v22, 4LL, 5);
    UsbhReleaseFdoPwrLock(v8, a1, v33, v34);
    return v30;
  }
  if ( v20 <= 208 )
  {
LABEL_21:
    UsbhReleaseFdoPwrLock(v8, a1, v22, v23);
    return (unsigned int)-1073741823;
  }
  if ( v20 > 211 )
  {
    if ( v20 == 212 )
      goto LABEL_15;
    goto LABEL_21;
  }
  UsbhSetPdoPowerState(a1, a2, v22, 5LL, 4);
  Log(v8, 16, 1349862520, a3, a2);
  UsbhReleaseFdoPwrLock(v8, a1, v35, v36);
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
