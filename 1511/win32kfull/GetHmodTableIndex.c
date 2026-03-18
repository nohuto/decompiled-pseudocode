/*
 * XREFs of GetHmodTableIndex @ 0x1C00848C0
 * Callers:
 *     zzzSetWindowsHookEx @ 0x1C00823B4 (zzzSetWindowsHookEx.c)
 *     _SetWinEventHook @ 0x1C0087C88 (_SetWinEventHook.c)
 *     _RegisterUserApiHook @ 0x1C0101144 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C01013B4 (_RegisterDManipHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall GetHmodTableIndex(int *a1)
{
  int v1; // r8d
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int16 v4; // ax
  int v5; // ebx
  unsigned __int16 near **v6; // rcx
  unsigned __int16 near **v8; // rcx
  int v9; // [rsp+58h] [rbp+10h]

  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    a1 = (int *)W32UserProbeAddress;
  v1 = *a1;
  v9 = *a1;
  v2 = *((_QWORD *)a1 + 1);
  if ( (v2 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v3 = (unsigned __int16)v1 + v2 + 2;
  if ( v3 >= W32UserProbeAddress || (unsigned __int16)v1 > HIWORD(v9) || v3 <= v2 )
    *W32UserProbeAddress = 0;
  v4 = UserAddAtomToAtomTableEx(UserLibmgmtAtomTableHandle, v2, 0LL, 2LL);
  if ( v4 )
  {
    v5 = 0;
    if ( catomSysTableEntries > 0 )
    {
      v6 = &aatomSysLoaded;
      do
      {
        if ( *(_WORD *)v6 == v4 )
          break;
        ++v5;
        v6 = (unsigned __int16 near **)((char *)v6 + 2);
      }
      while ( v5 < catomSysTableEntries );
    }
    if ( v5 != catomSysTableEntries )
    {
      UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v4, &aatomSysLoaded);
      return (unsigned int)v5;
    }
    v5 = 0;
    if ( catomSysTableEntries > 0 )
    {
      v8 = &aatomSysLoaded;
      do
      {
        if ( !*(_WORD *)v8 )
          break;
        ++v5;
        v8 = (unsigned __int16 near **)((char *)v8 + 2);
      }
      while ( v5 < catomSysTableEntries );
    }
    if ( v5 != catomSysTableEntries )
    {
LABEL_23:
      *((_WORD *)&aatomSysLoaded + v5) = v4;
      *((_DWORD *)&acatomSysUse + v5) = 0;
      *((_DWORD *)&acatomSysDepends + v5) = 0;
      return (unsigned int)v5;
    }
    if ( v5 != 32 )
    {
      ++catomSysTableEntries;
      goto LABEL_23;
    }
    UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v4, &aatomSysLoaded);
    UserSetLastError(8);
  }
  return 0xFFFFFFFFLL;
}
