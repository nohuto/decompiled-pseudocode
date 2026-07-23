/*
 * XREFs of LdrpInitMuiCrits @ 0x18003823C
 * Callers:
 *     LdrpGetMUIFromCMFSegment @ 0x18000EF20 (LdrpGetMUIFromCMFSegment.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x1800381AC (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x180069DE0 (LdrpGetLoadAsEntry.c)
 *     LdrAddLoadAsDataTable @ 0x18006B290 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x18006B740 (LdrRemoveLoadAsDataTable.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180007900 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x180093C40 (ZwDelayExecution.c)
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
