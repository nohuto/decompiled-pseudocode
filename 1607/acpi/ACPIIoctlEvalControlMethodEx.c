/*
 * XREFs of ACPIIoctlEvalControlMethodEx @ 0x1C00248B0
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00044E0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C0008940 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C00816A0 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C0007ED0 (AcpiIoctlCleanupArgumentObjects.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     ACPIIoctlEvalPreProcessingEx @ 0x1C002499C (ACPIIoctlEvalPreProcessingEx.c)
 *     ACPIIoctlEvalPostProcessingEx @ 0x1C0024B6C (ACPIIoctlEvalPostProcessingEx.c)
 */

__int64 __fastcall ACPIIoctlEvalControlMethodEx(__int64 a1, IRP *a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  int v6; // eax
  PVOID v8; // [rsp+40h] [rbp-18h] BYREF
  __int64 *v9; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0LL;
  P = 0LL;
  v10 = 0;
  v4 = ACPIIoctlEvalPreProcessingEx(a1, a2, a3, 1LL, &v9, &P, &v8, &v10);
  if ( v4 >= 0 )
  {
    v4 = AMLIEvalNameSpaceObject(v9, P, v10, v8);
    if ( v8 )
    {
      AcpiIoctlCleanupArgumentObjects((__int64)v8, v10);
      ExFreePoolWithTag(v8, 0x41706341u);
    }
    if ( v9 )
      AMLIDereferenceHandleEx((volatile signed __int32 *)v9, v5);
    if ( v4 >= 0 )
    {
      v6 = ACPIIoctlEvalPostProcessingEx(a2, P);
      dword_1C0074698 = 0;
      v4 = v6;
      byte_1C007469C = 0;
      FreeDataBuffs((__int64)P, 1u);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x52706341u);
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v4;
}
