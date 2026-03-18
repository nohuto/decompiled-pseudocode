/*
 * XREFs of ?IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z @ 0x1C01C98AC
 * Callers:
 *     NtUserSetActiveProcessForMonitor @ 0x1C0098A20 (NtUserSetActiveProcessForMonitor.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall IsMonitorConnectedToInternalPanel(struct tagMONITOR *a1)
{
  unsigned int v2; // ebx
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+34h] [rbp-CCh] BYREF
  int v6; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v7[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v8[128]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v9[20]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = 1;
  v4 = 2;
  v5 = 1;
  if ( (int)DrvQueryDisplayConfig(3221225474LL, &v5, v9, &v4, v8, 0LL) < 0
    || !(unsigned int)DrvGetWDDMAdapterInfo(*((_QWORD *)a1 + 20), v7, &v6) )
  {
    return 0LL;
  }
  if ( v7[0] != v9[0] || v7[1] != v9[1] || v6 != v9[2] )
    return 0;
  return v2;
}
