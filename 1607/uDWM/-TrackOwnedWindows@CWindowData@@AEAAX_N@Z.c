/*
 * XREFs of ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x18001AC84
 * Callers:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18001AF68 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18001B050 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 * Callees:
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x18001AD88 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 */

void __fastcall CWindowData::TrackOwnedWindows(CWindowData *this, char a2)
{
  char v3; // cl
  __int64 v4; // r9
  __int64 v5; // rdx

  v3 = *((_BYTE *)this + 577);
  if ( a2 != ((v3 & 0x40) != 0) )
  {
    v4 = 0LL;
    *((_BYTE *)this + 577) = v3 ^ (v3 ^ (a2 << 6)) & 0x40;
    if ( a2 )
    {
      CWindowData::CheckOwnedWindowEligibilityForOwner(this);
    }
    else if ( *((_DWORD *)this + 140) )
    {
      do
      {
        v5 = *(_QWORD *)(*((_QWORD *)this + 67) + 8 * v4);
        v4 = (unsigned int)(v4 + 1);
        *(_BYTE *)(v5 + 577) &= ~0x80u;
      }
      while ( (unsigned int)v4 < *((_DWORD *)this + 140) );
    }
  }
}
