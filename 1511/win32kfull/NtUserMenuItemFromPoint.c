/*
 * XREFs of NtUserMenuItemFromPoint @ 0x1C021E2A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     SameCoordinateSpace @ 0x1C0075498 (SameCoordinateSpace.c)
 *     xxxMenuItemFromPoint @ 0x1C023B734 (xxxMenuItemFromPoint.c)
 */

__int64 __fastcall NtUserMenuItemFromPoint(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v16[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v17[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  v18 = a3;
  EnterCrit(0LL, 1LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v16;
    v16[1] = a1;
    if ( a1 )
      ++*(_DWORD *)(a1 + 8);
    v10 = ValidateHmenu(a2);
    if ( v10 )
    {
      if ( a1 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 1) == 0 )
        {
          v11 = *(_QWORD *)(a1 + 16);
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL);
          if ( !(unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v11 + 376)) )
            TransformPointBetweenCoordinateSpaces(&v18, &v18, a1, 0LL);
        }
      }
      v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v17;
      v17[1] = v10;
      ++*(_DWORD *)(v10 + 8);
      v7 = xxxMenuItemFromPoint(a1, v10, v18);
      ThreadUnlock1(v14, v13);
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
