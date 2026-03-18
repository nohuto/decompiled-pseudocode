/*
 * XREFs of vUnlinkAllEudcRFONTsAndPFEs @ 0x1C012A9B0
 * Callers:
 *     bDeleteAllFlEntry @ 0x1C01293D8 (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C028A9D4 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C028AC14 (GreEudcUnloadLinkW.c)
 * Callees:
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0019EF0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C00FAAB4 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C010095C (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 */

void __fastcall vUnlinkAllEudcRFONTsAndPFEs(__int64 a1, int a2)
{
  __int64 v3; // rcx
  struct _FONTHASH **v4; // rbx
  __int64 i; // rdi
  struct PFF *v6; // r8
  struct PFT *v7; // rbx
  __int64 j; // rdi
  struct PFF *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 k; // rdi
  struct PFF *v13; // r8
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v14[0] = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v16 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v4 = gpPFTPublic;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v4 + 6); i = (unsigned int)(i + 1) )
  {
    v6 = v4[i + 4];
    if ( v6 )
      vUnlinkAllEudcRFONTsAndPFEsWorker(v3, a2, v6);
  }
  v7 = gpPFTDevice;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)v7 + 6); j = (unsigned int)(j + 1) )
  {
    v9 = (struct PFF *)*((_QWORD *)v7 + j + 4);
    if ( v9 )
      vUnlinkAllEudcRFONTsAndPFEsWorker(v3, a2, v9);
  }
  PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v15, (struct PFT *)gpPFTPrivate);
  if ( RFONTOBJ::bValid((RFONTOBJ *)&v15) )
  {
    v11 = v15;
    for ( k = 0LL; (unsigned int)k < *(_DWORD *)(v11 + 24); k = (unsigned int)(k + 1) )
    {
      v13 = *(struct PFF **)(v11 + 8 * k + 32);
      if ( v13 )
        vUnlinkAllEudcRFONTsAndPFEsWorker(v10, a2, v13);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  SEMOBJ::vUnlock((SEMOBJ *)v14);
}
