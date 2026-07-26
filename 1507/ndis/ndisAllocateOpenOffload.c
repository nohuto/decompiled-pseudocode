/*
 * XREFs of ndisAllocateOpenOffload @ 0x1C00AFD8C
 * Callers:
 *     ndisOidPreOpenSetEncapsulation @ 0x1C001E044 (ndisOidPreOpenSetEncapsulation.c)
 *     ndisOidPreTaskOffload @ 0x1C00C7BA0 (ndisOidPreTaskOffload.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

__int64 __fastcall ndisAllocateOpenOffload(__int64 a1)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax

  v2 = -1073741670;
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(0x52u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x666F444Eu);
  *(_QWORD *)(a1 + 792) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    v2 = 0;
  }
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(0x53u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, *(_QWORD *)(a1 + 792));
  return v2;
}
