/*
 * XREFs of PiDevCfgFreeDeviceMigrationNode @ 0x140608C88
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x140514B9C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140608318 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140609340 (PiDevCfgQueryDeviceMigrationNode.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
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
