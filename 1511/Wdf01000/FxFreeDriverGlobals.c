/*
 * XREFs of FxFreeDriverGlobals @ 0x1C0033490
 * Callers:
 *     FxLibraryCommonUnregisterClient @ 0x1C0033408 (FxLibraryCommonUnregisterClient.c)
 * Callees:
 *     <none>
 */

void __fastcall FxFreeDriverGlobals(_WDF_DRIVER_GLOBALS *DriverGlobals)
{
  char *v1; // rbx
  KIRQL v2; // al
  __int64 v3; // r8
  char **v4; // rdx
  __int64 v5; // rdi
  void *v6; // rcx
  _QWORD *v7; // rdi
  void *v8; // rcx
  void *v9; // rcx

  v1 = &DriverGlobals[-8].DriverName[16];
  v2 = KeAcquireSpinLockRaiseToDpc(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock);
  v3 = *(_QWORD *)v1;
  v4 = (char **)*((_QWORD *)v1 + 1);
  if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || *v4 != v1 )
    __fastfail(3u);
  *v4 = (char *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  *((_QWORD *)v1 + 1) = v1;
  *(_QWORD *)v1 = v1;
  KeReleaseSpinLock(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock, v2);
  v5 = *((_QWORD *)v1 + 10);
  if ( v5 )
  {
    v7 = *(_QWORD **)(v5 + 400);
    while ( v7 )
    {
      v8 = v7;
      v7 = (_QWORD *)v7[49];
      ExFreePoolWithTag(v8, 0);
    }
    v9 = (void *)**((_QWORD **)v1 + 10);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      **((_QWORD **)v1 + 10) = 0LL;
    }
    *(_BYTE *)(*((_QWORD *)v1 + 10) + 432LL) = 0;
    ExFreePoolWithTag(*((PVOID *)v1 + 10), 0);
    *((_QWORD *)v1 + 10) = 0LL;
  }
  v6 = (void *)*((_QWORD *)v1 + 51);
  v1[48] = 0;
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *((_QWORD *)v1 + 51) = 0LL;
  }
  ExFreePoolWithTag(v1, 0);
}
