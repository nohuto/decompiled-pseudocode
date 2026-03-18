/*
 * XREFs of NtUserLoadKeyboardLayoutEx @ 0x1C00E6460
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _GetProcessWindowStation @ 0x1C00DAF00 (_GetProcessWindowStation.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00E514C (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C00E66F4 (xxxSafeLoadKeyboardLayoutEx.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall NtUserLoadKeyboardLayoutEx(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        _OWORD *a4,
        HKL a5,
        unsigned __int64 a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v11; // rsi
  __int64 KeyboardLayout; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  struct tagWINDOWSTATION *ProcessWindowStation; // r14
  int v17; // ecx
  char *v18; // r8
  unsigned __int64 v19; // rdx
  _OWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _OWORD *v23; // rax
  _OWORD *v24; // rcx
  _BYTE v27[792]; // [rsp+98h] [rbp-680h] BYREF
  _BYTE v28[784]; // [rsp+3B0h] [rbp-368h] BYREF
  unsigned __int16 v29[12]; // [rsp+6C0h] [rbp-58h] BYREF

  v11 = a6;
  KeyboardLayout = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (a8 & 0x1F00FC60) != 0 )
  {
    UserSetLastError(1004LL);
  }
  else
  {
    memset(v28, 0, sizeof(v28));
    ProcessWindowStation = (struct tagWINDOWSTATION *)GetProcessWindowStation(0LL, v15);
    if ( a6 >= W32UserProbeAddress )
      v11 = W32UserProbeAddress;
    v17 = *(_DWORD *)v11;
    v18 = *(char **)(v11 + 8);
    if ( ((unsigned __int8)v18 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = (unsigned __int64)&v18[(unsigned __int16)v17 + 2];
    if ( v19 >= W32UserProbeAddress
      || (unsigned __int16)v17 > (unsigned __int16)HIWORD(*(_DWORD *)v11)
      || (v17 & 1) != 0
      || v19 <= (unsigned __int64)v18 )
    {
      *W32UserProbeAddress = 0;
    }
    if ( (int)RtlStringCchCopyNW((char *)v29, 9LL, v18, (unsigned __int64)(unsigned __int16)v17 >> 1) >= 0 )
    {
      if ( a4 )
      {
        if ( a4 + 49 < a4 || (unsigned __int64)(a4 + 49) > W32UserProbeAddress )
          a4 = (_OWORD *)W32UserProbeAddress;
        v20 = v27;
        v21 = 6LL;
        v22 = 6LL;
        do
        {
          *v20 = *a4;
          v20[1] = a4[1];
          v20[2] = a4[2];
          v20[3] = a4[3];
          v20[4] = a4[4];
          v20[5] = a4[5];
          v20[6] = a4[6];
          v20 += 8;
          *(v20 - 1) = a4[7];
          a4 += 8;
          --v22;
        }
        while ( v22 );
        *v20 = *a4;
        v23 = v28;
        v24 = v27;
        do
        {
          *v23 = *v24;
          v23[1] = v24[1];
          v23[2] = v24[2];
          v23[3] = v24[3];
          v23[4] = v24[4];
          v23[5] = v24[5];
          v23[6] = v24[6];
          v23 += 8;
          *(v23 - 1) = v24[7];
          v24 += 8;
          --v21;
        }
        while ( v21 );
        *v23 = *v24;
      }
      KeyboardLayout = xxxSafeLoadKeyboardLayoutEx(
                         ProcessWindowStation,
                         a1,
                         a5,
                         a2,
                         a3,
                         (struct tagKBDTABLE_MULT_INTERNAL *)v28,
                         v29,
                         a7,
                         a8);
    }
  }
  UserSessionSwitchLeaveCrit(v14, v13);
  return KeyboardLayout;
}
