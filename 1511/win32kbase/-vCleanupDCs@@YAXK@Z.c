/*
 * XREFs of ?vCleanupDCs@@YAXK@Z @ 0x1C0037610
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00451E8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     MultiUserCleanupDCs @ 0x1C00768DC (MultiUserCleanupDCs.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00316F0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bValid@XDCOBJ@@QEAAHXZ @ 0x1C00319E4 (-bValid@XDCOBJ@@QEAAHXZ.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEAAHK@Z @ 0x1C0034220 (-bOwnedBy@ENTRYOBJ@@QEAAHK@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 *     bDeleteDCInternal @ 0x1C006BEB0 (bDeleteDCInternal.c)
 *     HmgSetLock @ 0x1C0073464 (HmgSetLock.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C00B5DA8 (HmgCheckDCForPrivateReferences.c)
 *     ?vFixPublicDCWithPrivateReferences@XDCOBJ@@QEAAXK@Z @ 0x1C00C0584 (-vFixPublicDCWithPrivateReferences@XDCOBJ@@QEAAXK@Z.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C00C05D0 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall vCleanupDCs(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int i; // edi
  ENTRYOBJ *v8; // rbx
  __int64 v9; // rdx
  ENTRYOBJ *v10; // rcx
  __int64 v11; // r8
  char v12; // al
  HDC *v13; // rsi
  HDC v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r8d
  HDC *v24; // rsi
  _QWORD v25[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  for ( i = 1; i < gcMaxHmgr; ++i )
  {
    v4 = 3LL * i;
    v8 = (ENTRYOBJ *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * i);
    if ( *((_BYTE *)v8 + 14) == 1 )
    {
      if ( ENTRYOBJ::bOwnedBy((ENTRYOBJ *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * i), v3) )
      {
        GreReleaseHmgrSemaphore((__int64)v10, v9, v11);
        v12 = *((_BYTE *)v8 + 15);
        v13 = *(HDC **)v8;
        if ( (v12 & 0x20) != 0 )
        {
          *((_BYTE *)v8 + 15) = v12 & 0xDF;
          while ( *((_WORD *)v13 + 6) )
            KeDelayExecutionThread(0, 0, gpLockShortDelay);
        }
        HmgSetLock(*v13);
        bDeleteDCInternal(v14, 1, 1, 0);
        GreAcquireHmgrSemaphore(v16, v15, v17);
      }
      else if ( ENTRYOBJ::bOwnedBy(v10, 0) )
      {
        v25[0] = 0LL;
        v25[1] = 0LL;
        do
        {
          v24 = *(HDC **)v8;
          if ( !(unsigned int)HmgCheckDCForPrivateReferences(*(_QWORD *)v8, v3) )
            break;
          XDCOBJ::vLock((XDCOBJ *)v25, *v24);
          if ( XDCOBJ::bValid((XDCOBJ *)v25) )
          {
            XDCOBJ::vFixPublicDCWithPrivateReferences((XDCOBJ *)v25, v3);
            XDCOBJ::vUnlock((XDCOBJ *)v25);
            break;
          }
          GreReleaseHmgrSemaphore(v19, v18, v20);
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
          GreAcquireHmgrSemaphore(v22, v21, v23);
        }
        while ( *((_BYTE *)v8 + 14) == 1 && ENTRYOBJ::bOwnedBy(v8, 0) );
      }
    }
  }
  GreReleaseHmgrSemaphore(v5, v4, v6);
}
