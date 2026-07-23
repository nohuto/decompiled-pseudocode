/*
 * XREFs of VfIrpLogUnlockDatabase @ 0x140719924
 * Callers:
 *     ViDdiDispatchWmiQueryAllData @ 0x1407045D4 (ViDdiDispatchWmiQueryAllData.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall VfIrpLogUnlockDatabase(unsigned int a1)
{
  __int64 v1; // rbx
  KIRQL v2; // bp
  _QWORD **v3; // rsi
  _QWORD *v4; // rbx
  PVOID *v5; // rdi
  PVOID **v6; // rdx
  PVOID **v7; // rcx

  v1 = 3LL * a1;
  *(_DWORD *)(ViIrpLogDatabase + 24LL * a1) = 0;
  v2 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  v3 = (_QWORD **)(ViIrpLogDatabase + 8 * (v1 + 1));
  v4 = *v3;
  while ( v4 != v3 )
  {
    v5 = (PVOID *)(v4 - 1);
    v4 = (_QWORD *)*v4;
    if ( ((_DWORD)v5[3] & 4) != 0 )
    {
      ObfDereferenceObject(*v5);
      v6 = (PVOID **)v5[1];
      v7 = (PVOID **)v5[2];
      if ( v6[1] != v5 + 1 || *v7 != v5 + 1 )
        __fastfail(3u);
      *v7 = (PVOID *)v6;
      v6[1] = (PVOID *)v7;
      ExFreePoolWithTag(v5, 0);
    }
  }
  KeReleaseSpinLock(&ViIrpLogDatabaseLock, v2);
}
