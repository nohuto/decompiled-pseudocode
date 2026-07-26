/*
 * XREFs of ndisCreateWoLPatternEntry @ 0x1C0099FCC
 * Callers:
 *     ndisSourcePreAddWoLPattern @ 0x1C0099C14 (ndisSourcePreAddWoLPattern.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C0099CFC (ndisMiniportPreAddWoLPattern.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     ndisGetWoLPatternSize @ 0x1C009A2B0 (ndisGetWoLPatternSize.c)
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
    if ( (unsigned __int8)byte_1C0085312 >= 2u )
      WPP_SF_(0x3Du, &WPP_fbb1998797815902974a7c4233493709_Traceguids);
    return 0LL;
  }
  return result;
}
