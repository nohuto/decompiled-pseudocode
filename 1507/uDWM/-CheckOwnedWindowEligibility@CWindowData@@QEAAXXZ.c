/*
 * XREFs of ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x1800189BC
 * Callers:
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x180018974 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x180018D24 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x18002C4A4 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18002C640 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180018A14 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 */

void __fastcall CWindowData::CheckOwnedWindowEligibility(CWindowData *this)
{
  __int64 v1; // rax
  char v3; // cl
  char v4; // al

  v1 = *((_QWORD *)this + 63);
  v3 = v1 && (*(_BYTE *)(v1 + 553) & 0x40) != 0 && CWindowData::ShouldBeIncludedInOwnerSWR(this);
  v4 = *((_BYTE *)this + 553) >> 7;
  if ( v4 != v3 )
    CWindowData::UpdateOwnerLists(this, v4 == 0);
}
