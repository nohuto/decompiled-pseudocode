/*
 * XREFs of ??_GCOutOfFrameDirectFlipInfo@@UEAAPEAXI@Z @ 0x1800069B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x1800AC220 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 */

COutOfFrameDirectFlipInfo *__fastcall COutOfFrameDirectFlipInfo::`scalar deleting destructor'(
        COutOfFrameDirectFlipInfo *this,
        char a2)
{
  *(_QWORD *)this = &COutOfFrameDirectFlipInfo::`vftable';
  CDirectFlipInfo::Reset(this);
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *(_QWORD *)this = &CDirectFlipInfo::`vftable';
  CDirectFlipInfo::Reset(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, COutOfFrameDirectFlipInfo *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
