/*
 * XREFs of VidSchSetPriorityClassProcess @ 0x1C006DD00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchSetPriorityClassProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax

  v4 = (int)a2;
  if ( a1 )
  {
    if ( (unsigned int)a2 > 5 )
    {
      v12 = WdLogNewEntry5_WdWarning(a1);
      *(_QWORD *)(v12 + 24) = v4;
      v10 = -1073741811LL;
    }
    else
    {
      if ( (int)a2 < 5
        || (_DWORD)a3
        || (v6 = *(_QWORD *)(a1 + 8)) != 0
        && (v7 = *(_QWORD *)(v6 + 80)) != 0
        && (*(unsigned int (**)(void))(v7 + 216))()
        || SeSinglePrivilegeCheck((LUID)14LL, 1) )
      {
        *(_DWORD *)(a1 + 16) = v4;
        return 0LL;
      }
      v12 = WdLogNewEntry5_WdWarning(v11);
      *(_QWORD *)(v12 + 24) = v4;
      v10 = -1073741790LL;
    }
    *(_QWORD *)(v12 + 32) = v10;
    WdLogEvent5_WdWarning(v12);
  }
  else
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v9);
  }
  return (unsigned int)v10;
}
