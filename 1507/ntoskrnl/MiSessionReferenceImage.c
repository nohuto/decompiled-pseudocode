/*
 * XREFs of MiSessionReferenceImage @ 0x14015A40C
 * Callers:
 *     MmChangeImageProtection @ 0x140452054 (MmChangeImageProtection.c)
 *     MiResolveImageReferences @ 0x1405753E4 (MiResolveImageReferences.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1400FEA40 (MiSessionLookupImage.c)
 */

__int64 __fastcall MiSessionReferenceImage(unsigned __int64 a1)
{
  __int64 result; // rax

  result = (__int64)MiSessionLookupImage(a1);
  if ( result )
  {
    ++*(_DWORD *)(result + 60);
    return 1LL;
  }
  return result;
}
