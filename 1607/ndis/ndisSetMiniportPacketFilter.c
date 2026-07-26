/*
 * XREFs of ndisSetMiniportPacketFilter @ 0x1C0019D6C
 * Callers:
 *     ndisOidPrePacketFilter @ 0x1C00A9B30 (ndisOidPrePacketFilter.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisSetMiniportPacketFilter(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // r13
  char v7; // al
  unsigned __int8 v8; // si
  int v9; // ebp
  KIRQL v10; // dl
  unsigned int *v11; // r15
  unsigned int v13; // ebp

  v4 = 0LL;
  v7 = byte_1C00895D2;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    WPP_SF_qq(94LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2);
    v7 = byte_1C00895D2;
  }
  *a3 = 0;
  v8 = 1;
  if ( *(_DWORD *)(a2 + 48) >= 4u )
  {
    v9 = **(_DWORD **)(a2 + 40);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 2301113;
    if ( !*(_DWORD *)(a1 + 1836) )
      v4 = *(_QWORD *)(a1 + 400);
    v11 = (unsigned int *)(a1 + 160);
    *(_DWORD *)(a1 + 160) = v9;
    if ( v4 )
    {
      if ( (v9 & 0xFFFFFF7F) != (*(_DWORD *)(v4 + 312) & 0xFFFFFF7F) )
      {
        *v11 = v9 & 0xFFFFFF7F;
        v8 = 0;
      }
      if ( (*(_DWORD *)(a1 + 120) & 0x20000) == 0 )
        goto LABEL_10;
      v13 = v9 & 0xFFFFFF5F;
      if ( v13 == (*(_DWORD *)(v4 + 312) & 0xFFFFFF5F) )
        goto LABEL_10;
      *v11 = v13;
    }
    v8 = 0;
LABEL_10:
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v10);
    if ( (*(_DWORD *)(a2 + 88) & 0x80000) != 0 )
      v8 = 0;
    if ( v8 )
    {
      if ( !*a3 )
        *(_DWORD *)(a2 + 52) = 4;
    }
    else
    {
      *(_DWORD *)(a2 + 88) |= 0x800u;
      *(_QWORD *)(a1 + 528) = *(_QWORD *)(a2 + 40);
      *(_WORD *)(a1 + 536) = *(_WORD *)(a2 + 48);
      *(_QWORD *)(a2 + 40) = v11;
      *(_DWORD *)(a2 + 48) = 4;
    }
    if ( (unsigned __int8)byte_1C00895D2 >= 4u )
      WPP_SF_qdD(96LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, v8, *a3);
    return v8;
  }
  *(_DWORD *)(a2 + 56) = 4;
  *a3 = -1073676268;
  if ( (unsigned __int8)v7 >= 4u )
    WPP_SF_d(95LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, 3221291028LL);
  return v8;
}
