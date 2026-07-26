/*
 * XREFs of ndisCreatePMProtocolOffloadEntry @ 0x1C00C8170
 * Callers:
 *     ndisMiniportPreAddProtocolOffload @ 0x1C00C83E4 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisSourcePreAddProtocolOffload @ 0x1C00CAE04 (ndisSourcePreAddProtocolOffload.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
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
    if ( (unsigned __int8)byte_1C00895D2 >= 2u )
      WPP_SF_(0x60u, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids);
    return 0LL;
  }
  return result;
}
