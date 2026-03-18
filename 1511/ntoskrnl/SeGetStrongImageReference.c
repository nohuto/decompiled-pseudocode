/*
 * XREFs of SeGetStrongImageReference @ 0x14064D37C
 * Callers:
 *     MiValidateInPage @ 0x1400390F0 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x1404DB440 (MiValidateImagePfn.c)
 *     MmGetSectionStrongImageReference @ 0x14062CA98 (MmGetSectionStrongImageReference.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeGetStrongImageReference(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_1402DBE38 )
    return qword_1402DBE38();
  *a2 = 0LL;
  return result;
}
