/*
 * XREFs of Controller_RetrievePciData @ 0x1C0048CDC
 * Callers:
 *     Controller_Create @ 0x1C004A8A0 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     Controller_PopulatePciDeviceInformation @ 0x1C004A1F0 (Controller_PopulatePciDeviceInformation.c)
 */

__int64 __fastcall Controller_RetrievePciData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  unsigned __int16 v11; // r14
  unsigned int v12; // esi
  int v13; // eax
  unsigned __int16 v15; // r9
  int v16; // [rsp+20h] [rbp-E0h]
  __int64 v17; // [rsp+28h] [rbp-D8h]
  __int64 v18; // [rsp+28h] [rbp-D8h]
  __int64 v19; // [rsp+28h] [rbp-D8h]
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v21[4]; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v22; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v23[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall *v25)(__int64, _QWORD, _BYTE *, _QWORD, int); // [rsp+88h] [rbp-78h]
  _BYTE v26[256]; // [rsp+90h] [rbp-70h] BYREF

  v8 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, __int64, __int64, int *, _BYTE *))(WdfFunctions_01015 + 648))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1,
         14LL,
         4LL,
         &v20,
         v21);
  if ( v8 < 0 )
  {
    LODWORD(v17) = v8;
    WPP_RECORDER_SF_d(a2, 2u, 3u, 0x82u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, v17);
  }
  v9 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, __int64, __int64, unsigned int *, _BYTE *))(WdfFunctions_01015 + 648))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1,
         16LL,
         4LL,
         &v22,
         v21);
  v10 = v9;
  if ( v9 < 0 )
  {
    LODWORD(v18) = v9;
    WPP_RECORDER_SF_d(a2, 2u, 3u, 0x83u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, v18);
    return v10;
  }
  v11 = v22;
  LOWORD(v18) = 1;
  v12 = HIWORD(v22);
  LOWORD(v16) = 64;
  v13 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, GUID *, _BYTE *, int, _DWORD, _QWORD))(WdfFunctions_01015
                                                                                                + 1048))(
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
          a1,
          &GUID_BUS_INTERFACE_STANDARD,
          v23,
          v16,
          v18,
          0LL);
  v10 = v13;
  if ( v13 < 0 )
  {
    v15 = 132;
LABEL_10:
    LODWORD(v19) = v13;
    WPP_RECORDER_SF_d(a2, 2u, 3u, v15, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, v19);
    return v10;
  }
  memset(v26, 0, sizeof(v26));
  v13 = v25(v24, 0LL, v26, 0LL, 256);
  if ( v13 != 256 )
  {
    v10 = -1073741823;
    v15 = 133;
    goto LABEL_10;
  }
  Controller_PopulatePciDeviceInformation(a2, v20, (unsigned __int16)v12, v11, (__int64)v23, (__int64)v26, a3, a4);
  return v10;
}
