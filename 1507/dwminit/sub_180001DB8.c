/*
 * XREFs of sub_180001DB8 @ 0x180001DB8
 * Callers:
 *     DwmpTerminateSessionProcess @ 0x1800030E0 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     sub_180003A80 @ 0x180003A80 (sub_180003A80.c)
 *     sub_180003B24 @ 0x180003B24 (sub_180003B24.c)
 *     memset @ 0x180007606 (memset.c)
 */

__int64 sub_180001DB8()
{
  unsigned int v0; // ebx
  int v1; // eax
  struct _UNICODE_STRING DestinationString[3]; // [rsp+30h] [rbp-38h] BYREF
  PVOID Buffer; // [rsp+70h] [rbp+8h] BYREF

  memset(DestinationString, 0, sizeof(DestinationString));
  v0 = 0;
  Buffer = 0LL;
  RtlInitUnicodeString(DestinationString, L"Window Manager");
  RtlInitUnicodeString(&DestinationString[1], ::Buffer);
  v1 = LsaLookupManageSidNameMapping(1LL, DestinationString, &Buffer);
  if ( v1 < 0 )
  {
    v0 = v1 | 0x10000000;
    if ( &unk_180008E00 )
      sub_180003B24(4, (unsigned int)&unk_180008E00, 1, v0, 596);
    else
      sub_180003A80(v0, 596LL);
  }
  if ( Buffer )
    LsaLookupFreeMemory(Buffer);
  return v0;
}
