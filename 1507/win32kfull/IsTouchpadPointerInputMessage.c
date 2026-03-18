/*
 * XREFs of IsTouchpadPointerInputMessage @ 0x1C01E1FDC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsTouchpadPointerInputMessage(int a1)
{
  return (unsigned int)(a1 - 577) <= 9 || (unsigned int)(a1 - 593) <= 2;
}
