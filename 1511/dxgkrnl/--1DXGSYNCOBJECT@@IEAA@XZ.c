/*
 * XREFs of ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C0094650
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00948DC (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSYNCOBJECT::~DXGSYNCOBJECT(DXGSYNCOBJECT *this)
{
  struct DXGGLOBAL *v2; // rax
  bool v3; // di
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  if ( *((_DWORD *)this + 38) == 5 )
  {
    v2 = DXGGLOBAL::m_pGlobal;
    v3 = (*((_DWORD *)this + 39) & 1) != 0;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v4 = WdLogNewEntry5_WdAssertion(1LL);
      *(_QWORD *)(v4 + 24) = 1016LL;
      WdLogEvent5_WdAssertion(v4);
      v2 = DXGGLOBAL::m_pGlobal;
    }
    (*(void (__fastcall **)(char *, bool))(*(_QWORD *)(*((_QWORD *)v2 + 14) + 8LL) + 904LL))((char *)this + 112, v3);
  }
  if ( *((_DWORD *)this + 24) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 993LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_DWORD *)this + 6) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 994LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_QWORD *)this + 4) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 302LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_DWORD *)this + 10) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 303LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_DWORD *)this + 11) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 304LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *((_QWORD *)this + 2) = 0LL;
}
