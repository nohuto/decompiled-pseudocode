/*
 * XREFs of ??0CDesktopManager@@AEAA@XZ @ 0x1800409AC
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z @ 0x180047E0C (-Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x18003F8D8 (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 */

CDesktopManager *__fastcall CDesktopManager::CDesktopManager(CDesktopManager *this)
{
  CDesktopManager::s_pDesktopManagerInstance = this;
  *(_QWORD *)this = &CDesktopManager::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 346) = 0;
  *((_QWORD *)this + 175) = 1LL;
  *((_DWORD *)this + 345) = -12542210;
  *(_QWORD *)((char *)this + 1388) = 27LL;
  *((_DWORD *)this + 349) = 73;
  *((_BYTE *)this + 1408) = 0;
  *((_QWORD *)this + 178) = 0LL;
  *((_QWORD *)this + 179) = 0LL;
  *((_QWORD *)this + 180) = 0LL;
  *((_DWORD *)this + 362) = 0;
  *((_DWORD *)this + 386) = 0;
  *(_QWORD *)((char *)this + 1548) = 1065353216LL;
  *((_DWORD *)this + 389) = 1062836634;
  *((_DWORD *)this + 390) = 1084227584;
  *((_DWORD *)this + 391) = 1090519040;
  *((_DWORD *)this + 392) = -1065353216;
  *((_DWORD *)this + 393) = 1058642330;
  *((_DWORD *)this + 394) = 1050253722;
  *((_DWORD *)this + 395) = 10;
  *((_DWORD *)this + 396) = 1056964608;
  *((_QWORD *)this + 201) = 0LL;
  *((_QWORD *)this + 202) = 0LL;
  *((_QWORD *)this + 203) = 0LL;
  *((_DWORD *)this + 408) = 0;
  *((_DWORD *)this + 38) = 2048;
  *((_DWORD *)this + 39) = 2048;
  CDesktopManager::UpdateWindowShadows(this);
  return this;
}
