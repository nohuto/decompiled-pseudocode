/*
 * XREFs of TraceGreAcquireSemaphoreEx @ 0x1C025DCB4
 * Callers:
 *     NtGdiAddEmbFontToDC @ 0x1C02695F0 (NtGdiAddEmbFontToDC.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0269720 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiGetUFIPathname @ 0x1C02A7010 (NtGdiGetUFIPathname.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall TraceGreAcquireSemaphoreEx(__int64 a1, __int64 a2, __int64 a3)
{
  return EtwTraceGreLockAcquireSemaphoreExclusive(a1, a2, a3);
}
