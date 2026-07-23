/*
 * XREFs of LdrpInitMuiCrits @ 0x1800304C8
 * Callers:
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180030438 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x18003D390 (LdrpGetLoadAsEntry.c)
 *     LdrpGetMUIFromCMFSegment @ 0x180048A70 (LdrpGetMUIFromCMFSegment.c)
 *     LdrAddLoadAsDataTable @ 0x180076850 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180076F50 (LdrRemoveLoadAsDataTable.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180055050 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x1800A5740 (ZwDelayExecution.c)
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
