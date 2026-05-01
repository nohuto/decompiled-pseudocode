/*
 * XREFs of ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAXPEAK@Z @ 0x18001B6A8
 * Callers:
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001BDE4 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800108F0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z @ 0x18001109C (-InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800151B8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceManager::SetMainPoolSizes(
        ExecutionModel::ResourceManager *this,
        unsigned int *a2)
{
  struct IUnknown *v2; // r9
  struct IUnknown *v4; // rdx
  struct IUnknown *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r10
  ExecutionModel::BaseResourceSet *v9; // r9
  ExecutionModel::BaseResourceSet *v10; // r9
  __int64 v11; // r10
  __int64 (__fastcall *v12)(ExecutionModel::ResourceSet *); // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  int v16; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+28h] [rbp-28h]
  int v18; // [rsp+30h] [rbp-20h]
  __int16 v19; // [rsp+34h] [rbp-1Ch]
  int v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h]
  int v22; // [rsp+48h] [rbp-8h]
  __int16 v23; // [rsp+4Ch] [rbp-4h]
  struct IUnknown *v24; // [rsp+60h] [rbp+10h] BYREF

  v2 = 0LL;
  v4 = (struct IUnknown *)*((_QWORD *)this + 15);
  v24 = 0LL;
  if ( v4 )
  {
    ATL::AtlComPtrAssign(&v24, v4);
    v2 = v24;
  }
  v6 = v2 + 24;
  if ( LODWORD(v2[24].lpVtbl) != -1 )
  {
    v13 = 0LL;
    v14 = 3LL;
    do
    {
      v6[1].lpVtbl = 0LL;
      LODWORD(v6->lpVtbl) = -1;
      v6 += 3;
      v15 = (__int64)v2[168].lpVtbl & ~(1LL << v13++);
      v2[168].lpVtbl = (struct IUnknownVtbl *)v15;
      --v14;
    }
    while ( v14 );
  }
  v7 = *a2;
  v8 = a2[2];
  v16 = 0;
  v17 = v7;
  v18 = 101;
  v22 = 101;
  v19 = 1;
  v20 = 2;
  v21 = v8;
  v23 = 1;
  ExecutionModel::BaseResourceSet::InitializeResource(
    (ExecutionModel::BaseResourceSet *)v2,
    (const struct ExecutionModel::_ResourceInfo *)&v16);
  ExecutionModel::BaseResourceSet::InitializeResource(v9, (const struct ExecutionModel::_ResourceInfo *)&v20);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 16) = v11;
  v12 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v10 + 16LL);
  if ( v12 == ExecutionModel::BaseResourceSet::Release )
  {
    ExecutionModel::BaseResourceSet::Release(v10);
  }
  else if ( v12 == ExecutionModel::ResourceSet::Release )
  {
    ExecutionModel::ResourceSet::Release(v10);
  }
  else
  {
    v12(v10);
  }
}
