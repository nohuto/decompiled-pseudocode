/*
 * XREFs of IovUtilIsWdmStack @ 0x1406C2190
 * Callers:
 *     VfPnpVerifyIrpStackDownward @ 0x1406C9EDC (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1406CA068 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PpvUtilIsPdo @ 0x1406B5A2C (PpvUtilIsPdo.c)
 *     IovUtilGetBottomDeviceObject @ 0x1406C1F2C (IovUtilGetBottomDeviceObject.c)
 */

_BOOL8 __fastcall IovUtilIsWdmStack(_QWORD *a1)
{
  PVOID BottomDeviceObject; // rax
  BOOL IsPdo; // ebx
  PVOID v3; // rdx

  BottomDeviceObject = IovUtilGetBottomDeviceObject(a1);
  IsPdo = PpvUtilIsPdo((__int64)BottomDeviceObject);
  ObfDereferenceObject(v3);
  return IsPdo;
}
