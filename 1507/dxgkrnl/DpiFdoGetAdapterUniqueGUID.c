/*
 * XREFs of DpiFdoGetAdapterUniqueGUID @ 0x1C00D74A0
 * Callers:
 *     DpiGdoSetupGdiParameters @ 0x1C00D6D90 (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoGetAdapterUniqueGUID(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v1 + 3224) )
    return v1 + 3216;
  else
    return 0LL;
}
