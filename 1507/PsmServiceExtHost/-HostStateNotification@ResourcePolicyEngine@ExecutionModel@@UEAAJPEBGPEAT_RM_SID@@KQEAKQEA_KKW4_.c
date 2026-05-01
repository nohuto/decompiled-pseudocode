/*
 * XREFs of ?HostStateNotification@ResourcePolicyEngine@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180017620
 * Callers:
 *     ?RecvCallback@ModernResourceEnforcer@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PEAXJ@Z @ 0x18000B210 (-RecvCallback@ModernResourceEnforcer@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@.c)
 * Callees:
 *     ?CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z @ 0x180018924 (-CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::HostStateNotification(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 *a6,
        unsigned int a7,
        int a8)
{
  __int64 v11; // r15
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rcx
  ExecutionModel::HostResources *v16; // rcx
  int v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+28h] [rbp-30h]
  __int64 v20; // [rsp+30h] [rbp-28h]

  if ( !a8 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
    if ( a7 )
    {
      v11 = a7;
      do
      {
        v13 = *a5 == 4;
        v14 = 5;
        v15 = *a6;
        v19 = a2;
        if ( v13 )
        {
          v14 = 2;
        }
        else if ( *a5 == 2 )
        {
          v14 = 1;
        }
        else if ( *a5 )
        {
          if ( *a5 == 8 )
            v14 = 3;
        }
        else
        {
          v14 = 0;
        }
        v20 = v15;
        v16 = *(ExecutionModel::HostResources **)(a1 + 72);
        v18 = v14;
        ExecutionModel::HostResources::CleanUpHostResourceInfo(v16, (const struct _AppModelActivationId *)&v18, 1);
        ++a6;
        ++a5;
        --v11;
      }
      while ( v11 );
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  }
  return 0LL;
}
