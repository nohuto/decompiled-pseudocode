/*
 * XREFs of ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180001B20
 * Callers:
 *     RmRegisterResource @ 0x1800017E0 (RmRegisterResource.c)
 *     RmAcquireResources @ 0x180001840 (RmAcquireResources.c)
 *     RmReleaseResources @ 0x180001900 (RmReleaseResources.c)
 *     RmAccessCheck @ 0x180001940 (RmAccessCheck.c)
 *     RmAccessCheckOnSelf @ 0x18000F800 (RmAccessCheckOnSelf.c)
 *     RmAvailabilityCheck @ 0x18000F840 (RmAvailabilityCheck.c)
 *     RmGetMaxResidentCctApplications @ 0x18000F8B0 (RmGetMaxResidentCctApplications.c)
 *     RmGetNotification @ 0x18000F8F0 (RmGetNotification.c)
 *     RmGetResourceSetInfoPolicy @ 0x18000F940 (RmGetResourceSetInfoPolicy.c)
 *     RmGetResourceSetTypePolicy @ 0x18000F9B0 (RmGetResourceSetTypePolicy.c)
 *     RmTestGetApplicationProperties @ 0x18000FA10 (RmTestGetApplicationProperties.c)
 *     RmTestGetDeviceTier @ 0x18000FAC0 (RmTestGetDeviceTier.c)
 *     RmTestGetRegisteredExternalResources @ 0x18000FB00 (RmTestGetRegisteredExternalResources.c)
 *     RmTestGetResourceSetInfos @ 0x18000FB40 (RmTestGetResourceSetInfos.c)
 *     RmTestGetResourceSetTypeFromPSMKey @ 0x18000FBC0 (RmTestGetResourceSetTypeFromPSMKey.c)
 *     RmTestGetResourceSetTypeFromPid @ 0x18000FC40 (RmTestGetResourceSetTypeFromPid.c)
 *     SHGetResourceManagementValue @ 0x18000FC90 (SHGetResourceManagementValue.c)
 * Callees:
 *     CreateResourceManagerProxy @ 0x180001474 (CreateResourceManagerProxy.c)
 */

struct ResourceManagerProxy *GetResourceManagerProxy(void)
{
  RtlEnterCriticalSection(&s_csProxy);
  if ( !qword_1800247C0 )
    CreateResourceManagerProxy();
  RtlLeaveCriticalSection(&s_csProxy);
  return (struct ResourceManagerProxy *)qword_1800247C0;
}
