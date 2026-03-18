/*
 * XREFs of SepPrivilegeCheck @ 0x14009DDF0
 * Callers:
 *     SepAccessCheck @ 0x14008B8F0 (SepAccessCheck.c)
 *     SePrivilegePolicyCheck @ 0x14008DF10 (SePrivilegePolicyCheck.c)
 *     SepAccessCheckEx @ 0x1401359B4 (SepAccessCheckEx.c)
 *     NtPrivilegeCheck @ 0x1403C312C (NtPrivilegeCheck.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     SeCheckAuditPrivilege @ 0x14046E588 (SeCheckAuditPrivilege.c)
 *     SePrivilegeCheck @ 0x140472B50 (SePrivilegeCheck.c)
 *     PfQuerySuperfetchInformation @ 0x140475A70 (PfQuerySuperfetchInformation.c)
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
 * Callees:
 *     <none>
 */

char __fastcall SepPrivilegeCheck(__int64 a1, __int64 a2, unsigned int a3, char a4, char a5)
{
  int v5; // r10d
  _DWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  int v10; // r9d
  unsigned __int8 v11; // cf
  __int64 v13[2]; // [rsp+0h] [rbp-18h] BYREF

  v5 = 0;
  v13[0] = 0LL;
  if ( !a5 )
    return 1;
  _InterlockedExchange64(v13, *(_QWORD *)(a1 + 72));
  _InterlockedOr((volatile signed __int32 *)v13, 0);
  if ( a3 )
  {
    v7 = (_DWORD *)(a2 + 8);
    v8 = v13[0];
    v9 = a3;
    do
    {
      v10 = *v7 & 0x7FFFFFFF;
      v11 = _bittest64(&v8, (unsigned int)*(v7 - 2));
      *v7 = v10;
      if ( v11 )
      {
        *v7 = v10 | 0x80000000;
        ++v5;
      }
      v7 += 3;
      --v9;
    }
    while ( v9 );
  }
  if ( (a4 & 1) != 0 )
  {
    if ( v5 == a3 )
      return 1;
  }
  else if ( v5 )
  {
    return 1;
  }
  return 0;
}
