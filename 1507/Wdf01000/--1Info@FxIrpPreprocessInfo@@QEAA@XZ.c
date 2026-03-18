/*
 * XREFs of ??1Info@FxIrpPreprocessInfo@@QEAA@XZ @ 0x1C006B1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxIrpPreprocessInfo::Info::~Info(FxIrpPreprocessInfo::Info *this)
{
  unsigned __int8 *MinorFunctions; // rcx

  MinorFunctions = this->MinorFunctions;
  if ( MinorFunctions )
    FxPoolFree(MinorFunctions);
}
