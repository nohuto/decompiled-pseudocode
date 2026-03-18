/*
 * XREFs of NtRIMGetDevicePreparsedDataLockfree @ 0x1C00C0D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtRIMGetDevicePreparsedDataLockfree(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOBYTE(a4) = 1;
  return RIMGetDevicePreparsedDataLockfree(a1, a2, a3, a4);
}
