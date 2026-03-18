/*
 * XREFs of FsRtlGetSupportedFeatures @ 0x1400F367C
 * Callers:
 *     IopCopyOffloadCapable @ 0x1404C4ECC (IopCopyOffloadCapable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlGetSupportedFeatures(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = 0;
  if ( FltMgrCallbacks )
    return (*(__int64 (**)(void))(FltMgrCallbacks + 8))();
  return result;
}
