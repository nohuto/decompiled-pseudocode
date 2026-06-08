/*
 * XREFs of PerfSelectionPTStates @ 0x1C00044F0
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
  __int64 v8; // r11
  unsigned int v11; // r10d
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 i; // rdx

  v8 = *(_QWORD *)(a1 + 16);
  if ( (a5 & 1) != 0 )
  {
    v11 = *(_DWORD *)(v8 + 40);
  }
  else
  {
    v11 = *(_DWORD *)(v8 + 44);
    if ( !v11 )
      v11 = 1;
  }
  v12 = *(_QWORD *)(v8 + 32);
  if ( (a5 & 2) != 0 )
  {
    v13 = 0LL;
    for ( i = *(_QWORD *)(v8 + 32); (unsigned int)v13 < v11; v13 = (unsigned int)(v13 + 1) )
    {
      i = v12 + 32LL * (unsigned int)v13;
      if ( *(unsigned __int8 *)(i + 24) <= a2 )
        break;
    }
    if ( (_DWORD)v13 == v11 )
      v13 = v11 - 1;
  }
  else
  {
    LODWORD(v13) = v11;
    do
    {
      v13 = (unsigned int)(v13 - 1);
      i = v12 + 32LL * (unsigned int)v13;
    }
    while ( *(unsigned __int8 *)(i + 24) < a2 && (_DWORD)v13 );
  }
  while ( *(unsigned __int8 *)(i + 24) < a3 && (_DWORD)v13 )
  {
    v13 = (unsigned int)(v13 - 1);
    i = v12 + 32LL * (unsigned int)v13;
  }
  for ( ; *(unsigned __int8 *)(i + 24) > a4; i = v12 + 32LL * (unsigned int)v13 )
  {
    if ( (_DWORD)v13 == *(_DWORD *)(v8 + 40) - 1 )
      break;
    v13 = (unsigned int)(v13 + 1);
  }
  *a7 = v13;
  *a6 = *(_DWORD *)(i + 16);
  return *(unsigned __int8 *)(i + 24);
}
