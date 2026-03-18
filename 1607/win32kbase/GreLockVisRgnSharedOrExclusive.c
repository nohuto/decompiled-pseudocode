/*
 * XREFs of GreLockVisRgnSharedOrExclusive @ 0x1C0075F70
 * Callers:
 *     <none>
 * Callees:
 *     GreLockVisRgn @ 0x1C0025520 (GreLockVisRgn.c)
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0027218 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00272C0 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00272DC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0031AB0 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00740F0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreLockVisRgnSharedOrExclusive(__int64 a1, HDC a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  int v5; // edx
  bool v6; // bl
  int v7; // edx
  int v8; // r8d
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  v2 = a1;
  if ( a2 )
  {
    DCOBJA::DCOBJA((DCOBJA *)v9, a2);
    if ( !HmgLockResultBase<DRVOBJ>::operator bool(v9) )
    {
      DCOBJA::~DCOBJA((DCOBJA *)v9);
      return 0LL;
    }
    v4 = v9[0];
    v2 = *(_QWORD *)(v9[0] + 48LL);
    v10 = v2;
    v6 = 0;
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v10) )
    {
      v5 = *(_DWORD *)(v4 + 36);
      if ( (v5 & 0x200) == 0 || (*(_DWORD *)(*(_QWORD *)(v4 + 80) + 8LL) & 0x4000) != 0 || (v5 & 0x8000) != 0 )
        v6 = 1;
    }
    DCOBJA::~DCOBJA((DCOBJA *)v9);
  }
  else
  {
    v10 = a1;
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v10) )
    {
LABEL_15:
      if ( ghsemDynamicModeChange )
        ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange");
      if ( ghsemGreLock )
        ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemGreLock");
      if ( ghsemDCVisRgn )
        ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDCVisRgn");
      return 1LL;
    }
    v6 = 0;
  }
  if ( v6 )
    goto LABEL_15;
  GreLockVisRgn(v2, v7, v8);
  return 1LL;
}
