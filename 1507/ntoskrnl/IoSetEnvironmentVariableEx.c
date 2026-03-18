/*
 * XREFs of IoSetEnvironmentVariableEx @ 0x140678BA8
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140163F28 (IopInitializeOfflineCrashDump.c)
 *     IopInitializeInMemoryDumpData @ 0x1401F4A70 (IopInitializeInMemoryDumpData.c)
 *     ExpSetBootEntry @ 0x1406F235C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1406F2BC8 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1406F3230 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1406F4348 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1406F4564 (NtDeleteDriverEntry.c)
 *     NtSetBootEntryOrder @ 0x1406F65CC (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1406F6858 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1406F6AEC (NtSetDriverEntryOrder.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IopOpenSystemVariableDevice @ 0x1406798D0 (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoSetEnvironmentVariableEx(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  int v9; // ebx
  PVOID v10; // rdi
  int v12; // [rsp+28h] [rbp-40h]
  PDEVICE_OBJECT v13; // [rsp+40h] [rbp-28h] BYREF
  PVOID Object[3]; // [rsp+48h] [rbp-20h] BYREF

  v9 = IopOpenSystemVariableDevice((PFILE_OBJECT *)Object, &v13);
  if ( v9 >= 0 )
  {
    v12 = a4;
    v10 = Object[0];
    v9 = (*((__int64 (__fastcall **)(PVOID, PDEVICE_OBJECT, __int64, __int64, __int64, int, int))Object[1] + 1))(
           Object[0],
           v13,
           a1,
           a2,
           a3,
           v12,
           a5);
    if ( v10 )
      ObfDereferenceObject(v10);
  }
  return (unsigned int)v9;
}
