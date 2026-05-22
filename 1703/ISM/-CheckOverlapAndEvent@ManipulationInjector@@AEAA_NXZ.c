/*
 * XREFs of ?CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ @ 0x180097150
 * Callers:
 *     ?InjectPan@ManipulationInjector@@QEAAXMM@Z @ 0x18009719C (-InjectPan@ManipulationInjector@@QEAAXMM@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXM@Z @ 0x1800975C8 (-InjectZoom@ManipulationInjector@@QEAAXM@Z.c)
 * Callees:
 *     ?CheckOverlap@ManipulationInjector@@AEAA_NI@Z @ 0x1800978B0 (-CheckOverlap@ManipulationInjector@@AEAA_NI@Z.c)
 */

bool __fastcall ManipulationInjector::CheckOverlapAndEvent(ManipulationInjector *this)
{
  bool v2; // di
  void *v3; // rcx

  v2 = ManipulationInjector::CheckOverlap(this, 0);
  if ( v2 )
  {
    v3 = (void *)*((_QWORD *)this + 96);
    if ( v3 )
    {
      if ( !*((_BYTE *)this + 12) )
        *((_BYTE *)this + 12) = WaitForSingleObject(v3, 0) == 0;
    }
  }
  return v2;
}
