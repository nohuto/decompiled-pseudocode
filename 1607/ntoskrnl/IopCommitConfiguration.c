/*
 * XREFs of IopCommitConfiguration @ 0x140555E7C
 * Callers:
 *     PnpAllocateResources @ 0x14050B1A0 (PnpAllocateResources.c)
 *     PnpRebalance @ 0x140630484 (PnpRebalance.c)
 *     PnpReallocateResources @ 0x14064BD60 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x14064BF2C (PnpRestoreResourcesInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopCommitConfiguration(_QWORD **a1)
{
  _QWORD *v1; // r14
  unsigned int i; // esi
  _QWORD *v4; // rbx
  __int64 v5; // rax
  int v6; // eax

  v1 = *a1;
  for ( i = 0; v1 != a1; v4[7] = v4 + 7 )
  {
    v4 = v1 - 11;
    v5 = *(v1 - 8);
    v1 = (_QWORD *)*v1;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v5 + 32))(*(_QWORD *)(v5 + 8), 2LL);
    if ( v6 < 0 )
      i = v6;
    *((_WORD *)v4 + 52) = 0;
    v4[12] = v4 + 11;
    v4[11] = v4 + 11;
    v4[10] = v4 + 9;
    v4[9] = v4 + 9;
    v4[6] = v4 + 5;
    v4[5] = v4 + 5;
    v4[8] = v4 + 7;
  }
  return i;
}
