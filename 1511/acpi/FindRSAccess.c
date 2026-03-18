/*
 * XREFs of FindRSAccess @ 0x1C0017848
 * Callers:
 *     RegRSAccess @ 0x1C0004D1C (RegRSAccess.c)
 *     SupportsOnlyRawAccess @ 0x1C00148E4 (SupportsOnlyRawAccess.c)
 *     RawFieldAccess @ 0x1C004635C (RawFieldAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindRSAccess(int a1)
{
  __int64 result; // rax

  for ( result = gpRSAccessHead; result && *(_DWORD *)(result + 8) != a1; result = *(_QWORD *)result )
    ;
  return result;
}
