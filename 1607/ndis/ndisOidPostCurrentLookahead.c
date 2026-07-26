/*
 * XREFs of ndisOidPostCurrentLookahead @ 0x1C001FE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ndisOidPostCurrentLookahead(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r10
  __int64 v3; // r9
  _DWORD *result; // rax

  v1 = a1[4];
  v2 = *a1;
  v3 = a1[3];
  if ( *(_DWORD *)(v1 + 4) == 1 )
  {
    if ( *((_DWORD *)a1 + 10) )
    {
      if ( v3 && *(_DWORD *)(v1 + 160) )
      {
        *(_QWORD *)(v1 + 40) = *(_QWORD *)(v1 + 152);
        result = (_DWORD *)*(unsigned int *)(v1 + 160);
        *(_DWORD *)(v1 + 48) = (_DWORD)result;
        *(_QWORD *)(v1 + 152) = 0LL;
        *(_DWORD *)(v1 + 160) = 0;
      }
    }
    else
    {
      *(_DWORD *)(v1 + 52) = 4;
      if ( *a1 )
      {
        result = *(_DWORD **)(v1 + 40);
        *(_DWORD *)(v2 + 592) = *result;
      }
      if ( a1[3] )
      {
        if ( *(_DWORD *)(v1 + 160) )
        {
          *(_QWORD *)(v1 + 40) = *(_QWORD *)(v1 + 152);
          *(_DWORD *)(v1 + 48) = *(_DWORD *)(v1 + 160);
          *(_QWORD *)(v1 + 152) = 0LL;
          *(_DWORD *)(v1 + 160) = 0;
        }
        result = *(_DWORD **)(v1 + 40);
        *(_DWORD *)(v3 + 264) = *result;
      }
    }
  }
  return result;
}
