/*
 * XREFs of PfpEventHandleOutOfBuffers @ 0x140158FD0
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x140138B08 (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpEventHandleOutOfBuffers(_SLIST_ENTRY *a1)
{
  __int64 result; // rax

  result = PfFbBufferListAllocateTemporary(a1, 2048);
  if ( (int)result < 0 )
    ++DWORD1(xmmword_140350510);
  return result;
}
