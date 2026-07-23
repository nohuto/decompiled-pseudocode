/*
 * XREFs of CmpCheckCreateAccessOnKcbStack @ 0x1400A8FFC
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     CmpCheckCreateAccess @ 0x1404BBDE0 (CmpCheckCreateAccess.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x1404BBE90 (CmpGetSecurityDescriptorForKcbStack.c)
 */

char __fastcall CmpCheckCreateAccessOnKcbStack(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        KPROCESSOR_MODE a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  char v8; // bl
  __int64 SecurityDescriptorForKcbStack; // rax
  __int64 v12; // r9

  v8 = 0;
  if ( a6 )
  {
    *(_QWORD *)(a3 + 16) = 0LL;
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, a4) )
      *(_DWORD *)(a3 + 20) |= 0x1020019u;
    if ( SeSinglePrivilegeCheck(SeRestorePrivilege, a4) )
      *(_DWORD *)(a3 + 20) |= 0x10F0006u;
    if ( *(_DWORD *)(a3 + 20) )
    {
      *a8 = 0;
      return 1;
    }
    else
    {
      *a8 = -1073741790;
    }
  }
  else
  {
    SecurityDescriptorForKcbStack = CmpGetSecurityDescriptorForKcbStack(a2, a7);
    LOBYTE(v12) = a4;
    return CmpCheckCreateAccess(a5, SecurityDescriptorForKcbStack, a3, v12, a5, a8);
  }
  return v8;
}
