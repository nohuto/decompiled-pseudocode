/*
 * XREFs of ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C00BC434
 * Callers:
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C00BB268 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00320A0 (HmgIncrementShareReferenceCount.c)
 */

void __fastcall XEPALOBJ::apalColorSet(XEPALOBJ *this, struct PALETTE *a2)
{
  _DWORD *v2; // rax
  _DWORD *v5; // rcx

  v2 = *(_DWORD **)this;
  v5 = *(_DWORD **)(*(_QWORD *)this + 136LL);
  if ( v5 != v2 )
    HmgDecrementShareReferenceCount(v5);
  HmgIncrementShareReferenceCount(a2);
  *(_DWORD *)(*(_QWORD *)this + 28LL) = *((_DWORD *)a2 + 7);
  *(_QWORD *)(*(_QWORD *)this + 128LL) = *((_QWORD *)a2 + 16);
  *(_QWORD *)(*(_QWORD *)this + 136LL) = a2;
}
