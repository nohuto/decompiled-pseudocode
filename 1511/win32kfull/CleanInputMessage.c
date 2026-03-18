/*
 * XREFs of CleanInputMessage @ 0x1C01039F0
 * Callers:
 *     SuspendThreadQueue @ 0x1C000D4B0 (SuspendThreadQueue.c)
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 * Callees:
 *     _FreeTouchInputInfo @ 0x1C01DCFC0 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C02044A0 (_FreeGestureInfo.c)
 */

__int64 __fastcall CleanInputMessage(int a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)(a1 - 576);
  if ( a1 == 576 )
    result = FreeTouchInputInfo(*(_QWORD *)(a2 + 40), 1LL);
  if ( a1 == 281 )
    return FreeGestureInfo(*(_QWORD *)(a2 + 40), 1LL);
  return result;
}
