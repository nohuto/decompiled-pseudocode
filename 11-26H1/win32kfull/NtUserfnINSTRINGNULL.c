/*
 * XREFs of NtUserfnINSTRINGNULL @ 0x1401BC0C0
 * Callers:
 *     ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1401BBD98 (-_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     RtlReadUCharFromUser @ 0x1403E2190 (RtlReadUCharFromUser.c)
 */

__int64 __fastcall NtUserfnINSTRINGNULL(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 UserSessionState; // rax
  __int128 v18; // [rsp+40h] [rbp-28h] BYREF

  v18 = 0LL;
  PsGetCurrentThreadWin32Thread(a1);
  if ( a4 )
  {
    if ( a7 )
    {
      RtlReadUCharFromUser(a4);
      *((_QWORD *)&v18 + 1) = a4;
      v12 = 0x80000000LL;
      DWORD1(v18) |= 0x80000000;
      v15 = -1LL;
      do
        ++v15;
      while ( *((_BYTE *)a4 + v15) );
      LODWORD(v18) = v15;
      v14 = (v15 + 1) | 0x80000000;
    }
    else
    {
      ProbeForRead(a4, 1uLL, 2u);
      *((_QWORD *)&v18 + 1) = a4;
      v12 = 0x7FFFFFFFLL;
      DWORD1(v18) &= ~0x80000000;
      v13 = -1LL;
      do
        ++v13;
      while ( *((_WORD *)a4 + v13) );
      LODWORD(v18) = 2 * v13;
      v14 = (2 * v13 + 2) & 0x7FFFFFFF;
    }
    DWORD1(v18) = v14;
    a4 = &v18;
  }
  UserSessionState = W32GetUserSessionState(v12, v11);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                  + 8LL * ((a6 + 6) & 0x1F)
                                                                                  + 70904))(
           a1,
           a2,
           a3,
           a4,
           a5);
}
