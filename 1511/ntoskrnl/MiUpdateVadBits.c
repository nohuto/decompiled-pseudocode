/*
 * XREFs of MiUpdateVadBits @ 0x140462EC8
 * Callers:
 *     MiExpandVadBitMap @ 0x140462D7C (MiExpandVadBitMap.c)
 *     MiExpandVadBitMapDown @ 0x140625B7C (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x140038010 (MiCheckForConflictingVad.c)
 *     MiSetVadBits @ 0x140625CBC (MiSetVadBits.c)
 */

unsigned __int64 __fastcall MiUpdateVadBits(unsigned __int64 a1, void *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID v3; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 i; // rax
  __int64 j; // rdx
  unsigned __int64 v11; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  if ( (unsigned __int64)a2 < a1 )
    v3 = MmHighestUserAddress;
  result = (unsigned __int64)MiCheckForConflictingVad(
                               (__int64)CurrentThread->ApcState.Process,
                               a1,
                               (unsigned __int64)v3 - 1);
  v6 = result;
  if ( result )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)v6;
      v8 = v6;
      if ( *(_QWORD *)v6 )
      {
        for ( i = *(_QWORD *)(v7 + 8); i; i = *(_QWORD *)(i + 8) )
          v7 = i;
      }
      else
      {
        for ( j = *(_QWORD *)(v6 + 16); ; j = *(_QWORD *)(v7 + 16) )
        {
          v7 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v7 || *(_QWORD *)(v7 + 8) == v8 )
            break;
          v8 = v7;
        }
      }
      if ( !v7
        || (((*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) << 12) | 0xFFF) < v5 )
      {
        break;
      }
      v6 = v7;
    }
    do
    {
      MiSetVadBits(v6);
      result = *(_QWORD *)(v6 + 8);
      v11 = v6;
      if ( result )
      {
        do
        {
          v6 = result;
          result = *(_QWORD *)result;
        }
        while ( result );
      }
      else
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v6 || *(_QWORD *)v6 == v11 )
            break;
          v11 = v6;
        }
      }
      if ( !v6 )
        break;
      result = *(unsigned int *)(v6 + 24);
    }
    while ( (result | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) << 12 < (unsigned __int64)v3 );
  }
  return result;
}
