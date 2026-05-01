/*
 * XREFs of ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18002C298
 * Callers:
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAUIResourceSet@2@@Z @ 0x18000FCB0 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ?clear@?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@QEAAXXZ @ 0x180003090 (-clear@-$list@PEAVResourceSet@ExecutionModel@@V-$allocator@PEAVResourceSet@ExecutionModel@@@utl@.c)
 *     RmpPsmAppFamilyTableFind @ 0x180005920 (RmpPsmAppFamilyTableFind.c)
 *     RmpPsmAppFamilyIdInitialize @ 0x180005CF8 (RmpPsmAppFamilyIdInitialize.c)
 *     RmpCommitValuesSubtract @ 0x180007034 (RmpCommitValuesSubtract.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800073E0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18000D828 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x18000DAA0 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x180017280 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     RmpActivityHostFindProcessResourceSet @ 0x18001A1E8 (RmpActivityHostFindProcessResourceSet.c)
 *     ?IsForeground@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x18001FAD0 (-IsForeground@ResourceSet@ExecutionModel@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMILY@@_KPEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@@Z @ 0x18002C118 (-FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMIL.c)
 *     ?GetForeground@ModernActivationResourceInfo@ExecutionModel@@QEAAPEAVResourceSet@2@XZ @ 0x18002C628 (-GetForeground@ModernActivationResourceInfo@ExecutionModel@@QEAAPEAVResourceSet@2@XZ.c)
 *     ?push_front@?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@QEAA_NAEBQEAVResourceSet@ExecutionModel@@@Z @ 0x18002D6C0 (-push_front@-$list@PEAVResourceSet@ExecutionModel@@V-$allocator@PEAVResourceSet@ExecutionModel@@.c)
 *     RmpActivityHostFindMixedHostForPsmId @ 0x18002F058 (RmpActivityHostFindMixedHostForPsmId.c)
 *     ?AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x1800353A0 (-AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z @ 0x18003571C (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GenerateSharedResourceSetListAndAcquire(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        __int64 *a6,
        __int64 a7,
        unsigned int a8,
        __int64 *a9,
        ULONGLONG *a10)
{
  __int64 *v10; // r10
  __int64 v12; // r9
  ULONGLONG Ptr; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  ExecutionModel::ResourceSet *v18; // rcx
  int HasMemoryForFGSharing; // ebx
  _QWORD *v20; // rbx
  ExecutionModel::ResourceSet *ProcessResourceSet; // rax
  ExecutionModel::ResourceSet *v22; // rbx
  __int64 *v23; // rbx
  __int64 v24; // rcx
  struct ExecutionModel::ResourceSet *Next; // rax
  const struct _TlgProvider_t *v26; // rcx
  ExecutionModel::ModernActivationResourceInfo *v27; // rbx
  const struct _TlgProvider_t *v28; // rcx
  const GUID *v29; // r8
  const GUID *v30; // r9
  const void *v31; // rdx
  const struct _TlgProvider_t *v32; // rcx
  void *v34[2]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v35[8]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v36[464]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v37[68]; // [rsp+220h] [rbp+120h] BYREF
  unsigned int v38; // [rsp+264h] [rbp+164h]
  WCHAR v39[272]; // [rsp+280h] [rbp+180h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4A0h] [rbp+3A0h] BYREF

  v10 = a6;
  v12 = a2;
  pData.Ptr = 0LL;
  Ptr = 0LL;
  if ( a3 )
  {
    v15 = *(_QWORD *)(a2 + 72);
    v16 = *(_QWORD *)(a3 + 1856);
    if ( v15 <= v16 )
    {
LABEL_45:
      *a10 = Ptr;
      return 0;
    }
    RmpCommitValuesSubtract(v15, v16, &pData);
    Ptr = pData.Ptr;
  }
  else
  {
    Ptr = *(_QWORD *)(a2 + 72);
  }
  if ( (*(_DWORD *)(v12 + 372) & 0x20000) == 0 )
  {
    if ( a5 )
    {
      ProcessResourceSet = (ExecutionModel::ResourceSet *)RmpActivityHostFindProcessResourceSet(a1[28], a5);
      v22 = ProcessResourceSet;
      if ( ProcessResourceSet )
      {
        if ( !ExecutionModel::ResourceSet::IsForeground(ProcessResourceSet) )
        {
          HasMemoryForFGSharing = -2147220215;
          goto LABEL_15;
        }
      }
      else
      {
        if ( (*(int (__fastcall **)(__int64 *, _QWORD, _BYTE *))(*a1 + 80))(a1, a5, v36) < 0 )
          goto LABEL_8;
        if ( (int)RmpActivityHostFindMixedHostForPsmId(a1[28], v36, v37, v38, &pData) < 0 )
          goto LABEL_8;
        v23 = *(__int64 **)(pData.Ptr + 608);
        RmpObjectRelease((volatile signed __int32 *)pData.Ptr);
        if ( !v23 )
          goto LABEL_8;
        v24 = *v23;
        pData.Reserved = 0;
        pData.Size = 3;
        pData.Ptr = RmpActivityHostEnumerateResourceSetGetFirst(v24, 3, 0);
        while ( 1 )
        {
          Next = RmpActivityHostEnumerateResourceSetGetNext((struct ExecutionModel::ResourceSet **)&pData);
          v22 = Next;
          if ( !Next )
            break;
          if ( *((int *)Next + 422) < 101 )
            goto LABEL_23;
        }
        v22 = 0LL;
      }
LABEL_23:
      pData.Ptr = (ULONGLONG)v22;
LABEL_41:
      if ( v22 )
      {
        HasMemoryForFGSharing = ExecutionModel::ResourceSet::HasMemoryForFGSharing(v22, Ptr, 1u);
        if ( HasMemoryForFGSharing < 0 )
          goto LABEL_15;
        utl::list<ExecutionModel::ResourceSet *,utl::allocator<ExecutionModel::ResourceSet *>>::push_front(a4, &pData);
      }
LABEL_8:
      v20 = (_QWORD *)*a4;
      if ( (_QWORD *)*a4 == a4 )
      {
        Ptr = 0LL;
      }
      else
      {
        while ( v20 != a4 )
        {
          ExecutionModel::ResourceSet::AcquireMemoryForFGSharing((ExecutionModel::ResourceSet *)v20[2], Ptr);
          v20 = (_QWORD *)*v20;
        }
      }
      goto LABEL_45;
    }
    v35[0] = 0;
    v34[0] = v35;
    v34[1] = v35;
    if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
            (__int64)v34,
            v10) )
    {
      HasMemoryForFGSharing = -2147024882;
LABEL_26:
      utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v34);
      goto LABEL_15;
    }
    if ( (int)RmpActivityHostFindMixedHostForPsmId(a1[28], v34[0], a7, a8, &pData) < 0 )
    {
      v27 = 0LL;
    }
    else
    {
      v27 = *(ExecutionModel::ModernActivationResourceInfo **)(pData.Ptr + 608);
      RmpObjectRelease((volatile signed __int32 *)pData.Ptr);
    }
    if ( v27 )
    {
      pData.Ptr = (ULONGLONG)ExecutionModel::ModernActivationResourceInfo::GetForeground(v27);
      v22 = (ExecutionModel::ResourceSet *)pData.Ptr;
      if ( pData.Ptr )
      {
        utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v34);
        goto LABEL_41;
      }
      if ( (unsigned int)dword_18004C030 <= 4 || !TlgKeywordOn(v32, 1uLL) )
        goto LABEL_35;
      v31 = &unk_18003FE61;
    }
    else
    {
      if ( (unsigned int)dword_18004C030 <= 4 || !TlgKeywordOn(v26, 1uLL) )
        goto LABEL_35;
      v31 = &unk_18003FDE8;
    }
    TlgWrite(v28, v31, v29, v30, 2u, &pData);
LABEL_35:
    HasMemoryForFGSharing = -2147220215;
    goto LABEL_26;
  }
  RmpPsmAppFamilyIdInitialize(*a9, a7, a8, (__int64)v39);
  v17 = RmpPsmAppFamilyTableFind(a1[28], v39);
  if ( !v17 )
    goto LABEL_8;
  HasMemoryForFGSharing = ExecutionModel::ResourceManager::FindResourceSetsForForegroundSharing(
                            v18,
                            v17,
                            Ptr,
                            (__int64)a4);
  if ( HasMemoryForFGSharing >= 0 )
    goto LABEL_8;
LABEL_15:
  utl::list<ExecutionModel::ResourceSet *,utl::allocator<ExecutionModel::ResourceSet *>>::clear((__int64)a4);
  return (unsigned int)HasMemoryForFGSharing;
}
