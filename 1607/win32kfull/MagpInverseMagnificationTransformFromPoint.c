/*
 * XREFs of MagpInverseMagnificationTransformFromPoint @ 0x1C000D5D4
 * Callers:
 *     xxxIsDCompSpeedHitTest @ 0x1C00593A0 (xxxIsDCompSpeedHitTest.c)
 * Callees:
 *     AcquireMagInputLock @ 0x1C000D61C (AcquireMagInputLock.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     MagnificationInverseTransformPoint @ 0x1C01FAF28 (MagnificationInverseTransformPoint.c)
 */

__int64 __fastcall MagpInverseMagnificationTransformFromPoint(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx

  AcquireMagInputLock();
  result = *(_QWORD *)(gptiRit + 408LL);
  v3 = *(_QWORD *)(result + 208);
  if ( v3 )
  {
    result = PtInRect(v3, *a1);
    if ( (_DWORD)result )
      result = MagnificationInverseTransformPoint(v4, a1);
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return result;
}
