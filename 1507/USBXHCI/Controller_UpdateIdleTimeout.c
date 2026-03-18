/*
 * XREFs of Controller_UpdateIdleTimeout @ 0x1C004F268
 * Callers:
 *     Controller_IdleTimeoutUpdateWorker @ 0x1C0015050 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C0047000 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C00474D0 (Controller_ConfigureS0IdleSettings.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 */

__int64 __fastcall Controller_UpdateIdleTimeout(__int64 *a1, int a2)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 result; // rax
  int v7; // [rsp+28h] [rbp-40h]
  int v8; // [rsp+28h] [rbp-40h]
  _DWORD v9[10]; // [rsp+30h] [rbp-38h] BYREF

  memset(v9, 0, 0x24uLL);
  v4 = *a1;
  v9[0] = 36;
  v9[5] = 2;
  v9[6] = 2;
  v9[8] = 2;
  v9[1] = 2;
  v9[2] = 5;
  v9[4] = 2;
  v9[3] = a2;
  v9[7] = 2;
  v5 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _DWORD *))(WdfFunctions_01015 + 368))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         v4,
         v9);
  if ( v5 >= 0 )
  {
    *((_DWORD *)a1 + 96) = a2;
    v8 = a2;
    return WPP_RECORDER_SF_d(a1[8], 4u, 3u, 0x1Eu, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, v8);
  }
  else
  {
    v7 = v5;
    result = WPP_RECORDER_SF_d(a1[8], 4u, 3u, 0x1Du, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, v7);
    *((_DWORD *)a1 + 86) = 2;
  }
  return result;
}
