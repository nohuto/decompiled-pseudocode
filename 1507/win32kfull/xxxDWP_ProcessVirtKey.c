/*
 * XREFs of xxxDWP_ProcessVirtKey @ 0x1C007750C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     _GetKeyState @ 0x1C0041BD0 (_GetKeyState.c)
 *     xxxSetFocus @ 0x1C0046624 (xxxSetFocus.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     GetNonChildAncestor @ 0x1C0081140 (GetNonChildAncestor.c)
 */

__int64 __fastcall xxxDWP_ProcessVirtKey(int a1)
{
  __int64 result; // rax
  unsigned __int16 v2; // di
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int16 KeyState; // ax
  unsigned __int64 v10; // r8
  struct tagWND *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+58h] [rbp-20h]

  result = gptiCurrent;
  v2 = a1;
  v3 = *(_QWORD *)(gptiCurrent + 392LL);
  v4 = *(_QWORD *)(v3 + 80);
  if ( !v4 )
    return result;
  if ( a1 == 9 )
  {
    result = *(_QWORD *)(v4 + 16);
    if ( (*(_DWORD *)(result + 764) & 1) != 0 )
      return result;
  }
  else if ( a1 != 27 )
  {
    if ( a1 == 115 )
    {
      result = *(_QWORD *)(v4 + 152);
      if ( (*(_BYTE *)(result + 85) & 2) == 0 )
      {
        v5 = *(_QWORD *)(v3 + 72);
        if ( !v5 || (NonChildAncestor = GetNonChildAncestor(v5), NonChildAncestor != v4) )
        {
          v14 = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = &v14;
          v15 = v4;
          ++*(_DWORD *)(v4 + 8);
          xxxSetFocus(*(struct tagWND **)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL), 0LL);
          ThreadUnlock1(v8, v7);
        }
        return PostMessage(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL), 274LL);
      }
    }
    return result;
  }
  v14 = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = &v14;
  v15 = v4;
  ++*(_DWORD *)(v4 + 8);
  KeyState = GetKeyState(0x10u);
  v10 = 61520LL;
  v11 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL);
  if ( KeyState < 0 )
    v10 = 61504LL;
  _InterlockedIncrement(&glSendMessage);
  xxxSendTransformableMessageTimeout(v11, 0x112u, v10, (struct _LARGE_STRING *)v2, 0, 0, 0LL, 1, 0);
  return ThreadUnlock1(v13, v12);
}
