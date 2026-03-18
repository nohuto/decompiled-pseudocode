/*
 * XREFs of ACPIFanLoop @ 0x1C003B5A8
 * Callers:
 *     ACPIFanDeviceControl @ 0x1C003B330 (ACPIFanDeviceControl.c)
 *     ACPIFanEvent @ 0x1C003B460 (ACPIFanEvent.c)
 *     ACPIFanFSTCallback @ 0x1C003B490 (ACPIFanFSTCallback.c)
 *     ACPIFanPowerCallback @ 0x1C003B870 (ACPIFanPowerCallback.c)
 *     ACPIFanStopDevice @ 0x1C003B8F0 (ACPIFanStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C007ACA0 (ACPIFanStartDevice.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     ACPIFanCompletePendingIrps @ 0x1C003B190 (ACPIFanCompletePendingIrps.c)
 *     ACPIFanFSTCallback @ 0x1C003B490 (ACPIFanFSTCallback.c)
 */

void __fastcall ACPIFanLoop(__int64 a1, int a2, int a3)
{
  KSPIN_LOCK *v3; // r15
  KIRQL v7; // bp
  int v8; // ecx
  char v9; // r14
  int v10; // ecx
  bool v11; // al
  int v12; // eax
  KIRQL v13; // al
  __int64 **v14; // rcx
  int v15; // eax
  __int64 *v16; // rcx
  int v17; // eax
  int v18; // eax
  volatile signed __int32 *v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rdx

  v3 = (KSPIN_LOCK *)(a1 + 176);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 176));
  v8 = ~a2 & (a3 | *(_DWORD *)(a1 + 184));
  *(_DWORD *)(a1 + 184) = v8;
  v9 = 1;
  if ( v8 < 0 )
    goto LABEL_30;
  *(_DWORD *)(a1 + 184) = v8 | 0x80000000;
  while ( 1 )
  {
    if ( !v9 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(v3);
      v9 = 1;
    }
    v10 = *(_DWORD *)(a1 + 184);
    if ( (v10 & 0x40000000) != 0 )
      break;
    if ( (v10 & 0x20000000) != 0 )
    {
      v11 = 0;
    }
    else
    {
      v11 = (v10 & 0x10000000) == 0;
      *(_DWORD *)(a1 + 184) = v10 | 0x10000000;
    }
    if ( v11 )
    {
      v19 = *(volatile signed __int32 **)(a1 + 224);
      if ( v19 )
      {
        AMLIDereferenceHandleEx(v19);
        *(_QWORD *)(a1 + 224) = 0LL;
      }
      KeReleaseSpinLock(v3, v7);
      v9 = 0;
      if ( (*(_DWORD *)(a1 + 184) & 4) != 0 )
      {
        v7 = KeAcquireSpinLockRaiseToDpc(&AcpiFanLock);
        v20 = *(_QWORD *)(a1 + 192);
        v21 = *(_QWORD **)(a1 + 200);
        if ( *(_QWORD *)(v20 + 8) != a1 + 192 || *v21 != a1 + 192 )
          __fastfail(3u);
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        KeReleaseSpinLock(&AcpiFanLock, v7);
      }
      ACPIFanCompletePendingIrps(a1, 1);
      KeSetEvent((PRKEVENT)(a1 + 288), 0, 0);
      break;
    }
    v12 = *(_DWORD *)(a1 + 184);
    if ( (v12 & 4) != 0 )
    {
      if ( (v12 & 1) != 0 || (v15 = v12 | 1, *(_DWORD *)(a1 + 184) = v15, !*(_QWORD *)(a1 + 224)) )
      {
        v18 = *(_DWORD *)(a1 + 184);
        if ( (v18 & 2) == 0 )
        {
          ++*(_DWORD *)(a1 + 280);
          *(_DWORD *)(a1 + 184) = v18 | 2;
        }
        KeReleaseSpinLock(v3, v7);
        v9 = 0;
        if ( !ACPIFanCompletePendingIrps(a1, 0) )
          break;
      }
      else
      {
        *(_DWORD *)(a1 + 184) = v15 | 0x40000000;
        KeReleaseSpinLock(v3, v7);
        v9 = 0;
        memset((void *)(a1 + 232), 0, 0x28uLL);
        v16 = *(__int64 **)(a1 + 224);
        *(_WORD *)(a1 + 234) = 0;
        v17 = AMLIAsyncEvalObject(v16, (_SLIST_ENTRY *)(a1 + 232), 0, 0LL, ACPIFanFSTCallback, a1);
        if ( v17 != 259 )
          ACPIFanFSTCallback(*(_QWORD *)(a1 + 224), v17, a1 + 232, a1);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 184) = v12 | 4;
      KeReleaseSpinLock(v3, v7);
      v9 = 0;
      v13 = KeAcquireSpinLockRaiseToDpc(&AcpiFanLock);
      v14 = (__int64 **)qword_1C00599E8;
      v7 = v13;
      *(_QWORD *)(a1 + 192) = &AcpiFanList;
      *(_QWORD *)(a1 + 200) = v14;
      if ( *v14 != &AcpiFanList )
        __fastfail(3u);
      *v14 = (__int64 *)(a1 + 192);
      qword_1C00599E8 = a1 + 192;
      KeReleaseSpinLock(&AcpiFanLock, v13);
    }
  }
  *(_DWORD *)(a1 + 184) &= ~0x80000000;
  if ( v9 )
LABEL_30:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 176), v7);
}
