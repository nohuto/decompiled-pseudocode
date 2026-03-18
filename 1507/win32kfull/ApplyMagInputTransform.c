/*
 * XREFs of ApplyMagInputTransform @ 0x1C01C1E60
 * Callers:
 *     SetContactBoundary @ 0x1C01C2440 (SetContactBoundary.c)
 * Callees:
 *     AcquireMagInputLock @ 0x1C0008428 (AcquireMagInputLock.c)
 *     MagInputTransform @ 0x1C0203834 (MagInputTransform.c)
 *     MagnificationTransformPoint @ 0x1C02038FC (MagnificationTransformPoint.c)
 */

__int64 __fastcall ApplyMagInputTransform(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi

  AcquireMagInputLock();
  result = MagInputTransform();
  v5 = result;
  if ( result )
  {
    MagnificationTransformPoint(result, a1);
    result = MagnificationTransformPoint(v5, a2);
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return result;
}
