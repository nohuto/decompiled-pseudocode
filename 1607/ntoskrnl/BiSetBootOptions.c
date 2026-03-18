/*
 * XREFs of BiSetBootOptions @ 0x1406D5784
 * Callers:
 *     BiExportEfiBootManager @ 0x1406D4A80 (BiExportEfiBootManager.c)
 * Callees:
 *     ZwSetBootOptions @ 0x14015CB20 (ZwSetBootOptions.c)
 *     BiReleasePrivilege @ 0x14053BD20 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14053BD6C (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  int v4; // ebx
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = BiAcquirePrivilege(0x16u, (__int64)&v6);
  if ( v4 >= 0 )
  {
    v4 = ZwSetBootOptions(BootOptions, FieldsToChange);
    BiReleasePrivilege(&v6);
  }
  return (unsigned int)v4;
}
