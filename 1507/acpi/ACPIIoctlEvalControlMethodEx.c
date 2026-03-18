/*
 * XREFs of ACPIIoctlEvalControlMethodEx @ 0x1C000BBBC
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00012D0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C0019C40 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C0069B70 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     ACPIIoctlEvalPostProcessingEx @ 0x1C000A64C (ACPIIoctlEvalPostProcessingEx.c)
 *     ACPIIoctlEvalPreProcessingEx @ 0x1C000BCA8 (ACPIIoctlEvalPreProcessingEx.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C0020AAC (AcpiIoctlCleanupArgumentObjects.c)
 */

__int64 __fastcall ACPIIoctlEvalControlMethodEx(__int64 a1, IRP *a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  PVOID v9; // [rsp+40h] [rbp-18h] BYREF
  __int64 *v10; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v9 = 0LL;
  P = 0LL;
  v11 = 0;
  v4 = ACPIIoctlEvalPreProcessingEx(a1, a2, a3, 1LL, &v10, &P, &v9, &v11);
  if ( v4 >= 0 )
  {
    v4 = AMLIEvalNameSpaceObject(v10, P, v11, v9);
    if ( v9 )
    {
      AcpiIoctlCleanupArgumentObjects(v9, v11);
      ExFreePoolWithTag(v9, 0x41706341u);
    }
    if ( v10 )
      AMLIDereferenceHandleEx(v10);
    if ( v4 >= 0 )
    {
      v7 = ACPIIoctlEvalPostProcessingEx(a2, (__int64)P, v5, v6);
      dword_1C005A218 = 0;
      v4 = v7;
      byte_1C005A21C = 0;
      FreeDataBuffs(P, 1LL);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x52706341u);
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v4;
}
