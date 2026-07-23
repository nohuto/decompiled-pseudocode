/*
 * XREFs of SeRevalidateImage @ 0x14068CA74
 * Callers:
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 * Callees:
 *     <none>
 */

__int64 (*SeRevalidateImage())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1403011C0;
  if ( qword_1403011C0 )
    return (__int64 (*)(void))qword_1403011C0();
  return result;
}
