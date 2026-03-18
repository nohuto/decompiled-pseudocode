/*
 * XREFs of DestroyMonitor @ 0x1C0066A80
 * Callers:
 *     CleanupGDI @ 0x1C0069388 (CleanupGDI.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C006AC44 (-UpdateUserScreen@@YAHH@Z.c)
 * Callees:
 *     IsUpdateCursorSizesSupported_0 @ 0x1C00022B8 (IsUpdateCursorSizesSupported_0.c)
 *     UpdateCursorSizes_0 @ 0x1C00022C0 (UpdateCursorSizes_0.c)
 *     IsCheckPointerDeviceMonitorsSupported_0 @ 0x1C0002C78 (IsCheckPointerDeviceMonitorsSupported_0.c)
 *     CheckPointerDeviceMonitors_0 @ 0x1C0002C80 (CheckPointerDeviceMonitors_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     GreDeleteObject @ 0x1C00377D0 (GreDeleteObject.c)
 *     HMFreeObject @ 0x1C0041860 (HMFreeObject.c)
 *     HMMarkObjectDestroy @ 0x1C0066BA0 (HMMarkObjectDestroy.c)
 */

__int64 __fastcall DestroyMonitor(_QWORD *BaseAddress)
{
  __int64 v2; // rdx
  _QWORD *i; // rcx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

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
  _InterlockedOr(v9, 0);
  result = HMMarkObjectDestroy(BaseAddress);
  if ( (_DWORD)result )
  {
    v6 = BaseAddress[16];
    if ( v6 )
      GreDeleteObject(v6, v5);
    v7 = BaseAddress[17];
    if ( v7 )
      GreDeleteObject(v7, v5);
    v8 = BaseAddress[18];
    if ( v8 )
      GreDeleteObject(v8, v5);
    return HMFreeObject(BaseAddress);
  }
  return result;
}
