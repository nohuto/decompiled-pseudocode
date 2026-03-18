/*
 * XREFs of NtUserGetPrecisionTouchPadConfiguration @ 0x1C000D650
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000C524 (UserSetLastStatus.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C00E4AD0 (_GetPrecisionTouchPadConfiguration.c)
 */

__int64 __fastcall NtUserGetPrecisionTouchPadConfiguration(unsigned __int64 Address)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int PrecisionTouchPadConfiguration; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]
  char v11; // [rsp+78h] [rbp+10h] BYREF

  v9 = 0uLL;
  v10 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v2) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & Address) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( Address + 4 > W32UserProbeAddress || Address + 4 < Address )
    *W32UserProbeAddress = 0;
  LODWORD(v9) = *(_DWORD *)Address;
  if ( (_DWORD)v9 )
  {
    PrecisionTouchPadConfiguration = 0;
    UserSetLastStatus(-1073741822, 1);
  }
  else
  {
    PrecisionTouchPadConfiguration = GetPrecisionTouchPadConfiguration(&v9);
    if ( PrecisionTouchPadConfiguration )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v3);
      ProbeForWrite((volatile void *)Address, 0x18uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      *(_OWORD *)Address = v9;
      *(_QWORD *)(Address + 16) = v10;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  UserSessionSwitchLeaveCrit(v7, v6);
  return PrecisionTouchPadConfiguration;
}
