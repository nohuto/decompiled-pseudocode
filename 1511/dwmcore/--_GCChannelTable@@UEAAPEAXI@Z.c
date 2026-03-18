/*
 * XREFs of ??_GCChannelTable@@UEAAPEAXI@Z @ 0x1800FFB70
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CChannelTable@@UEAA@XZ @ 0x1800FFB08 (--1CChannelTable@@UEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CChannelTable::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CChannelTable::~CChannelTable(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RTL_CRITICAL_SECTION *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
