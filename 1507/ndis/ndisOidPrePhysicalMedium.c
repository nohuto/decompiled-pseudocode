/*
 * XREFs of ndisOidPrePhysicalMedium @ 0x1C009A780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ndisOidPrePhysicalMedium(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  int v3; // r9d
  __int64 v4; // r8
  int v5; // ecx

  v1 = a1[4];
  v2 = a1[2];
  v3 = *(_DWORD *)(v1 + 32);
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 32);
  }
  else
  {
    v4 = 0LL;
    if ( *a1 )
      v4 = *a1;
  }
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < 4u )
    {
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    if ( !*((_DWORD *)a1 + 10) )
    {
      v5 = *(_DWORD *)(v4 + 1832);
      if ( v3 == 66050 && v5 == 14 )
        v5 = 0;
      **(_DWORD **)(v1 + 40) = v5;
      *(_DWORD *)(v1 + 52) = 4;
    }
  }
  return 1;
}
