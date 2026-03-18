/*
 * XREFs of ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A4314
 * Callers:
 *     UmfdDestroyFont @ 0x1C02D8FC0 (UmfdDestroyFont.c)
 *     UmfdDrvFreeInternal @ 0x1C02D90A0 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C02D90F0 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02D9190 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02D9240 (UmfdGetTrueTypeFile.c)
 *     UmfdLoadFontFile @ 0x1C02D92B0 (UmfdLoadFontFile.c)
 *     UmfdQueryAdvanceWidths @ 0x1C02D9440 (UmfdQueryAdvanceWidths.c)
 *     UmfdQueryFont @ 0x1C02D94E0 (UmfdQueryFont.c)
 *     UmfdQueryFontData @ 0x1C02D95D0 (UmfdQueryFontData.c)
 *     UmfdQueryFontFile @ 0x1C02D9680 (UmfdQueryFontFile.c)
 *     UmfdQueryFontTree @ 0x1C02D9700 (UmfdQueryFontTree.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02D97A0 (UmfdQueryGlyphAttrs.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C02D9850 (UmfdQueryTrueTypeOutline.c)
 *     UmfdQueryTrueTypeTable @ 0x1C02D9930 (UmfdQueryTrueTypeTable.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C02D99EC (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdUnloadFontFileInternal @ 0x1C02D9A9C (UmfdUnloadFontFileInternal.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C015740C (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C01BF4D8 (--1AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     _lambda_b52ba6a803f0136d64afee5592ba9322_::operator() @ 0x1C02A3F14 (_lambda_b52ba6a803f0136d64afee5592ba9322_--operator().c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02BC260 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UmfdClientWaitForCompletion@@YAJPEAXPEBI@Z @ 0x1C02D9B60 (-UmfdClientWaitForCompletion@@YAJPEAXPEBI@Z.c)
 *     ?UmfdCreateRequestContext@@YAPEAXXZ @ 0x1C02D9BA8 (-UmfdCreateRequestContext@@YAPEAXXZ.c)
 */

__int64 __fastcall UmfdClientSendAndWaitForCompletion(unsigned int a1, __int64 a2)
{
  __int64 v2; // rbx
  void *RequestContext; // rdi
  int v5; // ebx
  unsigned __int64 v6; // rsi
  const GUID *v7; // r9
  int v8; // [rsp+38h] [rbp-59h] BYREF
  int v9; // [rsp+3Ch] [rbp-55h] BYREF
  __int64 v10; // [rsp+40h] [rbp-51h] BYREF
  __int128 v11; // [rsp+48h] [rbp-49h]
  void *v12; // [rsp+58h] [rbp-39h]
  __int128 v13; // [rsp+68h] [rbp-29h] BYREF
  void *v14; // [rsp+78h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-9h] BYREF
  int *v16; // [rsp+A8h] [rbp+17h]
  int v17; // [rsp+B0h] [rbp+1Fh]
  int v18; // [rsp+B4h] [rbp+23h]
  int *v19; // [rsp+B8h] [rbp+27h]
  int v20; // [rsp+C0h] [rbp+2Fh]
  int v21; // [rsp+C4h] [rbp+33h]
  __int64 v22; // [rsp+100h] [rbp+6Fh] BYREF

  v22 = a2;
  if ( a1 > 3 )
    return 3221225485LL;
  v2 = g_pUmfdClientPort[a1];
  RequestContext = UmfdCreateRequestContext();
  if ( !RequestContext )
    return 3221225495LL;
  *(_QWORD *)&v11 = v2;
  *((_QWORD *)&v11 + 1) = &v22;
  v12 = RequestContext;
  v13 = v11;
  v14 = RequestContext;
  UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock((UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)&v10);
  if ( UmfdHostLifeTimeManager::s_Ready )
  {
    v5 = lambda_b52ba6a803f0136d64afee5592ba9322_::operator()((__int64)&v13);
    AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)&v10);
  }
  else
  {
    if ( v10 )
    {
      GreReleasePushLockShared(v10);
      KeLeaveCriticalRegion();
    }
    v5 = -1073741823;
  }
  if ( v5 >= 0 )
  {
    v5 = UmfdClientWaitForCompletion(RequestContext, &UmfdHostLifeTimeManager::TimeoutMS);
    if ( v5 == 258 )
    {
      v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      UmfdHostLifeTimeManager::TerminateUmfdHost();
      v5 = UmfdClientWaitForCompletion(RequestContext, 0LL);
      if ( dword_1C0320840 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x200000000000uLL) )
        {
          v18 = 0;
          v16 = &v8;
          v17 = 4;
          v8 = v5;
          v20 = 4;
          v19 = &v9;
          v21 = 0;
          v9 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v6;
          TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EF9C0, (LPCGUID)4, v7, 4u, &pData);
        }
      }
    }
  }
  EngFreeMem(RequestContext);
  return (unsigned int)v5;
}
