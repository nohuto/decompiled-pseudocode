/*
 * XREFs of ?vCleanupDCs@@YAXK@Z @ 0x1C005A11C
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00599AC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     MultiUserCleanupDCs @ 0x1C006CF54 (MultiUserCleanupDCs.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002549C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0025504 (--1DCOBJ@@QEAA@XZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0027218 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002ABE0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEAAHK@Z @ 0x1C002B450 (-bOwnedBy@ENTRYOBJ@@QEAAHK@Z.c)
 *     bDeleteDCInternal @ 0x1C005A4D0 (bDeleteDCInternal.c)
 *     HmgSetLock @ 0x1C005A5C0 (HmgSetLock.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C00C0878 (HmgCheckDCForPrivateReferences.c)
 *     HmgMarkUnXferable @ 0x1C00C0A40 (HmgMarkUnXferable.c)
 *     HmgSafeNextObjtByIndex @ 0x1C00C0C6C (HmgSafeNextObjtByIndex.c)
 *     ?vFixPublicDCWithPrivateReferences@XDCOBJ@@QEAAXK@Z @ 0x1C00CCED8 (-vFixPublicDCWithPrivateReferences@XDCOBJ@@QEAAXK@Z.c)
 */

void __fastcall vCleanupDCs(__int64 a1, int a2, int a3)
{
  unsigned int v3; // r15d
  __int64 v4; // rdx
  __int64 i; // rcx
  struct OBJECT *v6; // rbx
  HDC v7; // rsi
  ENTRYOBJ *EntryFromObject; // rax
  ENTRYOBJ *v9; // rdi
  ENTRYOBJ *v10; // rcx
  __int64 v11; // rdx
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rcx
  int v18; // r8d
  GdiHandleEntryDirectory **DeferredContext; // rdi
  unsigned int v20; // eax
  struct _ENTRY *Entry; // rax
  int v22; // edx
  __int64 v23; // rcx
  int v24; // r8d
  __int64 v25; // rcx
  unsigned int v26; // r14d
  _QWORD v27[6]; // [rsp+20h] [rbp-30h] BYREF
  struct OBJECT *EntryObject; // [rsp+88h] [rbp+38h] BYREF

  v3 = a1;
  EntryObject = 0LL;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  for ( i = 0LL; ; i = v26 )
  {
    v26 = HmgSafeNextObjtByIndex(i, v4, &EntryObject);
    if ( !v26 )
      break;
    v6 = EntryObject;
    v7 = *(HDC *)EntryObject;
    EntryFromObject = GdiHandleManager::GetEntryFromObject(
                        (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                        EntryObject);
    v9 = EntryFromObject;
    if ( EntryFromObject )
    {
      if ( ENTRYOBJ::bOwnedBy(EntryFromObject, v3) )
      {
        GreReleaseHmgrSemaphore((__int64)v10);
        if ( (*((_BYTE *)v9 + 15) & 0x20) != 0 || *((_DWORD *)v6 + 632) )
        {
          LOBYTE(v11) = 1;
          *((_DWORD *)v6 + 632) = 0;
          HmgMarkUnXferable(v7, v11);
          while ( *((_WORD *)v6 + 6) )
            KeDelayExecutionThread(0, 0, gpLockShortDelay);
        }
        HmgSetLock(v7);
        bDeleteDCInternal(v7, 1, 1, 0);
        GreAcquireHmgrSemaphore(v13, v12, v14);
      }
      else if ( ENTRYOBJ::bOwnedBy(v10, 0) )
      {
        while ( (unsigned int)HmgCheckDCForPrivateReferences(v6, v3) )
        {
          DCOBJ::DCOBJ((DCOBJ *)v27, v7);
          if ( HmgLockResultBase<DRVOBJ>::operator bool(v27) )
          {
            GreReleaseHmgrSemaphore(v15);
            XDCOBJ::vFixPublicDCWithPrivateReferences((XDCOBJ *)v27, v3);
            GreAcquireHmgrSemaphore(v23, v22, v24);
LABEL_20:
            DCOBJ::~DCOBJ((DCOBJ *)v27);
            break;
          }
          GreReleaseHmgrSemaphore(v15);
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
          GreAcquireHmgrSemaphore(v17, v16, v18);
          DeferredContext = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
          v20 = GdiHandleManager::DecodeIndex(
                  (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                  (unsigned __int16)v7 | ((unsigned int)v7 >> 8) & 0xFF0000);
          Entry = GdiHandleEntryDirectory::GetEntry(DeferredContext[2], v20, 0);
          if ( !Entry || *((_BYTE *)Entry + 14) != 1 || !ENTRYOBJ::bOwnedBy(Entry, 0) )
            goto LABEL_20;
          EntryObject = GdiHandleManager::GetEntryObject(
                          DeferredContext,
                          (unsigned __int16)v7 | ((unsigned int)v7 >> 8) & 0xFF0000);
          v6 = EntryObject;
          DCOBJ::~DCOBJ((DCOBJ *)v27);
        }
      }
    }
  }
  GreReleaseHmgrSemaphore(v25);
}
