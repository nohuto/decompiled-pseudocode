/*
 * XREFs of USBType1MsCompleteCallback @ 0x1C0003750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBType1MsCompleteCallback(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  KIRQL v6; // r14
  __int64 *v7; // rcx
  __int64 **v8; // rax
  __int64 **v9; // rcx

  v4 = *(_QWORD *)(*(_QWORD *)(a3[5] + 8) + 16LL);
  v5 = *(_QWORD *)(v4 + 136);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  *(_QWORD *)(v4 + 72) += *((unsigned int *)a3 + 9);
  *(_BYTE *)v5 = *(int *)(a3[3] + 4) < 0;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 40), 0xFFFFFFFF) == 1 )
  {
    *(_BYTE *)v5 = 1;
    *(_BYTE *)(v4 + 37) = 0;
    KeSetEvent((PRKEVENT)(v4 + 104), 0, 0);
  }
  v7 = (__int64 *)*a3;
  v8 = (__int64 **)a3[1];
  if ( *(__int64 **)(*a3 + 8) != a3 || *v8 != a3 )
    __fastfail(3u);
  *v8 = v7;
  v7[1] = (__int64)v8;
  ExFreePool((PVOID)a3[5]);
  v9 = *(__int64 ***)(v5 + 128);
  *a3 = v5 + 120;
  a3[1] = (__int64)v9;
  if ( *v9 != (__int64 *)(v5 + 120) )
    __fastfail(3u);
  *v9 = a3;
  *(_QWORD *)(v5 + 128) = a3;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v6);
  KeReleaseSemaphore((PRKSEMAPHORE)(v5 + 136), 0, 1, 0);
  return 3221225494LL;
}
