/*
 * XREFs of NtUserHardErrorControl @ 0x1C021CA30
 * Callers:
 *     <none>
 * Callees:
 *     xxxHardErrorControl @ 0x1C0226550 (xxxHardErrorControl.c)
 */

__int64 __fastcall NtUserHardErrorControl(unsigned int a1, __int64 a2, _OWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  _BYTE *v11; // rdx
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(1LL);
  if ( PsGetCurrentProcess(v7, v6) == gpepCSRSS )
  {
    if ( a3 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = a3;
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        v11 = (_BYTE *)W32UserProbeAddress;
      *v11 = *v11;
      v11[15] = v11[15];
      v13 = *a3;
    }
    v10 = xxxHardErrorControl(a1, a2, (unsigned __int64)&v13 & -(__int64)(a3 != 0LL));
    if ( a3 )
      *a3 = v13;
  }
  else
  {
    v10 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v10;
}
