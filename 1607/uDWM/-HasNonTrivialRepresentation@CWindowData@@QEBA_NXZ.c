/*
 * XREFs of ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x18001AB44
 * Callers:
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x18001AC50 (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x18001B6B0 (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 * Callees:
 *     ?IsSplashScreen@CWindowData@@QEBA_NXZ @ 0x18001A66C (-IsSplashScreen@CWindowData@@QEBA_NXZ.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x18001B620 (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 */

char __fastcall CWindowData::HasNonTrivialRepresentation(CWindowData *this)
{
  char v2; // si
  int v3; // ebx
  int v4; // ebx

  if ( *((_QWORD *)this + 51) )
    return 1;
  if ( *((int *)this + 28) >= 8 && *((int *)this + 28) <= 11 || CWindowData::IsShellManaged(this) )
    return (*((_BYTE *)this + 580) & 0x10) == 0 || CWindowData::IsSplashScreen(this);
  if ( !*((_QWORD *)this + 48) )
    return 0;
  v2 = 1;
  if ( (*((_BYTE *)this + 576) & 1) == 0 )
  {
    if ( *((_QWORD *)this + 3) )
      return 0;
  }
  if ( !*((_QWORD *)this + 46) && (*((_BYTE *)this + 577) & 0x10) == 0 && (*((_DWORD *)this + 26) & 0x200000) == 0 )
    return 0;
  if ( (*((_DWORD *)this + 25) & 0x20000000) != 0 )
  {
    v3 = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
    if ( v3 < 0 )
      v3 = 0;
    if ( v3 <= GetSystemMetrics(57) )
    {
      v4 = *((_DWORD *)this + 50) - *((_DWORD *)this + 48);
      if ( v4 < 0 )
        v4 = 0;
      if ( v4 <= GetSystemMetrics(58) )
        return 0;
    }
  }
  return v2;
}
