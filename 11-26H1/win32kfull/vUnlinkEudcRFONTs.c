/*
 * XREFs of vUnlinkEudcRFONTs @ 0x140325380
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
 *     vUnlinkEudcRFONTsWorker @ 0x140325770 (vUnlinkEudcRFONTsWorker.c)
 */

void __fastcall vUnlinkEudcRFONTs(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdi
  unsigned int i; // ebx
  __int64 v8; // rdi
  unsigned int j; // ebx
  __int64 v10; // rbx
  unsigned int k; // edi
  _QWORD v12[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF
  HSEMAPHORE v14; // [rsp+70h] [rbp+40h] BYREF
  HSEMAPHORE v15; // [rsp+78h] [rbp+48h] BYREF

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  SEMOBJ<17>::SEMOBJ<17>(&v15, v3 + 4864);
  SEMOBJ<18>::SEMOBJ<18>(&v14, v3 + 4864);
  v6 = *(_QWORD *)(v3 + 20392);
  for ( i = 0; i < *(_DWORD *)(v6 + 24); ++i )
  {
    PFT::PffBucket(v6, (PffIterator *)&v13, i);
    while ( v13 )
    {
      v12[0] = v13;
      vUnlinkEudcRFONTsWorker(a1, v12);
      PffIterator::operator++(&v13);
    }
  }
  DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v12, v4, v5);
  v8 = v12[0];
  for ( j = 0; j < *(_DWORD *)(v8 + 24); ++j )
  {
    PFT::PffBucket(v8, (PffIterator *)&v13, j);
    while ( v13 )
    {
      v12[0] = v13;
      vUnlinkEudcRFONTsWorker(a1, v12);
      PffIterator::operator++(&v13);
    }
  }
  v10 = *(_QWORD *)(v3 + 20384);
  if ( v10 )
  {
    for ( k = 0; k < *(_DWORD *)(v10 + 24); ++k )
    {
      PFT::PffBucket(v10, (PffIterator *)&v13, k);
      while ( v13 )
      {
        v12[0] = v13;
        vUnlinkEudcRFONTsWorker(a1, v12);
        PffIterator::operator++(&v13);
      }
    }
  }
  SEMOBJ<18>::vUnlock(&v14);
  SEMOBJ<17>::vUnlock(&v15);
}
