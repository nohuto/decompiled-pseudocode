/*
 * XREFs of NtUserSetPrecisionTouchPadConfiguration @ 0x1C02206F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0005C30 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _TelemPTPConfigUpdateEx @ 0x1C01CFD04 (_TelemPTPConfigUpdateEx.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0225E2C (_SetPrecisionTouchPadConfiguration.c)
 */

__int64 __fastcall NtUserSetPrecisionTouchPadConfiguration(unsigned __int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _BYTE v8[16]; // [rsp+48h] [rbp-40h] BYREF
  __int128 v9; // [rsp+58h] [rbp-30h] BYREF
  __int64 v10; // [rsp+68h] [rbp-20h]

  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v8);
  v2 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(v2 + 832) <= 0x1FFF )
  {
    EtwTraceUIPISystemError(v2, 0LL, 13LL);
    v3 = 0;
    UserSetLastError(5);
  }
  else
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v2) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v4 = a1 + 4;
    if ( a1 + 4 > W32UserProbeAddress || v4 < a1 )
      *W32UserProbeAddress = 0;
    if ( *(_DWORD *)a1 )
    {
      v3 = 0;
      UserSetLastStatus(-1073741822, 1);
    }
    else
    {
      if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v4) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 + 24 > W32UserProbeAddress || a1 + 24 < a1 )
        *W32UserProbeAddress = 0;
      v9 = *(_OWORD *)a1;
      v10 = *(_QWORD *)(a1 + 16);
      LODWORD(v9) = 0;
      v3 = SetPrecisionTouchPadConfiguration(&v9);
      if ( v3 )
        TelemPTPConfigUpdateEx(0, 0, 0, 0, 0LL);
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v8);
  UserSessionSwitchLeaveCrit(v6, v5);
  return v3;
}
