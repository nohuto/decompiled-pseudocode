/*
 * XREFs of ndisProcessRequestAsync @ 0x1C0044560
 * Callers:
 *     <none>
 * Callees:
 *     ndisQueueOidRequest @ 0x1C0007420 (ndisQueueOidRequest.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C00384C4 (WPP_SF_qqq.c)
 */

void __fastcall ndisProcessRequestAsync(_QWORD *P)
{
  unsigned __int8 *v1; // rdi
  void *v3; // rbx

  v1 = (unsigned __int8 *)P[7];
  v3 = (void *)P[6];
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(0x3Fu, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v1, v3);
  if ( (unsigned int)ndisQueueOidRequest((__int64)v3, v1, 0LL, 0LL) != 259 )
  {
    ExFreePoolWithTag(v3, 0);
    v3 = 0LL;
  }
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport((__int64)v1, 0x48u);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqq(0x40u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v1, v3, 0LL);
}
