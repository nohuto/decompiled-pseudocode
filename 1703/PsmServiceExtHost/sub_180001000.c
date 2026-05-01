/*
 * XREFs of sub_180001000 @ 0x180001000
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComPtr@VResourceManagerServerProxy@@@ATL@@QEAA@XZ @ 0x18002087C (--0-$CComPtr@VResourceManagerServerProxy@@@ATL@@QEAA@XZ.c)
 */

int sub_180001000()
{
  ATL::CComPtr<ResourceManagerServerProxy>::CComPtr<ResourceManagerServerProxy>();
  return atexit((void (__cdecl *)())ATL::CComPtr<ResourceManagerServerProxy>::~CComPtr<ResourceManagerServerProxy>);
}
