/*
 * XREFs of ??0CDesktopManager@@AEAA@XZ @ 0x180046BFC
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z @ 0x180044ABC (-Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x180045D94 (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
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
  *((_DWORD *)this + 342) = 0;
  *((_QWORD *)this + 173) = 1LL;
  *((_DWORD *)this + 341) = -12542210;
  *(_QWORD *)((char *)this + 1372) = 27LL;
  *((_DWORD *)this + 345) = 73;
  *((_BYTE *)this + 1392) = 0;
  *((_QWORD *)this + 176) = 0LL;
  *((_QWORD *)this + 177) = 0LL;
  *((_QWORD *)this + 178) = 0LL;
  *((_DWORD *)this + 358) = 0;
  *((_DWORD *)this + 382) = 0;
  *(_QWORD *)((char *)this + 1532) = 1065353216LL;
  *((_DWORD *)this + 385) = 1062836634;
  *((_DWORD *)this + 386) = 1084227584;
  *((_DWORD *)this + 387) = 1090519040;
  *((_DWORD *)this + 388) = -1065353216;
  *((_DWORD *)this + 389) = 1058642330;
  *((_DWORD *)this + 390) = 1050253722;
  *((_DWORD *)this + 391) = 10;
  *((_DWORD *)this + 392) = 1056964608;
  *((_QWORD *)this + 199) = 0LL;
  *((_QWORD *)this + 200) = 0LL;
  *((_QWORD *)this + 201) = 0LL;
  *((_DWORD *)this + 404) = 0;
  *((_DWORD *)this + 34) = 2048;
  *((_DWORD *)this + 35) = 2048;
  CDesktopManager::UpdateWindowShadows(this);
  return this;
}
