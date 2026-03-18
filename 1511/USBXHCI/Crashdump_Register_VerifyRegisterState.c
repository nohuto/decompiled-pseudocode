/*
 * XREFs of Crashdump_Register_VerifyRegisterState @ 0x1C0036684
 * Callers:
 *     Crashdump_Initialize @ 0x1C0034B70 (Crashdump_Initialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Crashdump_Register_VerifyRegisterState(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 4LL);
  if ( (v1 & 0x800) != 0 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: xHC is not ready, cannot continue.\n");
    return 3221225473LL;
  }
  if ( (v1 & 4) != 0 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Host System Error bit is set, cannot continue.\n");
    return 3221225473LL;
  }
  if ( (v1 & 0x1000) != 0 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: xHC is in an error state, cannot continue.\n");
    return 3221225473LL;
  }
  return 0LL;
}
