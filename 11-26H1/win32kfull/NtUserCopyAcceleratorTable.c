/*
 * XREFs of NtUserCopyAcceleratorTable @ 0x1402067A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 */

__int64 __fastcall NtUserCopyAcceleratorTable(__int64 a1, char *a2, int a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rdx
  char *v6; // rcx
  __int64 v7; // rbx
  __int64 CurrentProcessWow64Process; // rax
  int i; // r8d
  __int64 v11; // rdx
  __int64 v12; // [rsp+38h] [rbp-20h] BYREF
  char *v13; // [rsp+40h] [rbp-18h]

  v3 = a3;
  EnterLeaveCritShared::EnterLeaveCritShared(&v12, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v12);
  v7 = HMValidateHandleWithDescriptor(a1, 8u);
  if ( v7 )
  {
    if ( a2 )
    {
      if ( v3 > 0x2AAAAAAAAAAAAAAALL )
        ExRaiseAccessViolation();
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6, v5);
      ProbeForWrite(a2, 6 * v3, 2 - (CurrentProcessWow64Process != 0));
      if ( (int)v3 > *(_DWORD *)(v7 + 24) )
        LODWORD(v3) = *(_DWORD *)(v7 + 24);
      for ( i = 0; i < (int)v3; ++i )
      {
        v11 = 3LL * i;
        *(_BYTE *)(v7 + 2 * v11 + 29) = 0;
        v6 = a2;
        *(_DWORD *)&a2[2 * v11] = *(_DWORD *)(v7 + 6LL * i + 28);
        *(_WORD *)&a2[2 * v11 + 4] = *(_WORD *)(v7 + 6LL * i + 32);
        a2[2 * v11] &= ~0x80u;
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
  if ( (_BYTE)v12 )
  {
    v6 = v13;
    --*((_DWORD *)v13 + 7);
  }
  UserSessionSwitchLeaveCrit(v6);
  return (unsigned int)v3;
}
