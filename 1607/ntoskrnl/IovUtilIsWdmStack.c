/*
 * XREFs of IovUtilIsWdmStack @ 0x14070E250
 * Callers:
 *     VfPnpVerifyIrpStackDownward @ 0x1407188EC (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140718A78 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PpvUtilIsPdo @ 0x140701894 (PpvUtilIsPdo.c)
 *     IovUtilGetBottomDeviceObject @ 0x14070DFEC (IovUtilGetBottomDeviceObject.c)
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
