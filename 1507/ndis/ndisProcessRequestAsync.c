/*
 * XREFs of ndisProcessRequestAsync @ 0x1C0042FD0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisQueueOidRequest @ 0x1C0005360 (ndisQueueOidRequest.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 */

void __fastcall ndisProcessRequestAsync(_QWORD *P)
{
  unsigned __int8 *v1; // rdi
  void *v3; // rbx

  v1 = (unsigned __int8 *)P[7];
  v3 = (void *)P[6];
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x3Fu, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v1, v3);
  if ( (unsigned int)ndisQueueOidRequest((__int64)v3, v1, 0LL, 0LL) != 259 )
  {
    ExFreePoolWithTag(v3, 0);
    v3 = 0LL;
  }
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport((__int64)v1, 0x48u);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqq(0x40u, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v1, v3, 0LL);
}
