/*
 * XREFs of ?AddCommonRGSReplacements@?$CAtlModuleT@VCAudioDGModule@@@ATL@@UEAAJPEAUIRegistrarBase@@@Z @ 0x140026DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CAtlModuleT<CAudioDGModule>::AddCommonRGSReplacements(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, const wchar_t *, void *))(*(_QWORD *)a2 + 24LL))(
           a2,
           L"APPID",
           &unk_140042560);
}
