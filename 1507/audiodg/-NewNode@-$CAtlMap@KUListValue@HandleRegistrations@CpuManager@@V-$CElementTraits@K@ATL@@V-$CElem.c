/*
 * XREFs of ?NewNode@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEAAPEAVCNode@12@KII@Z @ 0x140028400
 * Callers:
 *     ?CreateNode@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEAAPEAVCNode@12@KII@Z @ 0x140027758 (-CreateNode@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CE.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140012F30 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?PickSize@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEBAI_K@Z @ 0x14002865C (-PickSize@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CEle.c)
 *     ?Rehash@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@QEAAXI@Z @ 0x140028D48 (-Rehash@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CEleme.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::NewNode(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // r15
  struct ATL::CAtlPlex *v8; // r8
  int v9; // edx
  char *i; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-38h]

  v5 = a3;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v8 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 56), *(unsigned int *)(a1 + 52), 0x28uLL);
    if ( !v8 )
      ATL::AtlThrowImpl(-2147024882);
    v9 = *(_DWORD *)(a1 + 52);
    for ( i = (char *)v8 + 32 * (v9 - 1) + 8 * (unsigned int)(v9 - 1) + 8; --v9 >= 0; i -= 40 )
    {
      *((_QWORD *)i + 3) = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = i;
    }
  }
  v11 = *(_QWORD *)(a1 + 64);
  if ( !v11 )
    ATL::AtlThrowImpl(-2147467259);
  v15 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v11 + 24);
  try
  {
    *(_DWORD *)v11 = a2;
    *(_DWORD *)(v11 + 32) = a4;
  }
  catch ( ... )
  {
    *(_QWORD *)(v15 + 24) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v15;
    throw;
  }
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v11 + 24) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v11;
  v12 = *(_QWORD *)(a1 + 8);
  if ( v12 > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v13 = ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::PickSize(
            a1,
            v12);
    ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::Rehash(
      a1,
      v13);
  }
  return v11;
}
