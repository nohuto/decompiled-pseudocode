/*
 * XREFs of DestroyProcessesClasses @ 0x14014E170
 * Callers:
 *     <none>
 * Callees:
 *     DestroyClass @ 0x14014EF4C (DestroyClass.c)
 */

__int64 __fastcall DestroyProcessesClasses(__int64 a1)
{
  _QWORD *i; // rdi
  __int64 result; // rax

  for ( i = (_QWORD *)(a1 + 352); *i; result = DestroyClass(a1, i) )
    ;
  while ( *(_QWORD *)(a1 + 360) )
    result = DestroyClass(a1, a1 + 360);
  return result;
}
