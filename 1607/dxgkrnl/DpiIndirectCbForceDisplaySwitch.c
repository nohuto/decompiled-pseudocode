/*
 * XREFs of DpiIndirectCbForceDisplaySwitch @ 0x1C019B130
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiGdiAsyncDisplaySwitchCallout @ 0x1C0192E0C (DpiGdiAsyncDisplaySwitchCallout.c)
 */

__int64 DpiIndirectCbForceDisplaySwitch()
{
  GUID v1[4]; // [rsp+20h] [rbp-58h] BYREF

  memset(v1, 0, sizeof(v1));
  EtwActivityIdControl(3u, (LPGUID)v1[0].Data4);
  *(_QWORD *)v1[3].Data4 = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)v1[1].Data4 = 56;
  return DpiGdiAsyncDisplaySwitchCallout(0LL, v1);
}
