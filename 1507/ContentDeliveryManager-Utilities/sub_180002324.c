/*
 * XREFs of sub_180002324 @ 0x180002324
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_180002324(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 144);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
      free(*(void **)(a1 + 144));
    *(_QWORD *)(a1 + 144) = 0LL;
    *(_QWORD *)(a1 + 152) = 0LL;
  }
}
