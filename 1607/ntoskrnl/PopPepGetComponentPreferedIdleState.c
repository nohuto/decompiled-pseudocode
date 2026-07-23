/*
 * XREFs of PopPepGetComponentPreferedIdleState @ 0x1400C0AE4
 * Callers:
 *     PopPepUpdateIdleState @ 0x1400C0A88 (PopPepUpdateIdleState.c)
 * Callees:
 *     PopPepArmIdleTimer @ 0x140205C1C (PopPepArmIdleTimer.c)
 */

__int64 __fastcall PopPepGetComponentPreferedIdleState(_DWORD *a1)
{
  unsigned int v1; // r8d
  int v2; // r9d
  unsigned int v4; // ebx
  __int64 v6; // r10
  unsigned int *v7; // rcx
  bool v8; // cl
  unsigned int v9; // eax

  v1 = a1[41];
  v2 = 0;
  if ( a1[47] - 1 < v1 )
    v1 = a1[47] - 1;
  v4 = v1;
  if ( v1 )
  {
    v6 = 6LL;
    v7 = a1 + 38;
    do
    {
      if ( *v7 < v4 )
        v4 = *v7;
      if ( *v7 == v1 )
        ++v2;
      ++v7;
      --v6;
    }
    while ( v6 );
    v8 = 0;
    if ( v2 == 5 )
      v8 = a1[40] < v1;
    v9 = a1[1];
    if ( ((v9 >> 2) & 1) == 0 && v8 )
    {
      a1[1] = v9 | 4;
      if ( _InterlockedIncrement(&PopPepPoweredIdleComponentCount) == 1 )
        PopPepArmIdleTimer(0LL);
    }
    else if ( ((a1[1] >> 2) & 1) != 0 && !v8 )
    {
      a1[1] = v9 & 0xFFFFFFFB;
      _InterlockedDecrement(&PopPepPoweredIdleComponentCount);
    }
  }
  return v4;
}
