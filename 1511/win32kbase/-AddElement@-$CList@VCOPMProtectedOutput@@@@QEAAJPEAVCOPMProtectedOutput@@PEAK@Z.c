/*
 * XREFs of ?AddElement@?$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C00835B4
 * Callers:
 *     ?AddHandleToTable@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAVCOPMProtectedOutput@@PEAPEAX@Z @ 0x1C0083184 (-AddHandleToTable@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAVCOPMProtectedOutput.c)
 * Callees:
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C007E0A0 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall CList<COPMProtectedOutput>::AddElement(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // eax
  __int64 v7; // rax
  char v8; // cl
  unsigned __int64 v10; // rdi
  SIZE_T v11; // rax
  _QWORD *PoolWithTag; // rsi
  __int64 i; // r8
  __int64 v14; // rdx

  v3 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 8) == v3 )
  {
    if ( v3 )
    {
      v10 = 2LL * *(unsigned int *)(a1 + 12);
      if ( v10 > 0xFFFFFFFF )
        return 3221225621LL;
    }
    else
    {
      LODWORD(v10) = 16;
    }
    v11 = 8LL * (unsigned int)v10;
    if ( !is_mul_ok((unsigned int)v10, 8uLL) )
      v11 = -1LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x4D504F47u);
    if ( !PoolWithTag )
      return 3221225495LL;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 12); i = (unsigned int)(i + 1) )
      PoolWithTag[i] = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
    v14 = *(unsigned int *)(a1 + 12);
    if ( (unsigned int)v14 < (unsigned int)v10 )
      memset(&PoolWithTag[v14], 0, 8LL * (unsigned int)(v10 - v14));
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
