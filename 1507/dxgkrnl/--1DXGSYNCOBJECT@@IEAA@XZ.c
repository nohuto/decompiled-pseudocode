/*
 * XREFs of ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C0083580
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00837A8 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DXGSYNCOBJECT::~DXGSYNCOBJECT(DXGSYNCOBJECT *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // bl
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  if ( *((_DWORD *)this + 32) == 5 )
  {
    v5 = *((_BYTE *)this + 132) & 1;
    Global = DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4);
    (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)(*((_QWORD *)Global + 14) + 8LL) + 896LL))(
      (char *)this + 88,
      v5);
  }
  if ( *((_DWORD *)this + 18) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 936LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_DWORD *)this + 6) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 937LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_QWORD *)this + 5) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 299LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *((_DWORD *)this + 14) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 300LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *((_QWORD *)this + 2) = 0LL;
}
