/*
 * XREFs of PopPepGetComponentPreferedIdleState @ 0x140028698
 * Callers:
 *     PopPepUpdateIdleState @ 0x140028640 (PopPepUpdateIdleState.c)
 * Callees:
 *     PopPepArmIdleTimer @ 0x140136200 (PopPepArmIdleTimer.c)
 */

__int64 __fastcall PopPepGetComponentPreferedIdleState(_DWORD *a1)
{
  unsigned int v1; // r8d
  int v2; // r9d
  unsigned int v4; // ebx
  unsigned int *v5; // rcx
  __int64 v6; // r10
  bool v7; // cl
  unsigned int v8; // eax

  v1 = a1[41];
  v2 = 0;
  if ( a1[47] - 1 < v1 )
    v1 = a1[47] - 1;
  v4 = v1;
  if ( v1 )
  {
    v5 = a1 + 38;
    v6 = 6LL;
    do
    {
      if ( *v5 < v4 )
        v4 = *v5;
      if ( *v5 == v1 )
        ++v2;
      ++v5;
      --v6;
    }
    while ( v6 );
    v7 = 0;
    if ( v2 == 5 )
      v7 = a1[40] < v1;
    v8 = a1[1];
    if ( ((v8 >> 2) & 1) == 0 && v7 )
    {
      a1[1] = v8 | 4;
      if ( !_InterlockedExchangeAdd(&PopPepPoweredIdleComponentCount, 1u) )
        PopPepArmIdleTimer(0LL);
    }
    else if ( ((a1[1] >> 2) & 1) != 0 && !v7 )
    {
      a1[1] = v8 & 0xFFFFFFFB;
      _InterlockedDecrement(&PopPepPoweredIdleComponentCount);
    }
  }
  return v4;
}
