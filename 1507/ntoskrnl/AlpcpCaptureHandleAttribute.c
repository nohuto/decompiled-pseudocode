/*
 * XREFs of AlpcpCaptureHandleAttribute @ 0x14053B4A4
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14047EB30 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureHandleAttributeInternal @ 0x14053B4E4 (AlpcpCaptureHandleAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureHandleAttribute(__int128 *a1, __int64 a2, __int64 a3)
{
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)a3 )
  {
    v4 = *a1;
    v5 = *((_QWORD *)a1 + 2);
    a1 = &v4;
  }
  return AlpcpCaptureHandleAttributeInternal(a1, a2, a3);
}
