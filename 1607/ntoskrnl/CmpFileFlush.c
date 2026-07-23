/*
 * XREFs of CmpFileFlush @ 0x1406042B8
 * Callers:
 *     CmpFileFlushAndPurge @ 0x1404E99BC (CmpFileFlushAndPurge.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140605DC8 (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvWriteExternal @ 0x1406065A8 (HvWriteExternal.c)
 *     CmpSaveKeyByFileCopy @ 0x14060DB48 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x14015AB50 (ZwFlushBuffersFile.c)
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
