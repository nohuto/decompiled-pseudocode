/*
 * XREFs of ?AddElement@?$CList@VCPhysicalMonitorHandle@@@@QEAAJPEAVCPhysicalMonitorHandle@@PEAK@Z @ 0x1C025B44C
 * Callers:
 *     ?AddHandleToTable@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAVCPhysicalMonitorHandle@@PEAPEAX@Z @ 0x1C025B560 (-AddHandleToTable@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAVCPhysicalMonitor.c)
 * Callees:
 *     operator_delete @ 0x1C0132128 (operator_delete.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall CList<CPhysicalMonitorHandle>::AddElement(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // eax
  unsigned __int64 v7; // rdi
  SIZE_T v8; // rax
  _QWORD *PoolWithTag; // rsi
  __int64 i; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  char v14; // cl

  v3 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 8) == v3 )
  {
    if ( v3 )
    {
      v7 = 2LL * *(unsigned int *)(a1 + 12);
      if ( v7 > 0xFFFFFFFF )
        return 3221225621LL;
    }
    else
    {
      LODWORD(v7) = 16;
    }
    v8 = 8LL * (unsigned int)v7;
    if ( !is_mul_ok((unsigned int)v7, 8uLL) )
      v8 = -1LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x63326947u);
    if ( !PoolWithTag )
      return 3221225495LL;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 12); i = (unsigned int)(i + 1) )
      PoolWithTag[i] = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
    v12 = *(unsigned int *)(a1 + 12);
    if ( (unsigned int)v12 < (unsigned int)v7 )
      memset(&PoolWithTag[v12], 0, 8LL * (unsigned int)(v7 - v12));
    operator_delete(*(void **)a1);
    *(_QWORD *)a1 = PoolWithTag;
    *(_DWORD *)(a1 + 12) = v7;
  }
  v13 = 0LL;
  v14 = 0;
  do
  {
    if ( (unsigned int)v13 >= *(_DWORD *)(a1 + 12) )
      break;
    if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * v13) )
    {
      v14 = 1;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v13) = a2;
      *a3 = v13;
    }
    v13 = (unsigned int)(v13 + 1);
  }
  while ( !v14 );
  ++*(_DWORD *)(a1 + 8);
  return 0LL;
}
