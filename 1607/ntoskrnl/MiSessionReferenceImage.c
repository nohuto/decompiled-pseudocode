/*
 * XREFs of MiSessionReferenceImage @ 0x140131878
 * Callers:
 *     MiResolveImageReferences @ 0x14046C67C (MiResolveImageReferences.c)
 *     MmChangeImageProtection @ 0x140483178 (MmChangeImageProtection.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1400865D4 (MiSessionLookupImage.c)
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
