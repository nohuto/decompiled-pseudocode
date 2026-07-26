/*
 * XREFs of ndisMInitializeMiniportBlockFront @ 0x1C00EB2AC
 * Callers:
 *     ndisMInitializeMiniportBlock @ 0x1C00A8CBC (ndisMInitializeMiniportBlock.c)
 *     ndisReinitializeMiniportBlock @ 0x1C00F4BF8 (ndisReinitializeMiniportBlock.c)
 * Callees:
 *     ndisInitializeULongRef @ 0x1C001E5A8 (ndisInitializeULongRef.c)
 *     memset @ 0x1C0023A40 (memset.c)
 */

__int64 __fastcall ndisMInitializeMiniportBlockFront(char *DeferredContext, int a2)
{
  __int64 v3; // rcx
  char v4; // al
  size_t v5; // r8
  char v6; // al
  char *v7; // rcx
  __int64 *v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // r8
  __int64 result; // rax

  v3 = *((_QWORD *)DeferredContext + 477);
  *((_DWORD *)DeferredContext + 380) = 0;
  *(_WORD *)DeferredContext = 273;
  *((_WORD *)DeferredContext + 1) = a2;
  *((_QWORD *)DeferredContext + 22) = DeferredContext;
  *((_DWORD *)DeferredContext + 564) = 1;
  *((_QWORD *)DeferredContext + 68) = &ndisGlobalTriageBlock;
  v4 = *(_BYTE *)(v3 + 24);
  if ( (unsigned __int8)v4 < 6u )
  {
    *((_WORD *)DeferredContext + 1594) = 6;
  }
  else
  {
    DeferredContext[3188] = v4;
    DeferredContext[3189] = *(_BYTE *)(v3 + 25);
  }
  v5 = ndisMaxNumberOfProcessors;
  DeferredContext[32] = *(_BYTE *)(v3 + 24);
  v6 = *(_BYTE *)(v3 + 25);
  *((_DWORD *)DeferredContext + 142) = 0;
  v5 *= 8LL;
  DeferredContext[33] = v6;
  v7 = &DeferredContext[a2 - v5];
  DeferredContext[88] = 0;
  *((_QWORD *)DeferredContext + 200) = v7;
  memset(v7, 0, v5);
  *((_DWORD *)DeferredContext + 30) |= 0x400000u;
  *((_QWORD *)DeferredContext + 276) = DeferredContext + 2200;
  *((_QWORD *)DeferredContext + 275) = DeferredContext + 2200;
  *((_QWORD *)DeferredContext + 346) = DeferredContext + 2760;
  *((_QWORD *)DeferredContext + 345) = DeferredContext + 2760;
  *((_QWORD *)DeferredContext + 440) = DeferredContext + 3512;
  *((_QWORD *)DeferredContext + 439) = DeferredContext + 3512;
  *((_QWORD *)DeferredContext + 444) = DeferredContext + 3544;
  *((_QWORD *)DeferredContext + 443) = DeferredContext + 3544;
  *((_QWORD *)DeferredContext + 455) = DeferredContext + 3632;
  *((_QWORD *)DeferredContext + 454) = DeferredContext + 3632;
  *((_QWORD *)DeferredContext + 170) = DeferredContext + 1352;
  *((_QWORD *)DeferredContext + 169) = DeferredContext + 1352;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 402);
  *((_QWORD *)DeferredContext + 413) = 0LL;
  *((_QWORD *)DeferredContext + 415) = ndisPeriodicReceivesWorker;
  *((_QWORD *)DeferredContext + 416) = DeferredContext;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 12);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 250);
  *((_QWORD *)DeferredContext + 17) = DeferredContext + 128;
  *((_QWORD *)DeferredContext + 16) = DeferredContext + 128;
  if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 477) + 26LL) & 2) != 0 )
    KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 235);
  KeInitializeDpc((PRKDPC)(DeferredContext + 1528), (PKDEFERRED_ROUTINE)ndisMDeferredDpc, DeferredContext);
  *((_QWORD *)DeferredContext + 242) = 0LL;
  *((_QWORD *)DeferredContext + 244) = ndisQueuedCheckForHang;
  *((_QWORD *)DeferredContext + 245) = DeferredContext;
  ndisInitializeULongRef((__int64)(DeferredContext + 4496));
  *((_DWORD *)DeferredContext + 1126) = 0;
  v8 = (__int64 *)(DeferredContext + 880);
  v9 = (__int64 *)(DeferredContext + 1632);
  v10 = 6LL;
  do
  {
    *v9 = 0LL;
    v9[1] = 0LL;
    v9[2] = 0LL;
    result = *v8;
    *v9 = *v8;
    *v8 = (__int64)v9;
    v9 += 3;
    ++v8;
    --v10;
  }
  while ( v10 );
  *((_DWORD *)DeferredContext + 502) = 6;
  return result;
}
