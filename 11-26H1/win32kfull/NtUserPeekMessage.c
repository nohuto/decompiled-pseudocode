/*
 * XREFs of NtUserPeekMessage @ 0x140057AA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     xxxInternalGetMessage @ 0x140057C40 (xxxInternalGetMessage.c)
 */

__int64 __fastcall NtUserPeekMessage(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  _OWORD *v6; // r12
  __int64 *CurrentThreadWin32Thread; // rax
  int Message; // edi
  __int64 v9; // r13
  ULONG64 v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-88h]
  union _LARGE_INTEGER v15; // [rsp+50h] [rbp-58h] BYREF
  __int128 v16; // [rsp+58h] [rbp-50h] BYREF
  __int128 v17; // [rsp+68h] [rbp-40h]
  __int128 v18; // [rsp+78h] [rbp-30h]

  v6 = a1;
  if ( (a6 & 1) != 0 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
    Message = 0;
    if ( CurrentThreadWin32Thread )
      v9 = *CurrentThreadWin32Thread;
    else
      v9 = 0LL;
    v15.QuadPart = 0LL;
    if ( KeWaitForSingleObject(*(PVOID *)(v9 + 1608), WrUserRequest, 1, 0, &v15) == 258 )
      return 0LL;
    if ( (a6 & 2) != 0 )
      --*(_QWORD *)(*(_QWORD *)(v9 + 512) + 8LL);
  }
  else
  {
    Message = 0;
  }
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004);
  }
  else
  {
    LODWORD(Timeout) = a5;
    Message = xxxInternalGetMessage((__int64)&v16, (unsigned __int64)Timeout, 0);
    if ( Message )
    {
      HIDWORD(v16) = 0;
      HIDWORD(v18) = 0;
      v12 = v17;
      v13 = v18;
      v11 = MmUserProbeAddress;
      if ( (unsigned __int64)v6 >= MmUserProbeAddress )
        v6 = (_OWORD *)MmUserProbeAddress;
      *v6 = v16;
      v6[1] = v12;
      v6[2] = v13;
    }
  }
  UserSessionSwitchLeaveCrit(v11);
  return Message;
}
