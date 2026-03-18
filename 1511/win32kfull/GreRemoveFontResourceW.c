/*
 * XREFs of GreRemoveFontResourceW @ 0x1C027F8DC
 * Callers:
 *     NtGdiRemoveFontResourceW @ 0x1C02A7920 (NtGdiRemoveFontResourceW.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C000E3D8 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0020CC8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 */

__int64 __fastcall GreRemoveFontResourceW(
        unsigned __int16 *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        int a5,
        struct tagDESIGNVECTOR *a6,
        unsigned int a7)
{
  unsigned int v7; // ebx
  unsigned int v12; // esi
  struct _FONTHASH **v14; // rcx
  struct PFF *v15; // rax
  struct _FONTHASH **v16; // [rsp+40h] [rbp-28h] BYREF
  struct PFF **v17; // [rsp+48h] [rbp-20h] BYREF

  v7 = 0;
  v12 = 0;
  if ( (a4 & 4) != 0 && a5 != (unsigned int)PsGetCurrentThreadId()
    || (a4 & 8) != 0 && a5 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    return 0LL;
  }
  if ( (a4 & 0x1C) != 0 )
    v14 = gpPFTPrivate;
  else
    v14 = gpPFTPublic;
  v16 = v14;
  if ( v14 )
  {
    GreAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    v15 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&v16, a1, a2, a3, a6, a7, &v17, 0);
    if ( v15 )
    {
      v12 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v16, v15, v17, a4);
      if ( v12 )
        GreQuerySystemTime(&PFTOBJ::FontChangeTime);
    }
    else
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
    }
    return v12;
  }
  return v7;
}
