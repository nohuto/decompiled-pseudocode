/*
 * XREFs of ndisCreateWoLPatternEntry @ 0x1C0097204
 * Callers:
 *     ndisSourcePreAddWoLPattern @ 0x1C0096FB0 (ndisSourcePreAddWoLPattern.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C0097098 (ndisMiniportPreAddWoLPattern.c)
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     ndisGetWoLPatternSize @ 0x1C00974EC (ndisGetWoLPatternSize.c)
 */

_DWORD *__fastcall ndisCreateWoLPatternEntry(void *Src, int a2)
{
  unsigned int WoLPatternSize; // esi
  _DWORD *PoolWithTag; // rax
  _DWORD *v6; // rbx
  _DWORD *result; // rax

  WoLPatternSize = ndisGetWoLPatternSize();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, WoLPatternSize + 92, 0x7770444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, WoLPatternSize + 92);
    memmove(v6 + 12, Src, WoLPatternSize);
    v6[8] = v6[14];
    result = v6;
    v6[4] = WoLPatternSize + 92;
    v6[11] = a2;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0083712 >= 2u )
      WPP_SF_(0x3Du, &WPP_6e2fc96078008429fd92c28490874609_Traceguids);
    return 0LL;
  }
  return result;
}
