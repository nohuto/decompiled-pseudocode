/*
 * XREFs of ?GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z @ 0x1C00CF14C
 * Callers:
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C00CEA48 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetVBlankEvent(ADAPTER_DISPLAY *this, __int64 a2, struct _KEVENT **a3, __int64 a4)
{
  __int64 v5; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rax

  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 23760LL;
    WdLogEvent5_WdAssertion(v9);
  }
  Current = DXGPROCESS::GetCurrent((__int64)this);
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 10) + 216LL))() )
    *a3 = *(struct _KEVENT **)(1008 * v5 + *((_QWORD *)this + 14) + 824);
  return 0LL;
}
