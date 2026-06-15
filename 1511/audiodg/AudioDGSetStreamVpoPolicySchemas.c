/*
 * XREFs of AudioDGSetStreamVpoPolicySchemas @ 0x140017110
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPolicySchemas@CVirtualProtectedOutput@@UEAAJKPEAU_GUID@@PEAK@Z @ 0x140016A60 (-SetPolicySchemas@CVirtualProtectedOutput@@UEAAJKPEAU_GUID@@PEAK@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall AudioDGSetStreamVpoPolicySchemas(
        __int64 a1,
        CVirtualProtectedOutput *a2,
        unsigned int a3,
        struct _GUID *a4,
        unsigned int *a5)
{
  __int64 (__fastcall *v5)(CVirtualProtectedOutput *, unsigned int, struct _GUID *, unsigned int *); // rdi

  v5 = *(__int64 (__fastcall **)(CVirtualProtectedOutput *, unsigned int, struct _GUID *, unsigned int *))(*(_QWORD *)a2 + 32LL);
  if ( v5 == CVirtualProtectedOutput::SetPolicySchemas )
    return CVirtualProtectedOutput::SetPolicySchemas(a2, a3, a4, a5);
  else
    return v5(a2, a3, a4, a5);
}
