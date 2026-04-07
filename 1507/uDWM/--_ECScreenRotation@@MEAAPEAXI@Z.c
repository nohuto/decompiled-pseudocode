/*
 * XREFs of ??_ECScreenRotation@@MEAAPEAXI@Z @ 0x180077240
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x18008DE8C (--1CScreenRotation@@MEAA@XZ.c)
 */

CScreenRotation *__fastcall CScreenRotation::`vector deleting destructor'(CScreenRotation *this, char a2)
{
  CScreenRotation::~CScreenRotation(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CScreenRotation *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
