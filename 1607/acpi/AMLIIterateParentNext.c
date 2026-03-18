/*
 * XREFs of AMLIIterateParentNext @ 0x1C000B518
 * Callers:
 *     GetOpRegionScopeWorker @ 0x1C000C430 (GetOpRegionScopeWorker.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000D088 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyDeviceCheck @ 0x1C00512D0 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C00514B8 (OSNotifyDeviceEnum.c)
 *     AcpiHandleInternalNotify @ 0x1C0053634 (AcpiHandleInternalNotify.c)
 * Callees:
 *     AMLIGetParent @ 0x1C000D028 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 */

__int64 __fastcall AMLIIterateParentNext(__int64 a1)
{
  __int64 v2; // rbx

  v2 = AMLIGetParent();
  AMLIDereferenceHandleEx(a1, 0LL);
  return v2;
}
