/*
 * XREFs of SendGestureMessage @ 0x14022ED74
 * Callers:
 *     NtUserfnGESTURE @ 0x14022EC80 (NtUserfnGESTURE.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _FreeGestureInfo @ 0x1401EDD90 (_FreeGestureInfo.c)
 *     AllocGestureInfo @ 0x14022EF8C (AllocGestureInfo.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SendGestureMessage(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v10; // r14
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 CurrentProcessWow64Process; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  unsigned int v21; // ebx
  __int64 UserSessionState; // rax
  __int128 v23; // [rsp+40h] [rbp-98h] BYREF
  __int128 v24; // [rsp+50h] [rbp-88h]
  __int128 v25; // [rsp+60h] [rbp-78h]
  SIZE_T Length; // [rsp+70h] [rbp-68h]
  __int64 v27; // [rsp+78h] [rbp-60h]
  _OWORD v28[3]; // [rsp+80h] [rbp-58h] BYREF
  SIZE_T v29; // [rsp+B0h] [rbp-28h]

  v10 = 0LL;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || !a4
    || (unsigned __int64)(a3 - 1) > 0xFFFFFFFE
    || (unsigned int)a3 < 0x38 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  v11 = a3 - 56;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  Length = 0LL;
  RtlCopyFromUser(&v23, (void *)a4, 0x38uLL);
  v28[0] = v23;
  v28[1] = v24;
  v28[2] = v25;
  v29 = Length;
  v14 = Length;
  if ( (_DWORD)Length != v11 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  if ( (_DWORD)Length )
  {
    v10 = a4 + 56;
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v13, v12);
    ProbeForRead((volatile void *)(a4 + 56), v14, CurrentProcessWow64Process != 0 ? 1 : 4);
    v27 = a4 + 56;
  }
  if ( (_DWORD)v23 == 56 && HIDWORD(v24) && v14 <= 0x400 )
  {
    v17 = 1;
  }
  else
  {
    UserSetLastError(87);
    v17 = 0;
  }
  if ( !v17 )
    return 0LL;
  v20 = AllocGestureInfo(a1, 0LL, v28, v10);
  if ( !v20 )
    return 0LL;
  v21 = DWORD2(v28[0]);
  UserSessionState = W32GetUserSessionState(v19, v18);
  *a7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64))(UserSessionState
                                                                             + 8LL * (((_BYTE)a6 + 6) & 0x1F)
                                                                             + 70904))(
          a1,
          a2,
          v21,
          v20,
          a5);
  if ( a6 == 683 || a6 == 684 || a6 == 692 )
    FreeGestureInfo(v20);
  return 1LL;
}
