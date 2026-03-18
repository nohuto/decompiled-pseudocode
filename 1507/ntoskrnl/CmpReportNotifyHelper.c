/*
 * XREFs of CmpReportNotifyHelper @ 0x14042A100
 * Callers:
 *     CmpReportNotify @ 0x140429FE8 (CmpReportNotify.c)
 * Callees:
 *     TmIsTransactionActive @ 0x140001198 (TmIsTransactionActive.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmpDelayedDerefKeys @ 0x14042A334 (CmpDelayedDerefKeys.c)
 *     CmpNotifyTriggerCheck @ 0x1404EC670 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x1404ECFFC (CmpPostNotify.c)
 */

__int64 __fastcall CmpReportNotifyHelper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  __int64 result; // rax
  __int64 v12; // r9
  __int64 v13; // r13
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 *v19; // rbx
  ULONG_PTR v20; // rbx
  signed __int32 v21; // eax
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  struct _KTRANSACTION *v29; // rcx
  int v30; // edx
  int v31; // r8d
  struct _KTRANSACTION *v32; // rcx
  unsigned __int8 v33; // [rsp+40h] [rbp-48h]
  _QWORD v34[8]; // [rsp+48h] [rbp-40h] BYREF
  int v35; // [rsp+A0h] [rbp+18h] BYREF

  v35 = -1;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a3 + 8))(a3, a4, &v35);
  v13 = result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    v15 = *(_QWORD *)(a2 + 2832);
    v16 = KeAbPreAcquire(v15, 0LL, 0LL, v12);
    v17 = v16;
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v15, 0) )
      ExpAcquireFastMutexContended(v15, v16);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    *(_QWORD *)(v15 + 8) = CurrentThread;
    CurrentIrql = KeGetCurrentIrql();
    v33 = CurrentIrql;
    __writecr8(1uLL);
    v34[1] = v34;
    v34[0] = v34;
    v19 = *(__int64 **)(a2 + 2712);
    if ( v19 )
    {
      v22 = a5;
      v23 = a7;
      do
      {
        v24 = v19[4];
        v25 = (*(_DWORD *)(a1 + 4) >> 21) & 0x3FF;
        v26 = (*(_DWORD *)(v24 + 4) >> 21) & 0x3FF;
        if ( v26 > v25 )
          break;
        v27 = v25 - v26;
        v28 = a1;
        if ( (_DWORD)v27 )
        {
          do
          {
            v28 = *(_QWORD *)(v28 + 72);
            --v27;
          }
          while ( v27 );
        }
        if ( v28 == v24
          && (a6 & (_DWORD)v19[6] & 0x3FFFFFFF) != 0
          && ((v19[6] & 0x40000000) != 0 || a4 == *(_DWORD *)(v28 + 40)) )
        {
          v29 = *(struct _KTRANSACTION **)(v19[5] + 56);
          if ( (!v29 || TmIsTransactionActive(v29))
            && (!v22
             || (v32 = *(struct _KTRANSACTION **)(v19[5] + 56)) != 0LL
             && TmIsTransactionActive(v32)
             && *(_QWORD *)(v22 + 48) == *(_QWORD *)(v19[5] + 56)) )
          {
            if ( (unsigned __int8)CmpNotifyTriggerCheck(v19, a3, v13) )
              CmpPostNotify((_DWORD)v19, v30, v31, 268, 0, (__int64)v34, v23);
          }
        }
        v19 = (__int64 *)*v19;
      }
      while ( v19 );
      CurrentIrql = v33;
    }
    __writecr8(CurrentIrql);
    v20 = *(_QWORD *)(a2 + 2832);
    *(_QWORD *)(v20 + 8) = 0LL;
    v21 = _InterlockedCompareExchange((volatile signed __int32 *)v20, 1, 0);
    if ( v21 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v20, v21);
    KeAbPostRelease(v20);
    CmpDelayedDerefKeys(v34);
    return (*(__int64 (__fastcall **)(__int64, int *))(a3 + 16))(a3, &v35);
  }
  return result;
}
