/*
 * XREFs of ??0ResourceSetProxy@ExecutionModel@@IEAA@PEAXPEAVResourcePolicyEngineProxy@1@@Z @ 0x1800055C0
 * Callers:
 *     ?CreateInstance@ResourceSetProxy@ExecutionModel@@SAJPEAXPEAVResourcePolicyEngineProxy@2@PEAPEAV12@@Z @ 0x1800013B8 (-CreateInstance@ResourceSetProxy@ExecutionModel@@SAJPEAXPEAVResourcePolicyEngineProxy@2@PEAPEAV1.c)
 *     ?AcquireResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAPEAUIResourceSet@2@@Z @ 0x180004930 (-AcquireResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_.c)
 * Callees:
 *     <none>
 */

ExecutionModel::ResourceSetProxy *__fastcall ExecutionModel::ResourceSetProxy::ResourceSetProxy(
        ExecutionModel::ResourceSetProxy *this,
        void *a2,
        struct ExecutionModel::ResourcePolicyEngineProxy *a3)
{
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &ExecutionModel::ResourceSetProxy::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = -1;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = a3;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 56), 0, 0);
  return this;
}
