/*
 * XREFs of RIMFreePointerDevice @ 0x1C000AC5C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0007C58 (RIMCreatePointerDeviceInfo.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C000ABDC (RIMReleasePointerDeviceInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C00C5D50 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     IsFreePointerDeviceCalDataSupported_0 @ 0x1C0002E00 (IsFreePointerDeviceCalDataSupported_0.c)
 *     FreePointerDeviceCalData_0 @ 0x1C0002E08 (FreePointerDeviceCalData_0.c)
 *     IsFreePointerDeviceCalibrationInfoSupported_0 @ 0x1C0002E10 (IsFreePointerDeviceCalibrationInfoSupported_0.c)
 *     FreePointerDeviceCalibrationInfo_0 @ 0x1C0002E18 (FreePointerDeviceCalibrationInfo_0.c)
 *     RIMResetPointerDeviceFrameContactIdMgr @ 0x1C000A808 (RIMResetPointerDeviceFrameContactIdMgr.c)
 *     RIMRemoveFromActiveDevices @ 0x1C000AE4C (RIMRemoveFromActiveDevices.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

__int64 __fastcall RIMFreePointerDevice(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rcx
  __int64 v20; // rcx
  __int64 v21; // [rsp+30h] [rbp+8h] BYREF

  RIMRemoveFromActiveDevices(a1, a2, 1LL, &v21);
  v4 = *(_QWORD **)(a1 + 552);
  while ( v4 != (_QWORD *)(a1 + 552) )
  {
    v5 = v4 - 190;
    v4 = (_QWORD *)*v4;
    if ( v5 == (_QWORD *)a2 )
    {
      v6 = v5 + 190;
      v7 = v5[190];
      v8 = (_QWORD *)v5[191];
      if ( *(_QWORD **)(v7 + 8) != v6 || (_QWORD *)*v8 != v6 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      break;
    }
  }
  v9 = *(_QWORD *)(a2 + 328);
  if ( v9 )
  {
    Win32FreePool(v9);
    *(_QWORD *)(a2 + 328) = 0LL;
  }
  v10 = *(_QWORD *)(a2 + 1536);
  if ( v10 )
  {
    Win32FreePool(v10);
    *(_QWORD *)(a2 + 1536) = 0LL;
  }
  if ( *(_QWORD *)(a2 + 320) )
  {
    if ( (int)IsFreePointerDeviceCalDataSupported_0() >= 0 )
      FreePointerDeviceCalData_0();
    if ( (int)IsFreePointerDeviceCalibrationInfoSupported_0() >= 0 )
      FreePointerDeviceCalibrationInfo_0();
    *(_QWORD *)(a2 + 320) = 0LL;
  }
  v11 = *(_QWORD *)(a2 + 696);
  if ( v11 )
  {
    Win32FreePool(v11);
    *(_QWORD *)(a2 + 696) = 0LL;
  }
  v12 = *(_QWORD *)(a2 + 712);
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 24);
    if ( v13 )
    {
      Win32FreePool(v13);
      *(_QWORD *)(*(_QWORD *)(a2 + 712) + 24LL) = 0LL;
    }
    v14 = *(_QWORD *)(*(_QWORD *)(a2 + 712) + 32LL);
    if ( v14 )
    {
      Win32FreePool(v14);
      *(_QWORD *)(*(_QWORD *)(a2 + 712) + 32LL) = 0LL;
    }
    v15 = *(_QWORD *)(a2 + 712);
    if ( *(_QWORD *)(v15 + 48) )
    {
      RIMResetPointerDeviceFrameContactIdMgr(v14, a2);
      Win32FreePool(*(_QWORD *)(v15 + 48));
      *(_QWORD *)(v15 + 48) = 0LL;
    }
    Win32FreePool(*(_QWORD *)(a2 + 712));
    *(_QWORD *)(a2 + 712) = 0LL;
  }
  v16 = *(_QWORD *)(a2 + 296);
  if ( v16 )
  {
    Win32FreePool(v16);
    *(_QWORD *)(a2 + 296) = 0LL;
  }
  v17 = *(_DWORD *)(a2 + 252);
  if ( __CFSHR__(v17, 6) )
    goto LABEL_41;
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 7) > 1 )
  {
    if ( !__CFSHR__(*(_DWORD *)(a2 + 252), 6) )
      goto LABEL_28;
LABEL_41:
    if ( (v17 & 0x8000) != 0 )
      goto LABEL_28;
  }
  v20 = *(_QWORD *)(a2 + 280);
  if ( v20 )
  {
    Win32FreePool(v20);
    *(_QWORD *)(a2 + 280) = 0LL;
  }
LABEL_28:
  v18 = *(_QWORD *)(a2 + 1416);
  if ( v18 )
  {
    Win32FreePool(v18);
    *(_QWORD *)(a2 + 1416) = 0LL;
  }
  if ( (*(_DWORD *)(a2 + 252) & 0x1000) != 0 )
    *(_DWORD *)(a1 + 700) -= *(_DWORD *)(a2 + 720);
  return Win32FreePool(a2);
}
