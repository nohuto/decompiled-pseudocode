/*
 * XREFs of DEC_SHARE_REF_CNT @ 0x1C0031C80
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0025FD0 (GreCreateDisplayDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0030F10 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032210 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     GreRestoreDC @ 0x1C0032D00 (GreRestoreDC.c)
 *     GreDCSelectPen @ 0x1C0048F10 (GreDCSelectPen.c)
 *     bMigrateSurfaceForConversion @ 0x1C005B360 (bMigrateSurfaceForConversion.c)
 *     EngDeletePalette @ 0x1C007DC10 (EngDeletePalette.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B4B80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B58C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00B5970 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B5C24 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall DEC_SHARE_REF_CNT(_DWORD *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  unsigned int v7; // [rsp+3Ch] [rbp-1Ch]
  unsigned int v8; // [rsp+44h] [rbp-14h]

  v2 = 0;
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v5,
    (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*a1),
    0,
    (unsigned __int16)*a1,
    0);
  if ( v6 )
  {
    v3 = v5;
    if ( v5 )
    {
      if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*a1 + 14) == 5
        && HIDWORD(WPP_MAIN_CB.SecurityDescriptor)
        && gpentHmgrAltStacks )
      {
        RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*a1);
      }
      v2 = a1[2];
      a1[2] = v2 - 1;
      if ( (*(_BYTE *)(v3 + 15) & 0x40) != 0 )
      {
        ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v8);
      }
      else
      {
        _m_prefetchw((const void *)(v3 + 8));
        v7 = *(_DWORD *)(v3 + 8) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)(v3 + 8), v7);
      }
      v6 = 0;
      v5 = 0LL;
      KeLeaveCriticalRegion();
    }
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v5);
  return v2;
}
