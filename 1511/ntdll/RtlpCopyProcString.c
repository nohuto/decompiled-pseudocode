/*
 * XREFs of RtlpCopyProcString @ 0x18004D6F8
 * Callers:
 *     RtlCreateProcessParametersEx @ 0x18004D290 (RtlCreateProcessParametersEx.c)
 * Callees:
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

char *__fastcall RtlpCopyProcString(void **a1, __int64 a2, unsigned __int16 *a3, unsigned int a4)
{
  __int64 v5; // rbx
  const void *v6; // rdx
  char *v9; // rdi
  unsigned __int16 v10; // dx
  char *result; // rax

  v5 = a4;
  v6 = (const void *)*((_QWORD *)a3 + 1);
  if ( v6 && *a3 )
    memmove(*a1, v6, *a3);
  v9 = (char *)*a1;
  *(_QWORD *)(a2 + 8) = *a1;
  v10 = *a3;
  *(_WORD *)a2 = *a3;
  *(_WORD *)(a2 + 2) = v5;
  if ( v10 < (unsigned __int16)v5 )
    memset(&v9[v10], 0, (unsigned __int16)v5 - v10);
  result = &v9[(v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL];
  *a1 = result;
  return result;
}
