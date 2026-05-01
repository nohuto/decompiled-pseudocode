/*
 * XREFs of ?AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z @ 0x18004511C
 * Callers:
 *     ?AcquireAdditionalMemoryResources@ModernActivationResourceInfo@ExecutionModel@@QEAAJ_K0PEA_N@Z @ 0x18003B2E4 (-AcquireAdditionalMemoryResources@ModernActivationResourceInfo@ExecutionModel@@QEAAJ_K0PEA_N@Z.c)
 *     ?OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z @ 0x18003D370 (-OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000B760 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180045324 (-CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::AcquireAdditionalResources(
        ExecutionModel::ResourceSet *this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        bool *a3)
{
  ExecutionModel::ResourceSet *v3; // rdi
  struct IUnknown **v4; // rsi
  unsigned __int8 v8; // bl
  int v9; // eax
  struct IUnknown *v10; // rdx
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  unsigned __int8 v15[4]; // [rsp+80h] [rbp-80h] BYREF
  int v16; // [rsp+84h] [rbp-7Ch] BYREF
  ExecutionModel::ResourceSet *v17; // [rsp+88h] [rbp-78h] BYREF
  ExecutionModel::ResourceSet *v18; // [rsp+90h] [rbp-70h] BYREF
  ExecutionModel::ResourceSet *v19; // [rsp+98h] [rbp-68h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  int *v22; // [rsp+D0h] [rbp-30h]
  int v23; // [rsp+D8h] [rbp-28h]
  int v24; // [rsp+DCh] [rbp-24h]
  ExecutionModel::ResourceSet **v25; // [rsp+E0h] [rbp-20h]
  int v26; // [rsp+E8h] [rbp-18h]
  int v27; // [rsp+ECh] [rbp-14h]
  __int64 *v28; // [rsp+F0h] [rbp-10h]
  int v29; // [rsp+F8h] [rbp-8h]
  int v30; // [rsp+FCh] [rbp-4h]
  ExecutionModel::ResourceSet **v31; // [rsp+100h] [rbp+0h]
  int v32; // [rsp+108h] [rbp+8h]
  int v33; // [rsp+10Ch] [rbp+Ch]
  ExecutionModel::ResourceSet **v34; // [rsp+110h] [rbp+10h]
  int v35; // [rsp+118h] [rbp+18h]
  int v36; // [rsp+11Ch] [rbp+1Ch]

  v3 = 0LL;
  v4 = (struct IUnknown **)((char *)this + 1824);
  v17 = 0LL;
  v8 = 1;
  if ( *((_QWORD *)this + 228) )
  {
    v16 = 0;
  }
  else
  {
    v9 = ExecutionModel::BaseResourceSet::AcquireResources(
           *((_QWORD *)this + 23),
           *((_QWORD *)this + 175),
           (char *)a2,
           3u,
           (int *)a2 + 18,
           *((_DWORD *)a2 + 3),
           0,
           0,
           8u,
           1,
           v15,
           *((struct IUnknownVtbl **)this + 3),
           ExecutionModel::ResourceSet::ResourceSetFactory,
           0,
           (struct IUnknown **)&v17);
    v3 = v17;
    v16 = v9;
    if ( v9 < 0 )
    {
      v8 = v15[0];
    }
    else
    {
      if ( *((ExecutionModel::ResourceSet **)v17 + 227) != (ExecutionModel::ResourceSet *)((char *)this + 1368) )
        ATL::AtlComPtrAssign((struct IUnknown **)v17 + 227, (struct IUnknown *)this + 171);
      if ( v3 )
        v10 = (struct IUnknown *)((char *)v3 + 1368);
      else
        v10 = 0LL;
      if ( *v4 != v10 )
        ATL::AtlComPtrAssign(v4, v10);
      v8 = v15[0];
      if ( !v15[0] )
        ExecutionModel::ResourceSet::CompleteAcquireAdditionalResources(v3, 2u);
    }
  }
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 9uLL) )
  {
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v22 = &v16;
    v25 = &v18;
    v20 = *((_QWORD *)a2 + 13);
    v28 = &v20;
    LODWORD(v17) = v8;
    v31 = &v17;
    v34 = &v19;
    v23 = (int)v11;
    v18 = this;
    v26 = 8;
    v29 = 8;
    v32 = (int)v11;
    v19 = v3;
    v35 = 8;
    TlgWrite(v11, &unk_180064645, v12, v13, 7u, &pData);
  }
  if ( v16 >= 0 )
    *a3 = v8;
  if ( v3 )
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v16;
}
