/*
 * XREFs of NtUserfnINCNTOUTSTRING @ 0x14024EE50
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     RtlReadUShortFromUser @ 0x1403E2240 (RtlReadUShortFromUser.c)
 */

__int64 __fastcall NtUserfnINCNTOUTSTRING(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        char a6,
        int a7)
{
  unsigned __int16 UShortFromUser; // ax
  SIZE_T v12; // rdx
  __int64 result; // rax
  ULONG v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  int v18; // [rsp+48h] [rbp-20h] BYREF
  int v19; // [rsp+4Ch] [rbp-1Ch]
  _BYTE *v20; // [rsp+50h] [rbp-18h]

  PtiCurrent(a1);
  UShortFromUser = RtlReadUShortFromUser(a4);
  v12 = UShortFromUser | (unsigned int)(a7 << 31);
  v19 = UShortFromUser | (a7 << 31);
  if ( !a7 )
  {
    v12 = 2 * (unsigned int)UShortFromUser;
    v19 = 2 * UShortFromUser;
  }
  if ( (v12 & 0x7FFFFFFF) < 2 )
    return 0LL;
  v18 = 0;
  v20 = a4;
  v14 = ((int)v12 >> 31) + 2;
  LODWORD(v12) = v12 & 0x7FFFFFFF;
  ProbeForWrite(a4, v12, v14);
  UserSessionState = W32GetUserSessionState(v16, v15);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, int *, __int64))(UserSessionState
                                                                               + 8LL * ((a6 + 6) & 0x1F)
                                                                               + 70904))(
             a1,
             a2,
             a3,
             &v18,
             a5);
  if ( !result )
  {
    if ( a7 )
      *a4 = 0;
    else
      *(_WORD *)a4 = 0;
  }
  return result;
}
