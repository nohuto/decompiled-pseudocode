/*
 * XREFs of ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x1800351A8
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z @ 0x18011A2E0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z.c)
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x180121100 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x18007E7E8 (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 */

void __fastcall CD3DDeviceManager::FlushAllDevices(CD3DDeviceManager *this)
{
  __int64 i; // rbx
  char *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 64); i = (unsigned int)(i + 1) )
    CD3DDeviceLevel1::Flush(*(CD3DDeviceLevel1 **)(*((_QWORD *)this + 18) + 40 * i));
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v3);
}
