/*
 * XREFs of ndisOidPostIovFreeVF @ 0x1C0064EB0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovFreeVF @ 0x1C0064390 (ndisIovFreeVF.c)
 */

void __fastcall ndisOidPostIovFreeVF(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax

  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_DWORD *)(a1 + 40);
    if ( !v3 || v3 == 65539 && (*(_DWORD *)(*(_QWORD *)a1 + 120LL) & 4) != 0 )
    {
      ndisIovFreeVF(*(_QWORD **)(v2 + 144));
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
}
