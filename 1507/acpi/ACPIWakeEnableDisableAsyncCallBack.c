/*
 * XREFs of ACPIWakeEnableDisableAsyncCallBack @ 0x1C0021310
 * Callers:
 *     ACPIWakeEnableDisableAsync @ 0x1C0021140 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0021310 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeDisableAsync @ 0x1C004201C (ACPIWakeDisableAsync.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0021310 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0021420 (ExFreeToNPagedLookasideList.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C002145C (ACPIWakeEnableDisablePciDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

void __fastcall ACPIWakeEnableDisableAsyncCallBack(__int64 *a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  _QWORD *v7; // rsi
  KIRQL v8; // al
  _QWORD *v9; // r10
  KIRQL v10; // dl
  void **v11; // r9
  __int64 v12; // rdx
  KIRQL v13; // al
  _QWORD *v14; // rdx
  int v15; // eax
  char v16; // cl
  unsigned int v17; // eax
  _QWORD v18[9]; // [rsp+30h] [rbp-48h] BYREF
  char v21; // [rsp+98h] [rbp+20h]

  v4 = a4[2];
  v21 = 0;
  v7 = 0LL;
  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v9 = (_QWORD *)*a4;
  v10 = v8;
  v11 = (void **)a4[1];
  if ( *(_QWORD **)(*a4 + 8LL) != a4 || *v11 != a4 )
    __fastfail(3u);
  *v11 = v9;
  v9[1] = v11;
  if ( a2 < 0 )
  {
    v15 = *((_DWORD *)a4 + 7);
    if ( *((_BYTE *)a4 + 24) )
      *(_DWORD *)(v4 + 496) -= v15;
    else
      *(_DWORD *)(v4 + 496) += v15;
  }
  KeReleaseSpinLock(&AcpiPowerLock, v10);
  v12 = 0x800000000000000LL;
  if ( (*(_QWORD *)v4 & 0x800000000000000LL) != 0 && *((_BYTE *)a4 + 24) == 1 )
  {
    LOBYTE(v12) = 1;
    ACPIWakeEnableDisablePciDevice(v4, v12);
  }
  v13 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v14 = (_QWORD *)(v4 + 504);
  if ( (_QWORD *)*v14 != v14 )
  {
    v7 = (_QWORD *)*v14;
    v21 = 1;
  }
  KeReleaseSpinLock(&AcpiPowerLock, v13);
  ((void (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD))a4[4])(a1, (unsigned int)a2, a3, a4[5]);
  ExFreeToNPagedLookasideList(&XswContextLookAsideList, a4);
  if ( v21 )
  {
    memset(v18, 0, 0x28uLL);
    v16 = *((_BYTE *)v7 + 24);
    WORD1(v18[0]) = 1;
    v18[2] = v16 != 0;
    if ( (*(_QWORD *)v4 & 0x800000000000000LL) != 0 && !v16 )
      ACPIWakeEnableDisablePciDevice(v4, 0LL);
    v17 = AMLIAsyncEvalObject(a1, 0LL, 1u, v18, ACPIWakeEnableDisableAsyncCallBack, v7);
    if ( v17 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(a1, v17, 0LL, v7);
  }
}
