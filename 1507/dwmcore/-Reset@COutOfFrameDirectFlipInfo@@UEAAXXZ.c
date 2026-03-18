/*
 * XREFs of ?Reset@COutOfFrameDirectFlipInfo@@UEAAXXZ @ 0x1800DF150
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x180013600 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 */

void __fastcall COutOfFrameDirectFlipInfo::Reset(COutOfFrameDirectFlipInfo *this)
{
  CDirectFlipInfo::Reset(this);
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
}
