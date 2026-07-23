/*
 * XREFs of PpDevNodeRemoveFromTree @ 0x140084FB0
 * Callers:
 *     PnpUnlinkDeviceRemovalRelations @ 0x140485654 (PnpUnlinkDeviceRemovalRelations.c)
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PnpOrphanNotification @ 0x140483BDC (PnpOrphanNotification.c)
 */

char __fastcall PpDevNodeRemoveFromTree(__int64 a1)
{
  char v2; // bp
  KIRQL v3; // r8
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

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
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
    KeReleaseSpinLock(&PnpSpinLock, v3);
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
    KeReleaseSpinLock(&PnpSpinLock, v3);
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
