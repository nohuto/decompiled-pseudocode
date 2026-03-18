/*
 * XREFs of ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C00A45DC
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00A47B0 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSYNCOBJECT::~DXGSYNCOBJECT(DXGSYNCOBJECT *this, __int64 a2)
{
  DXGGLOBAL *v3; // rax
  char v4; // di
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  if ( *((_DWORD *)this + 32) == 5 )
  {
    v3 = DXGGLOBAL::m_pGlobal;
    v4 = *((_BYTE *)this + 132) & 1;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v5 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v5 + 24) = 982LL;
      WdLogEvent5_WdAssertion(v5);
      v3 = DXGGLOBAL::m_pGlobal;
    }
    LOBYTE(a2) = v4;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)(*((_QWORD *)v3 + 14) + 8LL) + 920LL))((char *)this + 88, a2);
  }
  if ( *((_DWORD *)this + 18) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 1042LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_DWORD *)this + 6) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 1043LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_QWORD *)this + 5) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 306LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_DWORD *)this + 14) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 307LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *((_QWORD *)this + 2) = 0LL;
}
