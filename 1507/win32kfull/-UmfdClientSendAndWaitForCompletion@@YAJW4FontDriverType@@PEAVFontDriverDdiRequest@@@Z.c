/*
 * XREFs of ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A39A4
 * Callers:
 *     UmfdDestroyFont @ 0x1C02D4B40 (UmfdDestroyFont.c)
 *     UmfdDrvFreeInternal @ 0x1C02D4C20 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C02D4C70 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02D4D10 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02D4DC0 (UmfdGetTrueTypeFile.c)
 *     UmfdLoadFontFile @ 0x1C02D4E30 (UmfdLoadFontFile.c)
 *     UmfdQueryAdvanceWidths @ 0x1C02D4FB0 (UmfdQueryAdvanceWidths.c)
 *     UmfdQueryFont @ 0x1C02D5050 (UmfdQueryFont.c)
 *     UmfdQueryFontData @ 0x1C02D5140 (UmfdQueryFontData.c)
 *     UmfdQueryFontFile @ 0x1C02D51F0 (UmfdQueryFontFile.c)
 *     UmfdQueryFontTree @ 0x1C02D5270 (UmfdQueryFontTree.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02D5310 (UmfdQueryGlyphAttrs.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C02D53C0 (UmfdQueryTrueTypeOutline.c)
 *     UmfdQueryTrueTypeTable @ 0x1C02D54A0 (UmfdQueryTrueTypeTable.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C02D555C (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdUnloadFontFileInternal @ 0x1C02D560C (UmfdUnloadFontFileInternal.c)
 * Callees:
 *     _TlgWrite @ 0x1C007D678 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C007E128 (_TlgKeywordOn.c)
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C0127548 (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??1AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C01C132C (--1AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     _lambda_97a697242a8b19ea33d83967a6d13409_::operator() @ 0x1C02A359C (_lambda_97a697242a8b19ea33d83967a6d13409_--operator().c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02B99D0 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UmfdClientWaitForCompletion@@YAJPEAXPEBI@Z @ 0x1C02D56A0 (-UmfdClientWaitForCompletion@@YAJPEAXPEBI@Z.c)
 *     ?UmfdCreateRequestContext@@YAPEAXXZ @ 0x1C02D56E8 (-UmfdCreateRequestContext@@YAPEAXXZ.c)
 */

__int64 __fastcall UmfdClientSendAndWaitForCompletion(unsigned int a1, __int64 a2)
{
  __int64 v2; // rbx
  void *RequestContext; // rdi
  int v5; // ebx
  unsigned __int64 v6; // rsi
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v10; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v11; // [rsp+3Ch] [rbp-55h] BYREF
  __int64 v12; // [rsp+40h] [rbp-51h] BYREF
  __int128 v13; // [rsp+48h] [rbp-49h]
  void *v14; // [rsp+58h] [rbp-39h]
  __int128 v15; // [rsp+68h] [rbp-29h] BYREF
  void *v16; // [rsp+78h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-9h] BYREF
  int *v18; // [rsp+A8h] [rbp+17h]
  int v19; // [rsp+B0h] [rbp+1Fh]
  int v20; // [rsp+B4h] [rbp+23h]
  unsigned int *v21; // [rsp+B8h] [rbp+27h]
  int v22; // [rsp+C0h] [rbp+2Fh]
  int v23; // [rsp+C4h] [rbp+33h]
  __int64 v24; // [rsp+100h] [rbp+6Fh] BYREF

  v24 = a2;
  if ( a1 > 3 )
    return 3221225485LL;
  v2 = g_pUmfdClientPort[a1];
  RequestContext = UmfdCreateRequestContext();
  if ( !RequestContext )
    return 3221225495LL;
  *(_QWORD *)&v13 = v2;
  *((_QWORD *)&v13 + 1) = &v24;
  v14 = RequestContext;
  v15 = v13;
  v16 = RequestContext;
  UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock((UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)&v12);
  if ( UmfdHostLifeTimeManager::s_Ready )
  {
    v5 = lambda_97a697242a8b19ea33d83967a6d13409_::operator()((__int64)&v15);
    AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)&v12);
  }
  else
  {
    if ( v12 )
    {
      GreReleasePushLockShared(v12);
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
      if ( (unsigned int)dword_1C031D7B0 > 5 )
      {
        if ( TlgKeywordOn(v7, 0x200000000000uLL) )
        {
          v20 = 0;
          v18 = &v10;
          v19 = 4;
          v10 = v5;
          v22 = 4;
          v21 = &v11;
          v23 = 0;
          v11 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v6;
          TlgWrite((TraceLoggingHProvider)v11, &unk_1C02EAE67, v8, v9, 4u, &pData);
        }
      }
    }
  }
  EngFreeMem(RequestContext);
  return (unsigned int)v5;
}
