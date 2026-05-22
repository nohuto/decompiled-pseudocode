/*
 * XREFs of ?UpdateZoomContactsForThreshold@ManipulationInjector@@AEAAXI@Z @ 0x180098670
 * Callers:
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@@Z @ 0x180096E50 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXM@Z @ 0x1800975C8 (-InjectZoom@ManipulationInjector@@QEAAXM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ManipulationInjector::UpdateZoomContactsForThreshold(ManipulationInjector *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax

  *((_DWORD *)this + 31) = 131078;
  *((_DWORD *)this + 69) = 131078;
  if ( *(_DWORD *)this == 3 )
  {
    v1 = *((_DWORD *)this + 178);
    if ( *((_DWORD *)this + 22) == 32 )
      v1 = -v1;
    v2 = v1 / 2;
    *((_DWORD *)this + 38) -= v2;
    *((_DWORD *)this + 76) += v2;
  }
  else
  {
    v3 = *((_DWORD *)this + 179);
    if ( v3 > 0 )
    {
      if ( *((_DWORD *)this + 22) == 32 )
        v3 = -v3;
      v4 = v3 / 2;
      *((_DWORD *)this + 36) -= v4;
      *((_DWORD *)this + 74) += v4;
    }
  }
}
