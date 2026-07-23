/*
 * XREFs of VfFreePoolNotification @ 0x140710998
 * Callers:
 *     ExFreeLargePool @ 0x140010760 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x14022CEAC (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     VerifierExFreePoolWithTag @ 0x140702420 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     VfFreeMemoryNotification @ 0x1407028B4 (VfFreeMemoryNotification.c)
 *     ViPoolLogStackTrace @ 0x140710BB0 (ViPoolLogStackTrace.c)
 */

__int64 __fastcall VfFreePoolNotification(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (MmVerifierData & 8) == 0 && VfVerifyMode == 2;
  if ( a2 )
  {
    if ( !(_DWORD)result && VfPoolTraces )
      ViPoolLogStackTrace(a1, a2);
    return VfFreeMemoryNotification(a1, a2);
  }
  else if ( (_DWORD)result )
  {
    if ( VfPoolTraces )
      return ViPoolLogStackTrace(a1, 16LL);
  }
  return result;
}
