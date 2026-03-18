/*
 * XREFs of vUnlinkAllEudcRFONTsAndPFEs @ 0x140287590
 * Callers:
 *     bDeleteAllFlEntry @ 0x14010469C (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x14032453C (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x140324810 (GreEudcUnloadLinkW.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400C3B0C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F651C (--$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?PffBucket@PFT@@QEBA?AVPffIterator@@K@Z @ 0x14025A850 (-PffBucket@PFT@@QEBA-AVPffIterator@@K@Z.c)
 *     ??EPffIterator@@QEAAAEAV0@XZ @ 0x140296FC4 (--EPffIterator@@QEAAAEAV0@XZ.c)
 *     PFTOBJ::EnumeratePFFs__vUnlinkAllEudcRFONTsAndPFEs_::_5_::_lambda_3___ @ 0x140323C28 (PFTOBJ--EnumeratePFFs__vUnlinkAllEudcRFONTsAndPFEs_--_5_--_lambda_3___.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x140325234 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 */

void __fastcall vUnlinkAllEudcRFONTsAndPFEs(unsigned int a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // rdi
  unsigned int i; // ebx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+60h] [rbp+28h] BYREF
  unsigned int *v11; // [rsp+68h] [rbp+30h] BYREF
  __int64 v12; // [rsp+70h] [rbp+38h] BYREF
  __int64 v13; // [rsp+78h] [rbp+40h] BYREF

  v10 = a1;
  v2 = *(_QWORD **)(W32GetSessionState(a1, a2) + 96);
  v13 = v2[2540];
  GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v13);
  v12 = v2[2541];
  GreAcquireSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v12);
  v5 = v2[2549];
  for ( i = 0; i < *(_DWORD *)(v5 + 24); ++i )
  {
    PFT::PffBucket(v5, (PffIterator *)&v11, i);
    while ( v11 )
    {
      v9[0] = v11;
      vUnlinkAllEudcRFONTsAndPFEsWorker(v10, v9);
      PffIterator::operator++(&v11);
    }
  }
  v7 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v4, v3) + 96) + 20400LL);
  if ( *(_DWORD *)(v8 + 24) )
  {
    do
    {
      PFT::PffBucket(v8, (PffIterator *)&v11, v7);
      while ( v11 )
      {
        v9[0] = v11;
        vUnlinkAllEudcRFONTsAndPFEsWorker(v10, v9);
        PffIterator::operator++(&v11);
      }
      ++v7;
    }
    while ( v7 < *(_DWORD *)(v8 + 24) );
  }
  v9[0] = v2[2548];
  if ( v9[0] )
  {
    v11 = &v10;
    PFTOBJ::EnumeratePFFs__vUnlinkAllEudcRFONTsAndPFEs_::_5_::_lambda_3___(v9, &v11);
  }
  SEMOBJ<18>::vUnlock((HSEMAPHORE *)&v12);
  SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v13);
}
