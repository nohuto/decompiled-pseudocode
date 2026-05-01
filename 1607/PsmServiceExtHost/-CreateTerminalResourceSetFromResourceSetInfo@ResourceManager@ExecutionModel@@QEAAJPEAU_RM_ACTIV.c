/*
 * XREFs of ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@U_ResourceSetInfo@2@PEBGPEAT_RM_SID@@KK_KPEAPEAUIResourceSet@2@@Z @ 0x180001C7C
 * Callers:
 *     ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180001AE0 (-CreateTerminalResourceSet@ResourceSet@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z.c)
 *     ?CreateTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAPEAUIResourceSet@2@@Z @ 0x18002C000 (-CreateTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAPEAUIR.c)
 * Callees:
 *     ?Release@TerminalResourceSetCallback@ExecutionModel@@UEAAKXZ @ 0x180001EA0 (-Release@TerminalResourceSetCallback@ExecutionModel@@UEAAKXZ.c)
 *     ?Init@TerminalResourceSetCallback@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x180001F30 (-Init@TerminalResourceSetCallback@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18000D828 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ?GetPackageFamilyName@ResourceManager@ExecutionModel@@QEAAJPEBGPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x18000E268 (-GetPackageFamilyName@ResourceManager@ExecutionModel@@QEAAJPEBGPEAV-$basic_string@GU-$char_trait.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x180010720 (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x180010780 (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@W4Enum@PendType@2@PEAU_RM_ACTIVATOR@@PEA_NPEAPEAUIResourceSet@2@@Z @ 0x1800158E0 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAU.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800208FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CreateTerminalResourceSetFromResourceSetInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        _QWORD *a9)
{
  _QWORD *v13; // rdi
  int Instance; // ebx
  _DWORD *v15; // rax
  int v16; // ecx
  __int64 v17; // rdx
  bool IsFrozen; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r8d
  _DWORD *v24; // rdi
  __int64 i; // rcx
  struct ExecutionModel::ResourceSet *v26; // rdx
  unsigned int (__fastcall *v27)(ExecutionModel::TerminalResourceSetCallback *__hidden); // rax
  _QWORD v29[2]; // [rsp+80h] [rbp-68h] BYREF
  _WORD v30[44]; // [rsp+90h] [rbp-58h] BYREF

  v29[0] = v30;
  v29[1] = v30;
  v30[0] = 0;
  v13 = 0LL;
  if ( !a7 || (Instance = ExecutionModel::ResourceManager::GetPackageFamilyName(a1, a4, v29), Instance >= 0) )
  {
    v15 = (_DWORD *)(a3 + 104);
    *(_WORD *)(a3 + 40) |= 2u;
    v16 = *(_DWORD *)(a1 + 84);
    *(_DWORD *)(a3 + 8) = v16;
    v17 = 3LL;
    *(_DWORD *)(a3 + 32) = v16;
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
    ExecutionModel::_ResourceSetInfo::SetAmount(v21, 2LL, v22);
    v24 = (_DWORD *)(a3 + 160);
    for ( i = (unsigned int)(v23 + 48); i; --i )
      *v24++ = v23 + 101;
    v13 = operator new((unsigned int)(v23 + 32), (const struct std::nothrow_t *)&unk_18003CD38);
    if ( v13 )
    {
      *v13 = &ExecutionModel::TerminalResourceSetCallback::`vftable';
      v13[1] = 0LL;
      v13[2] = 0LL;
      *((_DWORD *)v13 + 6) = 1;
      *((_BYTE *)v13 + 28) = 0;
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 )
    {
      Instance = ExecutionModel::ResourceSet::CreateInstance(
                   *(_QWORD *)(a1 + 120),
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
                   0LL,
                   a9);
      if ( Instance >= 0 )
      {
        v26 = *a9 ? (struct ExecutionModel::ResourceSet *)(*a9 - 1368LL) : 0LL;
        *((_DWORD *)v26 + 353) |= 2u;
        Instance = ExecutionModel::TerminalResourceSetCallback::Init(
                     (ExecutionModel::TerminalResourceSetCallback *)v13,
                     v26);
        if ( Instance >= 0 )
          Instance = 0;
      }
    }
    else
    {
      Instance = -2147024882;
    }
  }
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v29);
  if ( v13 )
  {
    v27 = *(unsigned int (__fastcall **)(ExecutionModel::TerminalResourceSetCallback *__hidden))(*v13 + 16LL);
    if ( v27 == ExecutionModel::TerminalResourceSetCallback::Release )
      ExecutionModel::TerminalResourceSetCallback::Release((ExecutionModel::TerminalResourceSetCallback *)v13);
    else
      v27((ExecutionModel::TerminalResourceSetCallback *)v13);
  }
  return (unsigned int)Instance;
}
