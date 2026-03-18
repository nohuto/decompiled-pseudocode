/*
 * XREFs of AMLIIterateParentNext @ 0x1C00081F4
 * Callers:
 *     OSNotifyCreateOperationRegion @ 0x1C000A030 (OSNotifyCreateOperationRegion.c)
 *     GetOpRegionScopeWorker @ 0x1C000A0D0 (GetOpRegionScopeWorker.c)
 *     OSNotifyDeviceCheck @ 0x1C003DA98 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C003DBC0 (OSNotifyDeviceEnum.c)
 *     AcpiHandleInternalNotify @ 0x1C003F28C (AcpiHandleInternalNotify.c)
 * Callees:
 *     AMLIGetParent @ 0x1C000B95C (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 */

__int64 __fastcall AMLIIterateParentNext(__int64 a1)
{
  __int64 v2; // rbx

  v2 = AMLIGetParent();
  AMLIDereferenceHandleEx(a1);
  return v2;
}
