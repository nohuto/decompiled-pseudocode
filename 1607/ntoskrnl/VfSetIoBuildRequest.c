/*
 * XREFs of VfSetIoBuildRequest @ 0x14070C0DC
 * Callers:
 *     IovBuildAsynchronousFsdRequest @ 0x140700914 (IovBuildAsynchronousFsdRequest.c)
 *     IovBuildDeviceIoControlRequest @ 0x140700998 (IovBuildDeviceIoControlRequest.c)
 *     IovBuildSynchronousFsdRequest @ 0x140700A44 (IovBuildSynchronousFsdRequest.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x140716A10 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140716B8C (VfIrpDatabaseEntryReleaseLock.c)
 */

char __fastcall VfSetIoBuildRequest(__int64 a1)
{
  char v2; // di
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // rdx

  v2 = 0;
  v3 = VfIrpDatabaseEntryFindAndLock(a1);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 56) |= 0x1000u;
    v2 = 1;
    v4 = *(_DWORD *)(a1 + 16);
    if ( (v4 & 0x10) != 0 && (v4 & 0x40) != 0 && (v4 & 0x20) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 184);
      if ( (unsigned __int8)(*(_BYTE *)(v5 - 72) - 14) <= 1u )
      {
        *(_QWORD *)(v3 + 200) = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(v3 + 208) = *(_DWORD *)(v5 - 64);
      }
    }
    VfIrpDatabaseEntryReleaseLock(v3);
  }
  return v2;
}
