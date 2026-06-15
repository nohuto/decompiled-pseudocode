/*
 * XREFs of ?GetDescription@CVirtualProtectedOutput@@UEAAJPEAKPEAU_GUID@@0PEAPEAU2@@Z @ 0x140016980
 * Callers:
 *     AudioDGGetStreamVpoDescription @ 0x1400172F0 (AudioDGGetStreamVpoDescription.c)
 * Callees:
 *     ?GetDescription@CProtectedOutputController@@UEAAJPEAKPEAU_GUID@@0PEAPEAU2@@Z @ 0x140016DA0 (-GetDescription@CProtectedOutputController@@UEAAJPEAKPEAU_GUID@@0PEAPEAU2@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CVirtualProtectedOutput::GetDescription(
        CVirtualProtectedOutput *this,
        unsigned int *a2,
        struct _GUID *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  CProtectedOutputController *v5; // rbx
  __int64 (__fastcall *v6)(CProtectedOutputController *__hidden, unsigned int *, struct _GUID *, unsigned int *, struct _GUID **); // rdi

  v5 = (CProtectedOutputController *)*((_QWORD *)this + 1);
  v6 = *(__int64 (__fastcall **)(CProtectedOutputController *__hidden, unsigned int *, struct _GUID *, unsigned int *, struct _GUID **))(*(_QWORD *)v5 + 40LL);
  if ( v6 == CProtectedOutputController::GetDescription )
    return CProtectedOutputController::GetDescription(*((CProtectedOutputController **)this + 1), a2, a3, a4, a5);
  else
    return v6(v5, a2, a3, a4, a5);
}
