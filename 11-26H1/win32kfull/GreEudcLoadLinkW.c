/*
 * XREFs of GreEudcLoadLinkW @ 0x14032453C
 * Callers:
 *     NtGdiEudcLoadUnloadLink @ 0x140325810 (NtGdiEudcLoadUnloadLink.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400C6908 (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x1400F6A9C (--$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 *     ??$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FAB9C (--$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FABC0 (--$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1400FB1B4 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x140102B20 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     bAddFlEntry @ 0x140103490 (bAddFlEntry.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x140103ABC (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     bUnloadEudcFont @ 0x140104924 (bUnloadEudcFont.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z @ 0x140106418 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x14016EF30 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x140186E18 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140187408 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??1UmfdClientSideFileViewMapper@@QEAA@XZ @ 0x14021AC50 (--1UmfdClientSideFileViewMapper@@QEAA@XZ.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x140222080 (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x140287590 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ??0?$PushLockExclusiveObj@$0A@$00@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140291FCC (--0-$PushLockExclusiveObj@$0A@$00@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x14029600C (-WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     bWriteUserSystemEUDCRegistry @ 0x140324B28 (bWriteUserSystemEUDCRegistry.c)
 *     vLinkEudcPFEs @ 0x140324F0C (vLinkEudcPFEs.c)
 */

__int64 __fastcall GreEudcLoadLinkW(wchar_t *a1, __int64 a2, char *a3, unsigned int a4, int a5, unsigned int a6)
{
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v11; // rsi
  wchar_t *v12; // rbx
  unsigned int appended; // edi
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // r8
  __int64 v19; // rdx
  struct PFE *v20; // rdx
  int v21; // r8d
  __int64 v22; // rcx
  wchar_t *Src; // [rsp+48h] [rbp-39h] BYREF
  struct PFF *v24; // [rsp+50h] [rbp-31h] BYREF
  HSEMAPHORE v25; // [rsp+58h] [rbp-29h] BYREF
  struct W32_PUSH_LOCK *v26; // [rsp+60h] [rbp-21h] BYREF
  struct PFE *v27[2]; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v28[2]; // [rsp+78h] [rbp-9h] BYREF
  int v29; // [rsp+88h] [rbp+7h]
  _QWORD v30[3]; // [rsp+90h] [rbp+Fh] BYREF
  unsigned int v31; // [rsp+F0h] [rbp+6Fh] BYREF

  v31 = a4;
  if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus((__int64)a1, a2, (__int64)a3) )
    return 0LL;
  v11 = *(_QWORD *)(W32GetSessionState(v9, v8) + 96) + 4864LL;
  PushLockExclusiveObj<0,1>::PushLockExclusiveObj<0,1>(&v26, v11);
  GreAcquirePushLockExclusive2<16,1>(v11);
  WaitForConcurrentEUDCOperationCompletion((struct Gre::Font::GLOBALS *)v11);
  if ( a1 )
  {
    v21 = a6;
    Src = 0LL;
    if ( a6 > 1 )
      v21 = 1;
    appended = bAddFlEntry(a1, (__int64)a3, v21, a5, &Src);
    if ( appended && Src )
      vLinkEudcPFEs(Src);
  }
  else
  {
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, 0x20Au);
    v12 = Src;
    *(_OWORD *)v27 = 0LL;
    appended = Src != 0LL;
    if ( Src )
    {
      appended = bAppendSysDirectory(Src, a3);
      if ( appended )
      {
        v16 = *(_QWORD *)(W32GetSessionState(v15, v14) + 96);
        SEMOBJ<17>::SEMOBJ<17>(&v25, v16 + 4864);
        v17 = -1LL;
        v30[0] = *(_QWORD *)(v16 + 20392);
        v18 = -1LL;
        v31 = -1;
        do
          ++v18;
        while ( v12[v18] );
        if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)v30, v12, (int)v18 + 1, 1, 0LL, 0, &v31, 1) )
        {
          appended = 0;
        }
        else
        {
          v28[0] = v27;
          v28[1] = 0LL;
          v31 = 0;
          v24 = 0LL;
          appended = PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)v30, v12, &v31, 8u, &v24, (struct _EUDCLOAD *)v28, 0);
        }
        SEMOBJ<17>::vUnlock(&v25);
        if ( appended )
        {
          if ( *(_QWORD *)(v11 + 8656) || *(_QWORD *)(v11 + 8664) )
          {
            vUnlinkAllEudcRFONTsAndPFEs(0, v19);
            bUnloadEudcFont((struct PFE **)(v11 + 8656));
          }
          *(_OWORD *)(v11 + 8656) = *(_OWORD *)v27;
          wcscpy_s((wchar_t *)(v11 + 8672), 0x105uLL, v12);
          v20 = v27[0];
          ++*(_DWORD *)(v11 + 9232);
          if ( !(unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)(v11 + 9200), v20, 1) )
          {
            v30[0] = *(_QWORD *)v27[0];
            UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
              (UmfdClientSideFileViewMapper *)v28,
              (struct PFFOBJ *)v30);
            if ( v29 == *(_DWORD *)(v28[0] + 36LL) )
              bComputeQuickLookup((struct _QUICKLOOKUP *)(v11 + 9200), v27[0], 1);
            UmfdClientSideFileViewMapper::~UmfdClientSideFileViewMapper((UmfdClientSideFileViewMapper *)v28);
          }
          do
            ++v17;
          while ( *(_WORD *)(v11 + 8672 + 2 * v17) );
          bWriteUserSystemEUDCRegistry((PVOID)(v11 + 8672));
        }
      }
    }
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&Src);
  }
  GreReleasePushLockExclusive2<16,1>(v11);
  GrepReleasePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(v22, v26);
  return appended;
}
