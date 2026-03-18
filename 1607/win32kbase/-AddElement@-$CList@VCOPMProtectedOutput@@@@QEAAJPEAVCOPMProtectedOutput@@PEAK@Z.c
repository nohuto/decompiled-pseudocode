/*
 * XREFs of ?AddElement@?$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C0084F2C
 * Callers:
 *     ?AddHandleToTable@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAVCOPMProtectedOutput@@PEAPEAX@Z @ 0x1C0084B54 (-AddHandleToTable@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAVCOPMProtectedOutput.c)
 * Callees:
 *     ?OPMAllocateMemory@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C00813D0 (-OPMAllocateMemory@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C00819B0 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall CList<COPMProtectedOutput>::AddElement(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // eax
  __int64 v7; // rax
  char v8; // cl
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rsi
  __int64 i; // r8
  __int64 v13; // rdx

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
    v11 = OPMAllocateMemory(8LL * (unsigned int)v10, PagedPool);
    if ( !v11 )
      return 3221225495LL;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 12); i = (unsigned int)(i + 1) )
      v11[i] = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
    v13 = *(unsigned int *)(a1 + 12);
    if ( (unsigned int)v13 < (unsigned int)v10 )
      memset(&v11[v13], 0, 8LL * (unsigned int)(v10 - v13));
    OPMFreeMemory(*(void **)a1);
    *(_QWORD *)a1 = v11;
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
