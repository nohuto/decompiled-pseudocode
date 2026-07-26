/*
 * XREFs of ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C00A5B6C
 * Callers:
 *     ?SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z @ 0x1C00A6E1C (-SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C00A7730 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00A5ABC (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 */

void __fastcall NDIS_BIND_DRIVER_BASE::SetRunningDriverIsReady(
        NDIS_BIND_DRIVER_BASE *this,
        bool a2,
        enum CallRunMode a3)
{
  void (__fastcall *v5)(_LIST_ENTRY *); // rdx

  this->DriverReady = a2;
  _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
  NDIS_BIND_DRIVER_BASE::ForEachLink(
    this,
    (void (__fastcall *)(_LIST_ENTRY *))lambda_9a257e6d5af29d57c0884fc82970b8d2_::_helper_func_cdecl_);
  v5 = (void (__fastcall *)(_LIST_ENTRY *))lambda_1ce06b2b40968439b229a98218e85867_::_helper_func_cdecl_;
  if ( a3 )
    v5 = (void (__fastcall *)(_LIST_ENTRY *))lambda_771a8e8e365bef8cca390f7125e613d4_::_helper_func_cdecl_;
  NDIS_BIND_DRIVER_BASE::ForEachLink(this, v5);
  Ndis::BindEngine::EndBindOperation();
}
