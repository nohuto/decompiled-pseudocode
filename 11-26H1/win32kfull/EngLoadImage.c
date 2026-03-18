/*
 * XREFs of EngLoadImage @ 0x140346920
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400F60B8 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

HANDLE __stdcall EngLoadImage(LPWSTR pwszDriver)
{
  HSEMAPHORE *v2; // rax
  __int64 v3; // rax
  HSEMAPHORE v4; // rbx
  void *v5; // rdi
  struct _GRETHREAD *v6; // rax
  LPWSTR v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+3Ch] [rbp-Ch]
  HSEMAPHORE v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = 0;
  v2 = (HSEMAPHORE *)Gre::Base::Globals((Gre::Base *)pwszDriver);
  SEMOBJ<19>::SEMOBJ<19>(&v12, v2);
  v9 = pwszDriver;
  v10 = 5;
  v11 = 1;
  v3 = ((__int64 (__fastcall *)(LPWSTR, __int64, int *, __int64, _DWORD, LPWSTR *))ldevLoadImage)(
         pwszDriver,
         1LL,
         &v13,
         1LL,
         0,
         &v9);
  v4 = v12;
  v5 = (void *)v3;
  if ( v12 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DriverMgmt", v12);
    v6 = GreGetCurrentThreadCrossSessionCheck();
    if ( v6 )
    {
      if ( (*((_BYTE *)v6 + 27))-- == 1 )
        *(_QWORD *)v6 &= ~0x80000uLL;
      if ( !*(_QWORD *)v6 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v4);
  }
  return v5;
}
