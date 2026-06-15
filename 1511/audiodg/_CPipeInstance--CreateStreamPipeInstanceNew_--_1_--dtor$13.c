/*
 * XREFs of _CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor$13 @ 0x14001BB96
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CPipeInstance::CreateStreamPipeInstanceNew_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  return ATL::CComObjectRootEx<ATL::CComMultiThreadModelNoCS>::~CComObjectRootEx<ATL::CComMultiThreadModelNoCS>(
           *(_QWORD *)(a2 + 512),
           *(_QWORD *)(a2 + 496));
}
