/*
 * XREFs of TraceGreAcquireSemaphoreEx @ 0x1C025E164
 * Callers:
 *     NtGdiAddEmbFontToDC @ 0x1C026AA60 (NtGdiAddEmbFontToDC.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C026AB90 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiGetUFIPathname @ 0x1C02A7800 (NtGdiGetUFIPathname.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall TraceGreAcquireSemaphoreEx(__int64 a1, __int64 a2, __int64 a3)
{
  return EtwTraceGreLockAcquireSemaphoreExclusive(a1, a2, a3);
}
