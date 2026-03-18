/*
 * XREFs of ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0013C5C
 * Callers:
 *     ?Unlock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00523F0 (-Unlock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::OfferRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rcx

  DXGPUSHLOCK::AcquireExclusive((VIDMM_CPU_HOST_APERTURE *)((char *)this + 72));
  v4 = (_QWORD *)((char *)a2 + 440);
  v5 = *v4;
  v6 = (_QWORD *)v4[1];
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v6 != v4 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  v7 = *((_QWORD *)this + 2);
  *v4 = v7;
  v4[1] = (char *)this + 16;
  if ( *(VIDMM_CPU_HOST_APERTURE **)(v7 + 8) != (VIDMM_CPU_HOST_APERTURE *)((char *)this + 16) )
    __fastfail(3u);
  *(_QWORD *)(v7 + 8) = v4;
  *((_QWORD *)this + 2) = v4;
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
}
