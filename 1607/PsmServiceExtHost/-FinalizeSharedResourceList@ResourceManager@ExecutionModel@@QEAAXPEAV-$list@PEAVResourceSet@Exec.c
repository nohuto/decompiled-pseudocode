/*
 * XREFs of ?FinalizeSharedResourceList@ResourceManager@ExecutionModel@@QEAAXPEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@_KPEAVResourceSet@2@PEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@4@@Z @ 0x18000FAEC
 * Callers:
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAUIResourceSet@2@@Z @ 0x18000FCB0 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     RmpPsmAppFamilyTableFind @ 0x180005920 (RmpPsmAppFamilyTableFind.c)
 *     RmpPsmAppFamilyIdInitialize @ 0x180005CF8 (RmpPsmAppFamilyIdInitialize.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800073E0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x180017280 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x1800354F0 (-AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x1800355BC (-AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::FinalizeSharedResourceList(
        __int64 a1,
        __int64 ***a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 **j; // rbx
  __int64 v12; // rax
  _QWORD *i; // rbx
  __int64 *v14; // r14
  ExecutionModel::ResourceSet *Next; // rax
  __int64 v16; // rcx
  struct ExecutionModel::ResourceSet *v17; // rax
  _QWORD v18[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR v20[272]; // [rsp+40h] [rbp-C0h] BYREF

  if ( *(_DWORD *)(a4 + 136) )
  {
    if ( (*(_BYTE *)(a4 + 1458) & 0x40) != 0
      || (v9 = *(int *)(a4 + 1416), (unsigned int)v9 <= 0x29) && (v10 = 0x24704100001LL, _bittest64(&v10, v9)) )
    {
      if ( (*(_BYTE *)(a4 + 1790) & 1) == 0 && *a5 != a5[1] )
      {
        RmpPsmAppFamilyIdInitialize(*a5, a4 + 64, *(_DWORD *)(a4 + 132), (__int64)v20);
        v12 = RmpPsmAppFamilyTableFind(*(_QWORD *)(a1 + 224), v20);
        if ( v12 )
        {
          for ( i = (_QWORD *)(v12 + 560); i; i = (_QWORD *)*i )
          {
            v14 = *(__int64 **)(*(i - 1) + 608LL);
            v18[1] = 3LL;
            v18[0] = RmpActivityHostEnumerateResourceSetGetFirst(*v14, 3, 0);
            while ( 1 )
            {
              Next = (ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetNext(v18);
              if ( !Next )
                break;
              if ( (*((_DWORD *)Next + 447) & 0x20000) != 0 )
                ExecutionModel::ResourceSet::AddFGResourceSetForSharing(
                  Next,
                  (struct ExecutionModel::ResourceSet *)a4,
                  1);
            }
            v16 = *v14;
            v19[1] = 3LL;
            v19[0] = RmpActivityHostEnumerateResourceSetGetFirst(v16, 3, 0);
            while ( 1 )
            {
              v17 = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetNext(v19);
              if ( !v17 )
                break;
              if ( (*((_DWORD *)v17 + 447) & 0x20000) != 0 )
                ExecutionModel::ResourceSet::AddBGResourceSetForSharing((ExecutionModel::ResourceSet *)a4, v17, 0);
            }
          }
        }
      }
    }
  }
  for ( j = *a2; j != (__int64 **)a2; j = (__int64 **)*j )
  {
    ExecutionModel::ResourceSet::AddBGResourceSetForSharing(
      (ExecutionModel::ResourceSet *)j[2],
      (struct ExecutionModel::ResourceSet *)a4,
      0);
    ExecutionModel::ResourceSet::AddFGResourceSetForSharing(
      (ExecutionModel::ResourceSet *)a4,
      (struct ExecutionModel::ResourceSet *)j[2],
      0);
  }
  *(_QWORD *)(a4 + 1856) = a3;
}
