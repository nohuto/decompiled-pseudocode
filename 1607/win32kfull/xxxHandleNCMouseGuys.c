/*
 * XREFs of xxxHandleNCMouseGuys @ 0x1C01F9BA4
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00BB4F4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     xxxSetSysMenu @ 0x1C0067980 (xxxSetSysMenu.c)
 *     xxxGetSysMenuHandle @ 0x1C006F540 (xxxGetSysMenuHandle.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C009E938 (IsWindowSubjectToShellWindowBehavior.c)
 *     GetNonChildAncestor @ 0x1C00A8D2C (GetNonChildAncestor.c)
 *     xxxActivateWindow @ 0x1C00AB2EC (xxxActivateWindow.c)
 *     _GetMenuState @ 0x1C00BB5FC (_GetMenuState.c)
 *     DragOperationFromMaximizedAllowed @ 0x1C01F9A78 (DragOperationFromMaximizedAllowed.c)
 *     MoveWithArrangementAllowed @ 0x1C01F9AA0 (MoveWithArrangementAllowed.c)
 *     SizeWithSnapAllowed @ 0x1C01F9AC8 (SizeWithSnapAllowed.c)
 *     xxxArrangeWindow @ 0x1C0202CF4 (xxxArrangeWindow.c)
 */

__int64 __fastcall xxxHandleNCMouseGuys(struct tagWND *a1, int a2, int a3, __int64 a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rbp
  int v6; // r15d
  unsigned int v9; // esi
  int v10; // edx
  __int64 NonChildAncestor; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 SysMenuHandle; // rax
  _QWORD v16[4]; // [rsp+50h] [rbp-38h] BYREF

  v4 = 22;
  v5 = (unsigned int)a3;
  v6 = 0;
  v9 = 0xFFFF;
  if ( a3 == 2 )
  {
    v10 = a2 - 161;
    if ( v10 )
    {
      if ( v10 == 2 )
      {
        if ( (*((_BYTE *)a1 + 55) & 0x21) != 0
          || (unsigned int)MoveWithArrangementAllowed(a1) && (*((_BYTE *)a1 + 289) & 3) != 0 )
        {
          v9 = 61728;
        }
        else if ( (*((_BYTE *)a1 + 54) & 1) != 0 )
        {
          v9 = 61488;
        }
        v6 = 1;
      }
    }
    else if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0x40 || (*((_BYTE *)a1 + 289) & 0x10) == 0 )
    {
      NonChildAncestor = GetNonChildAncestor((__int64)a1);
      v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v16;
      v16[1] = NonChildAncestor;
      if ( NonChildAncestor )
        ++*(_DWORD *)(NonChildAncestor + 8);
      xxxActivateWindow((struct tagWND *)NonChildAncestor, 6LL);
      ThreadUnlock1(v13, v12);
      v9 = 61456;
    }
  }
  else
  {
    if ( a3 == 3 )
      goto LABEL_14;
    if ( a3 <= 4 )
      goto LABEL_37;
    if ( a3 <= 7 )
    {
LABEL_14:
      if ( ((a2 - 161) & 0xFFFFFFFD) != 0 )
        goto LABEL_37;
      if ( a3 == 3 )
      {
        if ( a2 == 163 )
        {
          v9 = 61536;
          goto LABEL_37;
        }
      }
      else if ( a3 != 5 )
      {
        if ( a3 == 6 )
          v9 = 61568;
        else
          v9 = 61552;
        goto LABEL_37;
      }
      v9 = 61584;
    }
    else if ( (a3 == 12 || a3 == 15)
           && a2 == 163
           && (unsigned int)SizeWithSnapAllowed(a1)
           && (*((_BYTE *)a1 + 55) & 0x21) == 0 )
    {
      v6 = 1;
      if ( (*((_BYTE *)a1 + 289) & 3) != 0 )
      {
        if ( (*((_BYTE *)a1 + 289) & 3) == 3 )
          v4 = 17;
      }
      else
      {
        v4 = 16;
      }
    }
  }
LABEL_37:
  result = v9 - 61456;
  if ( v9 != 61456 && (result = v9 - 61488, v9 != 61488) && v9 != 61536
    || (*((_BYTE *)a1 + 54) & 8) == 0
    || (xxxSetSysMenu(a1),
        SysMenuHandle = xxxGetSysMenuHandle((__int64)a1),
        result = GetMenuState(SysMenuHandle, (unsigned __int16)v9 & 0xFFF0),
        (result & 3) == 0)
    || v9 == 61456
    && (*((_BYTE *)a1 + 54) & 4) != 0
    && (*((_BYTE *)a1 + 55) & 1) != 0
    && ((result = DragOperationFromMaximizedAllowed(a1), (_DWORD)result)
     || (result = IsWindowSubjectToShellWindowBehavior((__int64)a1, 4LL), (_DWORD)result)) )
  {
    if ( v6 )
    {
      result = gSqmIsOptedIn;
      if ( gSqmIsOptedIn )
        result = WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3534LL, 1LL);
    }
    if ( v9 == 0xFFFF )
    {
      if ( v4 != 22 )
        return xxxArrangeWindow(a1, v4);
    }
    else
    {
      _InterlockedAdd(&glSendMessage, 1u);
      return xxxSendTransformableMessageTimeout(a1, 274LL, v5 | v9, a4, 0, 0, 0LL, 1, 1);
    }
  }
  return result;
}
