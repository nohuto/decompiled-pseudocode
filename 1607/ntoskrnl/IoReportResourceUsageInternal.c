/*
 * XREFs of IoReportResourceUsageInternal @ 0x14062C348
 * Callers:
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 *     IoReportResourceForDetection @ 0x14062BF88 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x14062C168 (IoReportResourceUsage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopLegacyResourceAllocation @ 0x140554EEC (IopLegacyResourceAllocation.c)
 *     PnpCmResourcesToIoResources @ 0x140557F1C (PnpCmResourcesToIoResources.c)
 *     IopChangeInterfaceType @ 0x14062C464 (IopChangeInterfaceType.c)
 */

__int64 __fastcall IoReportResourceUsageInternal(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7,
        __int64 a8,
        __int64 a9,
        _BYTE *a10)
{
  unsigned int *v10; // rdi
  unsigned int v11; // ebx
  int v13; // r13d
  char *v14; // rsi
  _BYTE *v16; // r15
  unsigned int v17; // ebp
  char v18; // r14
  int v19; // edi
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  P = a2;
  v10 = a7;
  v11 = 0;
  v13 = a1;
  if ( !a7 )
    v10 = a4;
  v14 = 0LL;
  if ( v10 )
  {
    if ( *v10 && v10[4] )
    {
      v14 = PnpCmResourcesToIoResources(a1, v10, 12288);
      if ( !v14 )
        return 3221225473LL;
    }
    else
    {
      v10 = 0LL;
    }
  }
  v16 = a10;
  v17 = 0;
  P = v10;
  v18 = 0;
  *a10 = 1;
  while ( 1 )
  {
    v19 = IopLegacyResourceAllocation(v13, a3, a6, (__int64)v14, (const void **)&P);
    if ( v19 >= 0 )
      break;
    if ( (unsigned __int8)IopChangeInterfaceType(v14, &P) )
    {
      ++v17;
      v18 = 1;
      if ( v17 < 2 )
        continue;
    }
    goto LABEL_15;
  }
  *v16 = 0;
LABEL_15:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v18 )
    ExFreePoolWithTag(P, 0);
  if ( v19 < 0 )
  {
    if ( v19 != -1073741670 )
      return (unsigned int)-1073741800;
    return (unsigned int)v19;
  }
  return v11;
}
