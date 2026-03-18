/*
 * XREFs of NVMeVersionCheck @ 0x1C000E6D0
 * Callers:
 *     NVMeNameSpaceIdentify @ 0x1C000DA70 (NVMeNameSpaceIdentify.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeVersionCheck(__int64 a1)
{
  unsigned int v1; // edx
  bool v2; // cc

  v1 = *(unsigned __int16 *)(a1 + 122);
  v2 = v1 <= 1;
  if ( v1 == 1 )
  {
    if ( *(_BYTE *)(a1 + 121) )
      return 1;
    v2 = 1;
  }
  return !v2;
}
