/*
 * XREFs of ?RecursiveGetAmount@BaseResourceSet@ExecutionModel@@AEAA_KW4Enum@ResourceType@2@@Z @ 0x18003F018
 * Callers:
 *     ?GetRegisteredExternalResources@ResourceManager@ExecutionModel@@UEAAJQEA_K@Z @ 0x18003E8F0 (-GetRegisteredExternalResources@ResourceManager@ExecutionModel@@UEAAJQEA_K@Z.c)
 *     ?RecursiveGetAmount@BaseResourceSet@ExecutionModel@@AEAA_KW4Enum@ResourceType@2@@Z @ 0x18003F018 (-RecursiveGetAmount@BaseResourceSet@ExecutionModel@@AEAA_KW4Enum@ResourceType@2@@Z.c)
 * Callees:
 *     ?RecursiveGetAmount@BaseResourceSet@ExecutionModel@@AEAA_KW4Enum@ResourceType@2@@Z @ 0x18003F018 (-RecursiveGetAmount@BaseResourceSet@ExecutionModel@@AEAA_KW4Enum@ResourceType@2@@Z.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::RecursiveGetAmount(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  __int64 Amount; // rax

  v3 = *(_QWORD *)(a1 + 1344);
  v4 = *(_QWORD *)(a1 + 24LL * (int)a2 + 200);
  if ( !_bittest64(&v3, a2) )
  {
    v5 = (_QWORD *)(a1 + 160);
    v6 = *(_QWORD **)(a1 + 160);
    while ( v6 != v5 )
    {
      Amount = ExecutionModel::BaseResourceSet::RecursiveGetAmount(v6[2], a2);
      v6 = (_QWORD *)*v6;
      v4 += Amount;
    }
  }
  return v4;
}
