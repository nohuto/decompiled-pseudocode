/*
 * XREFs of ??_GCOutOfFrameDirectFlipInfo@@UEAAPEAXI@Z @ 0x180005DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x180013600 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

COutOfFrameDirectFlipInfo *__fastcall COutOfFrameDirectFlipInfo::`scalar deleting destructor'(
        COutOfFrameDirectFlipInfo *this,
        char a2)
{
  *(_QWORD *)this = &COutOfFrameDirectFlipInfo::`vftable';
  CDirectFlipInfo::Reset(this);
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *(_QWORD *)this = &CDirectFlipInfo::`vftable';
  CDirectFlipInfo::Reset(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, COutOfFrameDirectFlipInfo *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
