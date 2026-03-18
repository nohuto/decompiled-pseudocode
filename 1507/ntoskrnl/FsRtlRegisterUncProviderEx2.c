/*
 * XREFs of FsRtlRegisterUncProviderEx2 @ 0x1405BB700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlRegisterUncProviderEx2(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  if ( *(_WORD *)(a3 + 2) >= 0x200u )
    return FsRtlpRegisterUncProvider();
  *a4 = -1LL;
  return 3221225485LL;
}
