/*
 * XREFs of NtUserSetWindowArrangement @ 0x1C021A8E0
 * Callers:
 *     <none>
 * Callees:
 *     IsHungWindow @ 0x1C0059680 (IsHungWindow.c)
 *     IAMThreadAccessGranted @ 0x1C00A6F0C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00AAC64 (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     BeginSetWindowArrangement @ 0x1C02024D4 (BeginSetWindowArrangement.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowArrangement(__int64 a1, __int128 *a2, __int128 *a3, int a4)
{
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int128 v19; // [rsp+28h] [rbp-40h] BYREF
  __int128 v20; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = 0;
  gbValidateHandleForIL = 0;
  v9 = ValidateHwnd(a1);
  v12 = v9;
  if ( v9 && (((*(_WORD *)(v9 + 66) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v21;
    v21[1] = v9;
    ++*(_DWORD *)(v9 + 8);
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 320LL) && IAMThreadAccessGranted(gptiCurrent) )
    {
      if ( *(_QWORD *)(v12 + 16) == v14 || (a4 & 0xFFFFFFFC) != 0 )
      {
        v13 = 87LL;
        goto LABEL_22;
      }
      if ( IsHungWindow(v12) || (v15 = *(_QWORD *)(v12 + 152), *(_WORD *)(v15 + 8) == *(_WORD *)(gpsi + 884LL)) )
      {
        v13 = 5023LL;
        goto LABEL_22;
      }
      if ( (a4 & 1) != 0 || CheckLegacyForegroundAccess(gpsi, v15) )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (__int128 *)W32UserProbeAddress;
        v20 = *a2;
        if ( a3 )
        {
          if ( (unsigned __int64)a3 >= W32UserProbeAddress )
            a3 = (__int128 *)W32UserProbeAddress;
          v19 = *a3;
        }
        else
        {
          v19 = 0uLL;
        }
        v8 = BeginSetWindowArrangement(v12, &v20, &v19, a4);
        goto LABEL_23;
      }
    }
    v13 = 5LL;
LABEL_22:
    UserSetLastError(v13);
LABEL_23:
    ThreadUnlock1(v17, v16);
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return v8;
}
