/*
 * XREFs of VmpInsertMemoryRange @ 0x14020C69C
 * Callers:
 *     VmCreateMemoryRange @ 0x14065C0CC (VmCreateMemoryRange.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VmpProcessContextLockExclusive @ 0x14020C900 (VmpProcessContextLockExclusive.c)
 */

__int64 __fastcall VmpInsertMemoryRange(volatile LONG *SpinLock, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  PEX_SPIN_LOCK v9; // r10
  unsigned int v10; // ebx
  _QWORD *v11; // rcx
  PEX_SPIN_LOCK v12; // r14
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  bool v15; // r8
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  bool v19; // r8
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rax

  v6 = VmpProcessContextLockExclusive(SpinLock);
  v7 = *((_QWORD *)SpinLock + 8);
  v8 = v6;
  if ( v7 == -1 )
  {
    *((_QWORD *)SpinLock + 8) = a3;
  }
  else if ( v7 != a3 )
  {
    v10 = -1073740007;
    goto LABEL_39;
  }
  v9 = SpinLock + 2;
  v10 = 0;
  v11 = (_QWORD *)*((_QWORD *)SpinLock + 1);
  while ( v11 )
  {
    if ( a2[7] < v11[3] )
    {
      v11 = (_QWORD *)*v11;
    }
    else
    {
      if ( a2[6] <= v11[4] )
      {
LABEL_15:
        v10 = -1073741800;
        goto LABEL_39;
      }
      v11 = (_QWORD *)v11[1];
    }
  }
  v12 = SpinLock + 6;
  v13 = (_QWORD *)*((_QWORD *)SpinLock + 3);
  while ( v13 )
  {
    if ( a2[9] < v13[8] )
    {
      v13 = (_QWORD *)*v13;
    }
    else
    {
      if ( a2[8] <= v13[9] )
        goto LABEL_15;
      v13 = (_QWORD *)v13[1];
    }
  }
  v14 = *(_QWORD **)v9;
  v15 = 0;
  if ( !*(_QWORD *)v9 )
    goto LABEL_29;
  v16 = a2[6];
  while ( v16 <= v14[4] && v16 < v14[3] )
  {
    v17 = (_QWORD *)*v14;
    if ( !*v14 )
    {
      v15 = 0;
      goto LABEL_29;
    }
LABEL_27:
    v14 = v17;
  }
  v17 = (_QWORD *)v14[1];
  if ( v17 )
    goto LABEL_27;
  v15 = 1;
LABEL_29:
  RtlRbInsertNodeEx((unsigned __int64 *)SpinLock + 1, (unsigned __int64)v14, v15, (unsigned __int64)(a2 + 3));
  v18 = *(_QWORD **)v12;
  v19 = 0;
  if ( !*(_QWORD *)v12 )
    goto LABEL_38;
  v20 = a2[8];
  while ( 2 )
  {
    if ( v20 <= v18[9] && v20 < v18[8] )
    {
      v21 = (_QWORD *)*v18;
      if ( !*v18 )
      {
        v19 = 0;
        goto LABEL_38;
      }
      goto LABEL_36;
    }
    v21 = (_QWORD *)v18[1];
    if ( v21 )
    {
LABEL_36:
      v18 = v21;
      continue;
    }
    break;
  }
  v19 = 1;
LABEL_38:
  RtlRbInsertNodeEx((unsigned __int64 *)SpinLock + 3, (unsigned __int64)v18, v19, (unsigned __int64)a2);
LABEL_39:
  if ( v8 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    __writecr8((unsigned __int8)v8);
  }
  return v10;
}
