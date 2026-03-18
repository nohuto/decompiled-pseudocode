/*
 * XREFs of RIMIsParentCommon @ 0x1C00059A4
 * Callers:
 *     RIMFindInputDeviceForConfig @ 0x1C0005790 (RIMFindInputDeviceForConfig.c)
 *     RIMFindSiblingMouseDevice @ 0x1C000587C (RIMFindSiblingMouseDevice.c)
 *     RIMFindConfigDeviceForInput @ 0x1C007BE20 (RIMFindConfigDeviceForInput.c)
 *     RIMFindReferencedSiblingPointerDeviceForMouseDevice @ 0x1C00C3DAC (RIMFindReferencedSiblingPointerDeviceForMouseDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIsParentCommon(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int16 a5)
{
  __int64 v5; // r10
  unsigned int v6; // edi

  v5 = *(unsigned int *)(a1 + 328);
  v6 = 0;
  if ( *(_WORD *)(a3 + 110) == a4
    && *(_WORD *)(a3 + 112) == a5
    && (_DWORD)v5 == *(_DWORD *)(a2 + 328)
    && (!(_DWORD)v5
     || RtlCompareMemory(*(const void **)(a1 + 320), *(const void **)(a2 + 320), *(unsigned int *)(a1 + 328)) == v5) )
  {
    return 1;
  }
  return v6;
}
