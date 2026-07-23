/*
 * XREFs of BiSetBootOptions @ 0x1406D58BC
 * Callers:
 *     BiExportEfiBootManager @ 0x1406D4BB8 (BiExportEfiBootManager.c)
 * Callees:
 *     ZwSetBootOptions @ 0x14015D090 (ZwSetBootOptions.c)
 *     BiReleasePrivilege @ 0x14053C260 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14053C2AC (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  NTSTATUS v4; // ebx
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = BiAcquirePrivilege(0x16u, (__int64)&v6);
  if ( v4 >= 0 )
  {
    v4 = ZwSetBootOptions(BootOptions, FieldsToChange);
    BiReleasePrivilege(&v6);
  }
  return (unsigned int)v4;
}
