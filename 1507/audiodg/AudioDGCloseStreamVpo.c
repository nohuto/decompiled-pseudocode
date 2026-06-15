/*
 * XREFs of AudioDGCloseStreamVpo @ 0x140033590
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall AudioDGCloseStreamVpo(__int64 a1, _QWORD *a2)
{
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  *a2 = 0LL;
  return 0LL;
}
