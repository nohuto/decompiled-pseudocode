/*
 * XREFs of AlpcpCaptureHandleAttribute @ 0x14047D350
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14042A430 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureHandleAttributeInternal @ 0x14047D050 (AlpcpCaptureHandleAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureHandleAttribute(__int128 *a1, __int64 a2)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v3 = *a1;
    v4 = *((_QWORD *)a1 + 2);
    a1 = &v3;
  }
  return AlpcpCaptureHandleAttributeInternal(a1, a2);
}
