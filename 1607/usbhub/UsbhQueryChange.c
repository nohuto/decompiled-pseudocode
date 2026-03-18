/*
 * XREFs of UsbhQueryChange @ 0x1C0024D40
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C0013B50 (UsbhHubProcessIsr.c)
 * Callees:
 *     UsbhQueryPortState @ 0x1C00150B0 (UsbhQueryPortState.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhQueryChange(__int64 a1, unsigned __int16 a2, _WORD *a3, int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r13
  int v17; // r14d
  __int16 v18; // bx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // [rsp+48h] [rbp-40h]
  int v27; // [rsp+A0h] [rbp+18h] BYREF
  int v28; // [rsp+A8h] [rbp+20h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      19,
      (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids,
      a2);
  v27 = 0;
  Log(a1, 8, 1735410772, a2, 0LL);
  if ( a2 )
  {
    v11 = FdoExt(a1, v8, v9, v10);
    if ( a2 > *((unsigned __int8 *)FdoExt(a1, v12, v13, v14) + 2938) )
    {
      v16 = 0LL;
    }
    else
    {
      v15 = *((_QWORD *)v11 + 382);
      if ( v15 )
      {
        v16 = v15 + 2928LL * (a2 - 1);
        Log(a1, 8, 1735410750, a2, v16);
      }
      else
      {
        v16 = 0LL;
      }
    }
  }
  else
  {
    v16 = 0LL;
  }
  *a3 = 0;
  v17 = UsbhQueryPortState(a1, a2, (__int64)&v28, &v27);
  if ( v17 >= 0 )
  {
    v18 = 1;
    if ( (v28 & 0x10000) == 0 )
    {
      while ( 1 )
      {
        v18 *= 2;
        if ( (v18 & 0xFFE0) != 0 )
          break;
        if ( ((unsigned __int16)v18 & HIWORD(v28)) != 0 )
          goto LABEL_11;
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          20,
          (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids);
      Log(a1, 4, 1666076515, 0LL, 0LL);
      if ( (FdoExt(a1, v23, v24, v25)[640] & 1) == 0 || (++*(_DWORD *)(v16 + 408), *(int *)(v16 + 408) >= 3) )
      {
        LOBYTE(v26) = 0;
        v27 = -1073704960;
        UsbhException(a1, a2, 10, (int)&v28, 4, v17, -1073704960, usbfile_bus_c, 1463, v26);
        v18 = 0;
        v17 = -1073741823;
      }
    }
LABEL_11:
    if ( (v18 & 0x1F) != 0 )
      *a3 |= v18;
  }
  if ( *a3 )
    *(_DWORD *)(v16 + 408) = 0;
  v19 = (unsigned __int16)*a3;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
        *(_DWORD *)v21 = 1734894416;
        *(_QWORD *)(v21 + 24) = v17;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 16) = v19;
      }
    }
  }
  if ( a4 )
    *a4 = v27;
  return (unsigned int)v17;
}
