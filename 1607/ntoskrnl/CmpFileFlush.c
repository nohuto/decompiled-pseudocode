/*
 * XREFs of CmpFileFlush @ 0x140604204
 * Callers:
 *     CmpFileFlushAndPurge @ 0x140506A2C (CmpFileFlushAndPurge.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140605D14 (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvWriteExternal @ 0x1406064F4 (HvWriteExternal.c)
 *     CmpSaveKeyByFileCopy @ 0x14060DA94 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x14015A5E0 (ZwFlushBuffersFile.c)
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
  dword_140747ED8 = v4;
  result = 0;
  CmRegistryIODebug = 4;
  qword_140747ED0 = (__int64)v2;
  return result;
}
