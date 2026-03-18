/*
 * XREFs of NtUserGetGestureConfig @ 0x1C021A200
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     GetGestureConfigSettings @ 0x1C0203ECC (GetGestureConfigSettings.c)
 */

__int64 __fastcall NtUserGetGestureConfig(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        volatile void *Address,
        int a6)
{
  __int64 v9; // rbx
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  size_t v13; // r15
  __int64 v14; // rcx
  _DWORD *v15; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v21[4]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v22[32]; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v23[4]; // [rsp+80h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v22);
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v23;
    v23[1] = v9;
    ++*(_DWORD *)(v9 + 8);
    if ( a6 == 12 )
    {
      if ( (a3 & 0xFFFFFFFE) != 0 )
      {
        UserSetLastError(1004);
        LODWORD(v9) = 0;
LABEL_19:
        ThreadUnlock1(v12, v11);
        goto LABEL_20;
      }
      if ( *(char *)(v9 + 44) < 0 || *(char *)(v9 + 43) < 0 )
      {
        v10 = 1400;
        goto LABEL_18;
      }
      if ( Address )
      {
        if ( (unsigned __int64)a4 >= W32UserProbeAddress )
          a4 = (unsigned int *)W32UserProbeAddress;
        v21[0] = *a4;
        if ( v21[0] - 1 <= 0xFF )
        {
          v13 = 12 * v21[0];
          v15 = (_DWORD *)Win32AllocPoolWithQuota(v13, 1667724117LL);
          if ( v15 )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v14);
            ProbeForWrite(Address, 12LL * v21[0], CurrentProcessWow64Process != 0 ? 1 : 4);
            memmove(v15, (const void *)Address, v13);
            LODWORD(v9) = GetGestureConfigSettings((struct tagWND *)v9, v17, a3, v21, v15);
            if ( (_DWORD)v9 )
              memmove((void *)Address, v15, v13);
            Win32FreePool(v15);
            goto LABEL_19;
          }
          v10 = 8;
          goto LABEL_18;
        }
      }
    }
    v10 = 87;
LABEL_18:
    LODWORD(v9) = 0;
    UserSetLastError(v10);
    goto LABEL_19;
  }
LABEL_20:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v22);
  UserSessionSwitchLeaveCrit(v19, v18);
  return (unsigned int)v9;
}
