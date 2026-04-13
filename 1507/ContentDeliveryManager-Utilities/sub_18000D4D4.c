/*
 * XREFs of sub_18000D4D4 @ 0x18000D4D4
 * Callers:
 *     sub_18000D394 @ 0x18000D394 (sub_18000D394.c)
 *     sub_18001370C @ 0x18001370C (sub_18001370C.c)
 * Callees:
 *     sub_1800189D0 @ 0x1800189D0 (sub_1800189D0.c)
 */

void __fastcall sub_18000D4D4(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 232);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
      free(*(void **)(a1 + 232));
    *(_QWORD *)(a1 + 232) = 0LL;
    *(_QWORD *)(a1 + 240) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 72) )
  {
    free(*(void **)(a1 + 64));
    *(_BYTE *)(a1 + 72) = 0;
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    *(_DWORD *)a1 = 2;
    sub_1800189D0(v3, a1 + 8);
  }
  *(_DWORD *)a1 = 3;
}
