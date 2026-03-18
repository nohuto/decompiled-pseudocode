/*
 * XREFs of AlpcpCaptureHandleAttribute32 @ 0x1404C5AB4
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14042A430 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureHandleAttributeInternal @ 0x14047D050 (AlpcpCaptureHandleAttributeInternal.c)
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
