/*
 * XREFs of NtUserSetPrecisionTouchPadConfiguration @ 0x1C021A2F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000C524 (UserSetLastStatus.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TelemPTPConfigUpdateEx @ 0x1C01C9584 (_TelemPTPConfigUpdateEx.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0225EF0 (_SetPrecisionTouchPadConfiguration.c)
 */

__int64 __fastcall NtUserSetPrecisionTouchPadConfiguration(unsigned __int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _BYTE v8[8]; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v9; // [rsp+60h] [rbp-78h]
  int v10; // [rsp+68h] [rbp-70h]
  int v11; // [rsp+6Ch] [rbp-6Ch]
  unsigned __int64 v12; // [rsp+70h] [rbp-68h]
  int v13; // [rsp+78h] [rbp-60h]
  int v14; // [rsp+7Ch] [rbp-5Ch]
  __int64 v15[2]; // [rsp+90h] [rbp-48h] BYREF
  __int64 v16[2]; // [rsp+A0h] [rbp-38h] BYREF
  __int128 v17; // [rsp+B0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+C0h] [rbp-18h]

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v8);
  v2 = *(_QWORD *)(gptiCurrent + 376LL);
  if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(v2 + 824) <= 0x1FFF )
  {
    EtwTraceUIPISystemError(v2, 0LL, 13LL);
    v3 = 0;
    UserSetLastError(5LL);
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
      v17 = *(_OWORD *)a1;
      v18 = *(_QWORD *)(a1 + 16);
      LODWORD(v17) = 0;
      v3 = SetPrecisionTouchPadConfiguration(&v17);
      if ( v3 )
      {
        v11 = 0;
        v14 = 0;
        v10 = 0;
        v13 = 0;
        *(_OWORD *)v15 = v9;
        *(_OWORD *)v16 = v12;
        TelemPTPConfigUpdateEx(0, 1, 0, 0, (struct tagRECT *)v16, (struct tagRECT *)v15, 0LL);
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v8);
  UserSessionSwitchLeaveCrit(v6, v5);
  return v3;
}
