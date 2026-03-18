/*
 * XREFs of MiPagefileCompare @ 0x14008614C
 * Callers:
 *     MmIsFileObjectAPagingFile @ 0x140086080 (MmIsFileObjectAPagingFile.c)
 *     MiUpdatePageFileList @ 0x14016BE74 (MiUpdatePageFileList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPagefileCompare(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 - 160);
  if ( a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return a1 > v2;
}
