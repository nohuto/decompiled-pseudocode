/*
 * XREFs of ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C00427DC
 * Callers:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0018DC8 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C0042038 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 * Callees:
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C001AF3C (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools(
        DirectComposition::CBatchSharedMemoryPool **this)
{
  DirectComposition::CBatchSharedMemoryPoolSet *v2; // rbx
  DirectComposition::CBatchSharedMemoryPoolSet *v3; // rcx
  DirectComposition::CBatchSharedMemoryPoolSet **v4; // rax
  void *v5; // rcx

  while ( 1 )
  {
    v2 = *this;
    if ( *this == (DirectComposition::CBatchSharedMemoryPool *)this )
      break;
    DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(*this);
    if ( v2 )
    {
      v3 = *(DirectComposition::CBatchSharedMemoryPoolSet **)v2;
      v4 = (DirectComposition::CBatchSharedMemoryPoolSet **)*((_QWORD *)v2 + 1);
      if ( *(DirectComposition::CBatchSharedMemoryPoolSet **)(*(_QWORD *)v2 + 8LL) != v2 || *v4 != v2 )
        __fastfail(3u);
      *v4 = v3;
      *((_QWORD *)v3 + 1) = v4;
      MmUnmapViewInSessionSpace(*((PVOID *)v2 + 7));
      v5 = (void *)*((_QWORD *)v2 + 3);
      if ( v5 )
        ObfDereferenceObject(v5);
      Win32FreePool();
    }
  }
}
