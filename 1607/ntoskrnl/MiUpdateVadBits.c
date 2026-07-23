/*
 * XREFs of MiUpdateVadBits @ 0x14046C99C
 * Callers:
 *     MiExpandVadBitMap @ 0x14046C874 (MiExpandVadBitMap.c)
 *     MiExpandVadBitMapDown @ 0x14065B50C (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x140013EB0 (MiCheckForConflictingVad.c)
 *     MiSetVadBits @ 0x14065B614 (MiSetVadBits.c)
 */

unsigned __int64 __fastcall MiUpdateVadBits(unsigned __int64 a1, unsigned __int64 a2)
{
  bool v2; // cf
  unsigned __int64 v3; // rdi
  _KPROCESS *Process; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 i; // rax
  __int64 j; // rdx
  unsigned __int64 v13; // rcx

  v2 = a2 < a1;
  v3 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v2 )
    v3 = 0x7FFFFFFEFFFFLL;
  result = (unsigned __int64)MiCheckForConflictingVad((__int64)Process, a1, v3 - 1);
  v8 = result;
  if ( result )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)v8;
      v10 = v8;
      if ( *(_QWORD *)v8 )
      {
        for ( i = *(_QWORD *)(v9 + 8); i; i = *(_QWORD *)(i + 8) )
          v9 = i;
      }
      else
      {
        for ( j = *(_QWORD *)(v8 + 16); ; j = *(_QWORD *)(v9 + 16) )
        {
          v9 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v9 || *(_QWORD *)(v9 + 8) == v10 )
            break;
          v10 = v9;
        }
      }
      if ( !v9
        || (((*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) << 12) | 0xFFF) < v7 )
      {
        break;
      }
      v8 = v9;
    }
    do
    {
      MiSetVadBits(v8);
      result = *(_QWORD *)(v8 + 8);
      v13 = v8;
      if ( result )
      {
        do
        {
          v8 = result;
          result = *(_QWORD *)result;
        }
        while ( result );
      }
      else
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v8 || *(_QWORD *)v8 == v13 )
            break;
          v13 = v8;
        }
      }
      if ( !v8 )
        break;
      result = *(unsigned int *)(v8 + 24);
    }
    while ( (result | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) << 12 < v3 );
  }
  return result;
}
