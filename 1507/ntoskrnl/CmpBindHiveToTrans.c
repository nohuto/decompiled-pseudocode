/*
 * XREFs of CmpBindHiveToTrans @ 0x1404F1670
 * Callers:
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpBindHiveToTrans(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int64 result; // rax

  v2 = 0;
  if ( a1 )
  {
    v3 = *(unsigned int *)(a2 + 108);
    if ( (_DWORD)v3 )
    {
      while ( 1 )
      {
        result = v2;
        if ( a1 == *(_QWORD *)(a2 + 8LL * v2 + 112) )
          break;
        if ( ++v2 >= (unsigned int)v3 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      *(_QWORD *)(a2 + 8 * v3 + 112) = a1;
      ++*(_DWORD *)(a2 + 108);
    }
  }
  return result;
}
