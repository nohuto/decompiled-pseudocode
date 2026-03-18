/*
 * XREFs of ACPIBuildProcessorExtension @ 0x1C00214D0
 * Callers:
 *     OSNotifyCreateProcessor @ 0x1C0021458 (OSNotifyCreateProcessor.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0003DE8 (RtlStringCchPrintfA.c)
 *     ACPIBuildDeviceExtension @ 0x1C000BA9C (ACPIBuildDeviceExtension.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 */

__int64 __fastcall ACPIBuildProcessorExtension(volatile signed __int32 *a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned int v6; // edi
  __int64 v7; // rbx
  PVOID PoolWithTag; // rax
  char *v9; // rax
  char *v10; // rax
  unsigned __int64 v11; // rax

  if ( !Src )
    return 3221225524LL;
  result = ACPIBuildDeviceExtension(a1, a2, a3);
  v6 = result;
  if ( (int)result >= 0 )
  {
    v7 = *a3;
    if ( v7 )
    {
      _InterlockedOr64((volatile signed __int64 *)v7, 0x1000300000uLL);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)AcpiProcessorString, 0x53706341u);
      *(_QWORD *)(v7 + 552) = PoolWithTag;
      if ( PoolWithTag
        && (memmove(PoolWithTag, Src, (unsigned __int16)AcpiProcessorString),
            v9 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xFuLL, 0x53706341u),
            (*(_QWORD *)(v7 + 176) = v9) != 0LL) )
      {
        strcpy(v9, "ACPI\\Processor");
        v10 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xBuLL, 0x53706341u);
        *(_QWORD *)(v7 + 560) = v10;
        if ( !v10 )
          return 3221225626LL;
        RtlStringCchPrintfA(v10, 0xBuLL, "%2x", *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)a1 + 88LL) + 8LL));
        v11 = 0x8001E00000000000uLL;
      }
      else
      {
        v6 = -1073741670;
        if ( *(_QWORD *)(v7 + 560) )
        {
          _InterlockedAnd64((volatile signed __int64 *)v7, 0xFFFEBFFFFFFFFFFFuLL);
          ExFreePoolWithTag(*(PVOID *)(v7 + 560), 0);
          *(_QWORD *)(v7 + 560) = 0LL;
        }
        if ( *(_QWORD *)(v7 + 552) )
        {
          _InterlockedAnd64((volatile signed __int64 *)v7, 0xFFFF5FFFFFFFFFFFuLL);
          ExFreePoolWithTag(*(PVOID *)(v7 + 552), 0);
          *(_QWORD *)(v7 + 552) = 0LL;
        }
        if ( *(_QWORD *)(v7 + 176) )
        {
          _InterlockedAnd64((volatile signed __int64 *)v7, 0x7FFFFFFFFFFFFFFFuLL);
          ExFreePoolWithTag(*(PVOID *)(v7 + 176), 0);
          *(_QWORD *)(v7 + 176) = 0LL;
        }
        v11 = 0x2000000000000LL;
      }
      _InterlockedOr64((volatile signed __int64 *)v7, v11);
      return v6;
    }
  }
  return result;
}
