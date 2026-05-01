/*
 * XREFs of ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAXPEAK@Z @ 0x180022F74
 * Callers:
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18002370C (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x180003050 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000B3D0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z @ 0x18000CC78 (-InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

void __fastcall ExecutionModel::ResourceManager::SetMainPoolSizes(
        ExecutionModel::ResourceManager *this,
        unsigned int *a2)
{
  struct IUnknown *v2; // rbx
  struct IUnknown *v4; // rdx
  struct IUnknown *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  ULONG (__stdcall *Release)(IUnknown *); // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+28h] [rbp-48h]
  int v15; // [rsp+30h] [rbp-40h]
  __int16 v16; // [rsp+34h] [rbp-3Ch]
  int v17; // [rsp+38h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-30h]
  int v19; // [rsp+48h] [rbp-28h]
  __int16 v20; // [rsp+4Ch] [rbp-24h]
  int v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h]
  int v23; // [rsp+60h] [rbp-10h]
  __int16 v24; // [rsp+64h] [rbp-Ch]
  struct IUnknown *v25; // [rsp+80h] [rbp+10h] BYREF

  v2 = 0LL;
  v4 = (struct IUnknown *)*((_QWORD *)this + 23);
  v25 = 0LL;
  if ( v4 )
  {
    ATL::AtlComPtrAssign(&v25, v4);
    v2 = v25;
  }
  v6 = v2 + 24;
  if ( LODWORD(v2[24].lpVtbl) != -1 )
  {
    v10 = 0LL;
    v11 = 3LL;
    do
    {
      v6[1].lpVtbl = 0LL;
      LODWORD(v6->lpVtbl) = -1;
      v6 += 3;
      v12 = (__int64)v2[168].lpVtbl & ~(1LL << v10++);
      v2[168].lpVtbl = (struct IUnknownVtbl *)v12;
      --v11;
    }
    while ( v11 );
  }
  v7 = *a2;
  v13 = 0;
  v14 = v7;
  v18 = a2[1];
  v8 = a2[2];
  v15 = 101;
  v19 = 101;
  v23 = 101;
  v22 = v8;
  v16 = 1;
  v17 = 1;
  v20 = 1;
  v21 = 2;
  v24 = 1;
  ExecutionModel::BaseResourceSet::InitializeResource(
    (ExecutionModel::BaseResourceSet *)v2,
    (const struct ExecutionModel::_ResourceInfo *)&v13);
  ExecutionModel::BaseResourceSet::InitializeResource(
    (ExecutionModel::BaseResourceSet *)v2,
    (const struct ExecutionModel::_ResourceInfo *)&v17);
  ExecutionModel::BaseResourceSet::InitializeResource(
    (ExecutionModel::BaseResourceSet *)v2,
    (const struct ExecutionModel::_ResourceInfo *)&v21);
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  Release = v2->lpVtbl->Release;
  if ( (char *)Release == (char *)ExecutionModel::ResourceSet::Release )
  {
    ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v2);
  }
  else if ( (char *)Release == (char *)ExecutionModel::BaseResourceSet::Release )
  {
    ExecutionModel::BaseResourceSet::Release((ExecutionModel::BaseResourceSet *)v2);
  }
  else if ( (char *)Release == (char *)ExecutionModel::ExternalResourceSet::Release )
  {
    ExecutionModel::ExternalResourceSet::Release((ExecutionModel::ExternalResourceSet *)v2);
  }
  else
  {
    ((void (__fastcall *)(struct IUnknown *))Release)(v2);
  }
}
