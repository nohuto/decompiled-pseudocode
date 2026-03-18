/*
 * XREFs of ?GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z @ 0x1C009A458
 * Callers:
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C00BB068 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetVBlankEvent(ADAPTER_DISPLAY *this, unsigned int a2, struct _KEVENT **a3)
{
  __int64 v4; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rax

  v4 = a2;
  if ( a2 >= *((_DWORD *)this + 26) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 24344LL;
    WdLogEvent5_WdAssertion(v8);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 10) + 216LL))() )
    *a3 = *(struct _KEVENT **)(1016 * v4 + *((_QWORD *)this + 17) + 824);
  return 0LL;
}
