/*
 * XREFs of IoReportResourceUsageInternal @ 0x14067D0F0
 * Callers:
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     IoReportResourceForDetection @ 0x14067CD30 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x14067CF10 (IoReportResourceUsage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpCmResourcesToIoResources @ 0x14059E0E8 (PnpCmResourcesToIoResources.c)
 *     IopChangeInterfaceType @ 0x14067D20C (IopChangeInterfaceType.c)
 *     IopLegacyResourceAllocation @ 0x14067F1F4 (IopLegacyResourceAllocation.c)
 */

__int64 __fastcall IoReportResourceUsageInternal(
        __int64 a1,
        void *a2,
        UNICODE_STRING *a3,
        _DWORD *a4,
        __int64 a5,
        PDRIVER_OBJECT a6,
        _DWORD *a7,
        __int64 a8,
        __int64 a9,
        _BYTE *a10)
{
  _DWORD *v10; // rdi
  unsigned int v11; // ebx
  unsigned int v13; // r13d
  char *v14; // rsi
  _BYTE *v16; // r15
  unsigned int v17; // ebp
  char v18; // r14
  int v19; // edi
  PCM_RESOURCE_LIST *v20; // [rsp+28h] [rbp-30h]
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
    v19 = IopLegacyResourceAllocation(
            (PUNICODE_STRING)v13,
            a3,
            a6,
            (PDEVICE_OBJECT)v14,
            (PIO_RESOURCE_REQUIREMENTS_LIST)&P,
            v20);
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
