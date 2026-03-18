/*
 * XREFs of ??1CChannelTable@@UEAA@XZ @ 0x1800FFB08
 * Callers:
 *     ??1CConnection@@UEAA@XZ @ 0x1800FF4C4 (--1CConnection@@UEAA@XZ.c)
 *     ??_GCChannelTable@@UEAAPEAXI@Z @ 0x1800FFB70 (--_GCChannelTable@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x1800A257C (-DeInit@CCriticalSection@@QEAAXXZ.c)
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
