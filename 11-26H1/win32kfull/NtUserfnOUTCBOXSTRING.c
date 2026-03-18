/*
 * XREFs of NtUserfnOUTCBOXSTRING @ 0x1401D4B90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsPseudoPwnd @ 0x14012E280 (IsPseudoPwnd.c)
 *     NtUserfnGETDBCSTEXTLENGTHS @ 0x1401D4F10 (NtUserfnGETDBCSTEXTLENGTHS.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnOUTCBOXSTRING(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        volatile void *a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // rcx
  ULONG v16; // r8d
  SIZE_T v17; // rdx
  __int64 UserSessionState; // rax
  int v19; // eax
  __int128 v21; // [rsp+50h] [rbp-38h] BYREF

  v21 = 0LL;
  PtiCurrent(a1);
  if ( IsPseudoPwnd(a1) )
    return -1LL;
  v10 = NtUserfnGETDBCSTEXTLENGTHS(a1, 329, a3, (_DWORD)a4, a5, a6, a7);
  v11 = -1LL;
  if ( v10 != -1 )
  {
    v12 = v10 + 1;
    v13 = (a7 << 31) | DWORD1(v21) & 0x7FFFFFFF;
    DWORD1(v21) = v13;
    if ( a7 )
    {
      v15 = v12 & 0x7FFFFFFF | v13 & 0x80000000;
      DWORD1(v21) = v15;
    }
    else
    {
      v14 = v13 ^ (v13 ^ (2 * v12)) & 0x7FFFFFFF;
      v15 = v14;
      DWORD1(v21) = v14;
    }
    if ( ((unsigned int)v15 & 0x7FFFFFFF) < (unsigned int)v12 )
    {
      UserSetLastError(0);
      return v11;
    }
    LODWORD(v21) = 0;
    *((_QWORD *)&v21 + 1) = a4;
    if ( (v15 & 0x7FFFFFFF) != 0 )
    {
      v16 = ((int)v15 >> 31) + 2;
      v17 = v15 & 0x7FFFFFFF;
    }
    else
    {
      if ( !a4 )
        goto LABEL_13;
      v17 = ((__int64)(int)v15 >> 63) + 2;
      v16 = ((int)v15 >> 31) + 2;
    }
    ProbeForWrite(a4, v17, v16);
LABEL_13:
    UserSessionState = W32GetUserSessionState(v15, v12);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                   + 8LL * (((_BYTE)a6 + 6) & 0x1F)
                                                                                   + 70904))(
            a1,
            a2,
            a3,
            &v21,
            a5);
    v19 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL);
    if ( (v19 & 0x200) == 0 && (v19 & 0x30) != 0 )
      return a7 != 0 ? 8LL : 4LL;
  }
  return v11;
}
