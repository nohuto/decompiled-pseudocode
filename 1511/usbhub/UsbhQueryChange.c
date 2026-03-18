/*
 * XREFs of UsbhQueryChange @ 0x1C000FA00
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C0012AD0 (UsbhHubProcessIsr.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1C0019A40 (UsbhQueryPortState.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhQueryChange(__int64 a1, unsigned __int16 a2, _WORD *a3, int *a4)
{
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r13
  int PortState; // r14d
  __int16 v12; // bx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v17; // [rsp+48h] [rbp-40h]
  int v18; // [rsp+A0h] [rbp+18h]
  int v19; // [rsp+A8h] [rbp+20h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      19,
      (__int64)&WPP_023598a80677ca4034006684006c4b8e_Traceguids,
      a2);
  v18 = 0;
  Log(a1, 8, 1735410772, a2, 0LL);
  if ( a2 )
  {
    v8 = FdoExt(a1);
    if ( a2 > *(unsigned __int8 *)(FdoExt(a1) + 2938) )
    {
      v10 = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(v8 + 3056);
      if ( v9 )
      {
        v10 = v9 + 2928LL * (a2 - 1);
        Log(a1, 8, 1735410750, a2, v10);
      }
      else
      {
        v10 = 0LL;
      }
    }
  }
  else
  {
    v10 = 0LL;
  }
  *a3 = 0;
  PortState = UsbhQueryPortState(a1);
  if ( PortState >= 0 )
  {
    v12 = 1;
    if ( (v19 & 0x10000) == 0 )
    {
      while ( 1 )
      {
        v12 *= 2;
        if ( (v12 & 0xFFE0) != 0 )
          break;
        if ( ((unsigned __int16)v12 & HIWORD(v19)) != 0 )
          goto LABEL_11;
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          20,
          (__int64)&WPP_023598a80677ca4034006684006c4b8e_Traceguids);
      Log(a1, 4, 1666076515, 0, 0LL);
      if ( (*(_DWORD *)(FdoExt(a1) + 2560) & 1) == 0 || (++*(_DWORD *)(v10 + 408), *(int *)(v10 + 408) >= 3) )
      {
        LOBYTE(v17) = 0;
        v18 = -1073704960;
        UsbhException(a1, a2, 10, (int)&v19, 4, PortState, -1073704960, usbfile_bus_c, 1463, v17);
        v12 = 0;
        PortState = -1073741823;
      }
    }
LABEL_11:
    if ( (v12 & 0x1F) != 0 )
      *a3 |= v12;
  }
  if ( *a3 )
    *(_DWORD *)(v10 + 408) = 0;
  v13 = (unsigned __int16)*a3;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = 1734894416;
        *(_QWORD *)(v15 + 24) = PortState;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = v13;
      }
    }
  }
  if ( a4 )
    *a4 = v18;
  return (unsigned int)PortState;
}
