/*
 * XREFs of ?AddElement@?$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C00686F4
 * Callers:
 *     ?AddHandleToTable@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAVCOPMProtectedOutput@@PEAPEAX@Z @ 0x1C00682C4 (-AddHandleToTable@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAVCOPMProtectedOutput.c)
 * Callees:
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C0069F28 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?RtlULongMult@@YAJKKPEAK@Z @ 0x1C00B3AEC (-RtlULongMult@@YAJKKPEAK@Z.c)
 */

__int64 __fastcall CList<COPMProtectedOutput>::AddElement(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // ecx
  __int64 v7; // rax
  char v8; // cl
  __int64 result; // rax
  unsigned int v10; // edi
  SIZE_T v11; // rax
  _QWORD *PoolWithTag; // rsi
  __int64 i; // r8
  __int64 v14; // rdx
  unsigned int v15; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 8) == v5 )
  {
    if ( v5 )
    {
      result = RtlULongMult(v5, 2u, &v15);
      if ( (int)result < 0 )
        return result;
      v10 = v15;
    }
    else
    {
      v10 = 16;
    }
    v11 = 8LL * v10;
    if ( !is_mul_ok(v10, 8uLL) )
      v11 = -1LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x4D504F47u);
    if ( !PoolWithTag )
      return 3221225495LL;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 12); i = (unsigned int)(i + 1) )
      PoolWithTag[i] = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
    v14 = *(unsigned int *)(a1 + 12);
    if ( (unsigned int)v14 < v10 )
      memset(&PoolWithTag[v14], 0, 8LL * (v10 - (unsigned int)v14));
    OPMFreeMemory(*(void **)a1);
    *(_QWORD *)a1 = PoolWithTag;
    *(_DWORD *)(a1 + 12) = v10;
  }
  v7 = 0LL;
  v8 = 0;
  do
  {
    if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 12) )
      break;
    if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * v7) )
    {
      v8 = 1;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v7) = a2;
      *a3 = v7;
    }
    v7 = (unsigned int)(v7 + 1);
  }
  while ( !v8 );
  ++*(_DWORD *)(a1 + 8);
  return 0LL;
}
