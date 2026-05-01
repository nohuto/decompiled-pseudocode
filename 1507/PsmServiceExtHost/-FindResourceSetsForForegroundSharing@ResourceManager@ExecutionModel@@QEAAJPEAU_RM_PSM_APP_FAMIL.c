/*
 * XREFs of ?FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMILY@@_KPEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@@Z @ 0x180035404
 * Callers:
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x1800355D4 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 * Callees:
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x180010074 (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?GetForeground@ModernActivationResourceInfo@ExecutionModel@@QEAA?AV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@XZ @ 0x180035D2C (-GetForeground@ModernActivationResourceInfo@ExecutionModel@@QEAA-AV-$CComPtr@VResourceSet@Execut.c)
 *     ?push_front@?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@QEAA_NAEBQEAVResourceSet@ExecutionModel@@@Z @ 0x1800397A0 (-push_front@-$list@PEAVResourceSet@ExecutionModel@@V-$allocator@PEAVResourceSet@ExecutionModel@@.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::FindResourceSetsForForegroundSharing(
        ExecutionModel::ResourceSet *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  _QWORD *i; // rdi
  __int64 v7; // r14
  ExecutionModel::ResourceSet *v8; // rsi
  __int64 (__fastcall *v9)(ExecutionModel::ResourceSet *); // rbp
  __int64 result; // rax
  ExecutionModel::ResourceSet *v11; // [rsp+50h] [rbp+8h] BYREF
  ExecutionModel::ResourceSet *v12; // [rsp+58h] [rbp+10h] BYREF

  v11 = a1;
  for ( i = (_QWORD *)(a2 + 560); ; i = (_QWORD *)*i )
  {
    if ( !i )
      return 0LL;
    v7 = *(i - 1);
    v8 = *(ExecutionModel::ResourceSet **)ExecutionModel::ModernActivationResourceInfo::GetForeground(
                                            *(_QWORD *)(v7 + 600),
                                            &v11);
    v12 = v8;
    if ( v11 )
    {
      v9 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v11 + 16LL);
      if ( v9 == ExecutionModel::ResourceSet::Release )
        ExecutionModel::ResourceSet::Release(v11);
      else
        v9(v11);
    }
    if ( *(_DWORD *)(v7 + 584) == 2 && v8 )
    {
      result = ExecutionModel::ResourceSet::HasMemoryForFGSharing(v8, a3);
      if ( (int)result < 0 )
        return result;
      if ( !(unsigned __int8)utl::list<ExecutionModel::ResourceSet *,utl::allocator<ExecutionModel::ResourceSet *>>::push_front(
                               a4,
                               &v12) )
        break;
    }
  }
  return 2147942414LL;
}
