/*
 * XREFs of DxgkNotifyDisplayChange @ 0x1C01807D4
 * Callers:
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00DE56C (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNotifyDisplayChange(__int64 a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 v2; // rcx
  void (*v3)(void); // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
    Current = (struct DXGPROCESS *)*((_QWORD *)Current + 9);
  if ( Current && (v3 = (void (*)(void))*((_QWORD *)Current + 48)) != 0LL )
  {
    v3();
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v5 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v7, v6, v8, v9);
    *(_QWORD *)(v5 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
}
