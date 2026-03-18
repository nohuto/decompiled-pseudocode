/*
 * XREFs of NtUserDdeInitialize @ 0x1C012B400
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxCsDdeInitialize @ 0x1C012B4E8 (xxxCsDdeInitialize.c)
 *     xxxDestroyThreadDDEObject @ 0x1C0132410 (xxxDestroyThreadDDEObject.c)
 */

__int64 __fastcall NtUserDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, int a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v13 = 0;
  EnterCrit(0LL, 1LL);
  v11 = xxxCsDdeInitialize((unsigned int)&v14, (unsigned int)&v15, (unsigned int)&v13, a4, a5);
  if ( !v11 )
  {
    v9 = W32UserProbeAddress;
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      a1 = (_QWORD *)W32UserProbeAddress;
    *a1 = v14;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_QWORD *)W32UserProbeAddress;
    *a2 = v15;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (_DWORD *)W32UserProbeAddress;
    *a3 = v13;
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v11;
}
