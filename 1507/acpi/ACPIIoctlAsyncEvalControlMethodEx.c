/*
 * XREFs of ACPIIoctlAsyncEvalControlMethodEx @ 0x1C003D558
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00012D0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C0019C40 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C0069B70 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     ACPIIoctlEvalPostProcessingEx @ 0x1C000A64C (ACPIIoctlEvalPostProcessingEx.c)
 *     ACPIIoctlEvalPreProcessingEx @ 0x1C000BCA8 (ACPIIoctlEvalPreProcessingEx.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C0020AAC (AcpiIoctlCleanupArgumentObjects.c)
 */

__int64 __fastcall ACPIIoctlAsyncEvalControlMethodEx(ULONG_PTR a1, IRP *a2, __int64 a3)
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
  v4 = ACPIIoctlEvalPreProcessingEx(a1, (__int64)a2, a3, NonPagedPoolNx, &v11, &v9, &P, &v12);
  if ( v4 < 0 )
  {
LABEL_9:
    if ( v9 )
      ExFreePoolWithTag(v9, 0x52706341u);
    a2->IoStatus.Status = v4;
    IofCompleteRequest(a2, 0);
    return (unsigned int)v4;
  }
  v4 = AMLIAsyncEvalObject(v11, (_SLIST_ENTRY *)v9, v12, P, &ACPIIoctlAsyncEvalControlMethodExCompletion, a2);
  if ( P )
  {
    AcpiIoctlCleanupArgumentObjects((__int64)P, v12);
    ExFreePoolWithTag(P, 0x41706341u);
  }
  if ( v11 )
    AMLIDereferenceHandleEx((volatile signed __int32 *)v11);
  result = 259LL;
  if ( v4 != 259 )
  {
    if ( v4 >= 0 )
    {
      v8 = ACPIIoctlEvalPostProcessingEx(a2, (__int64)v9, v5, v6);
      dword_1C005A218 = 0;
      v4 = v8;
      byte_1C005A21C = 0;
      FreeDataBuffs((__int64)v9, 1u);
    }
    goto LABEL_9;
  }
  return result;
}
