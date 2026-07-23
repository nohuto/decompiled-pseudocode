/*
 * XREFs of PiDevCfgFreeDeviceMigrationNode @ 0x140638D48
 * Callers:
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406383DC (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMigrateDevice @ 0x14063A918 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14063BAA8 (PiDevCfgQueryDeviceMigrationNode.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 */

void __fastcall PiDevCfgFreeDeviceMigrationNode(__int64 a1)
{
  void *v2; // rcx
  UNICODE_STRING *v3; // rdi
  __int64 v4; // rsi

  v2 = *(void **)(a1 + 40);
  if ( v2 )
    ZwClose(v2);
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 24));
  v3 = (UNICODE_STRING *)(a1 + 48);
  v4 = 2LL;
  do
  {
    RtlFreeAnsiString(v3++);
    --v4;
  }
  while ( v4 );
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 104));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 120));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 136));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 160));
  ExFreePoolWithTag((PVOID)a1, 0);
}
