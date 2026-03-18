/*
 * XREFs of NtUserLoadKeyboardLayoutEx @ 0x1C01399C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _GetProcessWindowStation @ 0x1C00DD080 (_GetProcessWindowStation.c)
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0139C54 (xxxSafeLoadKeyboardLayoutEx.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C013AC8C (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
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
  struct tagWINDOWSTATION *ProcessWindowStation; // r14
  int v16; // ecx
  const unsigned __int16 *v17; // r8
  unsigned __int64 v18; // rdx
  _OWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _OWORD *v22; // rax
  _OWORD *v23; // rcx
  _BYTE v26[792]; // [rsp+98h] [rbp-680h] BYREF
  _BYTE v27[784]; // [rsp+3B0h] [rbp-368h] BYREF
  unsigned __int16 v28[12]; // [rsp+6C0h] [rbp-58h] BYREF

  v11 = a6;
  KeyboardLayout = 0LL;
  EnterCrit(1LL);
  if ( (a8 & 0x1F00FC60) != 0 )
  {
    UserSetLastError(1004);
  }
  else
  {
    memset(v27, 0, sizeof(v27));
    ProcessWindowStation = (struct tagWINDOWSTATION *)GetProcessWindowStation(0LL);
    if ( a6 >= W32UserProbeAddress )
      v11 = W32UserProbeAddress;
    v16 = *(_DWORD *)v11;
    v17 = *(const unsigned __int16 **)(v11 + 8);
    if ( ((unsigned __int8)v17 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = (unsigned __int64)v17 + (unsigned __int16)v16 + 2;
    if ( v18 >= W32UserProbeAddress
      || (unsigned __int16)v16 > (unsigned __int16)HIWORD(*(_DWORD *)v11)
      || (v16 & 1) != 0
      || v18 <= (unsigned __int64)v17 )
    {
      *W32UserProbeAddress = 0;
    }
    if ( (int)RtlStringCchCopyNW(v28, 9uLL, v17, (unsigned __int64)(unsigned __int16)v16 >> 1) >= 0 )
    {
      if ( a4 )
      {
        if ( a4 + 49 < a4 || (unsigned __int64)(a4 + 49) > W32UserProbeAddress )
          a4 = (_OWORD *)W32UserProbeAddress;
        v19 = v26;
        v20 = 6LL;
        v21 = 6LL;
        do
        {
          *v19 = *a4;
          v19[1] = a4[1];
          v19[2] = a4[2];
          v19[3] = a4[3];
          v19[4] = a4[4];
          v19[5] = a4[5];
          v19[6] = a4[6];
          v19 += 8;
          *(v19 - 1) = a4[7];
          a4 += 8;
          --v21;
        }
        while ( v21 );
        *v19 = *a4;
        v22 = v27;
        v23 = v26;
        do
        {
          *v22 = *v23;
          v22[1] = v23[1];
          v22[2] = v23[2];
          v22[3] = v23[3];
          v22[4] = v23[4];
          v22[5] = v23[5];
          v22[6] = v23[6];
          v22 += 8;
          *(v22 - 1) = v23[7];
          v23 += 8;
          --v20;
        }
        while ( v20 );
        *v22 = *v23;
      }
      KeyboardLayout = xxxSafeLoadKeyboardLayoutEx(
                         ProcessWindowStation,
                         a1,
                         a5,
                         a2,
                         a3,
                         (struct tagKBDTABLE_MULT_INTERNAL *)v27,
                         v28,
                         a7,
                         a8);
    }
  }
  UserSessionSwitchLeaveCrit(v14, v13);
  return KeyboardLayout;
}
