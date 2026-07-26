/*
 * XREFs of ?ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0069800
 * Callers:
 *     ?ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0069E98 (-ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisCloseTimeInterval@@YAXPEA_K0@Z @ 0x1C0069E7C (-ndisCloseTimeInterval@@YAXPEA_K0@Z.c)
 */

void __fastcall ndisAoAcPauseRefTimeStats(struct _NDIS_MINIPORT_AOAC *a1)
{
  struct _NDIS_MINIPORT_AOAC *v1; // r11
  unsigned __int64 *p_CurrentRefStartTime; // r10
  __int64 v3; // r9

  v1 = a1;
  p_CurrentRefStartTime = &a1->CsRefTimes[0].CurrentRefStartTime;
  v3 = 0LL;
  do
  {
    if ( *p_CurrentRefStartTime )
      ndisCloseTimeInterval(&v1->CsRefTimes[v3].CurrentRefStartTime, &v1->CsRefTimes[(unsigned int)v3].TotalRefTime);
    v3 = (unsigned int)(v3 + 1);
    p_CurrentRefStartTime += 2;
  }
  while ( (unsigned int)v3 < 0xF );
}
