/*
 * XREFs of ?Release@CDWMDisplay@@QEBAKXZ @ 0x18003F354
 * Callers:
 *     ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18001E778 (-CreateRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18003EDE8 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ??_GCDWMDisplaySet@@QEAAPEAXI@Z @ 0x18003EFE8 (--_GCDWMDisplaySet@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1CDWMDisplay@@AEAA@XZ @ 0x18003F3A4 (--1CDWMDisplay@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDisplay::Release(CDWMDisplay *this)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
  {
    CDWMDisplay::~CDWMDisplay(this);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDWMDisplay *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  }
  return v2;
}
