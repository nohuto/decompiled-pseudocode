/*
 * XREFs of RIMInitializeDeadzone @ 0x1C0005588
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00D5734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     rimDestroyDeadzone @ 0x1C0005280 (rimDestroyDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C0005348 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C000539C (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 RIMInitializeDeadzone()
{
  int v0; // edi
  RIMDeadzone *v1; // rax
  int v2; // edx
  RIMDeadzone *v3; // rbx
  int v4; // edx

  v0 = 0;
  RIMLockExclusive(&gDeadzoneLock);
  if ( RIMDeadzone::s_pRimDeadzoneInstance )
  {
    ++*((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 1);
  }
  else
  {
    v1 = (RIMDeadzone *)Win32AllocPoolZInit(0x40uLL);
    v3 = v1;
    if ( v1 )
    {
      memset(v1, 0, 0x40uLL);
      v0 = RIMDeadzone::Initialize(v3);
      if ( v0 < 0 )
      {
        LOBYTE(v4) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v4,
          3,
          13,
          (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids);
        RIMDeadzone::Release((DeadzonePalmTelemetry **)v3);
        rimDestroyDeadzone();
        Win32FreePool(v3);
        v3 = 0LL;
      }
    }
    else
    {
      LOBYTE(v2) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        3,
        12,
        (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids);
      v0 = -1073741801;
    }
    RIMDeadzone::s_pRimDeadzoneInstance = v3;
  }
  RIMUnlockExclusive(&gDeadzoneLock);
  return (unsigned int)v0;
}
