/*
 * XREFs of DestroyProcessesClasses @ 0x1C008FB20
 * Callers:
 *     <none>
 * Callees:
 *     DestroyClass @ 0x1C008FB6C (DestroyClass.c)
 */

__int64 __fastcall DestroyProcessesClasses(struct tagPROCESSINFO *a1)
{
  _QWORD *v2; // rdi
  __int64 result; // rax

  v2 = (_QWORD *)((char *)a1 + 312);
  while ( *v2 )
    result = DestroyClass(a1);
  while ( *((_QWORD *)a1 + 40) )
    result = DestroyClass(a1);
  return result;
}
