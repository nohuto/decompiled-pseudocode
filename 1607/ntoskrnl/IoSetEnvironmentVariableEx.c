/*
 * XREFs of IoSetEnvironmentVariableEx @ 0x140628318
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x14013D92C (IopInitializeOfflineCrashDump.c)
 *     IopInitializeInMemoryDumpData @ 0x1401C7484 (IopInitializeInMemoryDumpData.c)
 *     ExpSetBootEntry @ 0x1406B17F4 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1406B1FAC (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1406B2578 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1406B35C4 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1406B3744 (NtDeleteDriverEntry.c)
 *     NtSetBootEntryOrder @ 0x1406B5188 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1406B5388 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1406B557C (NtSetDriverEntryOrder.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopOpenSystemVariableDevice @ 0x140628E70 (IopOpenSystemVariableDevice.c)
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
