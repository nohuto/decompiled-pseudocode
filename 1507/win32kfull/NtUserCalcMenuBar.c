/*
 * XREFs of NtUserCalcMenuBar @ 0x1C004F3B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCalcMenuBar @ 0x1C004F4AC (xxxCalcMenuBar.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall NtUserCalcMenuBar(__int64 a1, int a2, int a3, int a4, unsigned __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r10
  unsigned int v12; // ebx
  __int128 *v13; // rdx
  __int128 v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int128 v18; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v19[3]; // [rsp+48h] [rbp-20h] BYREF

  EnterCrit(1LL);
  v11 = ValidateHwnd(a1);
  v12 = 0;
  if ( v11 )
  {
    v19[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v19;
    v19[1] = v11;
    ++*(_DWORD *)(v11 + 8);
    if ( a2 < 0 || a3 < 0 || a4 < 0 )
    {
      UserSetLastError(87LL);
    }
    else
    {
      v13 = (__int128 *)a5;
      if ( a5 )
      {
        if ( a5 >= W32UserProbeAddress )
          v13 = (__int128 *)W32UserProbeAddress;
        v14 = *v13;
      }
      else
      {
        v14 = *(_OWORD *)(v11 + 112);
      }
      v18 = v14;
      v12 = xxxCalcMenuBar(v11, a2, a3, a4, (__int64)&v18);
    }
    ThreadUnlock1(v16, v15);
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v12;
}
