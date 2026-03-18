/*
 * XREFs of ReleaseCursor @ 0x1C01CDF9C
 * Callers:
 *     RemoveContactFromActiveList @ 0x1C01CE06C (RemoveContactFromActiveList.c)
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
  if ( *(_DWORD *)(a1 + 704) )
  {
    v4 = *(_DWORD *)(a1 + 304);
    if ( v4 )
      *(_DWORD *)(a1 + 304) = v4 - 1;
  }
  else
  {
    *(_DWORD *)(a1 + 304) = 0;
  }
  v5 = *(_DWORD *)(a1 + 308);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 328);
    while ( a2 != *(_DWORD *)(v6 + 12LL * v3 + 4) )
    {
      if ( ++v3 >= v5 )
        return;
    }
    *(_DWORD *)(v6 + 12LL * v3 + 8) = 0;
  }
}
