/*
 * XREFs of ACPIWakeEnableDisableAsyncCallBack @ 0x1C0021B20
 * Callers:
 *     ACPIWakeEnableDisableAsync @ 0x1C0021958 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0021B20 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeDisableAsync @ 0x1C0041A5C (ACPIWakeDisableAsync.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0021B20 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0021C10 (ExFreeToNPagedLookasideList.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C0021C4C (ACPIWakeEnableDisablePciDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

void __fastcall ACPIWakeEnableDisableAsyncCallBack(__int64 *a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  _QWORD *v7; // rsi
  KIRQL v8; // al
  _QWORD *v9; // r10
  KIRQL v10; // dl
  void **v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  char v15; // cl
  unsigned int v16; // eax
  _QWORD v17[9]; // [rsp+30h] [rbp-48h] BYREF
  char v20; // [rsp+98h] [rbp+20h]

  v4 = a4[2];
  v20 = 0;
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
    v14 = *((_DWORD *)a4 + 7);
    if ( *((_BYTE *)a4 + 24) )
      *(_DWORD *)(v4 + 496) -= v14;
    else
      *(_DWORD *)(v4 + 496) += v14;
  }
  v12 = (_QWORD *)(v4 + 504);
  if ( (_QWORD *)*v12 != v12 )
  {
    v7 = (_QWORD *)*v12;
    v20 = 1;
  }
  KeReleaseSpinLock(&AcpiPowerLock, v10);
  if ( (*(_QWORD *)v4 & 0x800000000000000LL) != 0 && *((_BYTE *)a4 + 24) == 1 )
  {
    LOBYTE(v13) = 1;
    ACPIWakeEnableDisablePciDevice(v4, v13);
  }
  ((void (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD))a4[4])(a1, (unsigned int)a2, a3, a4[5]);
  ExFreeToNPagedLookasideList(&XswContextLookAsideList, a4);
  if ( v20 )
  {
    memset(v17, 0, 0x28uLL);
    v15 = *((_BYTE *)v7 + 24);
    WORD1(v17[0]) = 1;
    v17[2] = v15 != 0;
    if ( (*(_QWORD *)v4 & 0x800000000000000LL) != 0 && !v15 )
      ACPIWakeEnableDisablePciDevice(v4, 0LL);
    v16 = AMLIAsyncEvalObject(a1, 0LL, 1u, v17, ACPIWakeEnableDisableAsyncCallBack, v7);
    if ( v16 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(a1, v16, 0LL, v7);
  }
}
