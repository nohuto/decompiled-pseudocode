/*
 * XREFs of IoGetEnvironmentVariableEx @ 0x140678A7C
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140163F28 (IopInitializeOfflineCrashDump.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1406F1A38 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x1406F235C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1406F2BC8 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1406F4348 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1406F4564 (NtDeleteDriverEntry.c)
 *     NtGetEnvironmentVariableEx @ 0x1406F5584 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x1406F5720 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x1406F5A1C (NtQueryBootOptions.c)
 *     IopCachePreviousBootData @ 0x1407F9404 (IopCachePreviousBootData.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IopOpenSystemVariableDevice @ 0x1406798D0 (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoGetEnvironmentVariableEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  PVOID v10; // rdi
  __int64 v12; // [rsp+28h] [rbp-40h]
  PDEVICE_OBJECT v13; // [rsp+40h] [rbp-28h] BYREF
  PVOID Object[3]; // [rsp+48h] [rbp-20h] BYREF

  v9 = IopOpenSystemVariableDevice((PFILE_OBJECT *)Object, &v13);
  if ( v9 >= 0 )
  {
    v12 = a4;
    v10 = Object[0];
    v9 = (*(__int64 (__fastcall **)(PVOID, PDEVICE_OBJECT, __int64, __int64, __int64, __int64, __int64))Object[1])(
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
