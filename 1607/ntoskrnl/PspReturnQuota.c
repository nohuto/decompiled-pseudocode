/*
 * XREFs of PspReturnQuota @ 0x140010620
 * Callers:
 *     PsReturnProcessPagedPoolQuota @ 0x1400276FC (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140028040 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsReturnProcessQuota @ 0x140075124 (PsReturnProcessQuota.c)
 *     PsReturnPoolQuota @ 0x1400F7424 (PsReturnPoolQuota.c)
 *     ObpFreeObject @ 0x14041A6C0 (ObpFreeObject.c)
 *     PsReturnProcessPageFileQuota @ 0x14042D29C (PsReturnProcessPageFileQuota.c)
 *     MiDecommitRegion @ 0x14042F060 (MiDecommitRegion.c)
 *     ObpIncrementHandleCountEx @ 0x14044CB20 (ObpIncrementHandleCountEx.c)
 *     PsChargeSharedPoolQuota @ 0x14051D950 (PsChargeSharedPoolQuota.c)
 *     PsReturnSharedPoolQuota @ 0x14051E3D0 (PsReturnSharedPoolQuota.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x1400C46E0 (PspReturnResourceQuota.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

signed __int64 __fastcall PspReturnQuota(char *a1, ULONG_PTR a2, unsigned int a3, ULONG_PTR a4)
{
  __int64 v6; // rsi
  void *v8; // r12
  ULONG_PTR v9; // r15
  char v10; // r13
  volatile signed __int64 *v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  char *v14; // r8
  unsigned __int64 v15; // r9
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 v17; // r8
  signed __int64 v18; // rdx
  bool v19; // zf
  signed __int64 result; // rax
  __int64 v21; // r8

  v6 = (__int64)(int)a3 << 7;
  v8 = a1;
  v9 = (int)a3;
  v10 = PspResourceFlags[8 * a3];
  v11 = (volatile signed __int64 *)&a1[v6];
  _m_prefetchw(&a1[v6]);
  v12 = *(_QWORD *)&a1[v6];
  v13 = *(_QWORD *)&a1[v6 + 64];
  if ( *(_QWORD *)&a1[v6 + 80] )
  {
    v14 = (char *)&PspQuotaExpansionDescriptors + 56 * (int)a3;
    if ( v13 > v12 )
    {
      v15 = *((_QWORD *)v14 + 1);
      if ( v13 - v12 > v15 )
      {
        if ( v15 > a4 )
          v15 = a4;
        if ( v13 == _InterlockedCompareExchange64(v11 + 8, v13 - v15, v13)
          && _InterlockedExchangeAdd64(v11 + 9, v15) + v15 > *((_QWORD *)v14 + 1) )
        {
          v21 = _InterlockedExchange64(v11 + 9, 0LL);
          if ( v21 )
            PspReturnResourceQuota(a3, v11, v21, 0LL);
        }
      }
    }
  }
  BugCheckParameter4 = a4;
  while ( 1 )
  {
    do
    {
      if ( BugCheckParameter4 >= v12 )
      {
        v17 = v12;
        v18 = 0LL;
      }
      else
      {
        v17 = BugCheckParameter4;
        v18 = v12 - BugCheckParameter4;
      }
      result = _InterlockedCompareExchange64(v11, v18, v12);
      v19 = v12 == result;
      v12 = result;
    }
    while ( !v19 );
    BugCheckParameter4 -= v17;
    if ( !BugCheckParameter4 )
      break;
    if ( v8 == &PspSystemQuotaBlock )
      KeBugCheckEx(0x21u, a2, v9, a4, BugCheckParameter4);
    v8 = &PspSystemQuotaBlock;
    v11 = (volatile signed __int64 *)((char *)&PspSystemQuotaBlock + v6);
    _m_prefetchw((char *)&PspSystemQuotaBlock + v6);
    v12 = *(_QWORD *)((char *)&PspSystemQuotaBlock + v6);
  }
  if ( a2 )
  {
    if ( (v10 & 4) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8 * v9 + 784), -(__int64)a4);
  }
  return result;
}
