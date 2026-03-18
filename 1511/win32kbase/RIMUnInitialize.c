/*
 * XREFs of RIMUnInitialize @ 0x1C00626C0
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0062380 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C0062738 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     WppCleanupKm @ 0x1C0128000 (WppCleanupKm.c)
 */

__int64 RIMUnInitialize()
{
  if ( gbRIMInitialized )
  {
    if ( ghModHidParse && *((_QWORD *)ghModHidParse + 3) )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (char *)ghModHidParse + 24, 8uLL);
    dumpLeaks(&gObRimList, "RIMObj leaks");
    dumpLeaks(&gObRimDevList, "RIMDevObj leaks");
    dumpLeaks(&gObRimInputObserverList, "RIMInputObserver leaks");
    WppCleanupKm();
  }
  return 0LL;
}
