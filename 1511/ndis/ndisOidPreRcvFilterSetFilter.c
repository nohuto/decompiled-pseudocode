/*
 * XREFs of ndisOidPreRcvFilterSetFilter @ 0x1C00BE7B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetReceiveFilter @ 0x1C003A288 (ndisSetReceiveFilter.c)
 */

char __fastcall ndisOidPreRcvFilterSetFilter(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // r9
  _DWORD *v3; // r10
  unsigned int v4; // r8d
  unsigned int v5; // eax
  unsigned int v6; // r10d

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 1;
  v3 = *(_DWORD **)(v1 + 40);
  if ( *(_DWORD *)(v1 + 4) == 12 )
  {
    v4 = 36;
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v1 + 48) >= 0x24u )
    {
      if ( *(_DWORD *)(v1 + 52) < 0x24u )
      {
        *(_DWORD *)(v1 + 68) = 36;
        *(_DWORD *)(a1 + 40) = -1073676266;
      }
    }
    else
    {
      *(_DWORD *)(v1 + 68) = 36;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( !*(_DWORD *)(a1 + 40) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v1 + 40) + 1LL) < 2u )
        goto LABEL_14;
      v4 = 44;
      *(_DWORD *)(a1 + 40) = 0;
      if ( *(_DWORD *)(v1 + 48) >= 0x2Cu )
      {
        if ( *(_DWORD *)(v1 + 52) < 0x2Cu )
        {
          *(_DWORD *)(v1 + 68) = 44;
          *(_DWORD *)(a1 + 40) = -1073676266;
        }
      }
      else
      {
        *(_DWORD *)(v1 + 68) = 44;
        *(_DWORD *)(a1 + 40) = -1073676268;
      }
      if ( !*(_DWORD *)(a1 + 40) )
      {
LABEL_14:
        v5 = v3[5] + v3[6] * v3[7];
        v6 = v4;
        *(_DWORD *)(a1 + 40) = 0;
        if ( v5 > v4 )
          v6 = v5;
        if ( *(_DWORD *)(v1 + 48) >= v5 )
        {
          if ( *(_DWORD *)(v1 + 52) < v4 )
          {
            *(_DWORD *)(v1 + 68) = v6;
            *(_DWORD *)(a1 + 40) = -1073676266;
          }
        }
        else
        {
          *(_DWORD *)(v1 + 68) = v6;
          *(_DWORD *)(a1 + 40) = -1073676268;
        }
        if ( !*(_DWORD *)(a1 + 40) )
        {
          if ( *(_QWORD *)a1 )
            return ndisSetReceiveFilter(a1);
          else
            return 0;
        }
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  return v2;
}
