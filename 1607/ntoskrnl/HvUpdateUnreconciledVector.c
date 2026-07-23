/*
 * XREFs of HvUpdateUnreconciledVector @ 0x1404AA750
 * Callers:
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     HvSyncHive @ 0x140606410 (HvSyncHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140076850 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x14009C590 (RtlMergeBitMaps.c)
 */

ULONG __fastcall HvUpdateUnreconciledVector(_RTL_BITMAP *a1, char a2)
{
  bool v2; // zf
  __int64 p_Buffer; // rdx
  ULONG result; // eax

  v2 = a2 == 0;
  p_Buffer = (__int64)&a1[178].Buffer;
  if ( v2 )
    p_Buffer = (__int64)&a1[4].Buffer;
  RtlMergeBitMaps((__int64)&a1[6], p_Buffer);
  result = RtlNumberOfSetBits(a1 + 6);
  a1[7].SizeOfBitMap = result;
  return result;
}
