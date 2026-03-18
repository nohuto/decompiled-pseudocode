/*
 * XREFs of ?HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z @ 0x180144B30
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x1801006C8 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x180024450 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x180071AA8 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
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
  if ( HIBYTE(word_1801A3E04) && (_BYTE)word_1801A3E04 )
  {
    v6 = &stru_1801A3D88;
    EnterCriticalSection(&stru_1801A3D88);
    v3 = dword_1801A3DE8;
    xmmword_1801A3DF4 = (__int128)*a2;
    if ( dword_1801A3DE8 )
    {
      v4 = 32LL * (unsigned int)(dword_1801A3DE8 - 1);
      do
      {
        v5 = *(_QWORD *)(v4 + xmmword_1801A3DD0 + 16) - *(_QWORD *)&a2->Data1;
        if ( !v5 )
          v5 = *(_QWORD *)(v4 + xmmword_1801A3DD0 + 24) - *(_QWORD *)a2->Data4;
        if ( !v5 )
        {
          CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(*(CD3DDeviceLevel1 **)(v4 + xmmword_1801A3DD0));
          CD3DDeviceManager::DeleteUnusedDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v3 - 1);
        }
        v4 -= 32LL;
        --v3;
      }
      while ( v3 );
    }
    xmmword_1801A3DF4 = 0uLL;
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v6);
  }
}
