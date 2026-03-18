/*
 * XREFs of ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x1C006A6BC
 * Callers:
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C001C9B0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C006ADD8 (--1FxDevice@@UEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C0057508 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 */

FxIrpPreprocessInfo *__fastcall FxIrpPreprocessInfo::`scalar deleting destructor'(FxIrpPreprocessInfo *this)
{
  `vector destructor iterator'(
    (char *)this->Dispatch,
    0x18uLL,
    28,
    (void (__fastcall *)(void *))FxIrpPreprocessInfo::Info::~Info);
  if ( this )
    FxPoolFree(this);
  return this;
}
