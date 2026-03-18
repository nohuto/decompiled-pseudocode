/*
 * XREFs of CmpFileFlush @ 0x1405E4CAC
 * Callers:
 *     CmpFileFlushAndPurge @ 0x1403D2B0C (CmpFileFlushAndPurge.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x1405E67BC (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvWriteExternal @ 0x1405E6F98 (HvWriteExternal.c)
 *     CmpSaveKeyByFileCopy @ 0x1405EAD8C (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x140150F80 (ZwFlushBuffersFile.c)
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
  dword_1406FBDB0 = v4;
  result = 0;
  CmRegistryIODebug = 4;
  qword_1406FBDA8 = (__int64)v2;
  return result;
}
