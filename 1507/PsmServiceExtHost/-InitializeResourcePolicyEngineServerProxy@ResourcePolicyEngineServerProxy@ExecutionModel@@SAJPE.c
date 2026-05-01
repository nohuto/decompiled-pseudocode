/*
 * XREFs of ?InitializeResourcePolicyEngineServerProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@SAJPEAUIResourcePolicyEngine@2@PEAUIResourcePolicyStore@2@PEAPEAV12@@Z @ 0x1800205EC
 * Callers:
 *     ?CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@@Z @ 0x180021DA4 (-CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResource.c)
 * Callees:
 *     ?Initialize@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourcePolicyEngine@2@PEAUIResourcePolicyStore@2@@Z @ 0x180020FB4 (-Initialize@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourcePolicyEngine@2@PEA.c)
 *     ??0ResourcePolicyEngineServerProxy@ExecutionModel@@IEAA@XZ @ 0x18002113C (--0ResourcePolicyEngineServerProxy@ExecutionModel@@IEAA@XZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GResourcePolicyEngineServerProxy@ExecutionModel@@QEAAPEAXI@Z @ 0x1800474D4 (--_GResourcePolicyEngineServerProxy@ExecutionModel@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::InitializeResourcePolicyEngineServerProxy(
        struct ExecutionModel::IResourcePolicyEngine *a1,
        struct ExecutionModel::IResourcePolicyStore *a2,
        struct ExecutionModel::ResourcePolicyEngineServerProxy **a3)
{
  ExecutionModel::ResourcePolicyEngineServerProxy *v6; // rax
  ExecutionModel::ResourcePolicyEngineServerProxy *v7; // rsi
  unsigned int v8; // edx
  int v9; // edi

  if ( a1 && a2 )
  {
    v6 = (ExecutionModel::ResourcePolicyEngineServerProxy *)operator new(
                                                              0x70uLL,
                                                              (const struct std::nothrow_t *)&std::nothrow);
    if ( v6 )
      v7 = (ExecutionModel::ResourcePolicyEngineServerProxy *)ExecutionModel::ResourcePolicyEngineServerProxy::ResourcePolicyEngineServerProxy(v6);
    else
      v7 = 0LL;
    if ( v7 )
    {
      v9 = ExecutionModel::ResourcePolicyEngineServerProxy::Initialize(v7, a1, a2);
      if ( v9 < 0 )
      {
        ExecutionModel::ResourcePolicyEngineServerProxy::`scalar deleting destructor'(v7, v8);
      }
      else
      {
        (*(void (__fastcall **)(ExecutionModel::ResourcePolicyEngineServerProxy *))(*(_QWORD *)v7 + 8LL))(v7);
        *a3 = v7;
      }
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v9;
}
