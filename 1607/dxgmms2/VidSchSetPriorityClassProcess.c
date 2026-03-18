/*
 * XREFs of VidSchSetPriorityClassProcess @ 0x1C0074000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchSetPriorityClassProcess(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax

  v3 = (int)a2;
  if ( a1 )
  {
    if ( (unsigned int)a2 > 5 )
    {
      v11 = WdLogNewEntry5_WdWarning(a1);
      *(_QWORD *)(v11 + 24) = v3;
      v9 = -1073741811LL;
    }
    else
    {
      if ( (int)a2 < 5
        || a3
        || (v5 = *(_QWORD *)(a1 + 8)) != 0
        && (v6 = *(_QWORD *)(v5 + 72)) != 0
        && (*(unsigned int (**)(void))(v6 + 216))()
        || SeSinglePrivilegeCheck((LUID)14LL, 1) )
      {
        *(_DWORD *)(a1 + 16) = v3;
        return 0LL;
      }
      v11 = WdLogNewEntry5_WdWarning(v10);
      *(_QWORD *)(v11 + 24) = v3;
      v9 = -1073741790LL;
    }
    *(_QWORD *)(v11 + 32) = v9;
    WdLogEvent5_WdWarning(v11);
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2);
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v8);
  }
  return (unsigned int)v9;
}
