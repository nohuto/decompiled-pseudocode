/*
 * XREFs of PsmInitializeServiceExtension4 @ 0x18001E760
 * Callers:
 *     <none>
 * Callees:
 *     RmpCreateResourceManagerServer @ 0x18001B108 (RmpCreateResourceManagerServer.c)
 *     ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x18001CC1C (-CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEn.c)
 *     ?CreateResourceEnforcer@ExecutionModel@@YAJAEAV?$CComPtr@UIResourceEnforcer@@@ATL@@@Z @ 0x18001CDE0 (-CreateResourceEnforcer@ExecutionModel@@YAJAEAV-$CComPtr@UIResourceEnforcer@@@ATL@@@Z.c)
 *     RmpRpExtStart @ 0x18001E870 (RmpRpExtStart.c)
 *     RmpLaunchAllRpcServers @ 0x18001E998 (RmpLaunchAllRpcServers.c)
 *     ?InitializeResourceManagerServerProxy@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAPEAVResourceManagerServerProxy@@@Z @ 0x18001EC54 (-InitializeResourceManagerServerProxy@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAPEAVResourceManagerServerP.c)
 *     TraceLoggingRegisterEx @ 0x18001ECBC (TraceLoggingRegisterEx.c)
 *     IsQueryUserTokenPresent @ 0x1800206FC (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x1800207F0 (IsPsmQueryBackgroundActivationTypePresent.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     RmpDestroyResourceManagerServer @ 0x180029DB0 (RmpDestroyResourceManagerServer.c)
 */

int __fastcall PsmInitializeServiceExtension4(struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a1)
{
  struct ModernResourceEnforcer *v1; // rbx
  int result; // eax
  void (__stdcall *v4)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  const struct _TlgProvider_t *v5; // rcx
  void *v6; // r8
  int v7; // edi
  struct _RM_SERVICE_GLOBALS *v8; // rcx
  int v9; // edi
  struct ModernResourceEnforcer *v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  RmSvcGlobals = 0LL;
  v10 = 0LL;
  result = IsPsmQueryBackgroundActivationTypePresent();
  if ( (_BYTE)result )
  {
    result = IsQueryUserTokenPresent();
    if ( (_BYTE)result )
    {
      result = ExecutionModel::CreateResourceEnforcer();
      if ( result < 0 )
        goto LABEL_16;
      result = CreateModernResourceEnforcer(a1, &v10);
      if ( result < 0 )
      {
        v1 = v10;
        goto LABEL_16;
      }
      RmSvcGlobals = (struct _RM_SERVICE_GLOBALS *)&RmpSvcGlobals;
      TraceLoggingRegisterEx(v5, v4, v6);
      v1 = v10;
      result = RmpCreateResourceManagerServer((struct IResourceEnforcer *)g_pEnforcer, v10);
      v7 = result;
      if ( result >= 0 )
      {
        g_pResourceManager = (ExecutionModel::ResourceManager *)*((_QWORD *)RmSvcGlobals + 418);
        (*(void (__fastcall **)(ExecutionModel::ResourceManager *))(*(_QWORD *)g_pResourceManager + 8LL))(g_pResourceManager);
        result = InitializeResourceManagerServerProxy(v8, &g_pProxy);
        v9 = result;
        if ( result < 0 )
          goto LABEL_16;
        result = RmpLaunchAllRpcServers();
        if ( result >= 0 )
        {
          result = RmpRpExtStart((char *)RmSvcGlobals + 1928);
          goto LABEL_9;
        }
        v7 = result;
      }
      v9 = v7 | 0x10000000;
LABEL_9:
      if ( v9 >= 0 )
      {
LABEL_10:
        if ( v1 )
          return (*(__int64 (__fastcall **)(struct ModernResourceEnforcer *))(*(_QWORD *)v1 + 16LL))(v1);
        return result;
      }
LABEL_16:
      if ( RmSvcGlobals )
      {
        result = RmpDestroyResourceManagerServer();
        RmSvcGlobals = 0LL;
      }
      goto LABEL_10;
    }
  }
  return result;
}
