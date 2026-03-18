/*
 * XREFs of ??0FxIrpPreprocessInfo@@QEAA@XZ @ 0x1C00641A8
 * Callers:
 *     imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C0075EC0 (imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C002F428 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

void __fastcall FxIrpPreprocessInfo::FxIrpPreprocessInfo(FxIrpPreprocessInfo *this)
{
  `vector constructor iterator'(
    (char *)this->Dispatch,
    0x18uLL,
    0x1CuLL,
    (void *(__fastcall *)(void *))FxIrpPreprocessInfo::Info::Info);
  this->ClassExtension = 0;
  this->ListEntry.Blink = (_LIST_ENTRY *)this;
  this->ListEntry.Flink = (_LIST_ENTRY *)this;
}
