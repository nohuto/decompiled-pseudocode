/*
 * XREFs of EtwpCCSwapDeleteProcessor @ 0x1402114B4
 * Callers:
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCCSwapDeleteProcessor(__int64 a1)
{
  PVOID *v1; // rbx
  __int64 v2; // rdi

  v1 = (PVOID *)(a1 + 2848);
  v2 = 4LL;
  do
  {
    if ( *v1 )
      ExFreePoolWithTag(*v1, 0);
    ++v1;
    --v2;
  }
  while ( v2 );
}
