/*
 * XREFs of ?CreateInstance@ResourceSetProxy@ExecutionModel@@SAJPEAXPEAVResourcePolicyEngineProxy@2@PEAPEAV12@@Z @ 0x1800029EC
 * Callers:
 *     ?AcquireResourceSetHelper@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x180002450 (-AcquireResourceSetHelper@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJW4RmResourceSetType@@PE.c)
 *     ?CreateTerminalResourceSet@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180002960 (-CreateTerminalResourceSet@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z.c)
 * Callees:
 *     ??0ResourceSetProxy@ExecutionModel@@IEAA@PEAXPEAVResourcePolicyEngineProxy@1@@Z @ 0x180004EF0 (--0ResourceSetProxy@ExecutionModel@@IEAA@PEAXPEAVResourcePolicyEngineProxy@1@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetProxy::CreateInstance(
        void *a1,
        struct ExecutionModel::ResourcePolicyEngineProxy *a2,
        struct ExecutionModel::ResourceSetProxy **a3)
{
  unsigned int v3; // ebx
  ExecutionModel::ResourceSetProxy *v7; // rax
  struct ExecutionModel::ResourceSetProxy *v8; // rax

  v3 = 0;
  if ( a1 )
  {
    if ( a2 && a3 )
    {
      v7 = (ExecutionModel::ResourceSetProxy *)malloc(0x60uLL);
      if ( v7 )
        v8 = (struct ExecutionModel::ResourceSetProxy *)ExecutionModel::ResourceSetProxy::ResourceSetProxy(v7, a1, a2);
      else
        v8 = 0LL;
      if ( v8 )
        *a3 = v8;
      else
        return (unsigned int)-2147024882;
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v3;
}
