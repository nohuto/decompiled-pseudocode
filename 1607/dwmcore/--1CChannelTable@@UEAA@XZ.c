/*
 * XREFs of ??1CChannelTable@@UEAA@XZ @ 0x180113AE4
 * Callers:
 *     ??_GCConnection@@UEAAPEAXI@Z @ 0x180113760 (--_GCConnection@@UEAAPEAXI@Z.c)
 *     ??_GCChannelTable@@UEAAPEAXI@Z @ 0x180113B30 (--_GCChannelTable@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x18009EA5C (-DeInit@CCriticalSection@@QEAAXXZ.c)
 */

void __fastcall CChannelTable::~CChannelTable(struct _RTL_CRITICAL_SECTION *this)
{
  WPF::ProcessHeapImpl *v2; // rcx
  HANDLE LockSemaphore; // rdx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CChannelTable::`vftable';
  CCriticalSection::DeInit(this + 1);
  v2 = WPF::g_pProcessHeap;
  LockSemaphore = this->LockSemaphore;
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&HANDLE_TABLE::`vftable';
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, HANDLE))(*(_QWORD *)v2 + 32LL))(v2, LockSemaphore);
}
