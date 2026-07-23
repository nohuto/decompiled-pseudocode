/*
 * XREFs of IopWriteTriageDumpToFirmware @ 0x1401C7FF4
 * Callers:
 *     IoWriteCrashDump @ 0x1401C645C (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401C7CC4 (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     xHalUnmaskInterrupt @ 0x14014D1D0 (xHalUnmaskInterrupt.c)
 *     KiScanBugCheckCallbackList @ 0x1401D56B4 (KiScanBugCheckCallbackList.c)
 */

__int64 __fastcall IopWriteTriageDumpToFirmware(_DWORD *BaseAddress)
{
  unsigned __int64 v3; // rsi
  char *v4; // rbp
  PHYSICAL_ADDRESS *v5; // rdi
  __int64 v6; // rax
  LONGLONG QuadPart; // rax

  if ( !BaseAddress )
    return 3221225635LL;
  v3 = 262172LL;
  BaseAddress[1028] = 28;
  *((_OWORD *)BaseAddress + 256) = CrashdmpGuid;
  BaseAddress[1029] = 458752;
  BaseAddress[1030] = 262172;
  v4 = (char *)(BaseAddress + 1024);
  if ( (unsigned int)(((unsigned __int64)(((_WORD)BaseAddress + 4096) & 0xFFF) + 266239) >> 12) + 1 > 0x100 )
    return 3221225626LL;
  v5 = (PHYSICAL_ADDRESS *)BaseAddress;
  do
  {
    v6 = 4096LL;
    if ( v3 < 0x1000 )
      v6 = v3;
    v5->QuadPart = v6;
    v5[1] = MmGetPhysicalAddress(v4);
    QuadPart = v5->QuadPart;
    v5 += 2;
    v4 += QuadPart;
    v3 -= QuadPart;
  }
  while ( v3 );
  v5->QuadPart = 0LL;
  v5[1].QuadPart = 0LL;
  MmGetPhysicalAddress(BaseAddress);
  KiScanBugCheckCallbackList();
  return off_1402F2558();
}
