/*
 * XREFs of IoGetEnvironmentVariableEx @ 0x1406281EC
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x14013D92C (IopInitializeOfflineCrashDump.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1406B0F7C (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x1406B17F4 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1406B1FAC (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1406B35C4 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1406B3744 (NtDeleteDriverEntry.c)
 *     NtGetEnvironmentVariableEx @ 0x1406B44FC (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x1406B45E8 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x1406B4854 (NtQueryBootOptions.c)
 *     IopCachePreviousBootData @ 0x1407CE44C (IopCachePreviousBootData.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopOpenSystemVariableDevice @ 0x140628E70 (IopOpenSystemVariableDevice.c)
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
