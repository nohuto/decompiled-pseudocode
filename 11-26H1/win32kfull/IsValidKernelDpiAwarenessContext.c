/*
 * XREFs of IsValidKernelDpiAwarenessContext @ 0x1401BC5C0
 * Callers:
 *     NtUserTransformPoint @ 0x1401BC2B0 (NtUserTransformPoint.c)
 *     NtUserTransformRect @ 0x1401BC410 (NtUserTransformRect.c)
 * Callees:
 *     IsDpiValidPlateau @ 0x140302674 (IsDpiValidPlateau.c)
 */

__int64 __fastcall IsValidKernelDpiAwarenessContext(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 & 0x7FFFFFFF;
  if ( v1 == 34 || v1 == 24592 || v1 == 1073766416 || v1 == 18 )
    return 1LL;
  if ( (v1 & 0xFFFE00FF) == 0x11 )
    return (unsigned __int8)IsDpiValidPlateau((v1 >> 8) & 0x1FF);
  return 0LL;
}
