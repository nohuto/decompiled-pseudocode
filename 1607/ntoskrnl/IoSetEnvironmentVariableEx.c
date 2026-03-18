/*
 * XREFs of IoSetEnvironmentVariableEx @ 0x140628264
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x14013D3BC (IopInitializeOfflineCrashDump.c)
 *     IopInitializeInMemoryDumpData @ 0x1401C75E4 (IopInitializeInMemoryDumpData.c)
 *     ExpSetBootEntry @ 0x1406B16BC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1406B1E74 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1406B2440 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1406B348C (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1406B360C (NtDeleteDriverEntry.c)
 *     NtSetBootEntryOrder @ 0x1406B5050 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1406B5250 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1406B5444 (NtSetDriverEntryOrder.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IopOpenSystemVariableDevice @ 0x140628DBC (IopOpenSystemVariableDevice.c)
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
