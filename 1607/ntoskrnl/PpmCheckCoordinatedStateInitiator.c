/*
 * XREFs of PpmCheckCoordinatedStateInitiator @ 0x1401FF538
 * Callers:
 *     PpmCheckCoordinatedStateInitiator @ 0x1401FF538 (PpmCheckCoordinatedStateInitiator.c)
 *     PpmInstallCoordinatedIdleStates @ 0x14066AC3C (PpmInstallCoordinatedIdleStates.c)
 * Callees:
 *     PpmCheckCoordinatedStateInitiator @ 0x1401FF538 (PpmCheckCoordinatedStateInitiator.c)
 */

char __fastcall PpmCheckCoordinatedStateInitiator(unsigned int a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // esi
  char v5; // r8
  unsigned int v7; // r9d
  __int64 v8; // rdi
  __int64 v9; // rax

  v4 = 0;
  v5 = 0;
  v7 = a1;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)a3 == -1 || *(_DWORD *)a3 == v7 )
      {
        v8 = 0LL;
        if ( *(_DWORD *)(a3 + 8) )
          break;
      }
LABEL_10:
      ++v4;
      a3 += 24LL;
      if ( v4 >= a2 )
        return v5;
    }
    while ( 1 )
    {
      v9 = *(_QWORD *)(a3 + 16);
      if ( *(_BYTE *)(v9 + 24 * v8 + 1) )
      {
        if ( *(_DWORD *)a3 != -1 )
          return 1;
        v5 = PpmCheckCoordinatedStateInitiator(v7, *(unsigned int *)(v9 + 24 * v8 + 8), *(_QWORD *)(v9 + 24 * v8 + 16));
        if ( v5 )
          return v5;
        v7 = a1;
      }
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *(_DWORD *)(a3 + 8) )
        goto LABEL_10;
    }
  }
  return v5;
}
