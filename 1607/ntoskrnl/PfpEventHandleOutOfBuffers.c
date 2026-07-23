/*
 * XREFs of PfpEventHandleOutOfBuffers @ 0x1400072AC
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x14000723C (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpEventHandleOutOfBuffers(_SLIST_ENTRY *a1)
{
  __int64 result; // rax

  result = PfFbBufferListAllocateTemporary(a1, 2048);
  if ( (int)result < 0 )
    ++DWORD1(xmmword_140328350);
  return result;
}
