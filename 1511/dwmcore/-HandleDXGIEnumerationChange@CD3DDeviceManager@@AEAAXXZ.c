/*
 * XREFs of ?HandleDXGIEnumerationChange@CD3DDeviceManager@@AEAAXXZ @ 0x180071DF0
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18006F0C8 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MarkAllDevicesUnusable@CD3DDeviceManager@@AEAAXXZ @ 0x1800719E4 (-MarkAllDevicesUnusable@CD3DDeviceManager@@AEAAXXZ.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x180071AA8 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

void __fastcall CD3DDeviceManager::HandleDXGIEnumerationChange(_RTL_CRITICAL_SECTION *this)
{
  unsigned int i; // ebx
  __int64 v2; // rax
  _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF
  _RTL_CRITICAL_SECTION *v4; // [rsp+38h] [rbp+10h] BYREF

  v3 = this;
  v4 = &stru_1801A3D88;
  EnterCriticalSection(&stru_1801A3D88);
  if ( HIBYTE(word_1801A3E04) && (_BYTE)word_1801A3E04 )
  {
    v3 = &stru_1801A3D88;
    EnterCriticalSection(&stru_1801A3D88);
    for ( i = dword_1801A3DE8; i; CD3DDeviceManager::DeleteUnusedDevice((CD3DDeviceManager *)&g_D3DDeviceManager, i) )
      --i;
    LOBYTE(word_1801A3E04) = 0;
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v3);
  }
  CD3DDeviceManager::MarkAllDevicesUnusable((CD3DDeviceManager *)&g_D3DDeviceManager);
  if ( HIBYTE(word_1801A3E04) && qword_1801A3DB8 )
  {
    dword_1801A3E20 = 0;
    v2 = *(_QWORD *)qword_1801A3DB8;
    CD3DRegistryDatabase::m_fInitialized = 0;
    (*(void (__fastcall **)(CDXGIEnumeration *))(v2 + 8))(qword_1801A3DB8);
    qword_1801A3DB8 = 0LL;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v4);
}
