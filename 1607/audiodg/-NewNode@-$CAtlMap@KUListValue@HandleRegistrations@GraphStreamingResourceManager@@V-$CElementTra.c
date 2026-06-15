/*
 * XREFs of ?NewNode@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEAAPEAVCNode@12@KII@Z @ 0x140004880
 * Callers:
 *     ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@GraphStreamingResourceManager@@@Z @ 0x140004B20 (-SetAt@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTrait.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x140027CF0 (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 *     ?Rehash@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXI@Z @ 0x140028398 (-Rehash@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTrai.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::NewNode(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // r15
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  int v10; // r8d
  _QWORD *v11; // rax
  int i; // r8d
  __int64 v13; // rdi
  unsigned int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-38h]

  v5 = a3;
  if ( *(_QWORD *)(a1 + 64) )
    goto LABEL_9;
  v8 = *(unsigned int *)(a1 + 52);
  if ( v8 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x30 )
      goto LABEL_13;
    v8 *= 48LL;
  }
  if ( -1LL - v8 < 8 || (v9 = malloc(v8 + 8)) == 0LL )
LABEL_13:
    ATL::AtlThrowImpl(-2147024882);
  *v9 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v9;
  v10 = *(_DWORD *)(a1 + 52);
  v11 = &v9[6 * (unsigned int)(v10 - 1) + 1];
  for ( i = v10 - 1; i >= 0; --i )
  {
    v11[4] = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v11;
    v11 -= 6;
  }
LABEL_9:
  v13 = *(_QWORD *)(a1 + 64);
  if ( !v13 )
    ATL::AtlThrowImpl(-2147467259);
  v16 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v13 + 32);
  try
  {
    *(_DWORD *)v13 = a2;
    *(_DWORD *)(v13 + 40) = a4;
  }
  catch ( ... )
  {
    *(_QWORD *)(v16 + 32) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v16;
    throw;
  }
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v13 + 32) = *(_QWORD *)(8 * v5 + *(_QWORD *)a1);
  *(_QWORD *)(8 * v5 + *(_QWORD *)a1) = v13;
  if ( *(_QWORD *)(a1 + 8) > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v15 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(a1);
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::Rehash(
      a1,
      v15);
  }
  return v13;
}
