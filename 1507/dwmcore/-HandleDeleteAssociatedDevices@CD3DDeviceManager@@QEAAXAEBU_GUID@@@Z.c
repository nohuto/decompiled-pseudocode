/*
 * XREFs of ?HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z @ 0x1801332F0
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x1800E243C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x18008B0F0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x18008BAE0 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 */

void __fastcall CD3DDeviceManager::HandleDeleteAssociatedDevices(
        struct _RTL_CRITICAL_SECTION *this,
        const struct _GUID *a2)
{
  int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rax
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = this;
  if ( byte_180195DC8 && byte_180195DD8 )
  {
    v6 = &CriticalSection;
    EnterCriticalSection(&CriticalSection);
    v3 = dword_180195E00;
    xmmword_180195E0C = (__int128)*a2;
    if ( dword_180195E00 )
    {
      v4 = 32LL * (unsigned int)(dword_180195E00 - 1);
      do
      {
        v5 = *(_QWORD *)(v4 + qword_180195DE8 + 16) - *(_QWORD *)&a2->Data1;
        if ( !v5 )
          v5 = *(_QWORD *)(v4 + qword_180195DE8 + 24) - *(_QWORD *)a2->Data4;
        if ( !v5 )
        {
          CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(*(CD3DDeviceLevel1 **)(v4 + qword_180195DE8));
          CD3DDeviceManager::DeleteUnusedDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v3 - 1);
        }
        v4 -= 32LL;
        --v3;
      }
      while ( v3 );
    }
    xmmword_180195E0C = 0uLL;
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v6);
  }
}
