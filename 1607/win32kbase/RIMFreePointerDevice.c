/*
 * XREFs of RIMFreePointerDevice @ 0x1C0006844
 * Callers:
 *     RIMReleasePointerDeviceInfo @ 0x1C00067A0 (RIMReleasePointerDeviceInfo.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C00D53A8 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     IsFreePointerDeviceCalDataSupported_0 @ 0x1C0002DE0 (IsFreePointerDeviceCalDataSupported_0.c)
 *     FreePointerDeviceCalData_0 @ 0x1C0002DE8 (FreePointerDeviceCalData_0.c)
 *     IsFreePointerDeviceCalibrationInfoSupported_0 @ 0x1C0002DF0 (IsFreePointerDeviceCalibrationInfoSupported_0.c)
 *     FreePointerDeviceCalibrationInfo_0 @ 0x1C0002DF8 (FreePointerDeviceCalibrationInfo_0.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C0006A40 (RIMCmFreePointerDeviceContacts.c)
 *     RIMRemoveFromActiveDevices @ 0x1C0006A98 (RIMRemoveFromActiveDevices.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall RIMFreePointerDevice(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  char v19; // [rsp+30h] [rbp+8h] BYREF

  RIMRemoveFromActiveDevices(a1, a2, 1LL, &v19);
  v4 = *(_QWORD **)(a1 + 560);
  while ( v4 != (_QWORD *)(a1 + 560) )
  {
    v5 = v4 - 185;
    v4 = (_QWORD *)*v4;
    if ( v5 == (_QWORD *)a2 )
    {
      v16 = v5 + 185;
      v17 = v5[185];
      v18 = (_QWORD *)v5[186];
      if ( *(_QWORD **)(v17 + 8) != v16 || (_QWORD *)*v18 != v16 )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      v16[1] = v16;
      *v16 = v16;
      break;
    }
  }
  v6 = *(_QWORD *)(a2 + 1584);
  if ( v6 )
  {
    Win32FreePool(v6);
    *(_QWORD *)(a2 + 1584) = 0LL;
  }
  v7 = *(_QWORD *)(a2 + 1496);
  if ( v7 )
  {
    Win32FreePool(v7);
    *(_QWORD *)(a2 + 1496) = 0LL;
  }
  if ( *(_QWORD *)(a2 + 312) )
  {
    if ( (int)IsFreePointerDeviceCalDataSupported_0() >= 0 )
      FreePointerDeviceCalData_0();
    if ( (int)IsFreePointerDeviceCalibrationInfoSupported_0() >= 0 )
      FreePointerDeviceCalibrationInfo_0();
    *(_QWORD *)(a2 + 312) = 0LL;
  }
  RIMCmFreePointerDeviceContacts(a2);
  v8 = *(_QWORD *)(a2 + 680);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 24);
    if ( v9 )
    {
      Win32FreePool(v9);
      *(_QWORD *)(*(_QWORD *)(a2 + 680) + 24LL) = 0LL;
    }
    v10 = *(_QWORD *)(*(_QWORD *)(a2 + 680) + 16LL);
    if ( v10 )
    {
      Win32FreePool(v10);
      *(_QWORD *)(*(_QWORD *)(a2 + 680) + 16LL) = 0LL;
    }
    Win32FreePool(*(_QWORD *)(a2 + 680));
    *(_QWORD *)(a2 + 680) = 0LL;
  }
  v11 = *(_QWORD *)(a2 + 296);
  if ( v11 )
  {
    Win32FreePool(v11);
    *(_QWORD *)(a2 + 296) = 0LL;
  }
  v12 = *(_DWORD *)(a2 + 252);
  if ( __CFSHR__(v12, 6) )
    goto LABEL_25;
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 6) > 1 )
  {
    if ( !__CFSHR__(*(_DWORD *)(a2 + 252), 6) )
      goto LABEL_28;
LABEL_25:
    if ( (v12 & 0x8000) != 0 )
      goto LABEL_28;
  }
  v13 = *(_QWORD *)(a2 + 280);
  if ( v13 )
  {
    Win32FreePool(v13);
    *(_QWORD *)(a2 + 280) = 0LL;
  }
LABEL_28:
  v14 = *(_QWORD *)(a2 + 1384);
  if ( v14 )
  {
    Win32FreePool(v14);
    *(_QWORD *)(a2 + 1384) = 0LL;
  }
  if ( (*(_DWORD *)(a2 + 252) & 0x1000) != 0 )
    *(_DWORD *)(a1 + 660) -= *(_DWORD *)(a2 + 688);
  if ( *(_QWORD *)(a2 + 1480) != a2 + 1480 )
    __int2c();
  return Win32FreePool(a2);
}
