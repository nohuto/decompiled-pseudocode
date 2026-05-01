/*
 * XREFs of ?CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x18001A9E0
 * Callers:
 *     ?FindOrCreateHostResourceInfoForAppId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x1800053C8 (-FindOrCreateHostResourceInfoForAppId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@K.c)
 *     ?AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x180019640 (-AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@P.c)
 *     ?AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAPEAUIResourceSet@2@@Z @ 0x1800197A0 (-AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIV.c)
 * Callees:
 *     ?CreateInstance@HostResourceInfo@ExecutionModel@@SAJPEAVApplicationPackageInfo@2@AEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@PEAPEAUIUnknown@@@Z @ 0x180007854 (-CreateInstance@HostResourceInfo@ExecutionModel@@SAJPEAVApplicationPackageInfo@2@AEBU_AppModelAc.c)
 *     ?Release@HostResourceInfo@ExecutionModel@@UEAAKXZ @ 0x180012CE0 (-Release@HostResourceInfo@ExecutionModel@@UEAAKXZ.c)
 *     ??$_InsertImpl@U?$pair@_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@?$_HashTable@_KU?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@utl@@@utl@@_N@1@U?$integral_constant@_N$0A@@1@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@utl@@@1@$$QEAU?$pair@_KPEAVHostResourceInfo@ExecutionModel@@@1@@Z @ 0x180019B88 (--$_InsertImpl@U-$pair@_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@-$_HashTable@_KU-$pair@$$CB.c)
 *     ?IncrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z @ 0x18001A4F8 (-IncrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z.c)
 *     ?CreateAppPackageInfo@HostResources@ExecutionModel@@IEAAJKPEAXAEBU_AppModelActivationId@@PEAPEAUIUnknown@@@Z @ 0x18001A5EC (-CreateAppPackageInfo@HostResources@ExecutionModel@@IEAAJKPEAXAEBU_AppModelActivationId@@PEAPEAU.c)
 *     ?FindAppPackageInfo@HostResources@ExecutionModel@@QEAAJKPEAXAEBU_AppModelActivationId@@PEAPEAUIUnknown@@@Z @ 0x18001A6F0 (-FindAppPackageInfo@HostResources@ExecutionModel@@QEAAJKPEAXAEBU_AppModelActivationId@@PEAPEAUIU.c)
 *     ?Release@ApplicationPackageInfo@ExecutionModel@@UEAAKXZ @ 0x18001B8E0 (-Release@ApplicationPackageInfo@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

struct IUnknown *__fastcall ExecutionModel::HostResources::CreateHostResourceInfoForAppId(
        ExecutionModel::HostResources *this,
        unsigned int a2,
        void *a3,
        const struct _AppModelActivationId *a4,
        struct ExecutionModel::ResourcePolicyEngine *a5)
{
  struct IUnknown *v5; // rsi
  struct IUnknown *v6; // rbx
  struct IUnknown *v11; // r12
  ExecutionModel::ApplicationPackageInfo *v12; // rdi
  int Instance; // eax
  __int64 v14; // r8
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  _QWORD *v17; // rax
  char v18; // bp
  ULONG (__stdcall *Release)(IUnknown *); // rsi
  unsigned int (__fastcall *v20)(ExecutionModel::ApplicationPackageInfo *__hidden); // rsi
  struct IUnknown *v22[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v23[72]; // [rsp+40h] [rbp-48h] BYREF
  struct IUnknown *v26; // [rsp+A8h] [rbp+20h] BYREF

  v5 = (struct IUnknown *)*((_QWORD *)a4 + 2);
  v6 = 0LL;
  v22[0] = 0LL;
  v26 = 0LL;
  v11 = 0LL;
  if ( ExecutionModel::HostResources::FindAppPackageInfo(this, a2, a3, a4, &v26) >= 0
    || (int)ExecutionModel::HostResources::CreateAppPackageInfo(this, a2, a3, a4, &v26) >= 0 )
  {
    v12 = (ExecutionModel::ApplicationPackageInfo *)v26;
    if ( !v26 )
      return v11;
    Instance = ExecutionModel::HostResourceInfo::CreateInstance(
                 (struct ExecutionModel::ApplicationPackageInfo *)v26,
                 a4,
                 a5,
                 v22);
    v6 = v22[0];
    if ( Instance >= 0 )
    {
      if ( v22[0] )
      {
        v22[0] = v5;
        v22[1] = v6;
        utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>>,0>::_InsertImpl<utl::pair<unsigned __int64,ExecutionModel::HostResourceInfo *>>(
          (__int64)this + 16,
          (__int64)v23,
          v14,
          0LL,
          (__int64 *)v22);
        if ( v23[8] )
        {
          ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->AddRef)(v6);
          v15 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
          v16 = v15;
          if ( v15 )
          {
            v15[2] = v6;
            ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->AddRef)(v6);
            v17 = (_QWORD *)*((_QWORD *)v12 + 9);
            v16[1] = v17;
            *v16 = (char *)v12 + 64;
            *v17 = v16;
            *((_QWORD *)v12 + 9) = v16;
            ++*((_QWORD *)v12 + 10);
            v18 = 0;
          }
          else
          {
            v18 = 1;
          }
          Release = v6->lpVtbl->Release;
          if ( (char *)Release == (char *)ExecutionModel::HostResourceInfo::Release )
            ExecutionModel::HostResourceInfo::Release((ExecutionModel::HostResourceInfo *)v6);
          else
            ((void (__fastcall *)(struct IUnknown *))Release)(v6);
          if ( !v18 )
          {
            v11 = v6;
            v6 = 0LL;
            if ( *(_DWORD *)a4 )
              ExecutionModel::HostResources::IncrementPackageHostCount(
                this,
                a2,
                a3,
                *((const unsigned __int16 **)a4 + 1));
          }
        }
      }
    }
  }
  else
  {
    v12 = (ExecutionModel::ApplicationPackageInfo *)v26;
  }
  if ( v12 )
  {
    v20 = *(unsigned int (__fastcall **)(ExecutionModel::ApplicationPackageInfo *__hidden))(*(_QWORD *)v12 + 16LL);
    if ( v20 == ExecutionModel::ApplicationPackageInfo::Release )
      ExecutionModel::ApplicationPackageInfo::Release(v12);
    else
      v20(v12);
  }
  if ( v6 )
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
  return v11;
}
