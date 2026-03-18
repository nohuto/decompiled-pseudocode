/*
 * XREFs of PpDevNodeRemoveFromTree @ 0x14011C260
 * Callers:
 *     PnpUnlinkDeviceRemovalRelations @ 0x140536068 (PnpUnlinkDeviceRemovalRelations.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpOrphanNotification @ 0x140539200 (PnpOrphanNotification.c)
 */

char __fastcall PpDevNodeRemoveFromTree(__int64 a1)
{
  char v2; // bp
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // rax
  _QWORD *i; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  char result; // al
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // r8
  _QWORD *v22; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&PnpSpinLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PnpSpinLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PnpSpinLock);
  }
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    for ( i = (_QWORD *)(v4 + 8); *i != a1; i = (_QWORD *)*i )
      ;
    v6 = *(_QWORD **)a1;
    *i = *(_QWORD *)a1;
    v7 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v7 + 8) )
    {
      while ( v6 )
      {
        i = v6;
        v6 = (_QWORD *)*v6;
      }
      *(_QWORD *)(v7 + 24) = i;
    }
    else
    {
      *(_QWORD *)(v7 + 24) = 0LL;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&PnpSpinLock, retaddr);
    else
      _InterlockedAnd64(&PnpSpinLock, 0LL);
    __writecr8(CurrentIrql);
    v8 = *(_QWORD *)(a1 + 624);
    v9 = *(_QWORD **)(a1 + 632);
    if ( *(_QWORD *)(v8 + 8) != a1 + 624 || *v9 != a1 + 624 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    PnpOrphanNotification(a1);
    v2 = 1;
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&PnpSpinLock, retaddr);
    else
      _InterlockedAnd64(&PnpSpinLock, 0LL);
    __writecr8(CurrentIrql);
  }
  v10 = *(_QWORD **)(a1 + 160);
  while ( v10 != (_QWORD *)(a1 + 160) )
  {
    v13 = v10 - 3;
    v10 = (_QWORD *)*v10;
    v14 = *v13;
    v15 = (_QWORD *)v13[1];
    if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v15 != v13 )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    v16 = v13[3];
    v17 = (_QWORD *)v13[4];
    if ( *(_QWORD **)(v16 + 8) != v13 + 3 || (_QWORD *)*v17 != v13 + 3 )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    ExFreePoolWithTag(v13, 0x72775044u);
  }
  v11 = *(_QWORD **)(a1 + 176);
  while ( v11 != (_QWORD *)(a1 + 176) )
  {
    v18 = v11;
    v11 = (_QWORD *)*v11;
    v19 = *v18;
    v20 = (_QWORD *)v18[1];
    if ( *(_QWORD **)(*v18 + 8LL) != v18 || (_QWORD *)*v20 != v18 )
      __fastfail(3u);
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    v21 = v18[3];
    v22 = (_QWORD *)v18[4];
    if ( *(_QWORD **)(v21 + 8) != v18 + 3 || (_QWORD *)*v22 != v18 + 3 )
      __fastfail(3u);
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
    ExFreePoolWithTag(v18, 0x72775044u);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  result = v2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
