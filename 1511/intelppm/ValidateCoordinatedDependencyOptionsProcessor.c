/*
 * XREFs of ValidateCoordinatedDependencyOptionsProcessor @ 0x1C001B8C4
 * Callers:
 *     ValidateCoordinatedDependencyOptions @ 0x1C001B6B0 (ValidateCoordinatedDependencyOptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateCoordinatedDependencyOptionsProcessor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  __int64 v5; // rbx
  unsigned int v7; // ecx
  unsigned int v8; // r11d
  unsigned int v9; // edx
  unsigned int *v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rax

  v5 = *(_QWORD *)(a3 + 16);
  KeAddProcessorAffinityEx(a4, *(unsigned int *)(v5 + 56));
  v7 = 0;
  v8 = *(_DWORD *)(a3 + 12);
  v9 = 0;
  v10 = *(unsigned int **)(v5 + 1080);
  *a5 = 0;
  if ( v8 )
  {
    v11 = *v10;
    while ( 1 )
    {
      v12 = *(unsigned __int8 *)(a3 + 4LL * v9 + 24);
      if ( (unsigned int)v12 >= v11 )
        break;
      if ( *(_BYTE *)(a3 + 4LL * v9 + 27) )
      {
        if ( (v10[3 * v12 + 1] & 0x80u) != 0 )
          *a5 = 1;
        if ( !*(_BYTE *)(a3 + 4LL * v9 + 25) )
          break;
      }
      if ( ++v9 >= v8 )
        return v7;
    }
    return (unsigned int)-1073741811;
  }
  return v7;
}
