/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x1404087F4
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x14040851C (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x140549074 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     RtlRbRemoveNode @ 0x140030EA0 (RtlRbRemoveNode.c)
 *     RtlUIntAdd @ 0x1400C1B78 (RtlUIntAdd.c)
 *     RtlRbInsertNodeEx @ 0x1400EAD30 (RtlRbInsertNodeEx.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(__int64 a1, signed __int64 a2, struct _FAST_MUTEX *a3, _RTL_RB_TREE *a4)
{
  UINT *v4; // r14
  void *v5; // rsi
  signed __int64 v8; // rdi
  BOOLEAN v9; // bp
  _RTL_BALANCED_NODE *Root; // rbx
  char v11; // r12
  const void *v12; // rcx
  unsigned __int16 v13; // r15
  unsigned __int16 v14; // ax
  int v15; // eax
  _RTL_BALANCED_NODE *v16; // rax
  NTSTATUS v17; // ebx
  _RTL_RB_TREE *v18; // rbx
  _RTL_BALANCED_NODE *v19; // rdx
  UINT puResult; // [rsp+68h] [rbp+10h] BYREF
  PRTL_RB_TREE Tree; // [rsp+78h] [rbp+20h]

  Tree = a4;
  v4 = (UINT *)(a2 + 24);
  *(_QWORD *)a2 = 0LL;
  v5 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v8 = a2;
  v9 = 1;
  *(_DWORD *)(a2 + 24) = 1;
  ExAcquireFastMutex(a3);
  Root = a4->Root;
  if ( Root )
  {
    v12 = (const void *)(v8 + 28);
    v11 = 0;
    v13 = *(_WORD *)(v8 + 28);
    while ( 1 )
    {
      v14 = WORD2(Root[1].Left);
      if ( v13 >= v14 )
      {
        if ( v13 > v14 )
          goto LABEL_12;
        v15 = memcmp(v12, (char *)&Root[1].Left + 4, v13);
        if ( v15 > 0 )
        {
          v12 = (const void *)(v8 + 28);
LABEL_12:
          v16 = Root->Children[1];
          if ( !v16 )
            goto LABEL_17;
          goto LABEL_10;
        }
        if ( v15 >= 0 )
        {
          v4 = (UINT *)&Root[1];
          v5 = (void *)v8;
          v11 = 1;
          v8 = (signed __int64)Root;
          v17 = RtlUIntAdd((UINT)Root[1].Children[0], 1u, &puResult);
          if ( v17 < 0 )
            goto LABEL_24;
          v18 = Tree;
          *v4 = puResult;
          goto LABEL_18;
        }
        v12 = (const void *)(v8 + 28);
      }
      v16 = Root->Children[0];
      if ( !Root->Children[0] )
      {
        v9 = 0;
        goto LABEL_17;
      }
LABEL_10:
      Root = v16;
    }
  }
  v9 = 0;
  v11 = 0;
LABEL_17:
  v19 = Root;
  v18 = Tree;
  RtlRbInsertNodeEx(Tree, v19, v9, (PRTL_BALANCED_NODE)v8);
LABEL_18:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v8, 0LL) )
  {
    if ( v11 )
    {
      --*v4;
    }
    else
    {
      RtlRbRemoveNode(v18, (PRTL_BALANCED_NODE)v8);
      v5 = (void *)v8;
    }
    v17 = -1073741823;
  }
  else
  {
    v17 = 0;
  }
LABEL_24:
  KeReleaseGuardedMutex(a3);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v17;
}
