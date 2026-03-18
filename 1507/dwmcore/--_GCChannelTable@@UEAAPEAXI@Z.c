/*
 * XREFs of ??_GCChannelTable@@UEAAPEAXI@Z @ 0x1800E1460
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CChannelTable@@UEAA@XZ @ 0x1800E13F8 (--1CChannelTable@@UEAA@XZ.c)
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
