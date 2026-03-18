/*
 * XREFs of ??1CChannelTable@@UEAA@XZ @ 0x1800E13F8
 * Callers:
 *     ??1CConnection@@UEAA@XZ @ 0x1800E0DA4 (--1CConnection@@UEAA@XZ.c)
 *     ??_GCChannelTable@@UEAAPEAXI@Z @ 0x1800E1460 (--_GCChannelTable@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x18005273C (-DeInit@CCriticalSection@@QEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CChannelTable::~CChannelTable(struct _RTL_CRITICAL_SECTION *this)
{
  WPF::ProcessHeapImpl *v2; // rdi

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CChannelTable::`vftable';
  CCriticalSection::DeInit(this + 1);
  v2 = WPF::g_pProcessHeap;
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&HANDLE_TABLE::`vftable';
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, HANDLE))(*(_QWORD *)v2 + 32LL))(v2, this->LockSemaphore);
}
