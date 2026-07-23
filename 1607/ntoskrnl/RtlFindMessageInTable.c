/*
 * XREFs of RtlFindMessageInTable @ 0x1400F7FD8
 * Callers:
 *     KeGetBugMessageResourceEntry @ 0x1401D4C10 (KeGetBugMessageResourceEntry.c)
 *     RtlFindMessage @ 0x1404FF964 (RtlFindMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindMessageInTable(int *a1, unsigned int a2, _QWORD *a3)
{
  int v3; // r9d
  unsigned int *v4; // rax
  unsigned __int16 *v6; // rcx
  unsigned int i; // edx

  v3 = *a1;
  v4 = (unsigned int *)(a1 + 1);
  if ( !*a1 )
    return 3221225737LL;
  while ( 1 )
  {
    --v3;
    if ( a2 >= *v4 && a2 <= v4[1] )
      break;
    v4 += 3;
    if ( !v3 )
      return 3221225737LL;
  }
  v6 = (unsigned __int16 *)((char *)a1 + v4[2]);
  for ( i = a2 - *v4; i; --i )
    v6 = (unsigned __int16 *)((char *)v6 + *v6);
  *a3 = v6;
  return 0LL;
}
