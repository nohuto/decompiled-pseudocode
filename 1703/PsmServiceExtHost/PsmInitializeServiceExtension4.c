/*
 * XREFs of PsmInitializeServiceExtension4 @ 0x18001CB20
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x18001C7EC (-CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEn.c)
 *     TraceLoggingRegisterEx @ 0x18001CA7C (TraceLoggingRegisterEx.c)
 *     ?RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001CC3C (-RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     RmpLaunchAllRpcServers @ 0x18001CD60 (RmpLaunchAllRpcServers.c)
 *     ?InitializeResourceManagerServerProxy@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAPEAVResourceManagerServerProxy@@@Z @ 0x18001D0D8 (-InitializeResourceManagerServerProxy@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAPEAVResourceManagerServerP.c)
 *     RmpCreateResourceManagerServer @ 0x18001D138 (RmpCreateResourceManagerServer.c)
 *     IsQueryUserTokenPresent @ 0x180021478 (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x18002154C (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x1800216A4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 *     RmpDestroyResourceManagerServer @ 0x18002A6E4 (RmpDestroyResourceManagerServer.c)
 */

__int64 __fastcall PsmInitializeServiceExtension4(struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a1)
{
  __int64 result; // rax
  void (__stdcall *v3)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  const struct _TlgProvider_t *v4; // rcx
  void *v5; // r8
  struct ModernResourceEnforcer *v6; // rbx
  int v7; // edi
  struct _RM_SERVICE_GLOBALS *v8; // rcx
  int v9; // edi
  struct _RM_SERVICE_GLOBALS *v10; // rdx
  struct _RM_SERVICE_GLOBALS *v11; // rsi
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF
  struct ModernResourceEnforcer *v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = 0LL;
  RmSvcGlobals = 0LL;
  result = IsPsmQueryBackgroundActivationTypePresent();
  if ( (_BYTE)result )
  {
    result = IsQueryUserTokenPresent();
    if ( (_BYTE)result )
    {
      result = CreateModernResourceEnforcer(a1, &v13);
      v6 = v13;
      if ( (int)result < 0 )
        goto LABEL_16;
      RmSvcGlobals = (struct _RM_SERVICE_GLOBALS *)&RmpSvcGlobals;
      TraceLoggingRegisterEx(v4, v3, v5);
      result = RmpCreateResourceManagerServer(v6);
      v7 = result;
      if ( (int)result >= 0 )
      {
        g_pResourceManager = (ExecutionModel::ResourceManager *)*((_QWORD *)RmSvcGlobals + 191);
        (*(void (__fastcall **)(ExecutionModel::ResourceManager *))(*(_QWORD *)g_pResourceManager + 8LL))(g_pResourceManager);
        result = InitializeResourceManagerServerProxy(v8, &g_pProxy);
        v9 = result;
        if ( (int)result < 0 )
          goto LABEL_16;
        result = RmpLaunchAllRpcServers();
        if ( (int)result >= 0 )
        {
          result = RmpRpExtStart((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 632), v10);
          if ( (int)result >= 0 )
          {
            v11 = RmSvcGlobals;
            result = IsNotifyGameModeExtensionRecipientsPresentPresent();
            if ( (_BYTE)result )
            {
              v12[0] = RmGameModeCpuSetManagerCreateClientContext;
              v12[1] = RmGameModeCpuSetManagerAcquireExplicitCpuSets;
              v12[2] = RmGameModeCpuSetManagerRegisterProcessWithAllocation;
              v12[3] = RmGameModeCpuSetManagerReleaseAllocation;
              v12[4] = RmGameModeCpuSetManagerReleaseProcessRegistration;
              result = InitializeGameModeExtension(v12, v11);
            }
LABEL_10:
            if ( v9 >= 0 )
            {
LABEL_11:
              if ( v6 )
                return (*(__int64 (__fastcall **)(struct ModernResourceEnforcer *))(*(_QWORD *)v6 + 16LL))(v6);
              return result;
            }
LABEL_16:
            if ( RmSvcGlobals )
            {
              result = RmpDestroyResourceManagerServer();
              RmSvcGlobals = 0LL;
            }
            goto LABEL_11;
          }
        }
        v7 = result;
      }
      v9 = v7 | 0x10000000;
      goto LABEL_10;
    }
  }
  return result;
}
