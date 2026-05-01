/*
 * XREFs of ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEBGPEAT_RM_SID@@KK_KPEAPEAVResourceSet@2@@Z @ 0x180001670
 * Callers:
 *     ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z @ 0x180001504 (-CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z.c)
 *     ?RmSrvCreateTerminalResourceSetFromResourceSetInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEA_K@Z @ 0x18002C6C8 (-RmSrvCreateTerminalResourceSetFromResourceSetInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSet.c)
 * Callees:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAV82@@Z @ 0x18000D900 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x18000E2D4 (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000E31C (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021734 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CreateTerminalResourceSetFromResourceSetInfo(
        ExecutionModel::ResourceManager *a1,
        __int64 a2,
        struct _RM_PARTITION *a3,
        const unsigned __int16 *a4,
        union _RM_SID *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int64 a8,
        struct ExecutionModel::ResourceSet **a9)
{
  _DWORD *v11; // rax
  int v14; // ecx
  __int64 v15; // rdx
  bool IsFrozen; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r10d
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r8d
  _DWORD *v23; // rdi
  __int64 i; // rcx
  _QWORD *v25; // rbx
  int v26; // eax
  struct ExecutionModel::ResourceSet *v27; // rdi
  int v28; // esi
  __int64 v29; // rcx
  int v30; // esi
  struct ExecutionModel::ResourceSet *v32; // [rsp+80h] [rbp-58h] BYREF

  v32 = 0LL;
  v11 = (_DWORD *)(a2 + 104);
  *(_WORD *)(a2 + 40) |= 2u;
  v14 = *((_DWORD *)a1 + 17);
  *(_DWORD *)(a2 + 8) = v14;
  *(_DWORD *)(a2 + 32) = v14;
  v15 = 3LL;
  do
  {
    *v11 = v14;
    v11 += 6;
    --v15;
  }
  while ( v15 );
  IsFrozen = ExecutionModel::_ResourceSetInfo::IsFrozen((ExecutionModel::_ResourceSetInfo *)a2);
  ExecutionModel::_ResourceSetInfo::SetAmount(a2, v17, !IsFrozen);
  ExecutionModel::_ResourceSetInfo::SetAmount(v18, 1LL, 0LL);
  ExecutionModel::_ResourceSetInfo::SetAmount(v20, v19, v21);
  v23 = (_DWORD *)(a2 + 160);
  for ( i = (unsigned int)(v22 + 48); i; --i )
    *v23++ = v22 + 101;
  v25 = operator new((unsigned int)(v22 + 32), (const struct std::nothrow_t *)&unk_18003CFE0);
  if ( v25 )
  {
    *v25 = &ExecutionModel::TerminalResourceSetCallback::`vftable';
    v25[1] = 0LL;
    v25[2] = 0LL;
    *((_DWORD *)v25 + 6) = 1;
    *((_BYTE *)v25 + 28) = 0;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v25 )
  {
    v26 = ExecutionModel::ResourceManager::AcquireResourceSet(
            a1,
            (const struct ExecutionModel::_ResourceSetInfo *)a2,
            a3,
            0LL,
            (struct ExecutionModel::IResourceSetCallback *)v25,
            0LL,
            a4,
            a5,
            a6,
            a7,
            a8,
            0,
            0LL,
            0LL,
            0LL,
            &v32);
    v27 = v32;
    v28 = v26;
    if ( v26 >= 0 )
    {
      *((_DWORD *)v32 + 351) |= 2u;
      v29 = v25[1];
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      v25[1] = v27;
      (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v27 + 8LL))(v27);
      v30 = TpAllocWork(v25 + 2, ExecutionModel::TerminalResourceSetCallback::RevokeWorkerCallback, v25, 0LL);
      if ( v30 >= 0 )
        v30 = 0;
      v28 = v30 | 0x10000000;
      if ( v28 >= 0 )
      {
        *a9 = v27;
        v28 = 0;
        v27 = 0LL;
      }
    }
    if ( v27 )
    {
      (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *, _QWORD))(*(_QWORD *)v27 + 32LL))(v27, 0LL);
      (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v27 + 16LL))(v27);
    }
    (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v28;
}
