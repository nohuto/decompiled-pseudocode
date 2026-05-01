/*
 * XREFs of RmCoreRpcSrvAcquireResourceSet @ 0x180004030
 * Callers:
 *     <none>
 * Callees:
 *     RmpResourceLimitsAreLegal @ 0x180003EA8 (RmpResourceLimitsAreLegal.c)
 *     ?RmpResourceSetPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x180003F58 (-RmpResourceSetPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@P.c)
 *     ?Release@ResourceSetCallbackThunk@@UEAAKXZ @ 0x1800041B0 (-Release@ResourceSetCallbackThunk@@UEAAKXZ.c)
 *     ?RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800050D0 (-RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18000E370 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK5PEAU_RM_ACTIVATOR@@PEA_NPEA_K@Z @ 0x180011250 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021734 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmCoreRpcSrvAcquireResourceSet(
        struct _RM_SERVICE_GLOBALS **a1,
        __int64 a2,
        unsigned __int64 a3,
        const unsigned __int16 *a4,
        void *a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned __int64 *a10)
{
  __int64 v13; // r10
  struct ExecutionModel::_ResourceSetInfo *v14; // r8
  ExecutionModel *v15; // r10
  struct ExecutionModel::IResourceSetCallback *v16; // rdi
  int v17; // ebx
  unsigned int v18; // ebx
  unsigned int (__fastcall *v19)(ResourceSetCallbackThunk *__hidden); // rax
  bool v21; // [rsp+70h] [rbp-1C8h] BYREF
  _BYTE v22[384]; // [rsp+80h] [rbp-1B8h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v22);
  if ( RmpResourceLimitsAreLegal(v13 + 40, 0LL, 0LL) )
  {
    ExecutionModel::RmpResourceSetPropertiesToResourceSetInfo(v15, (struct _RM_RESOURCE_SET_PROPERTIES *)v22, v14);
    v16 = (struct ExecutionModel::IResourceSetCallback *)operator new(
                                                           0x10uLL,
                                                           (const struct std::nothrow_t *)&unk_18003CFF0);
    if ( v16 )
    {
      *(_QWORD *)v16 = &ResourceSetCallbackThunk::`vftable';
      *((_DWORD *)v16 + 2) = 1;
    }
    else
    {
      v16 = 0LL;
    }
    if ( v16 )
    {
      v17 = RmSrvAcquireResourceSet(
              *a1,
              (struct ExecutionModel::_ResourceSetInfo *)v22,
              v16,
              0LL,
              a4,
              a5,
              a7,
              a8,
              a9,
              0,
              a3,
              (struct _RM_ACTIVATOR *)a1,
              &v21,
              a10);
      if ( v17 < 0 )
      {
        v18 = v17 & 0xEFFFFFFF;
      }
      else
      {
        RmSrvResourceSetSetAutoRelease(*a1, *a10, 0);
        v18 = v21 ? 0x103 : 0;
      }
      v19 = *(unsigned int (__fastcall **)(ResourceSetCallbackThunk *__hidden))(*(_QWORD *)v16 + 16LL);
      if ( v19 == ResourceSetCallbackThunk::Release )
        ResourceSetCallbackThunk::Release(v16);
      else
        v19(v16);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return v18;
}
