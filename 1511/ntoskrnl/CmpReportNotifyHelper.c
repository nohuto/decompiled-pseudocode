/*
 * XREFs of CmpReportNotifyHelper @ 0x1403F5130
 * Callers:
 *     CmpReportNotify @ 0x1403F4FC4 (CmpReportNotify.c)
 * Callees:
 *     TmIsTransactionActive @ 0x140001198 (TmIsTransactionActive.c)
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     CmpDelayedDerefKeys @ 0x1403F50DC (CmpDelayedDerefKeys.c)
 *     CmpPostNotify @ 0x14049AAF4 (CmpPostNotify.c)
 *     CmpNotifyTriggerCheck @ 0x1404AFC04 (CmpNotifyTriggerCheck.c)
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
  __int64 v12; // r12
  unsigned __int8 CurrentIrql; // r14
  __int64 *v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r13
  __int64 v17; // rdx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct _KTRANSACTION *v22; // rcx
  int v23; // edx
  int v24; // r8d
  struct _KTRANSACTION *v25; // rcx
  unsigned __int8 v26; // [rsp+40h] [rbp-48h]
  void *v27[8]; // [rsp+48h] [rbp-40h] BYREF
  int v28; // [rsp+A0h] [rbp+18h] BYREF

  v28 = -1;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a3 + 8))(a3, a4, &v28);
  v12 = result;
  if ( result )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a2 + 2832));
    CurrentIrql = KeGetCurrentIrql();
    v26 = CurrentIrql;
    __writecr8(1uLL);
    v27[1] = v27;
    v27[0] = v27;
    v14 = *(__int64 **)(a2 + 2712);
    if ( v14 )
    {
      v15 = a7;
      v16 = a5;
      do
      {
        v17 = v14[4];
        v18 = (*(_DWORD *)(a1 + 4) >> 21) & 0x3FF;
        v19 = (*(_DWORD *)(v17 + 4) >> 21) & 0x3FF;
        if ( v19 > v18 )
          break;
        v20 = v18 - v19;
        v21 = a1;
        if ( (_DWORD)v20 )
        {
          do
          {
            v21 = *(_QWORD *)(v21 + 72);
            --v20;
          }
          while ( v20 );
        }
        if ( v21 == v17
          && (a6 & (_DWORD)v14[6] & 0x3FFFFFFF) != 0
          && ((v14[6] & 0x40000000) != 0 || a4 == *(_DWORD *)(v21 + 40)) )
        {
          v22 = *(struct _KTRANSACTION **)(v14[5] + 56);
          if ( (!v22 || TmIsTransactionActive(v22))
            && (!v16
             || (v25 = *(struct _KTRANSACTION **)(v14[5] + 56)) != 0LL
             && TmIsTransactionActive(v25)
             && *(_QWORD *)(v16 + 48) == *(_QWORD *)(v14[5] + 56)) )
          {
            if ( (unsigned __int8)CmpNotifyTriggerCheck(v14, a3, v12) )
              CmpPostNotify((_DWORD)v14, v23, v24, 268, 0, (__int64)v27, v15);
          }
        }
        v14 = (__int64 *)*v14;
      }
      while ( v14 );
      CurrentIrql = v26;
    }
    __writecr8(CurrentIrql);
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a2 + 2832));
    CmpDelayedDerefKeys(v27);
    return (*(__int64 (__fastcall **)(__int64, int *))(a3 + 16))(a3, &v28);
  }
  return result;
}
