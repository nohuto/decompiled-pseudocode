/*
 * XREFs of ?vCleanupDCs@@YAXK@Z @ 0x1C005BEBC
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C005B8C0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     MultiUserCleanupDCs @ 0x1C006D6C4 (MultiUserCleanupDCs.c)
 * Callees:
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0035640 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEAAHK@Z @ 0x1C0038500 (-bOwnedBy@ENTRYOBJ@@QEAAHK@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     bDeleteDCInternal @ 0x1C005C1D0 (bDeleteDCInternal.c)
 *     HmgSetLock @ 0x1C005C2A0 (HmgSetLock.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AEEE0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C00B32C8 (HmgCheckDCForPrivateReferences.c)
 *     HmgMarkUnXferable @ 0x1C00B3480 (HmgMarkUnXferable.c)
 *     ?vFixPublicDCWithPrivateReferences@XDCOBJ@@QEAAXK@Z @ 0x1C00BF684 (-vFixPublicDCWithPrivateReferences@XDCOBJ@@QEAAXK@Z.c)
 */

void __fastcall vCleanupDCs(__int64 a1, int a2, int a3)
{
  unsigned int v3; // r14d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int i; // esi
  ENTRYOBJ *v8; // rbx
  __int64 v9; // rdx
  ENTRYOBJ *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  HDC *v13; // rdi
  HDC v14; // rbp
  int v15; // edx
  __int64 v16; // rcx
  int v17; // r8d
  HDC *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // edx
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rcx
  int v27; // r8d
  _QWORD v28[6]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a1;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  for ( i = 1; i < gcMaxHmgr; ++i )
  {
    v4 = 3LL * i;
    v8 = (ENTRYOBJ *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * i);
    if ( *((_BYTE *)v8 + 14) == 1 )
    {
      if ( ENTRYOBJ::bOwnedBy((ENTRYOBJ *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * i), v3) )
      {
        GreReleaseHmgrSemaphore((__int64)v10, v9, v11);
        v13 = *(HDC **)v8;
        v14 = **(HDC **)v8;
        if ( (*((_BYTE *)v8 + 15) & 0x20) != 0 || *((_DWORD *)v13 + 632) )
        {
          LOBYTE(v12) = 1;
          *((_DWORD *)v13 + 632) = 0;
          HmgMarkUnXferable(v14, v12);
          while ( *((_WORD *)v13 + 6) )
            KeDelayExecutionThread(0, 0, gpLockShortDelay);
        }
        HmgSetLock(v14);
        bDeleteDCInternal(v14, 1, 1, 0);
        GreAcquireHmgrSemaphore(v16, v15, v17);
      }
      else if ( ENTRYOBJ::bOwnedBy(v10, 0) )
      {
        v18 = *(HDC **)v8;
        while ( (unsigned int)HmgCheckDCForPrivateReferences(v18, v3) )
        {
          DCOBJ::DCOBJ((DCOBJ *)v28, *v18);
          if ( HmgLockResultBase<DRVOBJ>::operator bool(v28) )
          {
            GreReleaseHmgrSemaphore(v20, v19, v21);
            XDCOBJ::vFixPublicDCWithPrivateReferences((XDCOBJ *)v28, v3);
            GreAcquireHmgrSemaphore(v26, v25, v27);
LABEL_19:
            DCOBJ::~DCOBJ((DCOBJ *)v28);
            break;
          }
          GreReleaseHmgrSemaphore(v20, v19, v21);
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
          GreAcquireHmgrSemaphore(v23, v22, v24);
          if ( *((_BYTE *)v8 + 14) != 1 || !ENTRYOBJ::bOwnedBy(v8, 0) )
            goto LABEL_19;
          v18 = *(HDC **)v8;
          DCOBJ::~DCOBJ((DCOBJ *)v28);
        }
      }
    }
  }
  GreReleaseHmgrSemaphore(v5, v4, v6);
}
