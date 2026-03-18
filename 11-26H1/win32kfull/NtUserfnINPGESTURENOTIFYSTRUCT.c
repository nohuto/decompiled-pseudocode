/*
 * XREFs of NtUserfnINPGESTURENOTIFYSTRUCT @ 0x14026A180
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINPGESTURENOTIFYSTRUCT(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        int a6)
{
  __int64 v10; // rbx
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 UserSessionState; // rax
  __int128 v17; // [rsp+38h] [rbp-40h] BYREF
  __int64 v18; // [rsp+48h] [rbp-30h]
  __int128 v19; // [rsp+50h] [rbp-28h] BYREF
  __int64 v20; // [rsp+60h] [rbp-18h]

  v19 = 0LL;
  v20 = 0LL;
  PtiCurrent((__int64)a1);
  if ( a2 == 284 && a6 != 670 )
  {
    v10 = 0LL;
LABEL_4:
    v11 = 5;
    goto LABEL_5;
  }
  v17 = 0LL;
  v18 = 0LL;
  RtlCopyFromUser(&v17, a4, 0x18uLL);
  v19 = v17;
  v20 = v18;
  v10 = 0LL;
  if ( (_DWORD)v17 != 24 || !HIDWORD(v18) )
  {
    v11 = 87;
    goto LABEL_5;
  }
  if ( a2 == 284 )
  {
    v14 = 0LL;
    if ( a1 )
      v14 = *a1;
    if ( *((_QWORD *)&v17 + 1) != v14 )
      goto LABEL_4;
  }
  if ( !DWORD1(v17) )
  {
    UserSessionState = W32GetUserSessionState(v13, v12);
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                      + 8LL * (((_BYTE)a6 + 6) & 0x1F)
                                                                                      + 70904))(
             a1,
             a2,
             a3,
             &v19,
             a5);
  }
  v11 = 1004;
LABEL_5:
  UserSetLastError(v11);
  return v10;
}
