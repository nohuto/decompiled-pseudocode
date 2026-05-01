/*
 * XREFs of ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180006850
 * Callers:
 *     RmAcquireResources @ 0x180001490 (RmAcquireResources.c)
 *     RmReleaseResources @ 0x180001550 (RmReleaseResources.c)
 *     RmRegisterResource @ 0x180001720 (RmRegisterResource.c)
 *     RmGetNotification @ 0x180001780 (RmGetNotification.c)
 *     RmAccessCheck @ 0x180006750 (RmAccessCheck.c)
 *     RmAccessCheckOnSelf @ 0x18000EF20 (RmAccessCheckOnSelf.c)
 *     RmAvailabilityCheck @ 0x18000EF60 (RmAvailabilityCheck.c)
 *     RmGetMaxResidentCctApplications @ 0x18000EFD0 (RmGetMaxResidentCctApplications.c)
 *     RmGetResourceSetInfoPolicy @ 0x18000F010 (RmGetResourceSetInfoPolicy.c)
 *     RmGetResourceSetTypePolicy @ 0x18000F080 (RmGetResourceSetTypePolicy.c)
 *     RmTestGetApplicationProperties @ 0x18000F0E0 (RmTestGetApplicationProperties.c)
 *     RmTestGetDeviceTier @ 0x18000F190 (RmTestGetDeviceTier.c)
 *     RmTestGetRegisteredExternalResources @ 0x18000F1D0 (RmTestGetRegisteredExternalResources.c)
 *     RmTestGetResourceSetInfos @ 0x18000F210 (RmTestGetResourceSetInfos.c)
 *     RmTestGetResourceSetTypeFromPSMKey @ 0x18000F290 (RmTestGetResourceSetTypeFromPSMKey.c)
 *     RmTestGetResourceSetTypeFromPid @ 0x18000F310 (RmTestGetResourceSetTypeFromPid.c)
 *     SHGetResourceManagementValue @ 0x18000F360 (SHGetResourceManagementValue.c)
 * Callees:
 *     CreateResourceManagerProxy @ 0x18000646C (CreateResourceManagerProxy.c)
 */

struct ResourceManagerProxy *GetResourceManagerProxy(void)
{
  RtlEnterCriticalSection(&s_csProxy);
  if ( !qword_180022790 )
    CreateResourceManagerProxy();
  RtlLeaveCriticalSection(&s_csProxy);
  return qword_180022790;
}
