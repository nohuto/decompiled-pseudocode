/*
 * XREFs of LdrpLocateMrdata @ 0x1800D2F70
 * Callers:
 *     LdrpChangeMrdataProtection @ 0x180019030 (LdrpChangeMrdataProtection.c)
 * Callees:
 *     LdrpMakePermanentImageCommit @ 0x18002DB98 (LdrpMakePermanentImageCommit.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180031670 (RtlSectionTableFromVirtualAddress.c)
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 */

unsigned __int64 LdrpLocateMrdata()
{
  PVOID v0; // rdx
  PIMAGE_SECTION_HEADER v1; // rax
  unsigned __int64 result; // rax
  __int64 v3; // r11
  __int64 v4; // rcx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3u, (PVOID)0x180000000LL, 0LL, &OutHeaders);
  v1 = RtlSectionTableFromVirtualAddress(OutHeaders, v0, (unsigned int)&LdrSystemDllInitBlock - 0x80000000);
  if ( !v1 )
    __fastfail(5u);
  result = LdrpMakePermanentImageCommit(0x180000000LL + v1->VirtualAddress, v1->Misc.PhysicalAddress);
  LdrpMrdataSize = v3;
  LdrpMrdataBase = v4;
  return result;
}
