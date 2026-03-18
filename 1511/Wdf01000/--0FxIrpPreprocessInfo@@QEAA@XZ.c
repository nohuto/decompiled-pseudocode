/*
 * XREFs of ??0FxIrpPreprocessInfo@@QEAA@XZ @ 0x1C005723C
 * Callers:
 *     imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C0065FD0 (imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C0031F98 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 */

void __fastcall FxIrpPreprocessInfo::FxIrpPreprocessInfo(FxIrpPreprocessInfo *this)
{
  `vector constructor iterator'(
    (char *)this->Dispatch,
    0x18uLL,
    28,
    (void *(__fastcall *)(void *))FxIrpPreprocessInfo::Info::Info);
  this->ClassExtension = 0;
  this->ListEntry.Blink = (_LIST_ENTRY *)this;
  this->ListEntry.Flink = (_LIST_ENTRY *)this;
}
