/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x1404D2F6C
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x1404D2CA0 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x14057E810 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     RtlRbRemoveNode @ 0x1400F6290 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x1400F70F0 (RtlRbInsertNodeEx.c)
 *     RtlULongAdd @ 0x1401E04A8 (RtlULongAdd.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     TraitsCompare @ 0x1404D3130 (TraitsCompare.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(__int64 a1, __int64 a2, ULONG_PTR a3, _RTL_RB_TREE *a4)
{
  ULONG *v4; // r14
  _RTL_BALANCED_NODE *v6; // rbp
  _RTL_BALANCED_NODE *v7; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int8 CurrentIrql; // r15
  _RTL_BALANCED_NODE *Root; // rdi
  BOOLEAN v14; // r8
  char v15; // r15
  int v16; // eax
  _RTL_BALANCED_NODE *v17; // rax
  NTSTATUS v18; // edi
  signed __int32 v19; // r9d
  unsigned __int8 v20; // si
  signed __int32 v21; // eax
  signed __int32 v22; // eax
  ULONG pulResult; // [rsp+58h] [rbp+10h] BYREF

  v4 = (ULONG *)(a2 + 24);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v6 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v7 = (_RTL_BALANCED_NODE *)a2;
  *(_DWORD *)(a2 + 24) = 1;
  v10 = KeAbPreAcquire(a3, 0LL, 0LL, (__int64)a4);
  v11 = v10;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)a3, 0) )
    ExpAcquireFastMutexContended(a3, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  *(_QWORD *)(a3 + 8) = KeGetCurrentThread();
  *(_DWORD *)(a3 + 48) = CurrentIrql;
  Root = a4->Root;
  if ( !a4->Root )
  {
    v14 = 0;
    v15 = 0;
LABEL_15:
    RtlRbInsertNodeEx(a4, Root, v14, v7);
    goto LABEL_21;
  }
  v15 = 0;
  while ( 1 )
  {
    v16 = TraitsCompare(v7, Root);
    if ( v16 > 0 )
    {
      v17 = Root->Children[1];
      if ( !v17 )
      {
        v14 = 1;
        goto LABEL_15;
      }
      goto LABEL_13;
    }
    if ( v16 >= 0 )
      break;
    v17 = Root->Children[0];
    if ( !Root->Children[0] )
    {
      v14 = 0;
      goto LABEL_15;
    }
LABEL_13:
    Root = v17;
  }
  v4 = (ULONG *)&Root[1];
  v6 = v7;
  v15 = 1;
  v7 = Root;
  v18 = RtlULongAdd((ULONG)Root[1].Children[0], 1u, &pulResult);
  if ( v18 >= 0 )
  {
    *v4 = pulResult;
LABEL_21:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), (signed __int64)v7, 0LL) )
    {
      if ( v15 )
      {
        --*v4;
      }
      else
      {
        RtlRbRemoveNode(a4, v7);
        v6 = v7;
      }
      v18 = -1073741823;
    }
    else
    {
      v18 = 0;
    }
    *(_QWORD *)(a3 + 8) = 0LL;
    v20 = *(_BYTE *)(a3 + 48);
    v22 = _InterlockedCompareExchange((volatile signed __int32 *)a3, 1, 0);
    if ( v22 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)a3, v22);
    goto LABEL_29;
  }
  *(_QWORD *)(a3 + 8) = 0LL;
  v20 = *(_BYTE *)(a3 + 48);
  v21 = _InterlockedCompareExchange((volatile signed __int32 *)a3, v19, 0);
  if ( v21 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)a3, v21);
LABEL_29:
  __writecr8(v20);
  KeAbPostRelease(a3);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v18;
}
