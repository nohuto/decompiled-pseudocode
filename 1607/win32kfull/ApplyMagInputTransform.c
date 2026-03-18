/*
 * XREFs of ApplyMagInputTransform @ 0x1C01C3270
 * Callers:
 *     SetContactBoundary @ 0x1C01C3580 (SetContactBoundary.c)
 * Callees:
 *     AcquireMagInputLock @ 0x1C000D61C (AcquireMagInputLock.c)
 *     MagInputTransform @ 0x1C01FAEF4 (MagInputTransform.c)
 *     MagnificationTransformPoint @ 0x1C01FAFBC (MagnificationTransformPoint.c)
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
