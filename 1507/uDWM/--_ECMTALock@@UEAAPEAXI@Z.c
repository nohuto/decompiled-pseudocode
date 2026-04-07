/*
 * XREFs of ??_ECMTALock@@UEAAPEAXI@Z @ 0x18009EE60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMTALock@@UEAA@XZ @ 0x18003F010 (--1CMTALock@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CMTALock *__fastcall CMTALock::`vector deleting destructor'(CMTALock *this, char a2)
{
  CMTALock::~CMTALock(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMTALock *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
