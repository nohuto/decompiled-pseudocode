/*
 * XREFs of bAddAllFlEntry @ 0x1400CAAB4
 * Callers:
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1400CB818 (-bInitializeEUDCInternal@@YAHXZ.c)
 *     GreEnableEUDC @ 0x14016EE38 (GreEnableEUDC.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?iHash@@YAIPEBGI@Z @ 0x1400CA7A4 (-iHash@@YAIPEBGI@Z.c)
 *     bReadUserSystemEUDCRegistry @ 0x1400CAFA4 (bReadUserSystemEUDCRegistry.c)
 *     GetUserEUDCRegistryPath @ 0x1400CB2E4 (GetUserEUDCRegistryPath.c)
 *     bNotIsKeySymbolicLink @ 0x1400CB428 (bNotIsKeySymbolicLink.c)
 *     ??$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FAB9C (--$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FABC0 (--$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1400FB1B4 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x140103ABC (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x140103F00 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x140104000 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140187408 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??1UmfdClientSideFileViewMapper@@QEAA@XZ @ 0x14021AC50 (--1UmfdClientSideFileViewMapper@@QEAA@XZ.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x140222080 (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 *     AddAllFlEntryWorker @ 0x14024F3F8 (AddAllFlEntryWorker.c)
 *     ?WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x14029600C (-WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??EPffIterator@@QEAAAEAV0@XZ @ 0x140296FC4 (--EPffIterator@@QEAAAEAV0@XZ.c)
 *     ??0PffIterator@@QEAA@PEAVPFF@@@Z @ 0x140297050 (--0PffIterator@@QEAA@PEAVPFF@@@Z.c)
 *     ?ApplyFontInfEquivalentChangesOnServicingUpdate@@YAXXZ @ 0x140323CA4 (-ApplyFontInfEquivalentChangesOnServicingUpdate@@YAXXZ.c)
 *     vLinkEudcPFEs @ 0x140324F0C (vLinkEudcPFEs.c)
 *     memcmp @ 0x14034FDE0 (memcmp.c)
 */

__int64 __fastcall bAddAllFlEntry(int a1)
{
  int v2; // r15d
  wchar_t *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int16 *v7; // rsi
  __int64 v8; // rdi
  unsigned int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r12
  __int64 v14; // rax
  unsigned int v15; // r13d
  unsigned int v16; // eax
  __int64 v17; // r11
  unsigned int v18; // r10d
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 i; // rcx
  bool v22; // al
  int Fonts; // ebx
  bool v24; // bl
  PFTOBJ *v25; // rcx
  int CurrentServiceSessionId; // ebx
  unsigned int v28; // ebx
  unsigned __int16 *v29; // rax
  unsigned __int16 *v30; // r15
  unsigned __int16 *v31; // rcx
  size_t v32; // [rsp+28h] [rbp-71h]
  struct PFE *v33[2]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v34[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v35; // [rsp+90h] [rbp-9h] BYREF
  _QWORD v36[2]; // [rsp+A0h] [rbp+7h] BYREF
  int v37; // [rsp+B0h] [rbp+17h]
  __int64 v38; // [rsp+108h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+110h] [rbp+77h] BYREF
  HANDLE v40; // [rsp+118h] [rbp+7Fh] BYREF

  LODWORD(v38) = 0;
  v2 = 0;
  Handle = (HANDLE)Win32AllocPoolZInit(520LL, 1886221383LL);
  v3 = (wchar_t *)Handle;
  if ( !Handle )
    EngSetLastError(8u);
  v38 = Win32AllocPoolZInit(520LL, 1886221383LL);
  v7 = (unsigned __int16 *)v38;
  if ( !v38 )
    EngSetLastError(8u);
  if ( !v3 )
  {
    if ( !v7 )
      return 0LL;
    v31 = v7;
LABEL_66:
    Win32FreePool(v31);
    return 0LL;
  }
  if ( !v7 )
  {
    v31 = v3;
    goto LABEL_66;
  }
  *v7 = 0;
  *v3 = 0;
  v8 = *(_QWORD *)(W32GetSessionState(v5, v4, v6) + 96) + 4864LL;
  GreAcquirePushLockExclusive2<16,1>(v8);
  WaitForConcurrentEUDCOperationCompletion((struct Gre::Font::GLOBALS *)v8);
  if ( !a1 || *(_QWORD *)(v8 + 8656) || *(_QWORD *)(v8 + 8664) || !(unsigned int)bReadUserSystemEUDCRegistry(v3) )
    goto LABEL_42;
  *(_OWORD *)v33 = 0LL;
  if ( !(unsigned int)bAppendSysDirectory(v7, v3, v9) )
  {
    GreReleasePushLockExclusive2<16,1>(v8);
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v38);
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&Handle);
    return 0LL;
  }
  v35 = *(_QWORD *)(v8 + 15528);
  v40 = *(HANDLE *)(*(_QWORD *)(W32GetSessionState(v11, v10, v12) + 96) + 20320LL);
  GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( v7[v14] );
  v15 = v14 + 1;
  v16 = iHash(v7, *(_DWORD *)(v35 + 24));
  if ( v16 >= v18 )
  {
    PffIterator::PffIterator((PffIterator *)&v38, 0LL);
    v19 = v38;
  }
  else
  {
    v19 = *(_QWORD *)(v17 + 8LL * v16 + 40);
    v38 = v19;
    v20 = v19;
    for ( i = v19; ; i = v20 )
    {
      v22 = 0;
      if ( v20 )
      {
        v2 |= 1u;
        if ( (*(_DWORD *)(i + 52) & 0x10000) != 0 )
          v22 = 1;
      }
      if ( (v2 & 1) != 0 )
        v2 &= ~1u;
      if ( !v22 )
        break;
      v20 = *(_QWORD *)(v19 + 8);
      v19 = v20;
      v38 = v20;
    }
  }
  if ( v19 )
  {
    do
    {
      if ( (*(_DWORD *)(v19 + 52) & 8) != 0
        && v15 == *(_DWORD *)(v19 + 32)
        && *(_DWORD *)(v19 + 36) == 1
        && !memcmp(*(const void **)(v19 + 24), v7, 2LL * v15)
        && !*(_DWORD *)(v19 + 48) )
      {
        break;
      }
      PffIterator::operator++(&v38);
      v19 = v38;
    }
    while ( v38 );
    if ( v19 )
      goto LABEL_34;
  }
  v34[1] = 0LL;
  v34[0] = v33;
  LODWORD(v38) = 0;
  Handle = 0LL;
  do
    ++v13;
  while ( v7[v13] );
  v28 = v13 + 1;
  if ( (unsigned int)(v13 + 1) > 0x1388000
    || (v29 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * v28), (v30 = v29) == 0LL) )
  {
LABEL_34:
    Fonts = 0;
  }
  else
  {
    cCapString(v29, v7, v28);
    LODWORD(v32) = 0;
    Fonts = PUBLIC_PFTOBJ::bLoadFonts(
              (PUBLIC_PFTOBJ *)&v35,
              v30,
              v28,
              1u,
              0LL,
              v32,
              (unsigned int *)&v38,
              8u,
              (struct PFF **)&Handle,
              0,
              0,
              (struct _EUDCLOAD *)v34,
              0,
              0);
    FreeTmpBuffer(v30);
  }
  SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v40);
  if ( Fonts )
  {
    if ( (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)(v8 + 9200), v33[0], 1) )
      goto LABEL_62;
    v24 = 0;
    v34[0] = *(_QWORD *)v33[0];
    UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
      (UmfdClientSideFileViewMapper *)v36,
      (struct PFFOBJ *)v34);
    if ( v37 == *(_DWORD *)(v36[0] + 36LL) )
      v24 = (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)(v8 + 9200), v33[0], 1) != 0;
    UmfdClientSideFileViewMapper::~UmfdClientSideFileViewMapper((UmfdClientSideFileViewMapper *)v36);
    if ( v24 )
    {
LABEL_62:
      *(_OWORD *)(v8 + 8656) = *(_OWORD *)v33;
      wcscpy_s((wchar_t *)(v8 + 8672), 0x105uLL, v7);
      ++*(_DWORD *)(v8 + 9232);
      goto LABEL_42;
    }
    PFTOBJ::bUnloadEUDCFont(v25, v7);
  }
  *(_OWORD *)(v8 + 8656) = 0LL;
  *(_WORD *)(v8 + 8672) = 0;
LABEL_42:
  if ( (*(_DWORD *)(v8 + 8648) & 1) != 0 )
  {
    CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
    if ( (unsigned int)W32GetCurrentWin32kSessionId() == CurrentServiceSessionId )
      ApplyFontInfEquivalentChangesOnServicingUpdate();
    AddAllFlEntryWorker(L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontLink\\SystemLink");
  }
  if ( (*(_DWORD *)(v8 + 8648) & 4) != 0 )
  {
    Handle = 0LL;
    v40 = 0LL;
    LODWORD(v38) = 0;
    if ( (int)GetUserEUDCRegistryPath(v3) >= 0 && (unsigned int)bNotIsKeySymbolicLink(v3, &Handle, &v40) && (_DWORD)v38 )
      AddAllFlEntryWorker(v3);
    if ( Handle )
      ZwClose(Handle);
    if ( v40 )
      ZwClose(v40);
    vLinkEudcPFEs(0LL);
  }
  GreReleasePushLockExclusive2<16,1>(v8);
  Win32FreePool(v7);
  Win32FreePool(v3);
  return 1LL;
}
