/*
 * XREFs of ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180089E90
 * Callers:
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x180086AAC (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180086B28 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180089DB4 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?NotifyInvalidResource@CCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x18008D080 (-NotifyInvalidResource@CCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x180004E68 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?CloseGPUFence@CBindInfo@CCompositionSurfaceInfo@@IEAAJXZ @ 0x180089898 (-CloseGPUFence@CBindInfo@CCompositionSurfaceInfo@@IEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CCompositionSurfaceInfo::CBindInfo::Reset(CCompositionSurfaceInfo::CBindInfo *this)
{
  __int64 v2; // r12
  __int64 v3; // r14
  _QWORD *v4; // r15
  __int64 v5; // rbp
  __int64 v6; // rdi

  CCompositionSurfaceInfo::CBindInfo::CloseGPUFence((void **)this);
  if ( *((_BYTE *)this + 132) )
    CCompositionSurfaceInfo::CBindInfo::UnpinResources(this);
  if ( *((_DWORD *)this + 16) )
  {
    v2 = *((unsigned int *)this + 16);
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD **)(v3 + *((_QWORD *)this + 5));
      v5 = *(_QWORD *)this + 16LL;
      if ( !*(_QWORD *)this )
        v5 = 0LL;
      (*(void (__fastcall **)(_QWORD *, __int64))(v4[15] + 32LL))(v4 + 15, v5);
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      v3 += 8LL;
      --v2;
    }
    while ( v2 );
  }
  *((_DWORD *)this + 16) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 5, 8u);
  v6 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 10) = 0LL;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_WORD *)this + 10) = 1;
  *((_QWORD *)this + 3) = -1LL;
  *(struct _LUID *)((char *)this + 100) = g_luidZero;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_BYTE *)this + 133) = 0;
  *((_DWORD *)this + 24) = 2;
}
