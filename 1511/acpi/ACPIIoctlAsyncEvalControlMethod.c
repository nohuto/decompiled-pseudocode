/*
 * XREFs of ACPIIoctlAsyncEvalControlMethod @ 0x1C003CFA0
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00012D0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C0019E90 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C0067120 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     ACPIIoctlEvalPostProcessing @ 0x1C0009CC8 (ACPIIoctlEvalPostProcessing.c)
 *     ACPIIoctlEvalPreProcessing @ 0x1C000C91C (ACPIIoctlEvalPreProcessing.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C00211A4 (AcpiIoctlCleanupArgumentObjects.c)
 */

__int64 __fastcall ACPIIoctlAsyncEvalControlMethod(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  int v8; // eax
  PVOID v9; // [rsp+40h] [rbp-28h] BYREF
  PVOID P; // [rsp+48h] [rbp-20h] BYREF
  __int64 *v11; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+88h] [rbp+20h] BYREF

  P = 0LL;
  v9 = 0LL;
  v12 = 0;
  v4 = ACPIIoctlEvalPreProcessing(a1, (__int64)a2, a3, NonPagedPoolNx, &v11, &v9, &P, &v12);
  if ( v4 < 0 )
  {
LABEL_7:
    if ( v9 )
      ExFreePoolWithTag(v9, 0x52706341u);
    a2->IoStatus.Status = v4;
    IofCompleteRequest(a2, 0);
    return (unsigned int)v4;
  }
  v4 = AMLIAsyncEvalObject(v11, (_SLIST_ENTRY *)v9, v12, P, &ACPIIoctlAsyncEvalControlMethodCompletion, a2);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v11);
  if ( P )
  {
    AcpiIoctlCleanupArgumentObjects((__int64)P, v12);
    ExFreePoolWithTag(P, 0x41706341u);
  }
  result = 259LL;
  if ( v4 != 259 )
  {
    if ( v4 >= 0 )
    {
      v8 = ACPIIoctlEvalPostProcessing(a2, (__int64)v9, v5, v6);
      dword_1C005A228 = 0;
      v4 = v8;
      byte_1C005A22C = 0;
      FreeDataBuffs((__int64)v9, 1u);
    }
    goto LABEL_7;
  }
  return result;
}
