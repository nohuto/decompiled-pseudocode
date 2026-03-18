/*
 * XREFs of NtUserfnOUTSTRING @ 0x1401BF060
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnOUTSTRING(__int64 a1, unsigned int a2, SIZE_T a3, _BYTE *a4, __int64 a5, char a6, int a7)
{
  int v11; // r10d
  __int64 v12; // rcx
  unsigned int v13; // eax
  SIZE_T v14; // rdx
  ULONG v15; // r8d
  __int64 v16; // rbx
  __int64 UserSessionState; // rax
  int v19; // [rsp+48h] [rbp-20h] BYREF
  int v20; // [rsp+4Ch] [rbp-1Ch]
  _BYTE *v21; // [rsp+50h] [rbp-18h]

  PtiCurrent(a1);
  v11 = a7 << 31;
  v12 = v11 ^ ((unsigned int)a3 ^ v11) & 0x7FFFFFFF;
  v20 = v11 ^ (a3 ^ v11) & 0x7FFFFFFF;
  if ( !a7 )
  {
    v13 = v12 ^ (v12 ^ (2 * v12)) & 0x7FFFFFFF;
    v12 = v13;
    v20 = v13;
  }
  v14 = v12 & 0x7FFFFFFF;
  if ( v14 < a3 )
  {
    v16 = 0LL;
    UserSetLastError(0);
    return v16;
  }
  v19 = 0;
  v21 = a4;
  if ( (v12 & 0x7FFFFFFF) != 0 )
  {
    v15 = ((int)v12 >> 31) + 2;
  }
  else
  {
    if ( !a4 )
      goto LABEL_10;
    v14 = ((__int64)(int)v12 >> 63) + 2;
    v15 = ((int)v12 >> 31) + 2;
  }
  ProbeForWrite(a4, v14, v15);
LABEL_10:
  UserSessionState = W32GetUserSessionState(v12, v14);
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, SIZE_T, int *, __int64))(UserSessionState
                                                                           + 8LL * ((a6 + 6) & 0x1F)
                                                                           + 70904))(
          a1,
          a2,
          a3,
          &v19,
          a5);
  if ( !v16 && a3 )
  {
    if ( a7 )
      *a4 = 0;
    else
      *(_WORD *)a4 = 0;
  }
  return v16;
}
