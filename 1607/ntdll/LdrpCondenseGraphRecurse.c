/*
 * XREFs of LdrpCondenseGraphRecurse @ 0x180074658
 * Callers:
 *     LdrpCondenseGraph @ 0x180074624 (LdrpCondenseGraph.c)
 *     LdrpCondenseGraphRecurse @ 0x180074658 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpCondenseGraphRecurse @ 0x180074658 (LdrpCondenseGraphRecurse.c)
 *     LdrpDestroyNode @ 0x1800747A0 (LdrpDestroyNode.c)
 *     LdrpMergeNodes @ 0x1800747F4 (LdrpMergeNodes.c)
 */

signed __int64 __fastcall LdrpCondenseGraphRecurse(__int64 a1, _DWORD *a2, char **a3, __int64 a4)
{
  char *v4; // rsi
  int v5; // eax
  _QWORD *v8; // rbp
  signed __int64 result; // rax
  char *v10; // rdx
  __int64 v11; // rsi
  unsigned int v12; // eax
  _QWORD *v13; // rbx
  _QWORD *v14; // rcx
  _DWORD *v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = a2;
  ++*a2;
  v4 = (char *)(a1 + 64);
  v5 = *a2;
  *(_DWORD *)(a1 + 72) = *a2;
  *(_DWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 64) = *a3;
  v8 = *(_QWORD **)(a1 + 40);
  *a3 = (char *)(a1 + 64);
  if ( v8 )
  {
    while ( 1 )
    {
      v8 = (_QWORD *)*v8;
      v11 = v8[1];
      if ( *(int *)(v11 + 56) <= 5 )
        break;
LABEL_16:
      if ( v8 == *(_QWORD **)(a1 + 40) )
      {
        v4 = (char *)(a1 + 64);
        goto LABEL_2;
      }
    }
    v12 = *(_DWORD *)(v11 + 72);
    if ( v12 )
    {
      if ( !*(_QWORD *)(v11 + 64) )
      {
LABEL_14:
        if ( *(_DWORD *)(v11 + 56) == -3 )
          *(_DWORD *)(a1 + 56) = -3;
        goto LABEL_16;
      }
    }
    else
    {
      LdrpCondenseGraphRecurse(v8[1], a2, a3);
      v12 = *(_DWORD *)(v11 + 32);
      a2 = v15;
    }
    if ( *(_DWORD *)(a1 + 32) > v12 )
      *(_DWORD *)(a1 + 32) = v12;
    goto LABEL_14;
  }
LABEL_2:
  result = *(unsigned int *)(a1 + 72);
  if ( *(_DWORD *)(a1 + 32) == (_DWORD)result )
  {
    v10 = *a3;
    if ( *a3 )
      *a3 = *(char **)v10;
    result = 0LL;
    if ( v4 != v10 )
    {
      do
      {
        *(_QWORD *)v10 = result;
        result = (signed __int64)v10;
        v10 = *a3;
        if ( *a3 )
          *a3 = *(char **)v10;
      }
      while ( v4 != v10 );
      v15 = (_DWORD *)result;
      if ( result )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v10, (__int64)a3, a4);
        LdrpMergeNodes(a1, &v15);
        result = RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        v13 = v15;
        while ( v13 )
        {
          v14 = v13;
          v13 = (_QWORD *)*v13;
          result = LdrpDestroyNode(v14 - 8);
        }
      }
    }
    *(_QWORD *)v4 = 0LL;
    if ( *(_DWORD *)(a1 + 56) == 5 )
      *(_DWORD *)(a1 + 56) = 6;
  }
  return result;
}
