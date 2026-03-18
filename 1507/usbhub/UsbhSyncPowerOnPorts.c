/*
 * XREFs of UsbhSyncPowerOnPorts @ 0x1C0017580
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0002F90 (UsbhFdoSetD0Cold.c)
 *     UsbhFinishStart @ 0x1C0021D90 (UsbhFinishStart.c)
 * Callees:
 *     UsbhRawWait @ 0x1C000A400 (UsbhRawWait.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0014BD0 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhSyncPowerOnPorts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int16 i; // di
  __int64 v9; // rdx
  __int16 v10; // cx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r10d
  int v19; // edx
  int v20; // [rsp+20h] [rbp-88h]
  int v21; // [rsp+48h] [rbp-60h]
  int v22; // [rsp+5Ch] [rbp-4Ch] BYREF
  int v23; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int16 v24; // [rsp+64h] [rbp-44h]
  __int16 v25; // [rsp+66h] [rbp-42h]
  int v26; // [rsp+68h] [rbp-40h] BYREF
  _WORD v27[2]; // [rsp+6Ch] [rbp-3Ch] BYREF
  char v28; // [rsp+70h] [rbp-38h]

  LODWORD(v5) = 0;
  FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      21,
      (__int64)&WPP_7089f250826f62cd62a41d7a765d92e3_Traceguids);
  for ( i = 1; ; ++i )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL, v6, v7);
    v9 = *(_QWORD *)(a1 + 64);
    if ( !v9 )
      UsbhTrapFatal_Dbg(a1, 0LL, v6, v7);
    if ( *(_DWORD *)v9 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v9, v6, v7);
    if ( i > *(unsigned __int8 *)(v9 + 2938) )
      break;
    v22 = 0;
    if ( *(_DWORD *)v9 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v9, v6, v7);
    v10 = 0;
    v27[0] = 0;
    v27[1] = i;
    v26 = 0;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v11 = *(_QWORD *)(v9 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
      *(_DWORD *)v11 = 812675184;
      *(_QWORD *)(v11 + 16) = i;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 24) = 0LL;
      v10 = v27[0];
    }
    v25 = v10;
    v23 = 525091;
    v28 = 3;
    v24 = i;
    v5 = (int)UsbhSyncSendCommand(a1, (__int64)&v23, 0LL, v27, v20, &v22);
    if ( (UsbhLogMask & 8) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        v14 = v22;
        *(_DWORD *)v13 = 829452400;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = v5;
        *(_QWORD *)(v13 + 24) = v14;
      }
    }
    if ( (unsigned int)v5 >> 30 == 3 && !(unsigned __int8)Usb_Disconnected((unsigned int)v5) )
    {
      LOBYTE(v21) = 0;
      UsbhException(a1, i, 12, (int)&v26, 10, v5, v19, usbfile_hub_c, 3524, v21);
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_DWORD *)v16 = 1349808752;
        *(_QWORD *)(v16 + 24) = i;
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_QWORD *)(v16 + 16) = v5;
      }
    }
    if ( (unsigned int)v5 >> 30 == 3 )
      break;
  }
  if ( (int)v5 >= 0 )
  {
    Log(a1, 8, 2002872692, HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next), 0LL);
    UsbhRawWait(v17);
  }
  Log(a1, 8, 1934643031, (int)v5, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      22,
      (__int64)&WPP_7089f250826f62cd62a41d7a765d92e3_Traceguids,
      v5);
  return (unsigned int)v5;
}
