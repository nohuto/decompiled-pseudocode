/*
 * XREFs of MiUpdateVadBits @ 0x140468060
 * Callers:
 *     MiExpandVadBitMap @ 0x140467ED4 (MiExpandVadBitMap.c)
 *     MiExpandVadBitMapDown @ 0x1406A55E4 (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x140010030 (MiCheckForConflictingVad.c)
 *     MiSetVadBits @ 0x1406A5728 (MiSetVadBits.c)
 */

unsigned __int64 __fastcall MiUpdateVadBits(unsigned __int64 a1, void *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 i; // rax
  unsigned __int64 j; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx

  CurrentThread = KeGetCurrentThread();
  v4 = a2;
  if ( (unsigned __int64)a2 < a1 )
    v4 = MmHighestUserAddress;
  result = (unsigned __int64)MiCheckForConflictingVad(
                               (__int64)CurrentThread->ApcState.Process,
                               a1,
                               (unsigned __int64)v4 - 1);
  v6 = result;
  if ( result )
  {
    v7 = *(_QWORD *)result;
    if ( *(_QWORD *)result )
    {
      for ( i = *(_QWORD *)(v7 + 8); i; i = *(_QWORD *)(i + 8) )
        v7 = i;
    }
    else
    {
      for ( j = *(_QWORD *)(result + 16); ; j = *(_QWORD *)(v7 + 16) )
      {
        v7 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v7 || *(_QWORD *)(v7 + 8) == result )
          break;
        result = v7;
      }
    }
    while ( v7
         && (((*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) << 12) | 0xFFF) >= a1 )
    {
      v10 = *(_QWORD *)v7;
      v6 = v7;
      v11 = v7;
      if ( *(_QWORD *)v7 )
      {
        do
        {
          v7 = v10;
          v10 = *(_QWORD *)(v10 + 8);
        }
        while ( v10 );
      }
      else
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v7 || *(_QWORD *)(v7 + 8) == v11 )
            break;
          v11 = v7;
        }
      }
    }
    do
    {
      MiSetVadBits(v6);
      result = *(_QWORD *)(v6 + 8);
      v12 = v6;
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
          if ( !v6 || *(_QWORD *)v6 == v12 )
            break;
          v12 = v6;
        }
      }
      if ( !v6 )
        break;
      result = *(unsigned int *)(v6 + 24);
    }
    while ( (result | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) << 12 < (unsigned __int64)v4 );
  }
  return result;
}
