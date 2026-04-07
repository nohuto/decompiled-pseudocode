/*
 * XREFs of ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x18001DFC4
 * Callers:
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x18001D370 (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x18001E0B8 (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D5B8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?IsSplashScreen@CWindowData@@QEBA_NXZ @ 0x180040B2C (-IsSplashScreen@CWindowData@@QEBA_NXZ.c)
 */

char __fastcall CWindowData::HasNonTrivialRepresentation(CWindowData *this)
{
  __int64 v2; // rcx
  char v3; // si
  int v4; // ebx
  int v5; // ebx

  if ( *((_QWORD *)this + 50) )
    return 1;
  if ( CWindowData::IsImmersiveWindow(this) )
    return (*(_BYTE *)(v2 + 572) & 0x10) == 0 || CWindowData::IsSplashScreen((CWindowData *)v2);
  if ( !*(_QWORD *)(v2 + 384) )
    return 0;
  v3 = 1;
  if ( (*(_BYTE *)(v2 + 568) & 1) == 0 )
  {
    if ( *(_QWORD *)(v2 + 24) )
      return 0;
  }
  if ( !*(_QWORD *)(v2 + 368) && (*(_BYTE *)(v2 + 569) & 0x10) == 0 && (*(_DWORD *)(v2 + 104) & 0x200000) == 0 )
    return 0;
  if ( (*(_DWORD *)(v2 + 100) & 0x20000000) != 0 )
  {
    v4 = *(_DWORD *)(v2 + 196) - *(_DWORD *)(v2 + 188);
    if ( v4 < 0 )
      v4 = 0;
    if ( v4 <= GetSystemMetrics(57) )
    {
      v5 = *((_DWORD *)this + 50) - *((_DWORD *)this + 48);
      if ( v5 < 0 )
        v5 = 0;
      if ( v5 <= GetSystemMetrics(58) )
        return 0;
    }
  }
  return v3;
}
