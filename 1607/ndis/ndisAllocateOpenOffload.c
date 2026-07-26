/*
 * XREFs of ndisAllocateOpenOffload @ 0x1C00B1BBC
 * Callers:
 *     ndisOidPreOpenSetEncapsulation @ 0x1C0024010 (ndisOidPreOpenSetEncapsulation.c)
 *     ndisOidPreTaskOffload @ 0x1C00C5C90 (ndisOidPreTaskOffload.c)
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

__int64 __fastcall ndisAllocateOpenOffload(__int64 a1)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax

  v2 = -1073741670;
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_q(0x52u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x666F444Eu);
  *(_QWORD *)(a1 + 792) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    v2 = 0;
  }
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_q(0x53u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, *(_QWORD *)(a1 + 792));
  return v2;
}
