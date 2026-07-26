/*
 * XREFs of ndisSetRestorePacketFilter @ 0x1C00439A0
 * Callers:
 *     ndisOidPrePacketFilter @ 0x1C00A0CF0 (ndisOidPrePacketFilter.c)
 * Callees:
 *     XFilterAdjust @ 0x1C0018604 (XFilterAdjust.c)
 *     ndisUpdateLoopbackOpens @ 0x1C0018C48 (ndisUpdateLoopbackOpens.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C0018E48 (ndisUpdateCheckForLoopbackFlag.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 */

void __fastcall ndisSetRestorePacketFilter(__int64 a1, __int64 a2)
{
  KIRQL v4; // r15
  bool v5; // zf
  __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // rsi

  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x5Cu, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = *(_DWORD *)(a1 + 464) == 0;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 400);
  *(_DWORD *)(a1 + 1856) = 2300997;
  if ( v5 )
  {
    XFilterAdjust((__int64 *)v6, 0LL, 0);
    v6 = *(_QWORD *)(a1 + 400);
  }
  v7 = *(_DWORD *)(v6 + 304);
  **(_DWORD **)(a2 + 40) = v7;
  if ( (v7 & 0xA0) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 90) = 0;
    while ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 432) & 0xA0) != 0 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 232));
        *(_DWORD *)(v8 + 224) |= 4u;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 232));
        ++*(_BYTE *)(a1 + 90);
        if ( *(_DWORD *)(v8 + 704) >= 6u )
          ++*(_DWORD *)(a1 + 2252);
        ndisUpdateCheckForLoopbackFlag(a1);
      }
      v8 = *(_QWORD *)(v8 + 392);
    }
  }
  ndisUpdateLoopbackOpens(a1);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x5Du, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2);
}
