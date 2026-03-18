/*
 * XREFs of ?ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ @ 0x1800B3364
 * Callers:
 *     ??1CHwBrushPool@@QEAA@XZ @ 0x18002BC30 (--1CHwBrushPool@@QEAA@XZ.c)
 *     ??_ECHwLinearGradientBrushPoolManager@@UEAAPEAXI@Z @ 0x1800B32A0 (--_ECHwLinearGradientBrushPoolManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ConsolidateUnusedLists@CHwBrushPoolManager@@AEAAXXZ @ 0x1800B33A8 (-ConsolidateUnusedLists@CHwBrushPoolManager@@AEAAXXZ.c)
 */

void __fastcall CHwBrushPoolManager::ReleaseUnusedBrushes(CHwBrushPoolManager *this)
{
  __int64 v2; // rax
  __int64 v3; // rbp

  CHwBrushPoolManager::ConsolidateUnusedLists(this);
  if ( *((_QWORD *)this + 7) )
  {
    do
    {
      v2 = *((_QWORD *)this + 7);
      v3 = *(_QWORD *)(v2 + 48);
      if ( v2 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v2 + 8) + 16LL))(v2 + 8, 1LL);
      *((_QWORD *)this + 7) = v3;
    }
    while ( v3 );
    *((_QWORD *)this + 8) = 0LL;
    *((_DWORD *)this + 12) = 0;
  }
}
