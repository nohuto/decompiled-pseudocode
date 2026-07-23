/*
 * XREFs of VfInsertContext @ 0x140222554
 * Callers:
 *     <none>
 * Callees:
 *     ViUnlockContextPointer @ 0x1406FE474 (ViUnlockContextPointer.c)
 *     ViAllocateContextTable @ 0x140704994 (ViAllocateContextTable.c)
 *     ViFreeContextTable @ 0x1407049CC (ViFreeContextTable.c)
 *     ViGetContextPointer @ 0x1407049DC (ViGetContextPointer.c)
 *     ViIsContextIdValid @ 0x140704A34 (ViIsContextIdValid.c)
 *     ViLockContextPointer @ 0x140704A58 (ViLockContextPointer.c)
 */

__int64 __fastcall VfInsertContext(unsigned __int16 *a1)
{
  unsigned int v1; // ebx
  unsigned int v4; // r8d
  __int64 ContextPointer; // rax
  volatile signed __int64 *v6; // rsi
  __int64 i; // rcx
  void *ContextTable; // rax
  volatile signed __int64 v9; // rax
  __int64 v10; // rcx

  v1 = 0;
  if ( !ViVerifierEnabled )
    return 3221225473LL;
  if ( !(unsigned __int8)ViIsContextIdValid(*a1, a1[1]) )
    return 3221225485LL;
  ContextPointer = ViGetContextPointer(*((_QWORD *)a1 + 1), v4);
  v6 = (volatile signed __int64 *)ContextPointer;
  if ( !ContextPointer )
    return 3221225659LL;
  for ( i = ContextPointer; !(unsigned __int8)ViLockContextPointer(i); i = (__int64)v6 )
  {
    ContextTable = (void *)ViAllocateContextTable(*a1);
    if ( !ContextTable )
      return 3221225626LL;
    if ( !_InterlockedCompareExchange64(v6, (signed __int64)ContextTable, 0LL) )
      break;
    ViFreeContextTable(ContextTable);
  }
  v9 = *v6;
  v10 = a1[1];
  if ( *(_QWORD *)(*v6 + 8 * v10 + 8) )
  {
    v1 = -1073741270;
  }
  else
  {
    *(_QWORD *)(v9 + 8 * v10 + 8) = a1;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 4));
    _InterlockedIncrement((volatile signed __int32 *)a1 + 1);
  }
  ViUnlockContextPointer(v6);
  return v1;
}
