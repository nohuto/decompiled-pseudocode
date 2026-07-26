/*
 * XREFs of ndisSetOpenPacketFilter @ 0x1C0019A90
 * Callers:
 *     ndisOidPrePacketFilter @ 0x1C00A9B30 (ndisOidPrePacketFilter.c)
 * Callees:
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C0018BCC (ndisUpdateCheckForLoopbackFlag.c)
 *     ndisUpdateLoopbackOpens @ 0x1C0019C74 (ndisUpdateLoopbackOpens.c)
 *     XFilterAdjust @ 0x1C0019CAC (XFilterAdjust.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qqDL @ 0x1C0044618 (WPP_SF_qqDL.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

char __fastcall ndisSetOpenPacketFilter(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rsi
  char v7; // al
  int v8; // ebx
  unsigned int v9; // r12d
  KIRQL v10; // r11
  int v11; // ecx
  unsigned __int8 v12; // r15
  _DWORD *v13; // rbx
  KIRQL v14; // dl
  KIRQL v15; // al
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  KIRQL v19; // r9

  v3 = *(_QWORD *)(a1 + 16);
  v7 = byte_1C00895D2;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    WPP_SF_qq(89LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2);
    v7 = byte_1C00895D2;
  }
  v8 = 0;
  if ( *(_DWORD *)(a2 + 48) >= 4u )
  {
    v9 = **(_DWORD **)(a2 + 40);
    if ( (*(_DWORD *)(a1 + 224) & 0x8000) != 0 )
      goto LABEL_8;
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    v11 = *(_DWORD *)(v3 + 464);
    *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v3 + 1856) = 2300872;
    if ( v11 )
    {
      if ( v11 == 16 )
      {
        v8 = 259;
        *(_DWORD *)(a1 + 436) = *(_DWORD *)(a1 + 432);
        *(_DWORD *)(a1 + 432) = v9;
      }
    }
    else
    {
      v8 = XFilterAdjust(*(_QWORD *)(v3 + 400), a1, v9);
      v9 = *(_DWORD *)(*(_QWORD *)(v3 + 400) + 304LL);
    }
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v10);
    if ( v8 == 259 )
    {
LABEL_8:
      v12 = 0;
      *a3 = 259;
    }
    else
    {
      *(_DWORD *)(a2 + 52) = 4;
      v12 = 1;
      *a3 = 0;
    }
    v13 = *(_DWORD **)(a2 + 40);
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 232));
    if ( (*v13 & 0xA0) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 224) & 4) != 0 )
        goto LABEL_11;
      *(_DWORD *)(a1 + 224) |= 4u;
      ++*(_BYTE *)(v3 + 90);
      if ( *(_DWORD *)(a1 + 704) >= 6u )
        ++*(_DWORD *)(v3 + 2252);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 224) & 4) == 0 )
      {
LABEL_11:
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 232), v14);
        v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
        CurrentThread = KeGetCurrentThread();
        *(_QWORD *)(v3 + 520) = CurrentThread;
        LOBYTE(v17) = v15;
        *(_DWORD *)(v3 + 1856) = 2300954;
        ndisUpdateLoopbackOpens(v3, CurrentThread, v18, v17);
        *(_QWORD *)(v3 + 520) = 0LL;
        *(_DWORD *)(v3 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v19);
        *(_DWORD *)(a2 + 164) = v9;
        *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 40);
        *(_DWORD *)(a2 + 160) = *(_DWORD *)(a2 + 48);
        *(_QWORD *)(a2 + 40) = a2 + 164;
        *(_DWORD *)(a2 + 48) = 4;
        if ( (unsigned __int8)byte_1C00895D2 >= 4u )
          WPP_SF_qqDL(91LL, *a3, a1, a2, v12, *a3);
        return v12;
      }
      *(_DWORD *)(a1 + 224) &= ~4u;
      --*(_BYTE *)(v3 + 90);
      if ( *(_DWORD *)(a1 + 704) >= 6u )
        --*(_DWORD *)(v3 + 2252);
    }
    ndisUpdateCheckForLoopbackFlag(v3);
    goto LABEL_11;
  }
  *(_DWORD *)(a2 + 56) = 4;
  if ( (unsigned __int8)v7 >= 4u )
    WPP_SF_qqd(90LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2, -1073676268);
  *a3 = -1073676268;
  return 1;
}
