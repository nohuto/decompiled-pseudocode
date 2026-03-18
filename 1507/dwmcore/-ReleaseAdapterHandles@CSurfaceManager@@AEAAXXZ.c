/*
 * XREFs of ?ReleaseAdapterHandles@CSurfaceManager@@AEAAXXZ @ 0x180087B30
 * Callers:
 *     ?EnsureAdapterHandles@CSurfaceManager@@AEAAJXZ @ 0x180087BF0 (-EnsureAdapterHandles@CSurfaceManager@@AEAAJXZ.c)
 *     ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x180092308 (-ProcessKernelTokens@CSurfaceManager@@AEAAJXZ.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x1800E91F4 (--1CSurfaceManager@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CSurfaceManager::ReleaseAdapterHandles(CSurfaceManager *this)
{
  unsigned int i; // r14d
  _QWORD *v3; // rsi

  for ( i = 0; i < *((_DWORD *)this + 136); ++i )
  {
    v3 = (_QWORD *)(*((_QWORD *)this + 65) + 16LL * i);
    if ( v3[1] )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 32LL))(*v3, v3[1]);
    if ( *v3 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
  }
  *((_DWORD *)this + 136) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 65, 0x10u);
  *((_BYTE *)this + 584) = 0;
}
