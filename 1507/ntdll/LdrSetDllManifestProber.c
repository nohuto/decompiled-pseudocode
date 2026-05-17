/*
 * XREFs of LdrSetDllManifestProber @ 0x1800771D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LdrSetDllManifestProber(
        __int64 (__fastcall *a1)(_QWORD, _QWORD, _QWORD),
        __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD),
        __int64 (__fastcall *a3)(_QWORD))
{
  LdrpManifestProberRoutine = a1;
  LdrpCreateActCtxLanguageW = a2;
  LdrpReleaseActCtxW = a3;
}
