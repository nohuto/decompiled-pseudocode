/*
 * XREFs of TraceGreAcquireSemaphoreEx @ 0x1C025B158
 * Callers:
 *     NtGdiAddEmbFontToDC @ 0x1C0267A90 (NtGdiAddEmbFontToDC.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0267BC0 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiGetUFIPathname @ 0x1C02A8A20 (NtGdiGetUFIPathname.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall TraceGreAcquireSemaphoreEx(__int64 a1, __int64 a2, __int64 a3)
{
  return EtwTraceGreLockAcquireSemaphoreExclusive(a1, a2, a3);
}
