/*
 * XREFs of MmDeleteProcessor @ 0x1401E1AA4
 * Callers:
 *     KiStartDynamicProcessor @ 0x14064F040 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
 * Callees:
 *     MiReleasePtes @ 0x1400516D0 (MiReleasePtes.c)
 */

__int64 __fastcall MmDeleteProcessor(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24520);
  if ( v1 )
  {
    result = MiReleasePtes((__int64)&qword_140327870, ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0x40u);
    *(_QWORD *)(a1 + 24520) = 0LL;
  }
  return result;
}
