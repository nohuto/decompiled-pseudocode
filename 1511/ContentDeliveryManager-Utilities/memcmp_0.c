/*
 * XREFs of memcmp_0 @ 0x180028222
 * Callers:
 *     _contentmanagement_IID_Lookup @ 0x180001010 (_contentmanagement_IID_Lookup.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
