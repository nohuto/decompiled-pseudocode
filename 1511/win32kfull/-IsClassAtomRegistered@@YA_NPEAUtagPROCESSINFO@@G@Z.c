/*
 * XREFs of ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C011E1BC
 * Callers:
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C011AC80 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 *     DestroyClass @ 0x1C011E02C (DestroyClass.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsClassAtomRegistered(struct tagPROCESSINFO *a1, __int16 a2)
{
  __int64 *i; // rax
  __int64 *j; // rax

  for ( i = (__int64 *)*((_QWORD *)a1 + 40); i; i = (__int64 *)*i )
  {
    if ( *((_WORD *)i + 4) == a2 || *((_WORD *)i + 5) == a2 )
    {
LABEL_12:
      LOBYTE(j) = 1;
      return (char)j;
    }
  }
  for ( j = (__int64 *)*((_QWORD *)a1 + 41); j; j = (__int64 *)*j )
  {
    if ( *((_WORD *)j + 4) == a2 || *((_WORD *)j + 5) == a2 )
      goto LABEL_12;
  }
  return (char)j;
}
