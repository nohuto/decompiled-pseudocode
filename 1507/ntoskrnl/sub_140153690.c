/*
 * XREFs of sub_140153690 @ 0x140153690
 * Callers:
 *     LookupEntryPoint @ 0x1401535FC (LookupEntryPoint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140153690(char *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  char *v8; // rax
  __int64 v9; // r10
  __int64 v10; // rdx
  char v11; // cl
  int v12; // eax
  __int64 v13; // rax

  while ( a3 )
  {
    v8 = a1;
    v9 = a3 >> 1;
    v10 = a2 + *(unsigned int *)(a4 + 4 * v9) - (_QWORD)a1;
    while ( 1 )
    {
      v11 = *v8;
      if ( *v8 != v8[v10] )
        break;
      ++v8;
      if ( !v11 )
      {
        v12 = 0;
        goto LABEL_6;
      }
    }
    v12 = (unsigned __int8)*v8 < (unsigned __int8)v8[v10] ? -1 : 1;
LABEL_6:
    if ( !v12 )
      return *(unsigned __int16 *)(a5 + 2 * v9);
    if ( a3 == 1 )
      break;
    if ( v12 >= 0 )
    {
      v13 = (unsigned int)(v9 + 1);
      a4 += 4 * v13;
      a5 += 2 * v13;
      a3 += -1 - v9;
    }
    else
    {
      a3 >>= 1;
    }
  }
  return 0xFFFFLL;
}
