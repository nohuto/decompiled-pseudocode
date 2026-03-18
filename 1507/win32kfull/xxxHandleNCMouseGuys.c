/*
 * XREFs of xxxHandleNCMouseGuys @ 0x1C02024F4
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C0107B34 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     xxxActivateWindow @ 0x1C0044954 (xxxActivateWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     GetNonChildAncestor @ 0x1C0081140 (GetNonChildAncestor.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0081EAC (IsWindowSubjectToShellWindowBehavior.c)
 *     xxxGetSysMenuHandle @ 0x1C0094380 (xxxGetSysMenuHandle.c)
 *     _GetMenuState @ 0x1C0107C3C (_GetMenuState.c)
 *     xxxSetSysMenu @ 0x1C0107E60 (xxxSetSysMenu.c)
 *     DragOperationFromMaximizedAllowed @ 0x1C02023C0 (DragOperationFromMaximizedAllowed.c)
 *     MoveWithArrangementAllowed @ 0x1C02023E8 (MoveWithArrangementAllowed.c)
 *     SizeWithSnapAllowed @ 0x1C0202410 (SizeWithSnapAllowed.c)
 *     xxxArrangeWindow @ 0x1C020B504 (xxxArrangeWindow.c)
 */

__int64 __fastcall xxxHandleNCMouseGuys(__int64 a1, __int64 a2, __int64 a3, struct _LARGE_STRING *a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rbp
  int v6; // r15d
  unsigned int v9; // esi
  __int64 NonChildAncestor; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 SysMenuHandle; // rax
  _QWORD v18[4]; // [rsp+50h] [rbp-38h] BYREF

  v4 = 22;
  v5 = (unsigned int)a3;
  v6 = 0;
  v9 = 0xFFFF;
  if ( (_DWORD)a3 == 2 )
  {
    a2 = (unsigned int)(a2 - 161);
    if ( (_DWORD)a2 )
    {
      if ( (_DWORD)a2 == 2 )
      {
        if ( (*(_BYTE *)(a1 + 55) & 0x21) != 0
          || (unsigned int)MoveWithArrangementAllowed((struct tagWND *)a1) && (*(_BYTE *)(a1 + 289) & 3) != 0 )
        {
          v9 = 61728;
        }
        else if ( (*(_BYTE *)(a1 + 54) & 1) != 0 )
        {
          v9 = 61488;
        }
        v6 = 1;
      }
    }
    else if ( (*(_BYTE *)(a1 + 55) & 0xC0) != 0x40 || (*(_BYTE *)(a1 + 289) & 0x10) == 0 )
    {
      NonChildAncestor = GetNonChildAncestor(a1);
      v18[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v18;
      v18[1] = NonChildAncestor;
      if ( NonChildAncestor )
        ++*(_DWORD *)(NonChildAncestor + 8);
      xxxActivateWindow((struct tagWND *)NonChildAncestor, 6LL);
      ThreadUnlock1(v12, v11);
      v9 = 61456;
    }
  }
  else
  {
    if ( (_DWORD)a3 == 3 )
      goto LABEL_14;
    if ( (int)a3 <= 4 )
      goto LABEL_37;
    if ( (int)a3 <= 7 )
    {
LABEL_14:
      if ( (((_DWORD)a2 - 161) & 0xFFFFFFFD) != 0 )
        goto LABEL_37;
      if ( (_DWORD)a3 == 3 )
      {
        if ( (_DWORD)a2 == 163 )
        {
          v9 = 61536;
          goto LABEL_37;
        }
      }
      else if ( (_DWORD)a3 != 5 )
      {
        if ( (_DWORD)a3 == 6 )
          v9 = 61568;
        else
          v9 = 61552;
        goto LABEL_37;
      }
      v9 = 61584;
    }
    else if ( ((_DWORD)a3 == 12 || (_DWORD)a3 == 15)
           && (_DWORD)a2 == 163
           && (unsigned int)SizeWithSnapAllowed((struct tagWND *)a1)
           && (*(_BYTE *)(a1 + 55) & 0x21) == 0 )
    {
      v6 = 1;
      if ( (*(_BYTE *)(a1 + 289) & 3) != 0 )
      {
        if ( (*(_BYTE *)(a1 + 289) & 3) == 3 )
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
    || (*(_BYTE *)(a1 + 54) & 8) == 0
    || (xxxSetSysMenu((_BYTE *)a1, a2, a3, (__int64)a4),
        SysMenuHandle = xxxGetSysMenuHandle(a1, v14, v15, v16),
        result = GetMenuState(SysMenuHandle, (unsigned __int16)v9 & 0xFFF0),
        (result & 3) == 0)
    || v9 == 61456
    && (*(_BYTE *)(a1 + 54) & 4) != 0
    && (*(_BYTE *)(a1 + 55) & 1) != 0
    && ((result = DragOperationFromMaximizedAllowed((struct tagWND *)a1), (_DWORD)result)
     || (result = IsWindowSubjectToShellWindowBehavior(a1, 4), (_DWORD)result)) )
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
      return xxxSendTransformableMessageTimeout((struct tagWND *)a1, 0x112u, v5 | v9, a4, 0, 0, 0LL, 1, 1);
    }
  }
  return result;
}
