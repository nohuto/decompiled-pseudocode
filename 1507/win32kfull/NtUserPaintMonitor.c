/*
 * XREFs of NtUserPaintMonitor @ 0x1C021E920
 * Callers:
 *     <none>
 * Callees:
 *     xxxDesktopPaintCallback @ 0x1C0151610 (xxxDesktopPaintCallback.c)
 */

_BOOL8 __fastcall NtUserPaintMonitor(__int64 a1, HDC a2, RECT *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r10
  BOOL v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v16[2]; // [rsp+28h] [rbp-60h] BYREF
  RECT v17; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v18[3]; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v19[4]; // [rsp+60h] [rbp-28h] BYREF

  EnterCrit(1LL);
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (RECT *)W32UserProbeAddress;
  v17 = *a3;
  v8 = ValidateHmonitor(a1);
  v9 = 0;
  if ( v8 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8LL) + 16LL);
    v18[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v18;
    v18[1] = v10;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    v19[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v19;
    v19[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    v16[0] = v10;
    v16[1] = 0LL;
    v9 = xxxDesktopPaintCallback(v8, a2, &v17, (__int64)v16);
    ThreadUnlock1(v12, v11);
    ThreadUnlock1(v14, v13);
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v9;
}
