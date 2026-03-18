/*
 * XREFs of MmDeleteProcessor @ 0x1401CE820
 * Callers:
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140762F20 (KeStartAllProcessors.c)
 * Callees:
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MmDeleteProcessor(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24520);
  if ( v1 )
  {
    result = MiReleasePtes((__int64)&qword_1402FF7B0, (_QWORD *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), 0x40u);
    *(_QWORD *)(a1 + 24520) = 0LL;
  }
  return result;
}
