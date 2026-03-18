/*
 * XREFs of RIMReleaseCursor @ 0x1C00D1BF0
 * Callers:
 *     RIMRemoveContactFromActiveList @ 0x1C00D1C4C (RIMRemoveContactFromActiveList.c)
 * Callees:
 *     <none>
 */

void __fastcall RIMReleaseCursor(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  int v5; // eax
  unsigned int v6; // r8d
  __int64 v7; // r10

  v3 = 0LL;
  if ( *(_DWORD *)(a2 + 688) )
  {
    v5 = *(_DWORD *)(a2 + 288);
    if ( v5 )
      *(_DWORD *)(a2 + 288) = v5 - 1;
  }
  else
  {
    *(_DWORD *)(a2 + 288) = 0;
  }
  v6 = *(_DWORD *)(a2 + 292);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a2 + 312);
    while ( a3 != *(_DWORD *)(v7 + 12 * v3 + 4) )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v6 )
        return;
    }
    *(_DWORD *)(v7 + 12 * v3 + 8) = 0;
  }
}
