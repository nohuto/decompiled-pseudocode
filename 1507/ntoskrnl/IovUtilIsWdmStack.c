/*
 * XREFs of IovUtilIsWdmStack @ 0x140743A30
 * Callers:
 *     VfPnpVerifyIrpStackDownward @ 0x14074CB70 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x14074CE18 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PpvUtilIsPdo @ 0x140735D10 (PpvUtilIsPdo.c)
 *     IovUtilGetBottomDeviceObject @ 0x1407437CC (IovUtilGetBottomDeviceObject.c)
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
