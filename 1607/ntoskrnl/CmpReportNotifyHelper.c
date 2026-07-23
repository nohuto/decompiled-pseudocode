/*
 * XREFs of CmpReportNotifyHelper @ 0x1404F7D50
 * Callers:
 *     CmpReportNotify @ 0x1404F7C30 (CmpReportNotify.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     CmpTransIsTransActive @ 0x1401B5060 (CmpTransIsTransActive.c)
 *     CmpPostNotify @ 0x1403E38F4 (CmpPostNotify.c)
 *     CmpNotifyTriggerCheck @ 0x1403FCB5C (CmpNotifyTriggerCheck.c)
 *     CmpDelayedDerefKeys @ 0x1404F7F1C (CmpDelayedDerefKeys.c)
 */

__int64 __fastcall CmpReportNotifyHelper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  __int64 result; // rax
  __int64 v12; // r15
  unsigned __int8 CurrentIrql; // r14
  __int64 v14; // rbx
  _QWORD *v15; // r14
  __int64 v16; // r13
  __int64 v17; // r8
  unsigned int v18; // ecx
  unsigned int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int8 v24; // [rsp+40h] [rbp-48h]
  _QWORD v25[8]; // [rsp+48h] [rbp-40h] BYREF
  int v26; // [rsp+A0h] [rbp+18h] BYREF
  int v27; // [rsp+A4h] [rbp+1Ch]

  v26 = -1;
  v27 = 0;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a3 + 8))(a3, a4, &v26);
  v12 = result;
  if ( result )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a2 + 2832));
    CurrentIrql = KeGetCurrentIrql();
    v24 = CurrentIrql;
    __writecr8(1uLL);
    v25[1] = v25;
    v25[0] = v25;
    v14 = *(_QWORD *)(a2 + 2712);
    if ( v14 )
    {
      v15 = a7;
      v16 = a5;
      do
      {
        v17 = *(_QWORD *)(v14 + 32);
        v18 = (*(_DWORD *)(a1 + 4) >> 21) & 0x3FF;
        v19 = (*(_DWORD *)(v17 + 4) >> 21) & 0x3FF;
        if ( v19 > v18 )
          break;
        v20 = a1;
        if ( v18 > v19 )
        {
          do
            v20 = *(_QWORD *)(v20 + 64);
          while ( ((*(_DWORD *)(v20 + 4) >> 21) & 0x3FFu) > v19 );
        }
        if ( v20 == v17
          && (a6 & *(_DWORD *)(v14 + 48) & 0x3FFFFFFF) != 0
          && ((*(_DWORD *)(v14 + 48) & 0x40000000) != 0 || a4 == *(_DWORD *)(v20 + 32)) )
        {
          v21 = *(_QWORD *)(*(_QWORD *)(v14 + 40) + 56LL);
          if ( (!v16 || *(_QWORD *)(v16 + 56) == v21) && (!v21 || (unsigned int)CmpTransIsTransActive(v21)) )
          {
            if ( CmpNotifyTriggerCheck(v14, a3, v12) )
              CmpPostNotify(v14, v22, v23, 0x10Cu, 0, v25, v15);
          }
        }
        v14 = *(_QWORD *)v14;
      }
      while ( v14 );
      CurrentIrql = v24;
    }
    __writecr8(CurrentIrql);
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a2 + 2832));
    CmpDelayedDerefKeys(v25);
    return (*(__int64 (__fastcall **)(__int64, int *))(a3 + 16))(a3, &v26);
  }
  return result;
}
