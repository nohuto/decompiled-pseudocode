/*
 * XREFs of CmpFileFlush @ 0x14065BBC0
 * Callers:
 *     CmpFileFlushAndPurge @ 0x1404D6564 (CmpFileFlushAndPurge.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x14065DC30 (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvWriteExternal @ 0x14065E3F4 (HvWriteExternal.c)
 *     CmpSaveKeyByFileCopy @ 0x140662794 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x14017F950 (ZwFlushBuffersFile.c)
 */

char __fastcall CmpFileFlush(__int64 a1, unsigned int a2)
{
  void *v2; // rbx
  char result; // al
  NTSTATUS v4; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(void **)(a1 + 8LL * a2 + 2664);
  if ( !v2 )
    return 1;
  if ( CmpNoWrite )
    return 1;
  v4 = ZwFlushBuffersFile(v2, &IoStatusBlock);
  if ( v4 >= 0 )
    return 1;
  dword_14077EDB8 = v4;
  result = 0;
  CmRegistryIODebug = 4;
  qword_14077EDB0 = (__int64)v2;
  return result;
}
