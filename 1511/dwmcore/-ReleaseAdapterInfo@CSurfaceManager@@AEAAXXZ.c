/*
 * XREFs of ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x18006CDA4
 * Callers:
 *     ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x18006CC58 (-ProcessKernelTokens@CSurfaceManager@@AEAAJXZ.c)
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x18006CE74 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x180105140 (--1CSurfaceManager@@MEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CSurfaceManager::ReleaseAdapterInfo(CSurfaceManager *this)
{
  __int64 i; // rbp
  __int64 v3; // r15
  __int64 v4; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 136); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + 65);
    if ( *(_QWORD *)(v3 + 40 * i + 16) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 40 * i + 8) + 32LL))(
        *(_QWORD *)(v3 + 40 * i + 8),
        *(_QWORD *)(v3 + 40 * i + 16));
    v4 = *(_QWORD *)(v3 + 40 * i + 8);
    if ( v4 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*(_QWORD *)(v3 + 40 * i + 8));
  }
  *((_DWORD *)this + 136) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 520, 40LL);
  *((_BYTE *)this + 632) = 0;
}
