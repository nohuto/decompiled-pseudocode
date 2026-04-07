/*
 * XREFs of ??_GCTextCache@@UEAAPEAXI@Z @ 0x18006C5B0
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x18006C0B0 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CTextCache@@UEAA@XZ @ 0x180074E90 (--1CTextCache@@UEAA@XZ.c)
 */

CTextCache *__fastcall CTextCache::`scalar deleting destructor'(CTextCache *this, char a2)
{
  CTextCache::~CTextCache(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTextCache *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
