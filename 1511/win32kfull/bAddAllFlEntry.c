/*
 * XREFs of bAddAllFlEntry @ 0x1C000F208
 * Callers:
 *     GreEnableEUDC @ 0x1C000EC48 (GreEnableEUDC.c)
 *     bInitializeEUDC @ 0x1C000EF50 (bInitializeEUDC.c)
 * Callees:
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C0001D84 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C000E2DC (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C000ED04 (bReadUserSystemEUDCRegistry.c)
 *     bNotIsKeySymbolicLink @ 0x1C000EE18 (bNotIsKeySymbolicLink.c)
 *     GetUserEUDCRegistryPath @ 0x1C000EEAC (GetUserEUDCRegistryPath.c)
 *     vLinkEudcPFEs @ 0x1C000F37C (vLinkEudcPFEs.c)
 *     AddAllFlEntryWorker @ 0x1C000F51C (AddAllFlEntryWorker.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0018720 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C001A988 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0020CC8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C00215DC (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall bAddAllFlEntry(int a1, unsigned int a2)
{
  wchar_t *v3; // rbx
  unsigned __int16 *v4; // rdi
  HSEMAPHORE v5; // rcx
  char v6; // al
  unsigned int v8; // r8d
  __int64 v10; // rax
  int v11; // esi
  struct _FONTHASH **v12; // rcx
  struct PFF *v13; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-28h] BYREF
  struct PFE *v15[2]; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+A8h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE v18; // [rsp+B8h] [rbp+48h] BYREF

  v16 = a2;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v18, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Handle, 0x208u);
  v3 = (wchar_t *)v18;
  if ( !v18 )
  {
    if ( !Handle )
      return 0LL;
    Win32FreePool(Handle);
LABEL_35:
    if ( v3 )
      goto LABEL_36;
    return 0LL;
  }
  v4 = (unsigned __int16 *)Handle;
  if ( !Handle )
    goto LABEL_35;
  v5 = ghsemEUDC1;
  *(_WORD *)Handle = 0;
  *v3 = 0;
  GreAcquireSemaphore(v5);
  if ( gcEUDCCount > 0 )
  {
    EngSetLastError(0xA7u);
LABEL_19:
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    Win32FreePool(v4);
LABEL_36:
    Win32FreePool(v3);
    return 0LL;
  }
  if ( !a1 || *(_OWORD *)&gappfeSysEUDC != 0LL || !(unsigned int)bReadUserSystemEUDCRegistry(v3) )
    goto LABEL_5;
  if ( !(unsigned int)bAppendSysDirectory(v4, v3, v8) )
    goto LABEL_19;
  Handle = gpPFTPublic;
  v18 = (HANDLE)ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v10 = -1LL;
  do
    ++v10;
  while ( v4[v10] );
  if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&Handle, v4, (int)v10 + 1, 1u, 0LL, 0, 0LL, 1) )
  {
    v11 = 0;
  }
  else
  {
    v14[1] = 0LL;
    v14[0] = v15;
    v11 = PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&Handle, v4, &v16, 8u, &v13, (struct _EUDCLOAD *)v14);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v18);
  if ( v11 )
  {
    if ( (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, v15[0], 1) )
    {
      *(_OWORD *)&gappfeSysEUDC = *(_OWORD *)v15;
      wcscpy_s(&Dst, 0x105uLL, v4);
      ++dword_1C032F208;
      goto LABEL_5;
    }
    PFTOBJ::bUnloadEUDCFont(v12, v4);
  }
  Dst = 0;
  *(_OWORD *)&gappfeSysEUDC = 0uLL;
LABEL_5:
  v6 = dword_1C0323BAC;
  if ( (dword_1C0323BAC & 1) != 0 )
  {
    AddAllFlEntryWorker(L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontLink\\SystemLink");
    v6 = dword_1C0323BAC;
  }
  if ( (v6 & 4) != 0 )
  {
    Handle = 0LL;
    v18 = 0LL;
    v16 = 0;
    if ( (int)GetUserEUDCRegistryPath(v3) >= 0 && (unsigned int)bNotIsKeySymbolicLink(v3, &Handle, &v18) && v16 )
      AddAllFlEntryWorker(v3);
    if ( Handle )
      ZwClose(Handle);
    if ( v18 )
      ZwClose(v18);
  }
  vLinkEudcPFEs(0LL);
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  Win32FreePool(v4);
  Win32FreePool(v3);
  return 1LL;
}
