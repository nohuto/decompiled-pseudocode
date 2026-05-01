/*
 * XREFs of ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@U_ResourceSetInfo@2@PEBGPEAT_RM_SID@@KK_KPEAPEAUIResourceSet@2@@Z @ 0x180002518
 * Callers:
 *     ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x1800040D0 (-CreateTerminalResourceSet@ResourceSet@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z.c)
 *     ?CreateTerminalResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAPEAUIResourceSet@2@@Z @ 0x18003C220 (-CreateTerminalResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAPEAUIR.c)
 * Callees:
 *     ?GetPackageFamilyName@ResourceManager@ExecutionModel@@QEAAJPEBGPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180001968 (-GetPackageFamilyName@ResourceManager@ExecutionModel@@QEAAJPEBGPEAV-$basic_string@GU-$char_trait.c)
 *     ?Attach@?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAAXPEAUIResourceSetCallback@ExecutionModel@@@Z @ 0x1800046B4 (-Attach@-$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAAXPEAUIResourceSetCallback@.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x180009178 (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000919C (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18001269C (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON@@W4Enum@PendType@2@PEA_NPEAPEAUIResourceSet@2@@Z @ 0x180015790 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@AEBU_.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CreateTerminalResourceSetFromResourceSetInfo(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 *a9)
{
  struct IUnknown **v13; // rdi
  int Instance; // esi
  _DWORD *v15; // rax
  int v16; // ecx
  __int64 v17; // rdx
  bool IsFrozen; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  int v23; // r8d
  _DWORD *v24; // rdi
  __int64 i; // rcx
  struct IUnknown **v26; // rax
  struct IUnknown *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r14
  _QWORD v31[2]; // [rsp+80h] [rbp-68h] BYREF
  _WORD v32[44]; // [rsp+90h] [rbp-58h] BYREF

  v31[0] = v32;
  v31[1] = v32;
  v32[0] = 0;
  v13 = 0LL;
  if ( !a7 || (Instance = ExecutionModel::ResourceManager::GetPackageFamilyName(a1, a4, (__int64)v31), Instance >= 0) )
  {
    a3[16] = 1;
    v15 = a3 + 22;
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
    ExecutionModel::_ResourceSetInfo::SetAmount(a3, v19, !IsFrozen);
    ExecutionModel::_ResourceSetInfo::SetAmount(v20, 1LL, 0LL);
    ExecutionModel::_ResourceSetInfo::SetAmount(v22, (unsigned int)(v21 + 2), v21);
    v24 = a3 + 36;
    for ( i = (unsigned int)(v23 + 48); i; --i )
      *v24++ = v23 + 101;
    v26 = (struct IUnknown **)operator new((unsigned int)(v23 + 40), (const struct std::nothrow_t *)&std::nothrow);
    v13 = v26;
    if ( v26 )
    {
      v27 = *(struct IUnknown **)(a1 + 128);
      *v26 = (struct IUnknown *)&ExecutionModel::TerminalResourceSetCallback::`vftable'{for `ExecutionModel::IResourceSetCallback'};
      v26[1] = (struct IUnknown *)&ExecutionModel::TerminalResourceSetCallback::`vftable'{for `ExecutionModel::IRMExecServicesProviderCallback'};
      v26[2] = 0LL;
      v26[3] = 0LL;
      *((_DWORD *)v26 + 8) = 1;
      if ( v26[3] != v27 )
        ATL::AtlComPtrAssign(v26 + 3, v27);
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 )
    {
      Instance = ExecutionModel::ResourceSet::CreateInstance(
                   a1,
                   *(_QWORD *)(a1 + 184),
                   a3,
                   v13,
                   0LL,
                   a2,
                   a4,
                   a5,
                   a6,
                   a7,
                   a8,
                   1,
                   2,
                   0LL,
                   a9);
      if ( Instance >= 0 )
      {
        v28 = *a9;
        if ( *a9 )
          v28 -= 1368LL;
        *(_BYTE *)(v28 + 1920) |= 2u;
        v29 = *a9;
        if ( *a9 )
          v29 -= 1368LL;
        Instance = 0;
        if ( v29 )
        {
          ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::Attach(v13 + 2, v29);
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
    ((void (__fastcall *)(struct IUnknown **))(*v13)[2].lpVtbl)(v13);
  return (unsigned int)Instance;
}
