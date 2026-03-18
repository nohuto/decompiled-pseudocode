/*
 * XREFs of NtUserCopyAcceleratorTable @ 0x1C00E2620
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserCopyAcceleratorTable(__int64 a1, char *a2, int a3)
{
  unsigned __int64 v3; // rdi
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // rcx
  _BYTE v15[48]; // [rsp+38h] [rbp-30h] BYREF

  v3 = a3;
  v6 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v15);
  v7 = HMValidateHandle(a1, 8);
  v9 = v7;
  if ( v7 )
  {
    if ( a2 )
    {
      if ( v3 > 0x2AAAAAAAAAAAAAAALL )
        ExRaiseAccessViolation();
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8);
      ProbeForWrite(a2, 6 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
      if ( (int)v3 > *(_DWORD *)(v9 + 24) )
        LODWORD(v3) = *(_DWORD *)(v9 + 24);
      while ( v6 < (int)v3 )
      {
        v14 = 3LL * v6;
        *(_BYTE *)(v9 + 2 * v14 + 29) = 0;
        *(_DWORD *)&a2[2 * v14] = *(_DWORD *)(v9 + 6LL * v6 + 28);
        *(_WORD *)&a2[2 * v14 + 4] = *(_WORD *)(v9 + 6LL * v6 + 32);
        a2[2 * v14] = a2[6 * v6++] & 0x7F;
      }
    }
    else
    {
      LODWORD(v3) = *(_DWORD *)(v7 + 24);
    }
  }
  else
  {
    LODWORD(v3) = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v15);
  UserSessionSwitchLeaveCrit(v11, v10);
  return (unsigned int)v3;
}
