/*
 * XREFs of ReleaseCursor @ 0x1C01CC3BC
 * Callers:
 *     RemoveContactFromActiveList @ 0x1C01CC48C (RemoveContactFromActiveList.c)
 * Callees:
 *     <none>
 */

void __fastcall ReleaseCursor(__int64 a1, int a2)
{
  unsigned int v3; // r8d
  int v4; // eax
  unsigned int v5; // edx
  __int64 v6; // r9

  v3 = 0;
  if ( *(_DWORD *)(a1 + 688) )
  {
    v4 = *(_DWORD *)(a1 + 288);
    if ( v4 )
      *(_DWORD *)(a1 + 288) = v4 - 1;
  }
  else
  {
    *(_DWORD *)(a1 + 288) = 0;
  }
  v5 = *(_DWORD *)(a1 + 292);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 312);
    while ( a2 != *(_DWORD *)(v6 + 12LL * v3 + 4) )
    {
      if ( ++v3 >= v5 )
        return;
    }
    *(_DWORD *)(v6 + 12LL * v3 + 8) = 0;
  }
}
