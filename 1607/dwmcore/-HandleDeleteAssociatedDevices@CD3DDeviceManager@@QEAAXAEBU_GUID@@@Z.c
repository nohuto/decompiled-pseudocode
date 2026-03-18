/*
 * XREFs of ?HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z @ 0x180172988
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x180116584 (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180116D28 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x1800BA360 (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAXXZ @ 0x18010F230 (-ProcessUnusable@CD3DDeviceLevel1@@QEAAXXZ.c)
 */

void __fastcall CD3DDeviceManager::HandleDeleteAssociatedDevices(
        struct _RTL_CRITICAL_SECTION *this,
        const struct _GUID *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  if ( byte_1801F0124 )
  {
    v5 = &stru_1801F0028;
    EnterCriticalSection(&stru_1801F0028);
    LODWORD(v3) = dword_1801F0110;
    xmmword_1801F0114 = (__int128)*a2;
    while ( (_DWORD)v3 )
    {
      v3 = (unsigned int)(v3 - 1);
      v4 = *(_QWORD *)(qword_1801F00A0 + 40 * v3 + 16) - *(_QWORD *)&a2->Data1;
      if ( !v4 )
        v4 = *(_QWORD *)(qword_1801F00A0 + 40 * v3 + 24) - *(_QWORD *)a2->Data4;
      if ( !v4 )
        CD3DDeviceLevel1::ProcessUnusable(*(CD3DDeviceLevel1 **)(qword_1801F00A0 + 40 * v3));
    }
    CD3DDeviceManager::DeleteUnusableDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
    xmmword_1801F0114 = 0uLL;
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v5);
  }
}
