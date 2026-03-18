/*
 * XREFs of xxxDWP_ProcessVirtKey @ 0x1C01523EC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     _GetKeyState @ 0x1C0095870 (_GetKeyState.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     xxxSetFocus @ 0x1C00A8300 (xxxSetFocus.c)
 *     GetNonChildAncestor @ 0x1C00A8D2C (GetNonChildAncestor.c)
 */

__int64 __fastcall xxxDWP_ProcessVirtKey(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int16 v5; // di
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int16 KeyState; // ax
  __int64 v13; // r8
  struct tagWND *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // [rsp+50h] [rbp-28h] BYREF
  __int64 v18; // [rsp+58h] [rbp-20h]

  result = gptiCurrent;
  v5 = a1;
  v6 = *(_QWORD *)(gptiCurrent + 384LL);
  v7 = *(_QWORD *)(v6 + 88);
  if ( !v7 )
    return result;
  if ( a1 == 9 )
  {
    result = *(_QWORD *)(v7 + 16);
    if ( (*(_DWORD *)(result + 764) & 1) != 0 )
      return result;
  }
  else if ( a1 != 27 )
  {
    if ( a1 == 115 )
    {
      result = *(_QWORD *)(v7 + 152);
      if ( (*(_BYTE *)(result + 85) & 2) == 0 )
      {
        v8 = *(_QWORD *)(v6 + 80);
        if ( !v8 || (NonChildAncestor = GetNonChildAncestor(v8), NonChildAncestor != v7) )
        {
          v17 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v17;
          v18 = v7;
          ++*(_DWORD *)(v7 + 8);
          xxxSetFocus(*(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL), 0LL);
          ThreadUnlock1(v11, v10);
        }
        return PostMessage(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL), 274LL, 61536LL, 0LL);
      }
    }
    return result;
  }
  v17 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v17;
  v18 = v7;
  ++*(_DWORD *)(v7 + 8);
  KeyState = GetKeyState(0x10u, v7, v6, a4);
  v13 = 61520LL;
  v14 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
  if ( KeyState < 0 )
    v13 = 61504LL;
  _InterlockedIncrement(&glSendMessage);
  xxxSendTransformableMessageTimeout(v14, 274LL, v13, v5, 0, 0, 0LL, 1, 0);
  return ThreadUnlock1(v16, v15);
}
