/*
 * XREFs of DwmAsyncNotifyRotationModeChange @ 0x1C025F7A4
 * Callers:
 *     ?xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@H@Z @ 0x1C01D092C (-xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@H@Z.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall DwmAsyncNotifyRotationModeChange(PVOID Object, int a2)
{
  unsigned int v4; // edi
  _DWORD v6[14]; // [rsp+20h] [rbp-38h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    memset((char *)v6 + 2, 0, 0x2EuLL);
    v6[0] = 3145736;
    LOWORD(v6[1]) = 0x8000;
    v6[10] = 1073741879;
    v6[11] = a2;
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
