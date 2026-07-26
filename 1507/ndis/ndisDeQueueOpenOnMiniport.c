/*
 * XREFs of ndisDeQueueOpenOnMiniport @ 0x1C00E712C
 * Callers:
 *     ndisMFinishClose @ 0x1C00E7034 (ndisMFinishClose.c)
 *     ndisMOpenAdapter @ 0x1C00E8200 (ndisMOpenAdapter.c)
 * Callees:
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C0018E48 (ndisUpdateCheckForLoopbackFlag.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     ndisUnsetNdis6OpenHandlers @ 0x1C00E7194 (ndisUnsetNdis6OpenHandlers.c)
 */

void __fastcall ndisDeQueueOpenOnMiniport(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax

  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_qq(0x11u, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, a1, a2);
  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 == a1 )
  {
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a1 + 392);
LABEL_5:
    --*(_WORD *)(a2 + 1820);
    goto LABEL_6;
  }
  if ( v4 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 392);
      if ( v5 == a1 )
        break;
      v4 = *(_QWORD *)(v4 + 392);
    }
    while ( v5 );
    if ( v4 )
    {
      *(_QWORD *)(v4 + 392) = *(_QWORD *)(*(_QWORD *)(v4 + 392) + 392LL);
      goto LABEL_5;
    }
  }
LABEL_6:
  ndisUpdateCheckForLoopbackFlag(a2);
  ndisUnsetNdis6OpenHandlers();
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_qq(0x12u, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, a1, a2);
}
