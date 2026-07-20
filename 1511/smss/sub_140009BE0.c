/*
 * XREFs of sub_140009BE0 @ 0x140009BE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400064F8 @ 0x1400064F8 (sub_1400064F8.c)
 *     sub_1400092A8 @ 0x1400092A8 (sub_1400092A8.c)
 *     sub_140009C70 @ 0x140009C70 (sub_140009C70.c)
 *     sub_14000FD38 @ 0x14000FD38 (sub_14000FD38.c)
 */

char sub_140009BE0()
{
  char v0; // bl
  NTSTATUS v1; // eax
  __int64 v2; // rcx
  _DWORD SystemInformation[6]; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+58h] [rbp+20h] BYREF

  SystemInformation[0] = 0;
  v0 = 1;
  v1 = sub_1400064F8();
  if ( v1 >= 0 )
  {
    LOBYTE(v1) = NtSerializeBoot(v2);
    if ( !byte_140020200 )
    {
      SystemInformation[0] = 0;
      LOBYTE(v1) = NtSetSystemInformation(SystemCrashDumpStateInformation, SystemInformation, 4u);
    }
    if ( !byte_1400208E0 )
    {
      v0 = 0;
      dword_1400201C0 = 0;
    }
    if ( byte_1400201F4 == 1 )
    {
      v5 = 0;
      LOBYTE(v1) = sub_14000FD38(&v5);
      if ( v5 == 1 )
        v0 = 0;
      else
        dword_1400201C0 = 1;
    }
    if ( !byte_1400201F4 )
      LOBYTE(v1) = sub_140009C70();
    if ( v0 == 1 )
      LOBYTE(v1) = sub_1400092A8();
    if ( Handle )
      LOBYTE(v1) = NtClose(Handle);
  }
  return v1;
}
