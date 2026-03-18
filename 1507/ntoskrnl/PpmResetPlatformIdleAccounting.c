/*
 * XREFs of PpmResetPlatformIdleAccounting @ 0x1402357E0
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x1406B0D4C (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1406B1428 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall PpmResetPlatformIdleAccounting(int *a1)
{
  unsigned int v1; // edi
  int v2; // esi
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax

  v1 = a1[1];
  v2 = *a1;
  memset(a1, 0, 992 * v1 + 24);
  if ( v1 )
  {
    v4 = a1 + 48;
    v5 = v1;
    do
    {
      *(v4 - 18) = -1LL;
      v6 = v4;
      v7 = 26LL;
      do
      {
        *v6 = -1LL;
        v6 += 4;
        --v7;
      }
      while ( v7 );
      v4 += 124;
      --v5;
    }
    while ( v5 );
  }
  a1[1] = v1;
  *a1 = v2 + 1;
  result = MEMORY[0xFFFFF78000000008];
  a1[2] = 0;
  *((_QWORD *)a1 + 2) = result;
  return result;
}
