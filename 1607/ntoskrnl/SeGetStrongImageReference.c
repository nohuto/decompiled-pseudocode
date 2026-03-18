/*
 * XREFs of SeGetStrongImageReference @ 0x14068C978
 * Callers:
 *     MiValidateInPage @ 0x1400267B0 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x14052685C (MiValidateImagePfn.c)
 *     MmGetSectionStrongImageReference @ 0x140662F9C (MmGetSectionStrongImageReference.c)
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
