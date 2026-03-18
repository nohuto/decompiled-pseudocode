/*
 * XREFs of ?HandleDXGIEnumerationChange@CD3DDeviceManager@@AEAAXXZ @ 0x180090F80
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800545A4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x18008BAE0 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ?MarkAllDevicesUnusable@CD3DDeviceManager@@AEAAXXZ @ 0x180090CB4 (-MarkAllDevicesUnusable@CD3DDeviceManager@@AEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD3DDeviceManager::HandleDXGIEnumerationChange(struct _RTL_CRITICAL_SECTION *this)
{
  unsigned int i; // ebx
  __int64 v2; // rax
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+38h] [rbp+10h] BYREF

  v3 = this;
  v4 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  if ( byte_180195DC8 && byte_180195DD8 )
  {
    v3 = &CriticalSection;
    EnterCriticalSection(&CriticalSection);
    for ( i = dword_180195E00; i; CD3DDeviceManager::DeleteUnusedDevice((CD3DDeviceManager *)&g_D3DDeviceManager, i) )
      --i;
    byte_180195DD8 = 0;
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v3);
  }
  CD3DDeviceManager::MarkAllDevicesUnusable((CD3DDeviceManager *)&g_D3DDeviceManager);
  if ( byte_180195DC8 && qword_180195DD0 )
  {
    dword_180195E38 = 0;
    v2 = *(_QWORD *)qword_180195DD0;
    CD3DRegistryDatabase::m_fInitialized = 0;
    (*(void (__fastcall **)(CDXGIEnumeration *))(v2 + 8))(qword_180195DD0);
    qword_180195DD0 = 0LL;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v4);
}
