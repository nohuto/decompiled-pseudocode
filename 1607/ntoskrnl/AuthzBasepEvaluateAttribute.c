/*
 * XREFs of AuthzBasepEvaluateAttribute @ 0x14009ED9C
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepEvaluateAttribute(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v2; // eax
  int v3; // eax
  _QWORD *v4; // rax
  bool v6; // zf

  v1 = 0;
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 32);
    if ( v2 )
    {
      if ( v2 > 1 )
        return 1;
      v3 = *(unsigned __int16 *)(a1 + 24);
      if ( *(_WORD *)(a1 + 24) )
      {
        if ( v3 == 6 || *(unsigned __int16 *)(a1 + 24) <= 2u )
        {
          v4 = *(_QWORD **)(a1 + 40);
          if ( v4 && *v4 )
            return 1;
        }
        else
        {
          if ( v3 == 3 )
          {
            v6 = **(_WORD **)(a1 + 40) == 0;
LABEL_18:
            if ( v6 )
              return v1;
            return 1;
          }
          if ( v3 == 5 || v3 == 16 )
          {
            v6 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8LL) == 0;
            goto LABEL_18;
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v1;
}
