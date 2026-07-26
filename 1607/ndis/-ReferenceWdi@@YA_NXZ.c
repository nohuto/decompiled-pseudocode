/*
 * XREFs of ?ReferenceWdi@@YA_NXZ @ 0x1C00E3938
 * Callers:
 *     NdisMRegisterWdiMiniportDriver @ 0x1C00E3B60 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     WPP_SF_Z @ 0x1C0042BCC (WPP_SF_Z.c)
 *     WPP_SF_Zd @ 0x1C0042CD8 (WPP_SF_Zd.c)
 *     ?Wait@KWaitEventBase@@QEAAXXZ @ 0x1C009C27C (-Wait@KWaitEventBase@@QEAAXXZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6E6C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6E94 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 */

char ReferenceWdi(void)
{
  bool v0; // di
  char v1; // bl
  unsigned int v2; // eax
  NTSTATUS Driver; // eax
  KLockHolder v5; // [rsp+20h] [rbp-20h] BYREF

  v0 = 0;
  v5.m_State = Unlocked;
  v5.m_Lock = &g_WdiLoadLock;
  v5.m_Region.m_Entered = 0;
  v1 = 1;
  while ( 1 )
  {
    KLockHolder::AcquireExclusive(&v5);
    if ( g_WdiLoadState == 3 )
      goto LABEL_6;
    v2 = g_WdiRefCount + 1;
    g_WdiRefCount = v2;
    if ( v2 == 1 )
      break;
    if ( g_WdiLoadState == 2 )
      goto LABEL_19;
    g_WdiRefCount = v2 - 1;
LABEL_6:
    KLockHolder::ReleaseExclusive(&v5);
    KWaitEventBase::Wait(&g_WdiLoadInProgress);
  }
  KeClearEvent(&g_WdiLoadInProgress.m_event);
  g_WdiLoadState = 1;
  KLockHolder::ReleaseExclusive(&v5);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_Z(0xAu, &WPP_2fbf7e1b1d8b38a156e756bb4fc60700_Traceguids, &DriverServiceName.Length);
  Driver = ZwLoadDriver((PUNICODE_STRING)&DriverServiceName);
  if ( Driver == -1073741554 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_(0xBu, &WPP_2fbf7e1b1d8b38a156e756bb4fc60700_Traceguids);
    goto LABEL_18;
  }
  if ( Driver >= 0 )
  {
    v0 = 1;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_Z(0xDu, &WPP_2fbf7e1b1d8b38a156e756bb4fc60700_Traceguids, &DriverServiceName.Length);
LABEL_18:
    KLockHolder::AcquireExclusive(&v5);
    g_WdiLoadState = 2;
    KeSetEvent(&g_WdiLoadInProgress.m_event, 0, 0);
    g_WdiLoadedByNdis = v0;
    KLockHolder::ReleaseExclusive(&v5);
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_Zd(0xCu, &WPP_2fbf7e1b1d8b38a156e756bb4fc60700_Traceguids, &DriverServiceName.Length, Driver);
    KLockHolder::AcquireExclusive(&v5);
    --g_WdiRefCount;
    g_WdiLoadState = 0;
    KeSetEvent(&g_WdiLoadInProgress.m_event, 0, 0);
    KLockHolder::ReleaseExclusive(&v5);
    v1 = 0;
  }
LABEL_19:
  KLockHolder::~KLockHolder(&v5);
  return v1;
}
