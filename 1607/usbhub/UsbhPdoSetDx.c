/*
 * XREFs of UsbhPdoSetDx @ 0x1C0022EC0
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C001ACE0 (UsbhPdoDevicePowerState.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     GET_FDO_POWER_STATE @ 0x1C001783C (GET_FDO_POWER_STATE.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhSetPdoPowerState @ 0x1C001A240 (UsbhSetPdoPowerState.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C001A924 (UsbhSyncSuspendPdoPort.c)
 *     UsbhSetPdoIdleReady @ 0x1C00201FC (UsbhSetPdoIdleReady.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C0021680 (UsbhCompletePdoWakeIrp.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0021CE0 (UsbhReleaseFdoPwrLock.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x1C0022E48 (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhCompletePdoIdleIrp @ 0x1C0023040 (UsbhCompletePdoIdleIrp.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
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
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // r14d
  __int64 v32; // r9
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r9
  int v41; // [rsp+60h] [rbp+8h]

  v7 = PdoExt(a2, a2, a3, a4);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = v7;
  FdoExt(v8, v10, v11, v12);
  v13 = *(_QWORD *)(a3 + 184);
  v14 = *(_DWORD *)(v13 + 24);
  v41 = (unsigned __int8)HIBYTE(*(_WORD *)(v13 + 8)) >> 4;
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
      if ( !v9[694] || v41 != 5 )
      {
        LOBYTE(v29) = v14 == 4;
        UsbhSyncSuspendPdoPort(a1, a2, v29, v30);
      }
      v9[594] = v14 != 4;
      v31 = 0;
      UsbhSetPdoIdleReady(v8, a2, a3, v30);
LABEL_6:
      if ( !v24 )
        return v31;
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
        UsbhReleaseFdoPwrLock(v8, a1, v38, v39);
        UsbhSetPdoIdleReady(v8, a2, a3, v40);
        v31 = 0;
        goto LABEL_6;
      }
      if ( (_DWORD)v26 == 6 )
LABEL_26:
        UsbhSetPdoPowerState(a1, a2, v25, v26, 5);
    }
    UsbhReleaseFdoPwrLock(v8, a1, v25, v26);
    v31 = -1073741101;
LABEL_7:
    UsbhCompletePdoWakeIrp(v8, *((_QWORD *)v9 + 105), 3221226195LL, v32);
    if ( (v9[353] & 0x100000) == 0 )
      UsbhCompletePdoIdleIrp(v8, *((_QWORD *)v9 + 105), 3221226195LL);
    return v31;
  }
  if ( v20 <= 201 )
    goto LABEL_21;
  if ( v20 <= 206 )
  {
LABEL_15:
    v31 = -1073741101;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        19,
        (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
        *((_WORD *)v9 + 710));
    UsbhSetPdoPowerState(a1, a2, v22, 4LL, 5);
    UsbhReleaseFdoPwrLock(v8, a1, v34, v35);
    return v31;
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
  UsbhReleaseFdoPwrLock(v8, a1, v36, v37);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
      *((_WORD *)v9 + 710));
  return 0;
}
