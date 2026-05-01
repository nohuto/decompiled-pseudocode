/*
 * XREFs of ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@U_ResourceSetInfo@2@PEBGPEAT_RM_SID@@KK_KPEAPEAUIResourceSet@2@@Z @ 0x1800351D4
 * Callers:
 *     ?CreateTerminalResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAPEAUIResourceSet@2@@Z @ 0x1800350D0 (-CreateTerminalResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAPEAUIR.c)
 *     ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180040370 (-CreateTerminalResourceSet@ResourceSet@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z.c)
 * Callees:
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x18000ADDC (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000AE28 (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x180016628 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON@@W4Enum@PendType@2@PEA_NPEAPEAUIResourceSet@2@@Z @ 0x180016C40 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@AEBU_.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?GetPackageFamilyName@ResourceManager@ExecutionModel@@QEAAJPEBGPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x18002E8DC (-GetPackageFamilyName@ResourceManager@ExecutionModel@@QEAAJPEBGPEAV-$basic_string@GU-$char_trait.c)
 *     ?Attach@?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVResourceSet@ExecutionModel@@@Z @ 0x1800319E0 (-Attach@-$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVResourceSet@ExecutionModel@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CreateTerminalResourceSetFromResourceSetInfo(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        char *a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        char *a9)
{
  _QWORD *v13; // rdi
  int Instance; // esi
  _DWORD *v15; // rax
  int v16; // ecx
  __int64 v17; // rdx
  bool IsFrozen; // al
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // rcx
  _DWORD *v25; // rdi
  void *v26; // rax
  struct IUnknown *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r14
  void *v31[2]; // [rsp+80h] [rbp-68h] BYREF
  _WORD v32[44]; // [rsp+90h] [rbp-58h] BYREF

  v31[0] = v32;
  v31[1] = v32;
  v32[0] = 0;
  v13 = 0LL;
  if ( !a7 || (Instance = ExecutionModel::ResourceManager::GetPackageFamilyName(a1, (__int64)a4, v31), Instance >= 0) )
  {
    a3[14] = 1;
    v15 = a3 + 20;
    v16 = *(_DWORD *)(a1 + 84);
    v17 = 3LL;
    a3[3] = v16;
    do
    {
      *v15 = v16;
      v15 += 6;
      --v17;
    }
    while ( v17 );
    IsFrozen = ExecutionModel::_ResourceSetInfo::IsFrozen((ExecutionModel::_ResourceSetInfo *)a3);
    ExecutionModel::_ResourceSetInfo::SetAmount((__int64)a3, v19, !IsFrozen);
    ExecutionModel::_ResourceSetInfo::SetAmount(v20, 1, 0LL);
    ExecutionModel::_ResourceSetInfo::SetAmount(v22, v21 + 2, v21);
    v24 = (unsigned int)(v23 + 46);
    v25 = a3 + 34;
    while ( v24 )
    {
      *v25++ = v23 + 99;
      --v24;
    }
    v26 = operator new((unsigned int)(v23 + 38), (const struct std::nothrow_t *)&std::nothrow);
    v13 = v26;
    if ( v26 )
    {
      v27 = *(struct IUnknown **)(a1 + 128);
      *(_QWORD *)v26 = &ExecutionModel::TerminalResourceSetCallback::`vftable'{for `ExecutionModel::IResourceSetCallback'};
      *((_QWORD *)v26 + 1) = &ExecutionModel::TerminalResourceSetCallback::`vftable'{for `ExecutionModel::IRMExecServicesProviderCallback'};
      *((_QWORD *)v26 + 2) = 0LL;
      *((_QWORD *)v26 + 3) = 0LL;
      *((_DWORD *)v26 + 8) = 1;
      if ( *((struct IUnknown **)v26 + 3) != v27 )
        ATL::AtlComPtrAssign((struct IUnknown **)v26 + 3, v27);
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 )
    {
      Instance = ExecutionModel::ResourceSet::CreateInstance(
                   (struct IUnknownVtbl *)a1,
                   *(_QWORD *)(a1 + 184),
                   a3,
                   (__int64)v13,
                   0LL,
                   a2,
                   a4,
                   a5,
                   a6,
                   a7,
                   a8,
                   1u,
                   2,
                   0LL,
                   a9);
      if ( Instance >= 0 )
      {
        v28 = *(_QWORD *)a9;
        if ( *(_QWORD *)a9 )
          v28 -= 1368LL;
        *(_BYTE *)(v28 + 1912) |= 2u;
        v29 = *(_QWORD *)a9;
        if ( *(_QWORD *)a9 )
          v29 -= 1368LL;
        Instance = 0;
        if ( v29 )
        {
          ATL::CComPtrBase<ExecutionModel::ResourceSet>::Attach(v13 + 2, v29);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
        }
        else
        {
          Instance = -2147024809;
        }
      }
    }
    else
    {
      Instance = -2147024882;
    }
  }
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v31);
  if ( v13 )
    (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
  return (unsigned int)Instance;
}
