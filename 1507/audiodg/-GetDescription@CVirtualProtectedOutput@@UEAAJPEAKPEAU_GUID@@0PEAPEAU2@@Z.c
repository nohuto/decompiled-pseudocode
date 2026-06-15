/*
 * XREFs of ?GetDescription@CVirtualProtectedOutput@@UEAAJPEAKPEAU_GUID@@0PEAPEAU2@@Z @ 0x140030FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CVirtualProtectedOutput::GetDescription(
        CVirtualProtectedOutput *this,
        unsigned int *a2,
        struct _GUID *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *, struct _GUID *, unsigned int *))(**((_QWORD **)this + 1)
                                                                                           + 40LL))(
           *((_QWORD *)this + 1),
           a2,
           a3,
           a4);
}
