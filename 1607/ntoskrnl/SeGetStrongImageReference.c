/*
 * XREFs of SeGetStrongImageReference @ 0x14068CA5C
 * Callers:
 *     MiValidateInPage @ 0x140026330 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x1405098BC (MiValidateImagePfn.c)
 *     MmGetSectionStrongImageReference @ 0x140663080 (MmGetSectionStrongImageReference.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeGetStrongImageReference(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140301198 )
    return qword_140301198();
  *a2 = 0LL;
  return result;
}
