/*
 * XREFs of _CPipeInstance::CreateModePipeInstance_::_1_::dtor$10 @ 0x14001B510
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CPipeInstance::CreateModePipeInstance_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return ATL::CComObjectRootEx<ATL::CComMultiThreadModelNoCS>::~CComObjectRootEx<ATL::CComMultiThreadModelNoCS>(
           *(_QWORD *)(a2 + 240),
           *(_QWORD *)(a2 + 344));
}
