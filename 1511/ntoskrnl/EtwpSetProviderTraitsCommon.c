/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x14046CAE8
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x14046C820 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x14050D1D0 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(__int64 a1, signed __int64 a2, struct _FAST_MUTEX *a3, _RTL_RB_TREE *a4)
{
  _RTL_BALANCED_NODE *v4; // rsi
  signed __int64 v6; // rdi
  BOOLEAN v7; // bp
  void *v8; // r14
  _RTL_BALANCED_NODE *Root; // rbx
  const void *v10; // rcx
  char v11; // r15
  unsigned __int16 v12; // r12
  unsigned __int16 v13; // ax
  int v14; // eax
  unsigned int v15; // ebx
  _RTL_BALANCED_NODE *v17; // rax

  v4 = (_RTL_BALANCED_NODE *)(a2 + 24);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v6 = a2;
  v7 = 1;
  v8 = 0LL;
  *(_DWORD *)(a2 + 24) = 1;
  ExAcquireFastMutex(a3);
  Root = a4->Root;
  if ( !a4->Root )
  {
    v7 = 0;
    v11 = 0;
    goto LABEL_20;
  }
  v10 = (const void *)(v6 + 28);
  v11 = 0;
  v12 = *(_WORD *)(v6 + 28);
  while ( 1 )
  {
    v13 = WORD2(Root[1].Left);
    if ( v12 < v13 )
      break;
    if ( v12 <= v13 )
    {
      v14 = memcmp(v10, (char *)&Root[1].Left + 4, v12);
      if ( v14 <= 0 )
      {
        if ( v14 >= 0 )
        {
          v4 = Root + 1;
          v8 = (void *)v6;
          ++LODWORD(Root[1].Children[0]);
          v11 = 1;
          v6 = (signed __int64)Root;
          goto LABEL_8;
        }
        v10 = (const void *)(v6 + 28);
        break;
      }
      v10 = (const void *)(v6 + 28);
    }
    v17 = Root->Children[1];
    if ( !v17 )
      goto LABEL_20;
LABEL_15:
    Root = v17;
  }
  v17 = Root->Children[0];
  if ( Root->Children[0] )
    goto LABEL_15;
  v7 = 0;
LABEL_20:
  RtlRbInsertNodeEx(a4, Root, v7, (PRTL_BALANCED_NODE)v6);
LABEL_8:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v6, 0LL) )
  {
    if ( v11 )
    {
      --LODWORD(v4->Children[0]);
    }
    else
    {
      RtlRbRemoveNode(a4, (PRTL_BALANCED_NODE)v6);
      v8 = (void *)v6;
    }
    v15 = -1073741823;
  }
  else
  {
    v15 = 0;
  }
  KeReleaseGuardedMutex(a3);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v15;
}
