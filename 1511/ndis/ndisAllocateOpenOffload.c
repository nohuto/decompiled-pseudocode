/*
 * XREFs of ndisAllocateOpenOffload @ 0x1C00AA5AC
 * Callers:
 *     ndisOidPreOpenSetEncapsulation @ 0x1C002281C (ndisOidPreOpenSetEncapsulation.c)
 *     ndisOidPreTaskOffload @ 0x1C00C0FC0 (ndisOidPreTaskOffload.c)
 * Callees:
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

__int64 __fastcall ndisAllocateOpenOffload(__int64 a1)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax

  v2 = -1073741670;
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(0x52u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x666F444Eu);
  *(_QWORD *)(a1 + 792) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    v2 = 0;
  }
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(0x53u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, *(_QWORD *)(a1 + 792));
  return v2;
}
