/*
 * XREFs of ?DereferenceWdi@@YAXXZ @ 0x1C00E34E4
 * Callers:
 *     NdisMDeregisterWdiMiniportDriver @ 0x1C00E37A0 (NdisMDeregisterWdiMiniportDriver.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1C00E3800 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     WPP_SF_Z @ 0x1C003DF0C (WPP_SF_Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6BE4 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6C0C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 */

void DereferenceWdi(void)
{
  bool v0; // al
  KLockHolder v1; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v1, &g_WdiLoadLock);
  if ( !--g_WdiRefCount )
  {
    g_WdiLoadState = 3;
    KeClearEvent(&g_WdiLoadInProgress.m_event);
    v0 = g_WdiLoadedByNdis;
    g_WdiLoadedByNdis = 0;
    if ( v0 )
    {
      KLockHolder::ReleaseExclusive(&v1);
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_Z(0xEu, &WPP_7ca741a9eb81f7000b5d6f1ade868ed0_Traceguids, (__int64 *)&DriverServiceName);
      ZwUnloadDriver((PUNICODE_STRING)&DriverServiceName);
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_Z(0xFu, &WPP_7ca741a9eb81f7000b5d6f1ade868ed0_Traceguids, (__int64 *)&DriverServiceName);
      KLockHolder::AcquireExclusive(&v1);
    }
    else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    {
      WPP_SF_(0x10u, &WPP_7ca741a9eb81f7000b5d6f1ade868ed0_Traceguids);
    }
    g_WdiLoadState = 0;
    KeSetEvent(&g_WdiLoadInProgress.m_event, 0, 0);
  }
  KLockHolder::~KLockHolder(&v1);
}
