/*
 * XREFs of NtUserUnregisterClass @ 0x1C011C250
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _UnregisterClass @ 0x1C011D430 (_UnregisterClass.c)
 */

__int64 __fastcall NtUserUnregisterClass(int *a1, __int64 a2, unsigned __int64 a3)
{
  int v5; // edx
  unsigned __int16 *v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx

  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    a1 = (int *)W32UserProbeAddress;
  v5 = *a1;
  v6 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  if ( ((unsigned __int64)v6 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v6 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (unsigned __int64)v6 + (unsigned __int16)v5 + 2;
    if ( v7 >= W32UserProbeAddress || (unsigned __int16)v5 > (unsigned __int16)HIWORD(*a1) || v7 <= (unsigned __int64)v6 )
      *W32UserProbeAddress = 0;
  }
  v10 = UnregisterClass(v6);
  if ( v10 )
  {
    v9 = W32UserProbeAddress;
    if ( a3 >= W32UserProbeAddress )
      a3 = W32UserProbeAddress;
    *(_OWORD *)a3 = 0uLL;
    *(_QWORD *)(a3 + 16) = 0LL;
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v10;
}
