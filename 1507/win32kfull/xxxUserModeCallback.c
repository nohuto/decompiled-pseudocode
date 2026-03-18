/*
 * XREFs of xxxUserModeCallback @ 0x1C0215618
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     xxxMNStartMenu @ 0x1C0107794 (xxxMNStartMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 * Callees:
 *     <none>
 */

__int64 xxxUserModeCallback(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, ...)
{
  unsigned int v6; // esi
  int v7; // ebx
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF
  __int64 v10; // [rsp+60h] [rbp+28h] BYREF
  va_list va; // [rsp+60h] [rbp+28h]
  va_list va1; // [rsp+68h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v10 = va_arg(va1, _QWORD);
  v9 = a4;
  v6 = a1;
  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(v6);
  v7 = KeUserModeCallback(v6, a2, a3, &v9, (__int64 *)va);
  EtwTraceEndCallback(v6);
  EnterCrit(1LL);
  if ( v7 >= 0 && (_DWORD)v10 )
    return (unsigned int)-1073741823;
  return (unsigned int)v7;
}
