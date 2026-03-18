/*
 * XREFs of ACPIQueryDeviceLockMutexSupport @ 0x1C0007310
 * Callers:
 *     ACPITableLoad @ 0x1C00064E0 (ACPITableLoad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIQueryDeviceLockMutexSupport(_DWORD *a1)
{
  unsigned __int8 v1; // r8

  v1 = 0;
  if ( *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u || (gAMLIInitFlags & 4) != 0 )
    v1 = 1;
  *a1 = v1;
  return 0LL;
}
