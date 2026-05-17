/*
 * XREFs of LdrpInitMuiCrits @ 0x180030344
 * Callers:
 *     LdrpGetLoadAsEntry @ 0x18002CAB8 (LdrpGetLoadAsEntry.c)
 *     LdrRemoveLoadAsDataTable @ 0x18002CE00 (LdrRemoveLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x18002D160 (LdrAddLoadAsDataTable.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x1800302B4 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrpGetMUIFromCMFSegment @ 0x18005A1F8 (LdrpGetMUIFromCMFSegment.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18002B290 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x1800A6AA0 (ZwDelayExecution.c)
 */

__int64 __fastcall LdrpInitMuiCrits(volatile signed __int32 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = -1000000LL;
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(a1, 1, 0);
    if ( !(_DWORD)result )
      break;
    if ( *a1 == 1 )
      result = ZwDelayExecution(0LL, &v5);
    if ( *a1 == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx(a2, 0, 0);
  *a1 = 2;
  return result;
}
