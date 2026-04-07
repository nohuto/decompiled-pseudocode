/*
 * XREFs of ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z @ 0x18007FAC0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180032BE0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001FCE0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18003E710 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 */

void __fastcall CWindowList::DesktopFree(CWindowList *this, const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE *a2)
{
  PVOID Element; // rax
  _QWORD *v5; // rbx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
              *(_QWORD *)((char *)a2 + 4));
  v5 = Element;
  if ( Element )
  {
    VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 10) + 32LL), *((struct CVisual **)Element + 1));
    v6 = (CBaseObject *)v5[1];
    if ( v6 )
      CBaseObject::Release(v6);
    v7 = (CBaseObject *)v5[2];
    if ( v7 )
      CBaseObject::Release(v7);
    v8 = (CBaseObject *)v5[3];
    if ( v8 )
      CBaseObject::Release(v8);
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v5);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
}
