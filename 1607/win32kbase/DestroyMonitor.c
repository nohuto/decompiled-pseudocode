/*
 * XREFs of DestroyMonitor @ 0x1C00760A0
 * Callers:
 *     CleanupGDI @ 0x1C0055F7C (CleanupGDI.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0056368 (-UpdateUserScreen@@YAHH@Z.c)
 * Callees:
 *     IsUpdateCursorSizesSupported_0 @ 0x1C0001E18 (IsUpdateCursorSizesSupported_0.c)
 *     UpdateCursorSizes_0 @ 0x1C0001E20 (UpdateCursorSizes_0.c)
 *     IsCheckPointerDeviceMonitorsSupported_0 @ 0x1C0002C78 (IsCheckPointerDeviceMonitorsSupported_0.c)
 *     CheckPointerDeviceMonitors_0 @ 0x1C0002C80 (CheckPointerDeviceMonitors_0.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     HMFreeObject @ 0x1C0038B10 (HMFreeObject.c)
 *     GreDeleteObject @ 0x1C003A290 (GreDeleteObject.c)
 *     HMMarkObjectDestroy @ 0x1C00761C0 (HMMarkObjectDestroy.c)
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
