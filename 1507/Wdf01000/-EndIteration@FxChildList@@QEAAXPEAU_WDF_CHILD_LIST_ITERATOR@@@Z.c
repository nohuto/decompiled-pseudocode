/*
 * XREFs of ?EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C001E0E8
 * Callers:
 *     imp_WdfFdoUnlockStaticChildListFromIteration @ 0x1C0008280 (imp_WdfFdoUnlockStaticChildListFromIteration.c)
 *     imp_WdfChildListEndIteration @ 0x1C002EFE0 (imp_WdfChildListEndIteration.c)
 * Callees:
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C001DBF0 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 */

void __fastcall FxChildList::EndIteration(FxChildList *this, _WDF_CHILD_LIST_ITERATOR *Iterator)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x12u, WPP_FxChildList_cpp_Traceguids);
  FxChildList::EndScan(this, &Iterator->Size);
  memset(Iterator->Reserved, 0, sizeof(Iterator->Reserved));
}
