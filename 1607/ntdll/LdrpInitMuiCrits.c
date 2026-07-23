/*
 * XREFs of LdrpInitMuiCrits @ 0x180030334
 * Callers:
 *     LdrpGetLoadAsEntry @ 0x18002CAA8 (LdrpGetLoadAsEntry.c)
 *     LdrRemoveLoadAsDataTable @ 0x18002CDF0 (LdrRemoveLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x18002D150 (LdrAddLoadAsDataTable.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x1800302A4 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrpGetMUIFromCMFSegment @ 0x18005A1E8 (LdrpGetMUIFromCMFSegment.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18002B280 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x1800A6AA0 (ZwDelayExecution.c)
 */

NTSTATUS __fastcall LdrpInitMuiCrits(volatile signed __int32 *a1, _RTL_CRITICAL_SECTION *a2)
{
  NTSTATUS result; // eax
  LARGE_INTEGER DelayInterval; // [rsp+30h] [rbp+8h] BYREF

  DelayInterval.QuadPart = -1000000LL;
  while ( 1 )
  {
    result = _InterlockedCompareExchange(a1, 1, 0);
    if ( !result )
      break;
    if ( *a1 == 1 )
      result = ZwDelayExecution(0, &DelayInterval);
    if ( *a1 == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx(a2, 0, 0);
  *a1 = 2;
  return result;
}
