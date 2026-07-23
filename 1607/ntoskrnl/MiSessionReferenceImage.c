/*
 * XREFs of MiSessionReferenceImage @ 0x140131DE8
 * Callers:
 *     MiResolveImageReferences @ 0x14046B54C (MiResolveImageReferences.c)
 *     MmChangeImageProtection @ 0x140481ECC (MmChangeImageProtection.c)
 * Callees:
 *     MiSessionLookupImage @ 0x140087EC4 (MiSessionLookupImage.c)
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
