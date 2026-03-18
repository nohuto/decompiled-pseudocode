/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ @ 0x18007CE30
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x180080190 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 * Callees:
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x1800AD78C (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::ReleaseResourcesForDisplayChange(CD2DContext *this, unsigned int a2)
{
  CD2DTarget *v3; // rcx

  v3 = (CD2DTarget *)*((_QWORD *)this + 36);
  if ( v3 )
  {
    CD2DTarget::`scalar deleting destructor'(v3, a2);
    *((_QWORD *)this + 36) = 0LL;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 6) + 56LL))(*((_QWORD *)this + 6), 0LL, 0LL);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 384LL))(*((_QWORD *)this + 5));
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 5) + 392LL))(*((_QWORD *)this + 5), 0LL, 0LL);
}
