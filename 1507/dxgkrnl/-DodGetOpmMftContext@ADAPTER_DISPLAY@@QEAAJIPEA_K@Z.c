/*
 * XREFs of ?DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z @ 0x1C0123E68
 * Callers:
 *     DxgkOpmGetRedirectionInfo @ 0x1C012ABD8 (DxgkOpmGetRedirectionInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DodGetOpmMftContext(ADAPTER_DISPLAY *this, __int64 a2, unsigned __int64 *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax

  v4 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v4 + 1304) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64 *))(v4 + 1304))(*(_QWORD *)(v4 + 1272), a2, a3);
    v9 = v7;
    if ( v7 < 0 )
    {
      v10 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v10 + 24) = v9;
      *(_QWORD *)(v10 + 32) = *((_QWORD *)this + 2);
      WdLogEvent5_WdError(v10);
    }
    return (unsigned int)v9;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v5 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdError(v5);
    return 3221225659LL;
  }
}
