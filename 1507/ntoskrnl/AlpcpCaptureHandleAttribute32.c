/*
 * XREFs of AlpcpCaptureHandleAttribute32 @ 0x14056073C
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14047EB30 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureHandleAttributeInternal @ 0x14053B4E4 (AlpcpCaptureHandleAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureHandleAttribute32(int *a1, __int64 a2)
{
  int v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+34h] [rbp-14h]

  v3 = *a1;
  v4 = a1[1];
  v5 = a1[3];
  return AlpcpCaptureHandleAttributeInternal(&v3, a2);
}
