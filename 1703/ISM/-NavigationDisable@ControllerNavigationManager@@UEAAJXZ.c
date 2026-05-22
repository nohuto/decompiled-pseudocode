/*
 * XREFs of ?NavigationDisable@ControllerNavigationManager@@UEAAJXZ @ 0x1800312C0
 * Callers:
 *     ?OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z @ 0x180030E50 (-OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ?NavigationDisable@ControllerProcessor@@QEAAJXZ @ 0x180032A40 (-NavigationDisable@ControllerProcessor@@QEAAJXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall ControllerNavigationManager::NavigationDisable(ControllerNavigationManager *this)
{
  __int64 ***v1; // rdi
  __int64 **i; // rbx

  v1 = (__int64 ***)*((_QWORD *)this + 2);
  for ( i = *v1; i != (__int64 **)v1; i = (__int64 **)*i )
    ControllerProcessor::NavigationDisable((ControllerProcessor *)i[3]);
  *((_BYTE *)this + 72) = 0;
  *((_BYTE *)this + 74) = 0;
  memset((char *)this + 144, 0, 0x48uLL);
  return 0LL;
}
