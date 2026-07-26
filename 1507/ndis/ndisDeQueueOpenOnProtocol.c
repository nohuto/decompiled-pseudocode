/*
 * XREFs of ndisDeQueueOpenOnProtocol @ 0x1C00E7234
 * Callers:
 *     ndisMFinishClose @ 0x1C00E7034 (ndisMFinishClose.c)
 *     ndisMOpenAdapter @ 0x1C00E8200 (ndisMOpenAdapter.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 */

void __fastcall ndisDeQueueOpenOnProtocol(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx
  KIRQL v6; // dl
  __int64 v7; // rax

  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_qq(0x2Cu, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1, a2);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 32));
  v5 = *(_QWORD *)(a2 + 24);
  v6 = v4;
  if ( a1 == v5 )
  {
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 400);
  }
  else if ( v5 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 400);
      if ( a1 == v7 )
        break;
      v5 = *(_QWORD *)(v5 + 400);
    }
    while ( v7 );
    if ( v5 )
      *(_QWORD *)(v5 + 400) = *(_QWORD *)(*(_QWORD *)(v5 + 400) + 400LL);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 32), v6);
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_qq(0x2Du, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1, a2);
}
