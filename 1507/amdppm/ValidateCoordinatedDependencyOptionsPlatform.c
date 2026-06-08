/*
 * XREFs of ValidateCoordinatedDependencyOptionsPlatform @ 0x1C001D1B0
 * Callers:
 *     ValidateCoordinatedDependencyOptions @ 0x1C001CFF8 (ValidateCoordinatedDependencyOptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateCoordinatedDependencyOptionsPlatform(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // ebx
  __int64 v9; // rdx
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 v12; // r14
  int IsEmptyAffinity; // eax
  __int64 v14; // rdx

  v6 = 0;
  v9 = a1;
  v10 = 0;
  *a6 = 0;
  if ( *(_DWORD *)(a4 + 12) )
  {
    while ( 1 )
    {
      v11 = *(unsigned __int8 *)(a4 + 4LL * v10 + 24);
      if ( (unsigned int)v11 >= a2 )
        break;
      v12 = v9 + 216 * v11;
      if ( *(_BYTE *)(v12 + 249) )
        *a6 = 1;
      IsEmptyAffinity = KeIsEmptyAffinityEx(a5);
      v14 = v12 + 48;
      if ( IsEmptyAffinity )
      {
        KeCopyAffinityEx(a5, v14);
      }
      else if ( !(unsigned int)KeIsEqualAffinityEx(a5, v14) )
      {
        return (unsigned int)-1073741811;
      }
      if ( *(_BYTE *)(a4 + 4LL * v10 + 27) && !*(_BYTE *)(a4 + 4LL * v10 + 25) )
        break;
      if ( ++v10 >= *(_DWORD *)(a4 + 12) )
        return v6;
      v9 = a1;
    }
    return (unsigned int)-1073741811;
  }
  return v6;
}
