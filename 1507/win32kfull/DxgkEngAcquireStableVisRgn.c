/*
 * XREFs of DxgkEngAcquireStableVisRgn @ 0x1C0264070
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

void __fastcall DxgkEngAcquireStableVisRgn(HDC a1)
{
  _QWORD v2[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v3; // [rsp+68h] [rbp+10h] BYREF

  UserEnterUserCritSecShared();
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  DCOBJ::DCOBJ((DCOBJ *)v2, a1);
  if ( v2[0]
    && ((v3 = *(_QWORD *)(v2[0] + 48LL), (*(_DWORD *)(*(_QWORD *)(v2[0] + 80LL) + 8LL) & 0x4000) != 0)
     || (*(_DWORD *)(v2[0] + 36LL) & 0x8200) == 0x8200)
    && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v3) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
  }
  else
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
  DCOBJ::~DCOBJ((DCOBJ *)v2);
}
