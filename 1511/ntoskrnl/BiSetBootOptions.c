/*
 * XREFs of BiSetBootOptions @ 0x140690FB8
 * Callers:
 *     BiExportEfiBootManager @ 0x1406902DC (BiExportEfiBootManager.c)
 * Callees:
 *     ZwSetBootOptions @ 0x140153420 (ZwSetBootOptions.c)
 *     BiReleasePrivilege @ 0x1404FB4AC (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1404FB4F8 (BiAcquirePrivilege.c)
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
