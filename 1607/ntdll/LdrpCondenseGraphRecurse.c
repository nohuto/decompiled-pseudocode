/*
 * XREFs of LdrpCondenseGraphRecurse @ 0x180074648
 * Callers:
 *     LdrpCondenseGraph @ 0x180074614 (LdrpCondenseGraph.c)
 *     LdrpCondenseGraphRecurse @ 0x180074648 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpCondenseGraphRecurse @ 0x180074648 (LdrpCondenseGraphRecurse.c)
 *     LdrpDestroyNode @ 0x180074790 (LdrpDestroyNode.c)
 *     LdrpMergeNodes @ 0x1800747E4 (LdrpMergeNodes.c)
 */

void __fastcall LdrpCondenseGraphRecurse(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  int v4; // eax
  _QWORD *v7; // rbp
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // eax
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  _DWORD *v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = a2;
  ++*a2;
  v3 = (_QWORD *)(a1 + 64);
  v4 = *a2;
  *(_DWORD *)(a1 + 72) = *a2;
  *(_DWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 64) = *a3;
  v7 = *(_QWORD **)(a1 + 40);
  *a3 = a1 + 64;
  if ( v7 )
  {
    while ( 1 )
    {
      v7 = (_QWORD *)*v7;
      v10 = v7[1];
      if ( *(int *)(v10 + 56) <= 5 )
        break;
LABEL_16:
      if ( v7 == *(_QWORD **)(a1 + 40) )
      {
        v3 = (_QWORD *)(a1 + 64);
        goto LABEL_2;
      }
    }
    v11 = *(_DWORD *)(v10 + 72);
    if ( v11 )
    {
      if ( !*(_QWORD *)(v10 + 64) )
      {
LABEL_14:
        if ( *(_DWORD *)(v10 + 56) == -3 )
          *(_DWORD *)(a1 + 56) = -3;
        goto LABEL_16;
      }
    }
    else
    {
      LdrpCondenseGraphRecurse(v7[1], a2, a3);
      v11 = *(_DWORD *)(v10 + 32);
      a2 = v14;
    }
    if ( *(_DWORD *)(a1 + 32) > v11 )
      *(_DWORD *)(a1 + 32) = v11;
    goto LABEL_14;
  }
LABEL_2:
  if ( *(_DWORD *)(a1 + 32) == *(_DWORD *)(a1 + 72) )
  {
    v8 = (_QWORD *)*a3;
    if ( *a3 )
      *a3 = *v8;
    v9 = 0LL;
    if ( v3 != v8 )
    {
      do
      {
        *v8 = v9;
        v9 = v8;
        v8 = (_QWORD *)*a3;
        if ( *a3 )
          *a3 = *v8;
      }
      while ( v3 != v8 );
      v14 = v9;
      if ( v9 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        LdrpMergeNodes(a1, &v14);
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        v12 = v14;
        while ( v12 )
        {
          v13 = v12;
          v12 = (_QWORD *)*v12;
          LdrpDestroyNode(v13 - 8);
        }
      }
    }
    *v3 = 0LL;
    if ( *(_DWORD *)(a1 + 56) == 5 )
      *(_DWORD *)(a1 + 56) = 6;
  }
}
