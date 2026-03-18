/*
 * XREFs of Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C0047000
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0004300 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     Controller_UpdateIdleTimeout @ 0x1C004F268 (Controller_UpdateIdleTimeout.c)
 */

__int64 __fastcall Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 300) <= 2u && !*(_DWORD *)(a1 + 344) && *(_DWORD *)(a1 + 384) != 5000 )
  {
    Controller_UpdateIdleTimeout(a1, 5000LL);
    v3 = 5000;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1 + 64),
             2u,
             3u,
             0x1Bu,
             (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
             v3);
  }
  return result;
}
