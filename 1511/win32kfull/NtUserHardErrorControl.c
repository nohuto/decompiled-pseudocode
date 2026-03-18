/*
 * XREFs of NtUserHardErrorControl @ 0x1C021C830
 * Callers:
 *     <none>
 * Callees:
 *     xxxHardErrorControl @ 0x1C02268E8 (xxxHardErrorControl.c)
 */

__int64 __fastcall NtUserHardErrorControl(unsigned int a1, __int64 a2, _OWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edi
  _BYTE *v13; // rdx
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  if ( PsGetCurrentProcess(v7, v6, v8, v9) == gpepCSRSS )
  {
    if ( a3 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = a3;
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        v13 = (_BYTE *)W32UserProbeAddress;
      *v13 = *v13;
      v13[15] = v13[15];
      v15 = *a3;
    }
    v12 = xxxHardErrorControl(a1, a2, (unsigned __int64)&v15 & -(__int64)(a3 != 0LL));
    if ( a3 )
      *a3 = v15;
  }
  else
  {
    v12 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return v12;
}
