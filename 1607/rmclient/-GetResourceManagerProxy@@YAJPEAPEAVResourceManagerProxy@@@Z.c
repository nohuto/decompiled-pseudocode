/*
 * XREFs of ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180004460
 * Callers:
 *     RmAcquireResources @ 0x180001320 (RmAcquireResources.c)
 *     RmReleaseResources @ 0x1800013D0 (RmReleaseResources.c)
 *     RmAccessCheck @ 0x180001410 (RmAccessCheck.c)
 *     RmRegisterResource @ 0x180001B80 (RmRegisterResource.c)
 *     RmAccessCheckOnSelf @ 0x18000A8B0 (RmAccessCheckOnSelf.c)
 *     RmAvailabilityCheck @ 0x18000A8E0 (RmAvailabilityCheck.c)
 *     RmGetNotification @ 0x18000A960 (RmGetNotification.c)
 *     RmGetResourceSetInfoPolicy @ 0x18000A9B0 (RmGetResourceSetInfoPolicy.c)
 *     RmGetResourceSetTypePolicy @ 0x18000AA20 (RmGetResourceSetTypePolicy.c)
 *     SHGetResourceManagementValue @ 0x18000AA90 (SHGetResourceManagementValue.c)
 * Callees:
 *     CreateResourceManagerProxy @ 0x180001A58 (CreateResourceManagerProxy.c)
 */

__int64 __fastcall GetResourceManagerProxy(struct ResourceManagerProxy **a1)
{
  struct ResourceManagerProxy *v2; // rax
  int ResourceManagerProxy; // ebx

  RtlEnterCriticalSection(&s_csProxy);
  v2 = (struct ResourceManagerProxy *)qword_180016708;
  if ( !qword_180016708 )
  {
    ResourceManagerProxy = CreateResourceManagerProxy();
    if ( ResourceManagerProxy < 0 )
      goto LABEL_3;
    v2 = (struct ResourceManagerProxy *)qword_180016708;
  }
  *a1 = v2;
  ResourceManagerProxy = 0;
LABEL_3:
  RtlLeaveCriticalSection(&s_csProxy);
  return (unsigned int)ResourceManagerProxy;
}
