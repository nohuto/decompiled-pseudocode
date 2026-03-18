/*
 * XREFs of vUnlinkEudcRFONTsAndPFEs @ 0x1403254C8
 * Callers:
 *     bDeleteFlEntry @ 0x140324924 (bDeleteFlEntry.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400C3B0C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400C3C14 (--0-$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400C6908 (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1401C4AAC (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     ?PffBucket@PFT@@QEBA?AVPffIterator@@K@Z @ 0x14025A850 (-PffBucket@PFT@@QEBA-AVPffIterator@@K@Z.c)
 *     ??EPffIterator@@QEAAAEAV0@XZ @ 0x140296FC4 (--EPffIterator@@QEAAAEAV0@XZ.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x140325628 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 */

void __fastcall vUnlinkEudcRFONTsAndPFEs(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdi
  unsigned int i; // ebx
  __int64 v9; // rdi
  unsigned int j; // ebx
  __int64 v11; // rbx
  unsigned int k; // edi
  HSEMAPHORE v13; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v14[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF
  HSEMAPHORE v16; // [rsp+88h] [rbp+48h] BYREF

  v4 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  SEMOBJ<17>::SEMOBJ<17>(&v13, v4 + 4864);
  SEMOBJ<18>::SEMOBJ<18>(&v16, v4 + 4864);
  v7 = *(_QWORD *)(v4 + 20392);
  for ( i = 0; i < *(_DWORD *)(v7 + 24); ++i )
  {
    PFT::PffBucket(v7, (PffIterator *)&v15, i);
    while ( v15 )
    {
      v14[0] = v15;
      vUnlinkEudcRFONTsAndPFEsWorker(a1, a2, v14);
      PffIterator::operator++(&v15);
    }
  }
  DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v14, v5, v6);
  v9 = v14[0];
  for ( j = 0; j < *(_DWORD *)(v9 + 24); ++j )
  {
    PFT::PffBucket(v9, (PffIterator *)&v15, j);
    while ( v15 )
    {
      v14[0] = v15;
      vUnlinkEudcRFONTsAndPFEsWorker(a1, a2, v14);
      PffIterator::operator++(&v15);
    }
  }
  v11 = *(_QWORD *)(v4 + 20384);
  if ( v11 )
  {
    for ( k = 0; k < *(_DWORD *)(v11 + 24); ++k )
    {
      PFT::PffBucket(v11, (PffIterator *)&v15, k);
      while ( v15 )
      {
        v14[0] = v15;
        vUnlinkEudcRFONTsAndPFEsWorker(a1, a2, v14);
        PffIterator::operator++(&v15);
      }
    }
  }
  SEMOBJ<18>::vUnlock(&v16);
  SEMOBJ<17>::vUnlock(&v13);
}
