/*
 * XREFs of NtUserHardErrorControl @ 0x1C02159F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxHardErrorControl @ 0x1C0226628 (xxxHardErrorControl.c)
 */

__int64 __fastcall NtUserHardErrorControl(unsigned int a1, __int64 a2, _OWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  _BYTE *v10; // rdx
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  if ( PsGetCurrentProcess(v6) == gpepCSRSS )
  {
    if ( a3 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = a3;
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        v10 = (_BYTE *)W32UserProbeAddress;
      *v10 = *v10;
      v10[15] = v10[15];
      v12 = *a3;
    }
    v9 = xxxHardErrorControl(a1, a2, (unsigned __int64)&v12 & -(__int64)(a3 != 0LL));
    if ( a3 )
      *a3 = v12;
  }
  else
  {
    v9 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
