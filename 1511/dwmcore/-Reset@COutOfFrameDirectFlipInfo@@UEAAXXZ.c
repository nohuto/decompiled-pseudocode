/*
 * XREFs of ?Reset@COutOfFrameDirectFlipInfo@@UEAAXXZ @ 0x1800FC5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x1800AC220 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 */

void __fastcall COutOfFrameDirectFlipInfo::Reset(COutOfFrameDirectFlipInfo *this)
{
  CDirectFlipInfo::Reset(this);
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
}
