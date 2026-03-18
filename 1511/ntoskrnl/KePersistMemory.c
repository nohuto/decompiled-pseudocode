/*
 * XREFs of KePersistMemory @ 0x140157520
 * Callers:
 *     MiPersistMemory @ 0x1401E398C (MiPersistMemory.c)
 * Callees:
 *     <none>
 */

int __fastcall KePersistMemory(__int64 _RCX, __int64 a2)
{
  __int64 v2; // rax

  LODWORD(v2) = KeGetPcr()->Prcb.CFlushSize;
  do
  {
    __asm { clwb    byte ptr [rcx] }
    _RCX += v2;
    a2 -= v2;
  }
  while ( a2 );
  _mm_sfence();
  __asm { pcommit }
  _mm_sfence();
  return v2;
}
