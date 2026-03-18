/*
 * XREFs of ?ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ @ 0x18008A7D0
 * Callers:
 *     ??_ECHwLinearGradientBrushPoolManager@@UEAAPEAXI@Z @ 0x18008A770 (--_ECHwLinearGradientBrushPoolManager@@UEAAPEAXI@Z.c)
 *     ??1CHwBrushPool@@QEAA@XZ @ 0x18008AAB4 (--1CHwBrushPool@@QEAA@XZ.c)
 * Callees:
 *     ?ConsolidateUnusedLists@CHwBrushPoolManager@@AEAAXXZ @ 0x18008A814 (-ConsolidateUnusedLists@CHwBrushPoolManager@@AEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
