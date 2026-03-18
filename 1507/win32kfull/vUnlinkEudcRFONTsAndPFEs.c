/*
 * XREFs of vUnlinkEudcRFONTsAndPFEs @ 0x1C028B908
 * Callers:
 *     bDeleteFlEntry @ 0x1C028B194 (bDeleteFlEntry.c)
 * Callees:
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0019EF0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C010095C (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C028BA04 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 */

void __fastcall vUnlinkEudcRFONTsAndPFEs(__int64 a1, __int64 a2)
{
  struct _FONTHASH **v4; // rbx
  __int64 i; // rdi
  struct PFT *v6; // rbx
  __int64 j; // rdi
  __int64 v8; // rbx
  __int64 k; // rdi
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v10[0] = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v12 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v4 = gpPFTPublic;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v4 + 6); i = (unsigned int)(i + 1) )
  {
    if ( v4[i + 4] )
      vUnlinkEudcRFONTsAndPFEsWorker(a1, a2);
  }
  v6 = gpPFTDevice;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)v6 + 6); j = (unsigned int)(j + 1) )
  {
    if ( *((_QWORD *)v6 + j + 4) )
      vUnlinkEudcRFONTsAndPFEsWorker(a1, a2);
  }
  PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v11, (struct PFT *)gpPFTPrivate);
  if ( RFONTOBJ::bValid((RFONTOBJ *)&v11) )
  {
    v8 = v11;
    for ( k = 0LL; (unsigned int)k < *(_DWORD *)(v8 + 24); k = (unsigned int)(k + 1) )
    {
      if ( *(_QWORD *)(v8 + 8 * k + 32) )
        vUnlinkEudcRFONTsAndPFEsWorker(a1, a2);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v12);
  SEMOBJ::vUnlock((SEMOBJ *)v10);
}
