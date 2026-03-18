/*
 * XREFs of ACPIIoctlEvalControlMethod @ 0x1C000C300
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00012D0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C0019C40 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C0069B70 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     ACPIIoctlEvalPostProcessing @ 0x1C0009E64 (ACPIIoctlEvalPostProcessing.c)
 *     ACPIIoctlEvalPreProcessing @ 0x1C000C40C (ACPIIoctlEvalPreProcessing.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C0020AAC (AcpiIoctlCleanupArgumentObjects.c)
 */

__int64 __fastcall ACPIIoctlEvalControlMethod(ULONG_PTR a1, IRP *a2)
{
  int v3; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  PVOID v8; // [rsp+40h] [rbp-18h] BYREF
  __int64 *v9; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0LL;
  P = 0LL;
  v10 = 0;
  v3 = ACPIIoctlEvalPreProcessing(a1, (__int64)&v9, (__int64)&P, (__int64)&v8, (__int64)&v10);
  if ( v3 >= 0 )
  {
    v3 = AMLIEvalNameSpaceObject(v9, P, v10, v8);
    AMLIDereferenceHandleEx(v9);
    if ( v8 )
    {
      AcpiIoctlCleanupArgumentObjects(v8, v10);
      ExFreePoolWithTag(v8, 0x41706341u);
    }
    if ( v3 >= 0 )
    {
      v7 = ACPIIoctlEvalPostProcessing(a2, (__int64)P, v5, v6);
      dword_1C005A218 = 0;
      v3 = v7;
      byte_1C005A21C = 0;
      FreeDataBuffs(P, 1LL);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x52706341u);
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v3;
}
