/*
 * XREFs of ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x1800188DC
 * Callers:
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x1800189BC (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x18002C4A4 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18002C640 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002CAC0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DB70 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003401C (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CWindowData::UpdateOwnerLists(CWindowData *this, char a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v6; // rcx

  *((_BYTE *)this + 553) &= ~0x80u;
  v2 = *((_QWORD *)this + 63);
  v3 = 0LL;
  *((_BYTE *)this + 553) |= a2 << 7;
  if ( *(_DWORD *)(v2 + 424) )
  {
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 63) + 400LL) + 8 * v3);
      if ( *(_QWORD *)(v6 + 64) == v2 && *(_DWORD *)(v6 + 72) == 1 )
        CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(
          (CSecondaryWindowRepresentation *)v6,
          this,
          a2);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(*((_QWORD *)this + 63) + 424LL) );
  }
}
