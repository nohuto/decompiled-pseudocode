/*
 * XREFs of ndisCreatePMProtocolOffloadEntry @ 0x1C00933E8
 * Callers:
 *     ndisSourcePreAddProtocolOffload @ 0x1C009316C (ndisSourcePreAddProtocolOffload.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C0093254 (ndisMiniportPreAddProtocolOffload.c)
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 */

_DWORD *__fastcall ndisCreatePMProtocolOffloadEntry(void *Src, int a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rbx
  _DWORD *result; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x706F444Eu);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x120uLL);
    memmove(v5 + 12, Src, 0xF0uLL);
    v5[8] = v5[14];
    result = v5;
    v5[4] = 288;
    v5[11] = a2;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0083712 >= 2u )
      WPP_SF_(0x60u, &WPP_6e2fc96078008429fd92c28490874609_Traceguids);
    return 0LL;
  }
  return result;
}
