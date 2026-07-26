/*
 * XREFs of ndisCreateWoLPatternEntry @ 0x1C00B0FAC
 * Callers:
 *     ndisSourcePreAddWoLPattern @ 0x1C00B0B60 (ndisSourcePreAddWoLPattern.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C00B0E54 (ndisMiniportPreAddWoLPattern.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     ndisGetWoLPatternSize @ 0x1C00B128C (ndisGetWoLPatternSize.c)
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
    if ( (unsigned __int8)byte_1C00895D2 >= 2u )
      WPP_SF_(0x3Du, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids);
    return 0LL;
  }
  return result;
}
