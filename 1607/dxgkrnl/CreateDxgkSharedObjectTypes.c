/*
 * XREFs of CreateDxgkSharedObjectTypes @ 0x1C00FB4E0
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C00E9244 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?CreateSharedObject@@YAJPEBGU_GENERIC_MAPPING@@P6AJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@ZP6AX34_K7@ZP6AX4@ZPEAPEAU_OBJECT_TYPE@@@Z @ 0x1C00FB5D8 (-CreateSharedObject@@YAJPEBGU_GENERIC_MAPPING@@P6AJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@.c)
 */

__int64 CreateDxgkSharedObjectTypes()
{
  __int64 result; // rax
  struct _GENERIC_MAPPING v1; // [rsp+30h] [rbp-18h] BYREF

  result = 0LL;
  if ( g_pDxgkSharedAllocationObjectType
    || (v1 = (struct _GENERIC_MAPPING)xmmword_1C0039660,
        result = CreateSharedObject(
                   L"DxgkSharedResource",
                   &v1,
                   (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))SwapChainObOpenProcedure,
                   0LL,
                   (void (*)(void *))DxgkSharedAllocationObDeleteProcedure,
                   &g_pDxgkSharedAllocationObjectType),
        (int)result >= 0) )
  {
    if ( !g_pDxgkSharedSyncObjectType )
    {
      v1 = (struct _GENERIC_MAPPING)xmmword_1C0039650;
      result = CreateSharedObject(
                 L"DxgkSharedSyncObject",
                 &v1,
                 (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))SwapChainObOpenProcedure,
                 0LL,
                 (void (*)(void *))DxgkSharedSyncObjectObDeleteProcedure,
                 &g_pDxgkSharedSyncObjectType);
    }
    if ( (int)result >= 0 && !g_pDxgkSharedSwapChainObjectType )
    {
      v1 = (struct _GENERIC_MAPPING)xmmword_1C0039640;
      return CreateSharedObject(
               L"DxgkSharedSwapChainObject",
               &v1,
               (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))SwapChainObOpenProcedure,
               (void (*)(struct _EPROCESS *, void *, unsigned __int64, unsigned __int64))SwapChainObCloseProcedure,
               (void (*)(void *))SwapChainObDeleteProcedure,
               &g_pDxgkSharedSwapChainObjectType);
    }
  }
  return result;
}
