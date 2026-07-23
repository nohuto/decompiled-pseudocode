/*
 * XREFs of HvUpdateUnreconciledVector @ 0x14052E288
 * Callers:
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     HvSyncHive @ 0x14065E25C (HvSyncHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x1400EF6A0 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x140117218 (RtlMergeBitMaps.c)
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
