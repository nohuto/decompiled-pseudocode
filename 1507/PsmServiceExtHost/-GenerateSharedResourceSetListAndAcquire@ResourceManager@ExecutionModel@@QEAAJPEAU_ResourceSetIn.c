/*
 * XREFs of ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x1800355D4
 * Callers:
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180012E10 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     RmpActivityHostFindProcessResourceSet @ 0x180002CA8 (RmpActivityHostFindProcessResourceSet.c)
 *     RmpPsmAppFamilyTableFind @ 0x180008EC0 (RmpPsmAppFamilyTableFind.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     ?AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x18000FFB0 (-AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x180010074 (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x180016628 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_N_KG@Z @ 0x180016764 (-resize@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_N_KG@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180016A90 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     RmpPsmAppFamilyIdInitialize @ 0x1800191D8 (RmpPsmAppFamilyIdInitialize.c)
 *     ?IsForeground@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x180023D8C (-IsForeground@ResourceSet@ExecutionModel@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?clear@?$list@KV?$allocator@K@utl@@@utl@@QEAAXXZ @ 0x18002F324 (-clear@-$list@KV-$allocator@K@utl@@@utl@@QEAAXXZ.c)
 *     ?FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMILY@@_KPEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@@Z @ 0x180035404 (-FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMIL.c)
 *     ?GetForeground@ModernActivationResourceInfo@ExecutionModel@@QEAA?AV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@XZ @ 0x180035D2C (-GetForeground@ModernActivationResourceInfo@ExecutionModel@@QEAA-AV-$CComPtr@VResourceSet@Execut.c)
 *     ?GetSponsor@ModernActivationResourceInfo@ExecutionModel@@QEAA?AV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@XZ @ 0x180036278 (-GetSponsor@ModernActivationResourceInfo@ExecutionModel@@QEAA-AV-$CComPtr@VResourceSet@Execution.c)
 *     ?HasForeground@ModernActivationResourceInfo@ExecutionModel@@QEBAHXZ @ 0x180036330 (-HasForeground@ModernActivationResourceInfo@ExecutionModel@@QEBAHXZ.c)
 *     ?push_front@?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@QEAA_NAEBQEAVResourceSet@ExecutionModel@@@Z @ 0x1800397A0 (-push_front@-$list@PEAVResourceSet@ExecutionModel@@V-$allocator@PEAVResourceSet@ExecutionModel@@.c)
 *     RmpActivityHostFindMixedHostForPsmId @ 0x18003BB14 (RmpActivityHostFindMixedHostForPsmId.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GenerateSharedResourceSetListAndAcquire(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        __int64 *a6,
        __int64 a7,
        int a8,
        char **a9,
        _QWORD *a10)
{
  _QWORD *v10; // rdi
  ExecutionModel::ResourceSet *v11; // rsi
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  ExecutionModel::ResourceSet *v17; // rcx
  int ResourceSetsForForegroundSharing; // ebx
  ExecutionModel::ResourceSet *ProcessResourceSet; // rax
  ExecutionModel::ResourceSet *v20; // rdx
  _BYTE *v21; // rax
  int v22; // eax
  unsigned __int64 v23; // rdx
  int v24; // r8d
  _BYTE *v25; // rax
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(ExecutionModel::ResourceSet *); // rdi
  _QWORD *v28; // rbx
  ExecutionModel::ModernActivationResourceInfo *v29; // rbx
  __int64 (__fastcall *v30)(ExecutionModel::ResourceSet *); // rdi
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t *String2; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t *v34; // [rsp+50h] [rbp-B0h]
  _BYTE *v35; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v36[2]; // [rsp+66h] [rbp-9Ah] BYREF
  ExecutionModel::ResourceSet *v37; // [rsp+68h] [rbp-98h] BYREF
  int v38; // [rsp+70h] [rbp-90h] BYREF
  int v39; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h]
  _BYTE v41[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v42[8]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v43[80]; // [rsp+90h] [rbp-70h] BYREF
  char v44[544]; // [rsp+E0h] [rbp-20h] BYREF

  v10 = a10;
  v11 = 0LL;
  v40 = (__int64)a10;
  v14 = 0LL;
  if ( !a3 )
  {
    v14 = *(_QWORD *)(a2 + 48);
LABEL_5:
    if ( (*(_DWORD *)(a2 + 348) & 0x20000) != 0 )
    {
      RmpPsmAppFamilyIdInitialize(*a9, a7, a8, (__int64)v44);
      v16 = RmpPsmAppFamilyTableFind(v44);
      if ( !v16 )
        goto LABEL_35;
      ResourceSetsForForegroundSharing = ExecutionModel::ResourceManager::FindResourceSetsForForegroundSharing(
                                           v17,
                                           v16,
                                           v14,
                                           (__int64)a4);
      if ( ResourceSetsForForegroundSharing >= 0 )
        goto LABEL_35;
LABEL_55:
      utl::list<unsigned long,utl::allocator<unsigned long>>::clear((__int64)a4);
      return (unsigned int)ResourceSetsForForegroundSharing;
    }
    v37 = 0LL;
    if ( a5 )
    {
      ProcessResourceSet = (ExecutionModel::ResourceSet *)RmpActivityHostFindProcessResourceSet(a5);
      if ( ProcessResourceSet )
      {
        if ( !ExecutionModel::ResourceSet::IsForeground(ProcessResourceSet) )
        {
          ResourceSetsForForegroundSharing = -2147220215;
          goto LABEL_55;
        }
        v11 = v20;
        v37 = v20;
LABEL_31:
        if ( v11 )
        {
          ResourceSetsForForegroundSharing = ExecutionModel::ResourceSet::HasMemoryForFGSharing(v11, v14);
          if ( ResourceSetsForForegroundSharing < 0 )
            goto LABEL_55;
          utl::list<ExecutionModel::ResourceSet *,utl::allocator<ExecutionModel::ResourceSet *>>::push_front(a4, &v37);
        }
        v10 = (_QWORD *)v40;
LABEL_35:
        v28 = (_QWORD *)*a4;
        if ( (_QWORD *)*a4 == a4 )
        {
          v14 = 0LL;
        }
        else
        {
          while ( v28 != a4 )
          {
            ExecutionModel::ResourceSet::AcquireMemoryForFGSharing((ExecutionModel::ResourceManager **)v28[2], v14);
            v28 = (_QWORD *)*v28;
          }
        }
        goto LABEL_52;
      }
      LOWORD(v35) = 0;
      String2 = (wchar_t *)&v35;
      v34 = (wchar_t *)&v35;
      if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::resize(&String2) )
        goto LABEL_15;
      v21 = v36;
      if ( String2 != (wchar_t *)&v35 )
        v21 = v35;
      v38 = 2 * ((v21 - (_BYTE *)String2) >> 1);
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, wchar_t *, int *, _BYTE *, int *, _BYTE *, _BYTE *))(*(_QWORD *)a1 + 384LL))(
              a1,
              a5,
              String2,
              &v38,
              v43,
              &v39,
              v41,
              v42);
      v23 = -1LL;
      v24 = v22;
      do
        ++v23;
      while ( String2[v23] );
      v25 = v36;
      if ( String2 != (wchar_t *)&v35 )
        v25 = v35;
      if ( v23 > (v25 - (_BYTE *)String2) >> 1 )
        __int2c();
      v34 = &String2[v23];
      if ( v24 >= 0 && (int)RmpActivityHostFindMixedHostForPsmId(String2) >= 0 )
      {
        v26 = *((_QWORD *)P + 75);
        RmpObjectRelease((volatile signed __int32 *)P);
        if ( v26 )
        {
          v11 = *(ExecutionModel::ResourceSet **)ExecutionModel::ModernActivationResourceInfo::GetSponsor(v26, &P);
          v37 = v11;
          if ( P )
          {
            v27 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)P + 16LL);
            if ( v27 == ExecutionModel::ResourceSet::Release )
              ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)P);
            else
              v27((ExecutionModel::ResourceSet *)P);
          }
        }
      }
    }
    else
    {
      LOWORD(v35) = 0;
      String2 = (wchar_t *)&v35;
      v34 = (wchar_t *)&v35;
      if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
              (__int64)&String2,
              a6,
              a3,
              (__int64)a4) )
      {
LABEL_15:
        ResourceSetsForForegroundSharing = -2147024882;
LABEL_54:
        utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit((void **)&String2);
        goto LABEL_55;
      }
      if ( (int)RmpActivityHostFindMixedHostForPsmId(String2) < 0 )
      {
        v29 = 0LL;
      }
      else
      {
        v29 = (ExecutionModel::ModernActivationResourceInfo *)*((_QWORD *)P + 75);
        RmpObjectRelease((volatile signed __int32 *)P);
      }
      if ( !v29 || !(unsigned int)ExecutionModel::ModernActivationResourceInfo::HasForeground(v29) )
      {
        ResourceSetsForForegroundSharing = -2147220215;
        goto LABEL_54;
      }
      v11 = *(ExecutionModel::ResourceSet **)ExecutionModel::ModernActivationResourceInfo::GetForeground(v29, &P);
      v37 = v11;
      if ( P )
      {
        v30 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)P + 16LL);
        if ( v30 == ExecutionModel::ResourceSet::Release )
          ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)P);
        else
          v30((ExecutionModel::ResourceSet *)P);
      }
      if ( !v11 )
        __fastfail(0xC0000034);
    }
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit((void **)&String2);
    goto LABEL_31;
  }
  v15 = *(_QWORD *)(a3 + 1848);
  if ( *(_QWORD *)(a2 + 48) > v15 )
  {
    v14 = *(_QWORD *)(a2 + 48) - v15;
    goto LABEL_5;
  }
LABEL_52:
  *v10 = v14;
  return 0;
}
