/*
 * XREFs of AMLIIterateParentNext @ 0x1C0007700
 * Callers:
 *     OSNotifyCreateOperationRegion @ 0x1C000A110 (OSNotifyCreateOperationRegion.c)
 *     GetOpRegionScopeWorker @ 0x1C000A1B0 (GetOpRegionScopeWorker.c)
 *     OSNotifyDeviceCheck @ 0x1C003DEA8 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C003DFD0 (OSNotifyDeviceEnum.c)
 *     AcpiHandleInternalNotify @ 0x1C003F74C (AcpiHandleInternalNotify.c)
 * Callees:
 *     AMLIGetParent @ 0x1C000B88C (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 */

__int64 __fastcall AMLIIterateParentNext(__int64 a1)
{
  __int64 v2; // rbx

  v2 = AMLIGetParent();
  AMLIDereferenceHandleEx(a1);
  return v2;
}
