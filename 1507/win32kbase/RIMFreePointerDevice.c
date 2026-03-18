/*
 * XREFs of RIMFreePointerDevice @ 0x1C0078334
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0073F6C (RIMCreatePointerDeviceInfo.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C00782B4 (RIMReleasePointerDeviceInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C00C4E54 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     IsFreePointerDeviceCalDataSupported_0 @ 0x1C0002DD0 (IsFreePointerDeviceCalDataSupported_0.c)
 *     FreePointerDeviceCalData_0 @ 0x1C0002DD8 (FreePointerDeviceCalData_0.c)
 *     IsFreePointerDeviceCalibrationInfoSupported_0 @ 0x1C0002DE0 (IsFreePointerDeviceCalibrationInfoSupported_0.c)
 *     FreePointerDeviceCalibrationInfo_0 @ 0x1C0002DE8 (FreePointerDeviceCalibrationInfo_0.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     RIMRemoveFromActiveDevices @ 0x1C0078524 (RIMRemoveFromActiveDevices.c)
 *     RIMResetPointerDeviceFrameContactIdMgr @ 0x1C0081498 (RIMResetPointerDeviceFrameContactIdMgr.c)
 */

__int64 __fastcall RIMFreePointerDevice(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // edx
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  RIMRemoveFromActiveDevices(a1, a2, 1LL, &v14);
  v4 = *(_QWORD **)(a1 + 520);
  while ( v4 != (_QWORD *)(a1 + 520) )
  {
    v5 = v4 - 188;
    v4 = (_QWORD *)*v4;
    if ( v5 == (_QWORD *)a2 )
    {
      v6 = v5 + 188;
      v7 = v5[188];
      v8 = (_QWORD *)v5[189];
      if ( *(_QWORD **)(v7 + 8) != v6 || (_QWORD *)*v8 != v6 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      break;
    }
  }
  if ( *(_QWORD *)(a2 + 312) )
  {
    Win32FreePool();
    *(_QWORD *)(a2 + 312) = 0LL;
  }
  if ( *(_QWORD *)(a2 + 1520) )
  {
    Win32FreePool();
    *(_QWORD *)(a2 + 1520) = 0LL;
  }
  if ( *(_QWORD *)(a2 + 304) )
  {
    if ( (int)IsFreePointerDeviceCalDataSupported_0() >= 0 )
      FreePointerDeviceCalData_0();
    if ( (int)IsFreePointerDeviceCalibrationInfoSupported_0() >= 0 )
      FreePointerDeviceCalibrationInfo_0();
    *(_QWORD *)(a2 + 304) = 0LL;
  }
  if ( *(_QWORD *)(a2 + 680) )
  {
    Win32FreePool();
    *(_QWORD *)(a2 + 680) = 0LL;
  }
  v9 = *(_QWORD *)(a2 + 696);
  if ( v9 )
  {
    if ( *(_QWORD *)(v9 + 24) )
    {
      Win32FreePool();
      *(_QWORD *)(*(_QWORD *)(a2 + 696) + 24LL) = 0LL;
    }
    v10 = *(_QWORD *)(*(_QWORD *)(a2 + 696) + 32LL);
    if ( v10 )
    {
      Win32FreePool();
      *(_QWORD *)(*(_QWORD *)(a2 + 696) + 32LL) = 0LL;
    }
    v11 = *(_QWORD *)(a2 + 696);
    if ( *(_QWORD *)(v11 + 48) )
    {
      RIMResetPointerDeviceFrameContactIdMgr(v10, a2);
      Win32FreePool();
      *(_QWORD *)(v11 + 48) = 0LL;
    }
    Win32FreePool();
    *(_QWORD *)(a2 + 696) = 0LL;
  }
  if ( *(_QWORD *)(a2 + 280) )
  {
    Win32FreePool();
    *(_QWORD *)(a2 + 280) = 0LL;
  }
  v12 = *(_DWORD *)(a2 + 236);
  if ( __CFSHR__(v12, 4) )
    goto LABEL_41;
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 7) > 1 )
  {
    if ( !__CFSHR__(*(_DWORD *)(a2 + 236), 4) )
      goto LABEL_28;
LABEL_41:
    if ( (v12 & 0x2000) != 0 )
      goto LABEL_28;
  }
  if ( *(_QWORD *)(a2 + 264) )
  {
    Win32FreePool();
    *(_QWORD *)(a2 + 264) = 0LL;
  }
LABEL_28:
  if ( *(_QWORD *)(a2 + 1400) )
  {
    Win32FreePool();
    *(_QWORD *)(a2 + 1400) = 0LL;
  }
  if ( (*(_DWORD *)(a2 + 236) & 0x400) != 0 )
    *(_DWORD *)(a1 + 668) -= *(_DWORD *)(a2 + 704);
  return Win32FreePool();
}
