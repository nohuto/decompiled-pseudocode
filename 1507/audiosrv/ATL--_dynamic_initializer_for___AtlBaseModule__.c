/*
 * XREFs of ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001200
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x180042828 (--0CAtlBaseModule@ATL@@QEAA@XZ.c)
 */

int __fastcall ATL::_dynamic_initializer_for___AtlBaseModule__(ATL::CAtlBaseModule *a1)
{
  ATL::CAtlBaseModule::CAtlBaseModule(a1);
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlBaseModule__);
}
