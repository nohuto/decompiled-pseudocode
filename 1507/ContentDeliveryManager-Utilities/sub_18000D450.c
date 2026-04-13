/*
 * XREFs of sub_18000D450 @ 0x18000D450
 * Callers:
 *     sub_18000C258 @ 0x18000C258 (sub_18000C258.c)
 *     sub_18000D2D8 @ 0x18000D2D8 (sub_18000D2D8.c)
 *     sub_18000E724 @ 0x18000E724 (sub_18000E724.c)
 * Callees:
 *     sub_18001895C @ 0x18001895C (sub_18001895C.c)
 */

void __fastcall sub_18000D450(__int64 a1)
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
    sub_18001895C(v3, a1 + 8);
  }
  *(_DWORD *)a1 = 3;
}
