/*
 * XREFs of VPOHANDLE_rundown @ 0x1400170C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CVirtualProtectedOutput@@UEAAKXZ @ 0x140016830 (-Release@CVirtualProtectedOutput@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall VPOHANDLE_rundown(CVirtualProtectedOutput *a1)
{
  __int64 (__fastcall *v1)(CVirtualProtectedOutput *); // rdi

  v1 = *(__int64 (__fastcall **)(CVirtualProtectedOutput *))(*(_QWORD *)a1 + 16LL);
  if ( v1 == CVirtualProtectedOutput::Release )
    return CVirtualProtectedOutput::Release(a1);
  else
    return v1(a1);
}
