/*
 * XREFs of NtUserUnregisterClass @ 0x1C0109FB0
 * Callers:
 *     <none>
 * Callees:
 *     _UnregisterClass @ 0x1C0071F88 (_UnregisterClass.c)
 *     _W32ExceptionHandler @ 0x1C01BF6B8 (_W32ExceptionHandler.c)
 */

__int64 __fastcall NtUserUnregisterClass(int *a1, __int64 a2, unsigned __int64 a3)
{
  int v6; // edx
  unsigned __int16 *v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int128 v13; // [rsp+38h] [rbp-20h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h]

  v13 = 0uLL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    a1 = (int *)W32UserProbeAddress;
  v6 = *a1;
  v7 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  if ( ((unsigned __int64)v7 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v7 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (unsigned __int64)v7 + (unsigned __int16)v6 + 2;
    if ( v8 >= W32UserProbeAddress
      || (unsigned __int16)v6 > (unsigned __int16)HIWORD(*a1)
      || (v6 & 1) != 0
      || v8 <= (unsigned __int64)v7 )
    {
      *W32UserProbeAddress = 0;
    }
  }
  v11 = UnregisterClass(v7, a2, &v13);
  if ( v11 )
  {
    v10 = W32UserProbeAddress;
    if ( a3 >= W32UserProbeAddress )
      a3 = W32UserProbeAddress;
    *(_OWORD *)a3 = v13;
    *(_QWORD *)(a3 + 16) = v14;
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v11;
}
