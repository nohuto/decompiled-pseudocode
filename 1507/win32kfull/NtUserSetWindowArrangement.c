/*
 * XREFs of NtUserSetWindowArrangement @ 0x1C0220B40
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00455E8 (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0082890 (IAMThreadAccessGranted.c)
 *     IsHungWindow @ 0x1C008CD50 (IsHungWindow.c)
 *     BeginSetWindowArrangement @ 0x1C020AE80 (BeginSetWindowArrangement.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowArrangement(__int64 a1, __int128 *a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  LARGE_INTEGER *v10; // rbx
  int v11; // ecx
  __int64 v12; // r8
  __int64 QuadPart; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int128 v17; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v18[4]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(1LL);
  v6 = 0;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v10 = (LARGE_INTEGER *)v7;
  if ( v7 && (((*(_WORD *)(v7 + 66) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v18[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v18;
    v18[1] = v7;
    ++*(_DWORD *)(v7 + 8);
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 312LL) && IAMThreadAccessGranted(gptiCurrent) )
    {
      if ( v10[2].QuadPart == v12 || (a3 & 0xFFFFFFFC) != 0 )
      {
        v11 = 87;
        goto LABEL_17;
      }
      if ( IsHungWindow((__int64)v10)
        || (QuadPart = v10[19].QuadPart, *(_WORD *)(QuadPart + 8) == *(_WORD *)(gpsi + 884LL)) )
      {
        v11 = 5023;
        goto LABEL_17;
      }
      if ( (a3 & 1) != 0 || CheckLegacyForegroundAccess(gpsi, QuadPart) )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (__int128 *)W32UserProbeAddress;
        v17 = *a2;
        v6 = BeginSetWindowArrangement(v10, &v17, a3);
        goto LABEL_18;
      }
    }
    v11 = 5;
LABEL_17:
    UserSetLastError(v11);
LABEL_18:
    ThreadUnlock1(v15, v14);
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v6;
}
