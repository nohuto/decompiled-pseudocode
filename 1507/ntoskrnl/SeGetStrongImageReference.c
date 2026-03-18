/*
 * XREFs of SeGetStrongImageReference @ 0x1406D07B4
 * Callers:
 *     MiValidateInPage @ 0x140087A20 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x1404B13C4 (MiValidateImagePfn.c)
 *     MmGetSectionStrongImageReference @ 0x1406AA510 (MmGetSectionStrongImageReference.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeGetStrongImageReference(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_14032C198 )
    return qword_14032C198();
  *a2 = 0LL;
  return result;
}
