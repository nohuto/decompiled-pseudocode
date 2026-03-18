/*
 * XREFs of MmDeleteProcessor @ 0x14020DB08
 * Callers:
 *     KiStartDynamicProcessor @ 0x14069849C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1407D3888 (KeStartAllProcessors.c)
 * Callees:
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 */

__int64 __fastcall MmDeleteProcessor(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24520);
  if ( v1 )
  {
    result = MiReleasePtes((__int64)&qword_14034FC70, (_QWORD *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), 0x40u);
    *(_QWORD *)(a1 + 24520) = 0LL;
  }
  return result;
}
