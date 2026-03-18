/*
 * XREFs of ACPIIoctlEvalControlMethod @ 0x1C0007898
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00044E0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C0008940 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C00816A0 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     ACPIIoctlEvalPreProcessing @ 0x1C0007998 (ACPIIoctlEvalPreProcessing.c)
 *     ACPIIoctlEvalPostProcessing @ 0x1C0007C20 (ACPIIoctlEvalPostProcessing.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C0007ED0 (AcpiIoctlCleanupArgumentObjects.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 */

__int64 __fastcall ACPIIoctlEvalControlMethod(ULONG_PTR a1, IRP *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  int v5; // eax
  PVOID P; // [rsp+40h] [rbp-18h] BYREF
  __int64 *v8; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+10h] BYREF
  PVOID v10; // [rsp+78h] [rbp+20h] BYREF

  P = 0LL;
  v10 = 0LL;
  v9 = 0;
  v3 = ACPIIoctlEvalPreProcessing(a1, (__int64)&v8, (__int64)&v10, (__int64)&P, (__int64)&v9);
  if ( v3 >= 0 )
  {
    v3 = AMLIEvalNameSpaceObject(v8, v10, v9, P);
    AMLIDereferenceHandleEx(v8, v4);
    if ( P )
    {
      AcpiIoctlCleanupArgumentObjects(P, v9);
      ExFreePoolWithTag(P, 0x41706341u);
    }
    if ( v3 >= 0 )
    {
      v5 = ACPIIoctlEvalPostProcessing(a2, v10);
      dword_1C0074698 = 0;
      v3 = v5;
      byte_1C007469C = 0;
      FreeDataBuffs(v10, 1LL);
    }
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0x52706341u);
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v3;
}
