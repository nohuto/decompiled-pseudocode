/*
 * XREFs of ?AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z @ 0x18003FFB0
 * Callers:
 *     ?AcquireAdditionalMemoryResources@ModernActivationResourceInfo@ExecutionModel@@QEAAJ_K0PEA_KPEA_N@Z @ 0x180034158 (-AcquireAdditionalMemoryResources@ModernActivationResourceInfo@ExecutionModel@@QEAAJ_K0PEA_KPEA_.c)
 *     ?OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z @ 0x180037090 (-OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     ?GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z @ 0x18000AE04 (-GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000ECD0 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x1800401F0 (-CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::AcquireAdditionalResources(
        ExecutionModel::ResourceSet *this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        bool *a3)
{
  struct IUnknown **v3; // rsi
  unsigned __int8 v4; // bl
  struct IUnknown *v7; // r14
  ExecutionModel::ResourceSet *v8; // rdi
  int v9; // eax
  struct IUnknown *v10; // rdx
  __int64 v11; // r9
  const GUID *v12; // r9
  TraceLoggingHProvider v13; // rcx
  LPCGUID v14; // r8
  unsigned __int8 v16[4]; // [rsp+80h] [rbp-80h] BYREF
  int v17; // [rsp+84h] [rbp-7Ch] BYREF
  ExecutionModel::ResourceSet *v18; // [rsp+88h] [rbp-78h] BYREF
  struct IUnknown *v19; // [rsp+90h] [rbp-70h] BYREF
  ExecutionModel::ResourceSet *v20; // [rsp+98h] [rbp-68h] BYREF
  __int64 Amount; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  int *v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  struct IUnknown **v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  __int64 *p_Amount; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  ExecutionModel::ResourceSet **v29; // [rsp+100h] [rbp+0h]
  const GUID *v30; // [rsp+108h] [rbp+8h]
  ExecutionModel::ResourceSet **v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]

  v3 = (struct IUnknown **)((char *)this + 1816);
  v4 = 1;
  v7 = (struct IUnknown *)this;
  v8 = 0LL;
  v17 = 0;
  v16[0] = 1;
  v18 = 0LL;
  if ( !*((_QWORD *)this + 227) )
  {
    v9 = ExecutionModel::BaseResourceSet::AcquireResources(
           *((_QWORD *)this + 23),
           *((_QWORD *)this + 175),
           (char *)a2,
           3u,
           (int *)a2 + 16,
           *((_DWORD *)a2 + 3),
           0,
           0,
           8u,
           1,
           v16,
           *((struct IUnknownVtbl **)this + 3),
           (struct IUnknown *)ExecutionModel::ResourceSet::ResourceSetFactory,
           0,
           (struct IUnknown **)&v18);
    v8 = v18;
    v17 = v9;
    if ( v9 < 0 )
    {
      v4 = v16[0];
      goto LABEL_13;
    }
    this = (ExecutionModel::ResourceSet *)((char *)v18 + 1808);
    if ( *((struct IUnknown **)v18 + 226) != &v7[171] )
      ATL::AtlComPtrAssign((struct IUnknown **)this, v7 + 171);
    v10 = (struct IUnknown *)((char *)v8 + 1368);
    if ( !v8 )
      v10 = 0LL;
    if ( *v3 != v10 )
      ATL::AtlComPtrAssign(v3, v10);
    v4 = v16[0];
    if ( !v16[0] )
      ExecutionModel::ResourceSet::CompleteAcquireAdditionalResources(v8, 0);
  }
  if ( a3 )
    *a3 = v4;
LABEL_13:
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(this, 9uLL) )
  {
    v24 = v11;
    v23 = &v17;
    v19 = v7;
    v25 = &v19;
    v26 = 8LL;
    Amount = ExecutionModel::_ResourceSetInfo::GetAmount((__int64)a2, (int)v11 - 3);
    p_Amount = &Amount;
    LODWORD(v18) = v4;
    v29 = &v18;
    v31 = &v20;
    v28 = 8LL;
    v30 = v12;
    v20 = v8;
    v32 = 8LL;
    TlgWrite(v13, &unk_18005C906, v14, v12, 7u, &pData);
  }
  if ( v17 >= 0 && v4 )
    v8 = 0LL;
  if ( v8 )
  {
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v8 + 32LL))(v8);
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v17;
}
