/*
 * XREFs of PfxRemovePrefix @ 0x1800CE5D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDelete @ 0x1800616A0 (RtlDelete.c)
 */

__int64 __fastcall PfxRemovePrefix(__int64 a1, __int16 *a2)
{
  __int64 result; // rax
  __int16 *v3; // rax
  __int16 *i; // rbx
  __int16 *v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rdx
  __int64 *k; // rcx
  __int64 *v9; // rdx
  __int64 j; // rcx

  result = (unsigned int)(*a2 - 513);
  if ( (unsigned int)result <= 1 )
  {
    v3 = (__int16 *)*((_QWORD *)a2 + 2);
    for ( i = a2 + 8; v3 != i; v3 = *(__int16 **)v3 )
      i = v3;
    v5 = i - 8;
    v6 = RtlDelete((__int64 *)a2 + 2);
    if ( v6 )
    {
      result = (__int64)(v5 + 8);
      if ( v5 + 8 != (__int16 *)v6 )
      {
        v9 = v6 - 2;
        for ( j = *((_QWORD *)v5 + 1); *(__int16 **)(j + 8) != v5; j = *(_QWORD *)(j + 8) )
          ;
        *(_WORD *)v9 = 513;
        *(_QWORD *)(j + 8) = v9;
        v9[1] = *((_QWORD *)v5 + 1);
        result = 514LL;
        *((_QWORD *)v5 + 1) = 0LL;
        *v5 = 514;
      }
    }
    else
    {
      v7 = *((_QWORD *)v5 + 1);
      result = v7;
      for ( k = (__int64 *)(v7 + 8); (__int16 *)*k != v5; k = (__int64 *)(*k + 8) )
        result = *k;
      *(_QWORD *)(result + 8) = v7;
    }
  }
  return result;
}
