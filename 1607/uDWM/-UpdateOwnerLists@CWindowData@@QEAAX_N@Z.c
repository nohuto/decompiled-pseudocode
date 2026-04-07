/*
 * XREFs of ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001ACF4
 * Callers:
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x18001ADD0 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C850 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002D740 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180031634 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 * Callees:
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x180034820 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CWindowData::UpdateOwnerLists(CWindowData *this, char a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v6; // rcx

  *((_BYTE *)this + 577) &= ~0x80u;
  v2 = *((_QWORD *)this + 66);
  v3 = 0LL;
  *((_BYTE *)this + 577) |= a2 << 7;
  if ( *(_DWORD *)(v2 + 448) )
  {
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 66) + 424LL) + 8 * v3);
      if ( *(_QWORD *)(v6 + 64) == v2 && *(_DWORD *)(v6 + 72) == 1 )
        CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(
          (CSecondaryWindowRepresentation *)v6,
          this,
          a2);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(*((_QWORD *)this + 66) + 448LL) );
  }
}
