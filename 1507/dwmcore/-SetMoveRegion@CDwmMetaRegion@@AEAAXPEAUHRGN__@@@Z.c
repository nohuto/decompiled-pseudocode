/*
 * XREFs of ?SetMoveRegion@CDwmMetaRegion@@AEAAXPEAUHRGN__@@@Z @ 0x1800FE914
 * Callers:
 *     ?AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z @ 0x1800FD224 (-AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDwmMetaRegion::SetMoveRegion(CDwmMetaRegion *this, HRGN a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
    DeleteObject(v4);
  *((_QWORD *)this + 3) = a2;
}
