/*
 * XREFs of VfFreePoolNotification @ 0x1406C48D4
 * Callers:
 *     ExFreeLargePool @ 0x1400892D0 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x140212DB8 (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     VerifierExFreePoolWithTag @ 0x1406B6590 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     VfFreeMemoryNotification @ 0x1406B709C (VfFreeMemoryNotification.c)
 *     ViPoolLogStackTrace @ 0x1406C4AF8 (ViPoolLogStackTrace.c)
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
