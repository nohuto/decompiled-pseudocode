/*
 * XREFs of RmpTelemetryContextCleanup @ 0x18004177C
 * Callers:
 *     RmpInitializeGlobalModules @ 0x180020C08 (RmpInitializeGlobalModules.c)
 *     RmpUninitializeGlobalModules @ 0x18003EC48 (RmpUninitializeGlobalModules.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpTelemetryContextCleanup(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    TpReleaseCleanupGroupMembers(v2, 1LL, 0LL);
    return TpReleaseCleanupGroup(*(_QWORD *)(a1 + 8));
  }
  return result;
}
