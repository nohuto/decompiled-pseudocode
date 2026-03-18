/*
 * XREFs of DrvLogDiagDisplayChange @ 0x1C005A240
 * Callers:
 *     NtUserChangeDisplaySettings @ 0x1C0059F90 (NtUserChangeDisplaySettings.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A4B70 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C00A53F4 (VideoPortCalloutThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall DrvLogDiagDisplayChange(__int64 a1, int a2)
{
  _QWORD v5[10]; // [rsp+20h] [rbp-60h] BYREF

  memset(v5, 0, 0x48uLL);
  v5[0] = 0x4800000003LL;
  memset(&v5[1], 0, 36);
  if ( a1 )
  {
    LODWORD(v5[7]) = *(_DWORD *)a1;
    v5[8] = *(_QWORD *)(a1 + 16);
    HIDWORD(v5[7]) = *(_DWORD *)(a1 + 24);
    BYTE4(v5[6]) = 0;
  }
  else
  {
    BYTE4(v5[6]) = 1;
  }
  LODWORD(v5[6]) = a2;
  return ((__int64 (__fastcall *)(_QWORD *))qword_1C0101398)(v5);
}
