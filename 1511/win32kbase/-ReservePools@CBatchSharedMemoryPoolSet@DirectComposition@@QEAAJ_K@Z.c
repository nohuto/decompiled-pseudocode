/*
 * XREFs of ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C007380C
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0013810 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@MEAAJXZ @ 0x1C001CD00 (-Initialize@CApplicationChannel@DirectComposition@@MEAAJXZ.c)
 * Callees:
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C0073924 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 */

__int64 __fastcall DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
        DirectComposition::CBatchSharedMemoryPoolSet *this,
        unsigned __int64 a2)
{
  int v4; // ecx
  unsigned int v5; // edi
  __int64 v6; // rdx
  struct DirectComposition::CBatchSharedMemoryPool *v7; // rax
  struct DirectComposition::CBatchSharedMemoryPool *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  do
  {
    if ( v5 >= a2 )
      break;
    v4 = DirectComposition::CBatchSharedMemoryPool::Create(this, *((_BYTE *)this + 24), &v9);
    if ( v4 >= 0 )
    {
      v6 = *(_QWORD *)this;
      v7 = v9;
      *(_QWORD *)v9 = *(_QWORD *)this;
      *((_QWORD *)v7 + 1) = this;
      if ( *(DirectComposition::CBatchSharedMemoryPoolSet **)(v6 + 8) != this )
        __fastfail(3u);
      *(_QWORD *)(v6 + 8) = v7;
      *(_QWORD *)this = v7;
    }
    ++v5;
  }
  while ( v4 >= 0 );
  return (unsigned int)v4;
}
