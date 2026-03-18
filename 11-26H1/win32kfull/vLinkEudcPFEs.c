/*
 * XREFs of vLinkEudcPFEs @ 0x140324F0C
 * Callers:
 *     bAddAllFlEntry @ 0x1400CAAB4 (bAddAllFlEntry.c)
 *     bDeleteAllFlEntry @ 0x14010469C (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x14032453C (GreEudcLoadLinkW.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400C6908 (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1401C4AAC (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     ?PffBucket@PFT@@QEBA?AVPffIterator@@K@Z @ 0x14025A850 (-PffBucket@PFT@@QEBA-AVPffIterator@@K@Z.c)
 *     ??EPffIterator@@QEAAAEAV0@XZ @ 0x140296FC4 (--EPffIterator@@QEAAAEAV0@XZ.c)
 *     vLinkEudcPFEsWorker @ 0x140324FF4 (vLinkEudcPFEsWorker.c)
 */

void __fastcall vLinkEudcPFEs(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdi
  unsigned int i; // ebx
  __int64 v8; // rdi
  unsigned int j; // ebx
  _QWORD v10[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v11; // [rsp+58h] [rbp+28h] BYREF
  HSEMAPHORE v12; // [rsp+60h] [rbp+30h] BYREF

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  SEMOBJ<17>::SEMOBJ<17>(&v12, v3 + 4864);
  v6 = *(_QWORD *)(v3 + 20392);
  for ( i = 0; i < *(_DWORD *)(v6 + 24); ++i )
  {
    PFT::PffBucket(v6, (PffIterator *)&v11, i);
    while ( v11 )
    {
      v10[0] = v11;
      vLinkEudcPFEsWorker(a1, v10);
      PffIterator::operator++(&v11);
    }
  }
  DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v10, v4, v5);
  v8 = v10[0];
  for ( j = 0; j < *(_DWORD *)(v8 + 24); ++j )
  {
    PFT::PffBucket(v8, (PffIterator *)&v11, j);
    while ( v11 )
    {
      v10[0] = v11;
      vLinkEudcPFEsWorker(a1, v10);
      PffIterator::operator++(&v11);
    }
  }
  SEMOBJ<17>::vUnlock(&v12);
}
