/*
 * XREFs of MiSessionReferenceImage @ 0x14011FF1C
 * Callers:
 *     MiResolveImageReferences @ 0x1403CCAA8 (MiResolveImageReferences.c)
 *     MmChangeImageProtection @ 0x1403CF640 (MmChangeImageProtection.c)
 * Callees:
 *     MiSessionLookupImage @ 0x140120308 (MiSessionLookupImage.c)
 */

__int64 __fastcall MiSessionReferenceImage(__int64 a1)
{
  __int64 result; // rax

  result = MiSessionLookupImage(a1);
  if ( result )
  {
    ++*(_DWORD *)(result + 60);
    return 1LL;
  }
  return result;
}
