/*
 * XREFs of PerfSelectionPTStates @ 0x1C0001230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfSelectionPTStates(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        _DWORD *a6,
        _QWORD *a7)
{
  __int64 v8; // rbx
  unsigned int v11; // r10d
  __int64 v12; // r8
  unsigned int v13; // eax
  __int64 i; // rdx

  v8 = *(_QWORD *)(a1 + 24);
  if ( (a5 & 1) != 0 )
  {
    v11 = *(_DWORD *)(v8 + 56);
  }
  else
  {
    v11 = *(_DWORD *)(v8 + 60);
    if ( !v11 )
      v11 = 1;
  }
  v12 = *(_QWORD *)(v8 + 48);
  if ( (a5 & 2) != 0 )
  {
    v13 = 0;
    for ( i = *(_QWORD *)(v8 + 48); v13 < v11; ++v13 )
    {
      i = v12 + 32LL * v13;
      if ( *(unsigned __int8 *)(i + 24) <= a2 )
        break;
    }
    if ( v13 == v11 )
      v13 = v11 - 1;
  }
  else
  {
    v13 = v11;
    do
      i = v12 + 32LL * --v13;
    while ( *(unsigned __int8 *)(i + 24) < a2 && v13 );
  }
  for ( ; *(unsigned __int8 *)(i + 24) < a3; i = v12 + 32LL * --v13 )
  {
    if ( !v13 )
      break;
  }
  for ( ; *(unsigned __int8 *)(i + 24) > a4; i = v12 + 32LL * ++v13 )
  {
    if ( v13 == *(_DWORD *)(v8 + 56) - 1 )
      break;
  }
  *a7 = v13;
  *a6 = *(_DWORD *)(i + 16);
  return *(unsigned __int8 *)(i + 24);
}
