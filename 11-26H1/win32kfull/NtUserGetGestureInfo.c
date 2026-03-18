/*
 * XREFs of NtUserGetGestureInfo @ 0x140249740
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _FreeGestureInfo @ 0x1401EDD90 (_FreeGestureInfo.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserGetGestureInfo(__int64 a1, void *a2)
{
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rsi
  int v6; // ecx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi

  EnterCrit(0LL, 0LL);
  v5 = PtiCurrent(v4);
  if ( !a2 )
  {
    v6 = 87;
LABEL_3:
    v7 = 0;
    UserSetLastError(v6);
    goto LABEL_4;
  }
  if ( (unsigned int)RtlReadULongFromUser(a2) != 56 )
  {
    v7 = 0;
    UserSetLastError(87);
    goto LABEL_4;
  }
  v10 = HMValidateHandleWithDescriptor(a1, 0x15u);
  v11 = v10;
  if ( !v10 )
  {
    v7 = 0;
    goto LABEL_4;
  }
  if ( *(struct tagTHREADINFO **)(v10 + 16) != v5 )
  {
    v6 = 5;
    goto LABEL_3;
  }
  RtlCopyToUser(a2, (void *)(v10 + 32), 0x38uLL);
  v7 = 1;
  v8 = *((_QWORD *)v5 + 150);
  if ( v8 == a1 && !*(_DWORD *)(v11 + 80) )
  {
    FreeGestureInfo(v8);
    *((_QWORD *)v5 + 150) = 0LL;
  }
LABEL_4:
  UserSessionSwitchLeaveCrit(v8);
  return v7;
}
