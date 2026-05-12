/*
 * XREFs of RaidLunQueueCheckWaitTimeout @ 0x1C002BD58
 * Callers:
 *     RaidAdapterCheckWaitTimeout @ 0x1C00268C8 (RaidAdapterCheckWaitTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidLunQueueCheckWaitTimeout(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v4; // rbx
  char v5; // r12
  unsigned int v6; // r15d
  char v7; // r13
  unsigned int v8; // ebp
  __int64 v9; // r14
  _QWORD *v11; // rcx
  __int64 v12; // r8
  ULONGLONG v13; // rdx
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  ULONGLONG UnbiasedInterruptTime; // [rsp+60h] [rbp+8h]

  v4 = (_QWORD *)(a1 + 112);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v8 = 0;
  v9 = 0LL;
  if ( (_QWORD *)*v4 == v4 )
    return 0LL;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  v11 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 == v4 )
    goto LABEL_29;
  do
  {
    v12 = v11[3];
    if ( (*(_BYTE *)(v12 + 154) & 2) == 0 )
    {
      v13 = *(v11 - 2);
      if ( v13 == -1LL || v13 >= UnbiasedInterruptTime )
        break;
    }
    if ( v5 )
    {
      if ( (*(_BYTE *)(v12 + 154) & 2) == 0 && !v7 )
      {
        v9 = v11[3];
        v8 = *(_DWORD *)(v12 + 416) + *(_DWORD *)(v12 + 420);
        v7 = 1;
      }
      v14 = *v11;
      v15 = (_QWORD *)v11[1];
      v16 = v11[2] + 120LL;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v15 != v11 )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      v17 = *(_QWORD *)v16;
      v18 = *(_QWORD **)(v16 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) != v16 || *v18 != v16 )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      if ( (*(_BYTE *)(v16 + 22) & 6) != 0 )
        --*(_DWORD *)(a1 + 20);
      else
        --*(_DWORD *)(a1 + 16);
      if ( (*(_BYTE *)(v16 + 22) & 8) != 0 )
        --*(_DWORD *)(a1 + 24);
      *(_BYTE *)(v16 + 20) = 0;
      v19 = *(_QWORD **)(a3 + 8);
      if ( *v19 != a3 )
        __fastfail(3u);
      *v11 = a3;
      ++v6;
      v11[1] = v19;
      *v19 = v11;
      *(_QWORD *)(a3 + 8) = v11;
      v11 = (_QWORD *)*v4;
      if ( v6 == a2 )
        break;
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      v11 = (_QWORD *)*v4;
      v5 = 1;
    }
  }
  while ( v11 != v4 );
  if ( !v5 )
LABEL_29:
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  else
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  if ( v7 )
  {
    if ( v8 > *(_DWORD *)(v9 + 1828) )
      *(_DWORD *)(v9 + 1828) = v8;
  }
  return v6;
}
