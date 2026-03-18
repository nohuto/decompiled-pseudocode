/*
 * XREFs of ACPIFanLoop @ 0x1C004E2AC
 * Callers:
 *     ACPIFanDeviceControl @ 0x1C004DCF0 (ACPIFanDeviceControl.c)
 *     ACPIFanEvent @ 0x1C004DEB0 (ACPIFanEvent.c)
 *     ACPIFanFSTCallback @ 0x1C004DF70 (ACPIFanFSTCallback.c)
 *     ACPIFanPowerCallback @ 0x1C004E580 (ACPIFanPowerCallback.c)
 *     ACPIFanStopDevice @ 0x1C004E6A8 (ACPIFanStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C009BAF0 (ACPIFanStartDevice.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIFanCompletePendingIrps @ 0x1C004DAC0 (ACPIFanCompletePendingIrps.c)
 *     ACPIFanFSTCallback @ 0x1C004DF70 (ACPIFanFSTCallback.c)
 */

void __fastcall ACPIFanLoop(__int64 a1, int a2, int a3)
{
  KSPIN_LOCK *v3; // r15
  __int64 v7; // rdx
  KIRQL v8; // bp
  int v9; // ecx
  char v10; // r14
  int v11; // ecx
  bool v12; // al
  int v13; // eax
  KIRQL v14; // al
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  int v17; // eax
  __int64 *v18; // rcx
  int v19; // eax
  int v20; // eax
  volatile signed __int32 *v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rdx

  v3 = (KSPIN_LOCK *)(a1 + 184);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v9 = ~a2 & (a3 | *(_DWORD *)(a1 + 192));
  *(_DWORD *)(a1 + 192) = v9;
  v10 = 1;
  if ( v9 < 0 )
    goto LABEL_30;
  *(_DWORD *)(a1 + 192) = v9 | 0x80000000;
  while ( 1 )
  {
    if ( !v10 )
    {
      v8 = KeAcquireSpinLockRaiseToDpc(v3);
      v10 = 1;
    }
    v11 = *(_DWORD *)(a1 + 192);
    if ( (v11 & 0x40000000) != 0 )
      break;
    if ( (v11 & 0x20000000) != 0 )
    {
      v12 = 0;
    }
    else
    {
      v12 = (v11 & 0x10000000) == 0;
      *(_DWORD *)(a1 + 192) = v11 | 0x10000000;
    }
    if ( v12 )
    {
      v21 = *(volatile signed __int32 **)(a1 + 232);
      if ( v21 )
      {
        AMLIDereferenceHandleEx(v21, v7);
        *(_QWORD *)(a1 + 232) = 0LL;
      }
      KeReleaseSpinLock(v3, v8);
      v10 = 0;
      if ( (*(_DWORD *)(a1 + 192) & 4) != 0 )
      {
        v8 = KeAcquireSpinLockRaiseToDpc(&AcpiFanLock);
        v22 = *(_QWORD *)(a1 + 200);
        v23 = *(_QWORD **)(a1 + 208);
        if ( *(_QWORD *)(v22 + 8) != a1 + 200 || *v23 != a1 + 200 )
          __fastfail(3u);
        *v23 = v22;
        *(_QWORD *)(v22 + 8) = v23;
        KeReleaseSpinLock(&AcpiFanLock, v8);
      }
      ACPIFanCompletePendingIrps(a1, 1);
      KeSetEvent((PRKEVENT)(a1 + 296), 0, 0);
      break;
    }
    v13 = *(_DWORD *)(a1 + 192);
    if ( (v13 & 4) != 0 )
    {
      if ( (v13 & 1) != 0 || (v17 = v13 | 1, *(_DWORD *)(a1 + 192) = v17, !*(_QWORD *)(a1 + 232)) )
      {
        v20 = *(_DWORD *)(a1 + 192);
        if ( (v20 & 2) == 0 )
        {
          ++*(_DWORD *)(a1 + 288);
          *(_DWORD *)(a1 + 192) = v20 | 2;
        }
        KeReleaseSpinLock(v3, v8);
        v10 = 0;
        if ( !ACPIFanCompletePendingIrps(a1, 0) )
          break;
      }
      else
      {
        *(_DWORD *)(a1 + 192) = v17 | 0x40000000;
        KeReleaseSpinLock(v3, v8);
        v10 = 0;
        memset((void *)(a1 + 240), 0, 0x28uLL);
        v18 = *(__int64 **)(a1 + 232);
        *(_WORD *)(a1 + 242) = 0;
        v19 = AMLIAsyncEvalObject(v18, (_SLIST_ENTRY *)(a1 + 240), 0, 0LL, ACPIFanFSTCallback, a1);
        if ( v19 != 259 )
          ACPIFanFSTCallback(*(_QWORD *)(a1 + 232), v19, a1 + 240, a1);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 192) = v13 | 4;
      KeReleaseSpinLock(v3, v8);
      v10 = 0;
      v14 = KeAcquireSpinLockRaiseToDpc(&AcpiFanLock);
      v15 = (_QWORD *)qword_1C0073DE8;
      v8 = v14;
      v16 = (_QWORD *)(a1 + 200);
      if ( *(__int64 **)qword_1C0073DE8 != &AcpiFanList )
        __fastfail(3u);
      *(_QWORD *)(a1 + 208) = qword_1C0073DE8;
      *v16 = &AcpiFanList;
      *v15 = v16;
      qword_1C0073DE8 = a1 + 200;
      KeReleaseSpinLock(&AcpiFanLock, v8);
    }
  }
  *(_DWORD *)(a1 + 192) &= ~0x80000000;
  if ( v10 )
LABEL_30:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 184), v8);
}
