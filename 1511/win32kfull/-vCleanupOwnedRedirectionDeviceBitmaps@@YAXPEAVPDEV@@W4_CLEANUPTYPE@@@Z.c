/*
 * XREFs of ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z @ 0x1C00E6128
 * Callers:
 *     vCleanupOwnedRedirectionDeviceBitmapsWrap @ 0x1C00E6120 (vCleanupOwnedRedirectionDeviceBitmapsWrap.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C00E7368 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E73A8 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

void __fastcall vCleanupOwnedRedirectionDeviceBitmaps(__int64 a1, unsigned int a2)
{
  int IsSemaphoreOwnedOrSharedByCurrentThread; // eax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 i; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 Objt; // rax
  char v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  IsSemaphoreOwnedOrSharedByCurrentThread = GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange);
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
    (NEEDDYNAMICMODECHANGESHARELOCK *)&v14,
    IsSemaphoreOwnedOrSharedByCurrentThread == 0);
  LOBYTE(v5) = 5;
  HmgPrefetchAllObjt(v5, SURFACE::tSize + 256);
  GreAcquireHmgrSemaphore(v7, v6);
  for ( i = 0LL; ; i = v10 )
  {
    LOBYTE(v8) = 5;
    Objt = HmgSafeNextObjt(i, v8);
    if ( !Objt )
      break;
    v10 = *(_QWORD *)Objt;
    if ( *(_QWORD *)(Objt + 48) == a1 && (*(_DWORD *)(Objt + 116) & 1) != 0 && !*(_DWORD *)(Objt + 8) )
    {
      GreMarkDeletableBitmap(*(_QWORD *)Objt);
      LOBYTE(v11) = 5;
      v12 = HmgShareLockCheck(v10, v11);
      if ( (unsigned int)SURFACE::bDeleteSurface(v12, a2, 0LL) )
        v12 = 0LL;
      v15 = v12;
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v15);
    }
  }
  GreReleaseHmgrSemaphore();
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v14);
}
