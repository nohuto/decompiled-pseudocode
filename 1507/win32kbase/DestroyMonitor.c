/*
 * XREFs of DestroyMonitor @ 0x1C006D4B0
 * Callers:
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0058B10 (-UpdateUserScreen@@YAHH@Z.c)
 *     CleanupGDI @ 0x1C006D050 (CleanupGDI.c)
 * Callees:
 *     IsUpdateCursorSizesSupported_0 @ 0x1C0002278 (IsUpdateCursorSizesSupported_0.c)
 *     UpdateCursorSizes_0 @ 0x1C0002280 (UpdateCursorSizes_0.c)
 *     IsCheckPointerDeviceMonitorsSupported_0 @ 0x1C0002C48 (IsCheckPointerDeviceMonitorsSupported_0.c)
 *     CheckPointerDeviceMonitors_0 @ 0x1C0002C50 (CheckPointerDeviceMonitors_0.c)
 *     HMMarkObjectDestroy @ 0x1C000D470 (HMMarkObjectDestroy.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     GreDeleteObject @ 0x1C00446F0 (GreDeleteObject.c)
 *     HMFreeObject @ 0x1C004F9B0 (HMFreeObject.c)
 */

__int64 __fastcall DestroyMonitor(_QWORD *BaseAddress)
{
  __int64 v2; // rdx
  _QWORD *i; // rcx
  __int64 result; // rax
  struct HOBJ__ *v5; // rcx
  struct HOBJ__ *v6; // rcx
  struct HOBJ__ *v7; // rcx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (int)IsCheckPointerDeviceMonitorsSupported_0() >= 0 )
    CheckPointerDeviceMonitors_0();
  if ( BaseAddress == (_QWORD *)gpMonitorMouse )
    gpMonitorMouse = 0LL;
  v2 = gpDispInfo;
  for ( i = (_QWORD *)(gpDispInfo + 96); *i; i = (_QWORD *)(*i + 16LL) )
  {
    if ( (_QWORD *)*i == BaseAddress )
    {
      *i = BaseAddress[2];
      v2 = gpDispInfo;
      break;
    }
  }
  if ( BaseAddress == *(_QWORD **)(v2 + 88) )
    *(_QWORD *)(v2 + 88) = *(_QWORD *)(v2 + 96);
  BaseAddress[2] = 0LL;
  if ( BaseAddress[70] )
  {
    Win32FreePool();
    BaseAddress[70] = 0LL;
  }
  if ( BaseAddress[71] )
  {
    Win32FreePool();
    BaseAddress[71] = 0LL;
  }
  if ( (int)IsUpdateCursorSizesSupported_0() >= 0 )
    UpdateCursorSizes_0();
  _InterlockedOr(v8, 0);
  result = HMMarkObjectDestroy(BaseAddress);
  if ( (_DWORD)result )
  {
    v5 = (struct HOBJ__ *)BaseAddress[16];
    if ( v5 )
      GreDeleteObject(v5);
    v6 = (struct HOBJ__ *)BaseAddress[17];
    if ( v6 )
      GreDeleteObject(v6);
    v7 = (struct HOBJ__ *)BaseAddress[18];
    if ( v7 )
      GreDeleteObject(v7);
    return HMFreeObject(BaseAddress);
  }
  return result;
}
