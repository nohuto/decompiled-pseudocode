/*
 * XREFs of NtUserMenuItemFromPoint @ 0x1C0217EA0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxMenuItemFromPoint @ 0x1C02331F4 (xxxMenuItemFromPoint.c)
 */

__int64 __fastcall NtUserMenuItemFromPoint(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD v23[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v24[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v25; // [rsp+70h] [rbp+18h] BYREF

  v25 = a3;
  EnterCrit(0LL, 1LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v23;
    v23[1] = a1;
    if ( a1 )
      ++*(_DWORD *)(a1 + 8);
    v10 = ValidateHmenu(a2);
    if ( v10 )
    {
      if ( a1 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v11, v12) + 432) + 224LL) & 1) == 0 )
        {
          v17 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15) + 432);
          if ( (*(_BYTE *)(v17 + 224) & 0x20) == 0
            && (W32GetCurrentThreadDpiAwarenessContext(v17, v16, v18, v19) & 0xF) != (*(_DWORD *)(a1 + 352) & 0xF) )
          {
            TransformPointBetweenCoordinateSpaces(&v25, &v25, a1, 0LL);
          }
        }
      }
      v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v24;
      v24[1] = v10;
      ++*(_DWORD *)(v10 + 8);
      v7 = xxxMenuItemFromPoint(a1, v10, v25);
      ThreadUnlock1(v21, v20);
    }
    else
    {
      v7 = -1;
    }
    ThreadUnlock1(v9, v8);
  }
  else
  {
    v7 = -1;
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
