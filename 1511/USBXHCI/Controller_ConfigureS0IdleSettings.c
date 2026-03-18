/*
 * XREFs of Controller_ConfigureS0IdleSettings @ 0x1C0049DBC
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C00487D0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_L @ 0x1C0005610 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     Controller_ExecuteDSM @ 0x1C004F2E0 (Controller_ExecuteDSM.c)
 *     Controller_UpdateIdleTimeout @ 0x1C00502B8 (Controller_UpdateIdleTimeout.c)
 */

__int64 __fastcall Controller_ConfigureS0IdleSettings(__int64 *a1)
{
  __int64 v2; // rax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int16 v9; // [rsp+28h] [rbp-79h]
  __int64 v10; // [rsp+30h] [rbp-71h]
  __int16 v11; // [rsp+30h] [rbp-71h]
  __int64 v12; // [rsp+30h] [rbp-71h]
  __int64 v13; // [rsp+38h] [rbp-69h]
  _QWORD v14[10]; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v15[10]; // [rsp+98h] [rbp-9h] BYREF
  int v16; // [rsp+108h] [rbp+67h] BYREF

  memset(v14, 0, 0x48uLL);
  v2 = a1[29];
  if ( (v2 & 0x100000) != 0 )
  {
    *((_DWORD *)a1 + 86) = 1;
    WPP_RECORDER_SF_(a1[8], 3u, 3u, 0x14u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids);
  }
  else
  {
    if ( (v2 & 0x400000000000000LL) != 0 )
      Controller_ExecuteDSM(a1, 3LL);
    v11 = 1;
    v9 = 72;
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, GUID *, _QWORD *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
           WdfDriverGlobals,
           *a1,
           &GUID_D3COLD_SUPPORT_INTERFACE,
           v14,
           v9,
           v11,
           0LL);
    if ( v3 < 0 )
    {
      LODWORD(v12) = v3;
      WPP_RECORDER_SF_d(a1[8], 4u, 3u, 0x15u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v12);
      *((_DWORD *)a1 + 86) = 2;
    }
    else
    {
      v16 = 0;
      if ( v14[5] )
      {
        v4 = ((__int64 (__fastcall *)(_QWORD, __int64, int *))v14[5])(v14[1], 1LL, &v16);
        if ( v4 < 0 )
        {
          LODWORD(v12) = v4;
          WPP_RECORDER_SF_d(a1[8], 3u, 3u, 0x16u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v12);
        }
      }
      ((void (__fastcall *)(_QWORD))v14[3])(v14[1]);
      v5 = v16;
      if ( v16 > 1 )
      {
        *((_DWORD *)a1 + 86) = 0;
        Controller_UpdateIdleTimeout(a1, 5000LL);
        LODWORD(v12) = 5000;
        WPP_RECORDER_SF_d(a1[8], 4u, 3u, 0x18u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v12);
        memset(v15, 0, 0x48uLL);
        v7 = *a1;
        v15[1] = Controller_EvtPostPoFxRegisterDevice;
        v15[2] = Controller_EvtPrePoFxUnregisterDevice;
        LODWORD(v15[0]) = 72;
        v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 3400))(
               WdfDriverGlobals,
               v7,
               v15);
        if ( v8 < 0 )
        {
          LODWORD(v10) = v8;
          WPP_RECORDER_SF_d(a1[8], 2u, 3u, 0x19u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v10);
        }
      }
      else
      {
        *((_DWORD *)a1 + 86) = 2;
        LODWORD(v13) = 1;
        LODWORD(v12) = v5;
        WPP_RECORDER_SF_dd(a1[8], 4u, 3u, 0x17u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v12, v13);
      }
    }
  }
  LODWORD(v10) = *((_DWORD *)a1 + 86);
  return WPP_RECORDER_SF_L(a1[8], 4u, 3u, 0x1Au, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v10);
}
