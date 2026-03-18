/*
 * XREFs of ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005C044
 * Callers:
 *     ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005A600 (-ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATI.c)
 * Callees:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005B670 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C005D458 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C005D968 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C005D9B4 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005DBFC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0062264 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C0082CC0 (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Lock(
        struct VIDMM_RECYCLE_RANGE **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        struct VIDMM_RECYCLE_RANGE *a4,
        enum _LOCK_OPERATION a5,
        struct VIDMM_SEGMENT *a6,
        unsigned __int8 a7)
{
  __int64 v8; // rsi
  struct VIDMM_RECYCLE_RANGE *v11; // rcx
  VIDMM_RECYCLE_RANGE *k; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // esi
  _QWORD *v16; // rax
  __int64 result; // rax
  struct VIDMM_RECYCLE_RANGE *NextRange; // rdi
  unsigned __int64 v19; // r14
  unsigned __int64 i; // rbp
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  bool v23; // cl
  VIDMM_RECYCLE_RANGE *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  struct VIDMM_RECYCLE_RANGE *v28; // rax
  _QWORD *v29; // rax
  VIDMM_RECYCLE_RANGE *v30; // rcx
  bool v31; // zf
  int v32; // r12d
  struct VIDMM_RECYCLE_RANGE *v33; // rax
  enum _LOCK_OPERATION v34; // r8d
  VIDMM_RECYCLE_RANGE *v35; // rsi
  bool v36; // r12
  int v37; // ebp
  enum _LOCK_OPERATION v38; // r8d
  VIDMM_RECYCLE_RANGE *v39; // rcx
  VIDMM_RECYCLE_RANGE *j; // rcx
  VIDMM_RECYCLE_RANGE *PreviousRange; // rax
  VIDMM_RECYCLE_RANGE *v42; // rbx
  VIDMM_RECYCLE_RANGE *v43; // rax
  VIDMM_RECYCLE_RANGE *v44; // rbx
  VIDMM_RECYCLE_RANGE *v45; // rax
  VIDMM_RECYCLE_RANGE *v46; // rbx
  bool v48[8]; // [rsp+70h] [rbp+28h]

  v8 = a3;
  if ( *((_BYTE *)this + 130) )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v29[3] = 270LL;
    v29[4] = 52LL;
    v29[5] = 12LL;
    v29[6] = 0LL;
    v29[7] = 0LL;
    WdLogEvent5_WdCriticalError(v29);
  }
  if ( v8 || (v11 = this[6], a4 != (struct VIDMM_RECYCLE_RANGE *)(this[5] - v11)) || v11 != this[4] )
  {
    NextRange = this[8];
    v19 = (unsigned __int64)this[6] + v8;
    for ( i = (unsigned __int64)a4 + v19; NextRange; NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange) )
    {
      if ( *((_QWORD *)NextRange + 5) > v19 )
        break;
    }
    v21 = *((_QWORD *)NextRange + 4);
    v22 = *((_QWORD *)NextRange + 5);
    v48[0] = v19 != v21;
    if ( v22 >= i )
    {
      v23 = v22 != i;
      if ( v19 == v21 )
      {
        v31 = !v23;
        v24 = NextRange;
        if ( !v31 )
        {
          VIDMM_RECYCLE_RANGE::SplitAt(NextRange, i - v21);
          v24 = NextRange;
        }
      }
      else
      {
        v27 = v19 - v21;
        if ( v23 )
        {
          v28 = VIDMM_RECYCLE_RANGE::SplitMiddle(NextRange, v27, i - v21);
        }
        else
        {
          VIDMM_RECYCLE_RANGE::SplitAt(NextRange, v27);
          v28 = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
        }
        v24 = v28;
      }
      result = VIDMM_RECYCLE_RANGE::Lock(v24, a2, (enum _LOCK_OPERATION)a3, a6);
      if ( (int)result < 0 )
        return result;
      goto LABEL_23;
    }
    v30 = NextRange;
    while ( 1 )
    {
      v33 = VIDMM_RECYCLE_RANGE::GetNextRange(v30);
      v35 = v33;
      if ( !v33 )
        break;
      v31 = *((_QWORD *)v33 + 5) == i;
      if ( *((_QWORD *)v33 + 5) >= i )
        goto LABEL_40;
      v32 = VIDMM_RECYCLE_RANGE::Lock(v33, a2, v34, a6);
      v30 = v35;
      if ( v32 < 0 )
      {
        while ( 1 )
        {
          PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v30);
          v42 = PreviousRange;
          if ( PreviousRange == NextRange )
            break;
          VIDMM_RECYCLE_RANGE::Unlock(PreviousRange);
          v30 = v42;
        }
        return (unsigned int)v32;
      }
    }
    v31 = MEMORY[0x28] == i;
LABEL_40:
    v36 = !v31;
    if ( v48[0] )
    {
      VIDMM_RECYCLE_RANGE::SplitAt(NextRange, v19 - *((_QWORD *)NextRange + 4));
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
    }
    if ( v36 )
      VIDMM_RECYCLE_RANGE::SplitAt(v35, i - *((_QWORD *)v35 + 4));
    v37 = VIDMM_RECYCLE_RANGE::Lock(NextRange, a2, v34, a6);
    v39 = v35;
    if ( v37 < 0 )
    {
      while ( 1 )
      {
        v43 = VIDMM_RECYCLE_RANGE::GetPreviousRange(v39);
        v44 = v43;
        if ( v43 == NextRange )
          break;
        VIDMM_RECYCLE_RANGE::Unlock(v43);
        v39 = v44;
      }
    }
    else
    {
      v37 = VIDMM_RECYCLE_RANGE::Lock(v35, a2, v38, a6);
      if ( v37 >= 0 )
      {
        v8 = a3;
LABEL_23:
        ++*((_DWORD *)this + 23);
        if ( a7 )
          *((_BYTE *)this + 129) = 1;
        else
          *((_BYTE *)this + 128) = 1;
        v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v26, v25);
        v16[4] = v8;
LABEL_12:
        v16[3] = this;
        v16[5] = a4;
        WdLogEvent5_WdEvent(v16);
        *((_DWORD *)this + 54) = 4;
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible((struct _SLIST_ENTRY *)this, 0);
        return 0LL;
      }
      for ( j = v35; ; j = v46 )
      {
        v45 = VIDMM_RECYCLE_RANGE::GetPreviousRange(j);
        v46 = v45;
        if ( v45 == NextRange )
          break;
        VIDMM_RECYCLE_RANGE::Unlock(v45);
      }
      VIDMM_RECYCLE_RANGE::Unlock(NextRange);
    }
    return (unsigned int)v37;
  }
  for ( k = this[8]; ; k = VIDMM_RECYCLE_RANGE::GetNextRange(k) )
  {
    v15 = VIDMM_RECYCLE_RANGE::Lock(k, a2, (enum _LOCK_OPERATION)a3, a6);
    if ( v15 < 0 )
      break;
    if ( k == this[9] )
    {
      ++*((_DWORD *)this + 23);
      if ( a7 )
        *((_BYTE *)this + 129) = 1;
      else
        *((_BYTE *)this + 128) = 1;
      v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v13);
      v16[4] = 0LL;
      goto LABEL_12;
    }
  }
  while ( k != this[8] )
  {
    k = VIDMM_RECYCLE_RANGE::GetPreviousRange(k);
    VIDMM_RECYCLE_RANGE::Unlock(k);
  }
  return (unsigned int)v15;
}
