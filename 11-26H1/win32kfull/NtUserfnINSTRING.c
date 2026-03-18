/*
 * XREFs of NtUserfnINSTRING @ 0x1401BBF30
 * Callers:
 *     ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1401BBD98 (-_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     RtlReadUCharFromUser @ 0x1403E2190 (RtlReadUCharFromUser.c)
 */

__int64 __fastcall NtUserfnINSTRING(__int64 a1, unsigned int a2, __int64 a3, _BYTE *a4, __int64 a5, char a6, int a7)
{
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  __int64 UserSessionState; // rax
  __int128 v17; // [rsp+48h] [rbp-30h] BYREF

  v17 = 0LL;
  PtiCurrent(a1);
  if ( a2 == 325 || a2 == 397 )
  {
    a3 &= ~0x2000uLL;
  }
  else if ( a2 != 406 )
  {
    v12 = -1LL;
    goto LABEL_5;
  }
  v12 = -1LL;
LABEL_5:
  if ( a7 )
  {
    if ( a4 )
      RtlReadUCharFromUser(a4);
    *((_QWORD *)&v17 + 1) = a4;
    v13 = 0x80000000LL;
    DWORD1(v17) |= 0x80000000;
    if ( !a4 )
    {
      *(_QWORD *)&v17 = 0x8000000000000000uLL;
      goto LABEL_19;
    }
    do
      ++v12;
    while ( a4[v12] );
    LODWORD(v17) = v12;
    v14 = (v12 + 1) | 0x80000000;
  }
  else
  {
    if ( a4 )
      ProbeForRead(a4, 1uLL, 2u);
    *((_QWORD *)&v17 + 1) = a4;
    v13 = 0x7FFFFFFFLL;
    DWORD1(v17) &= ~0x80000000;
    if ( !a4 )
    {
      *(_QWORD *)&v17 = 0LL;
      goto LABEL_19;
    }
    do
      ++v12;
    while ( *(_WORD *)&a4[2 * v12] );
    LODWORD(v17) = 2 * v12;
    v14 = (2 * v12 + 2) & 0x7FFFFFFF;
  }
  DWORD1(v17) = v14;
LABEL_19:
  UserSessionState = W32GetUserSessionState(v13, v11);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                  + 8LL * ((a6 + 6) & 0x1F)
                                                                                  + 70904))(
           a1,
           a2,
           a3,
           &v17,
           a5);
}
