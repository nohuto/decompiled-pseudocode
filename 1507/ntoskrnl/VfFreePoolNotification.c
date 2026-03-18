/*
 * XREFs of VfFreePoolNotification @ 0x140746198
 * Callers:
 *     ExFreeLargePool @ 0x140046E10 (ExFreeLargePool.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     VerifierExFreePoolWithTag @ 0x140736880 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     VfFreeMemoryNotification @ 0x140737404 (VfFreeMemoryNotification.c)
 *     ViPoolLogStackTrace @ 0x1407463EC (ViPoolLogStackTrace.c)
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
