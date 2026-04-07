/*
 * XREFs of ??1CContactManager@@QEAA@XZ @ 0x18007DA24
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x18006C0B0 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x180008DB0 (-Reset@CContactManager@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CContactManager::~CContactManager(void **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  CContactManager::Reset((CContactManager *)this);
  if ( *this )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *this);
  if ( this[1] )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this[1]);
  if ( this[2] )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this[2]);
  if ( this[3] )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this[3]);
  if ( this[4] )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this[4]);
  if ( this[5] )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this[5]);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v2);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 35);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 31);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 27);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 23);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 19);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 15);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 11);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 7);
}
