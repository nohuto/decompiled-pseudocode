/*
 * XREFs of ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005EF4C
 * Callers:
 *     ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005FE80 (-ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATI.c)
 * Callees:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005E730 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C0061940 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0061E64 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C0061EB0 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0062120 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006213C (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C0096198 (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
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
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 result; // rax
  struct VIDMM_RECYCLE_RANGE *NextRange; // rdi
  unsigned __int64 v21; // r14
  unsigned __int64 i; // rbp
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  bool v25; // cl
  VIDMM_RECYCLE_RANGE *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rdx
  struct VIDMM_RECYCLE_RANGE *v32; // rax
  _QWORD *v33; // rax
  VIDMM_RECYCLE_RANGE *v34; // rcx
  bool v35; // zf
  int v36; // r12d
  struct VIDMM_RECYCLE_RANGE *v37; // rax
  enum _LOCK_OPERATION v38; // r8d
  VIDMM_RECYCLE_RANGE *v39; // rsi
  bool v40; // r12
  int v41; // ebp
  enum _LOCK_OPERATION v42; // r8d
  VIDMM_RECYCLE_RANGE *v43; // rcx
  VIDMM_RECYCLE_RANGE *j; // rcx
  VIDMM_RECYCLE_RANGE *PreviousRange; // rax
  VIDMM_RECYCLE_RANGE *v46; // rbx
  VIDMM_RECYCLE_RANGE *v47; // rax
  VIDMM_RECYCLE_RANGE *v48; // rbx
  VIDMM_RECYCLE_RANGE *v49; // rax
  VIDMM_RECYCLE_RANGE *v50; // rbx
  bool v52[8]; // [rsp+70h] [rbp+28h]

  v8 = a3;
  if ( *((_BYTE *)this + 130) )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v33[3] = 270LL;
    v33[4] = 52LL;
    v33[5] = 12LL;
    v33[6] = 0LL;
    v33[7] = 0LL;
    WdLogEvent5_WdCriticalError(v33);
  }
  if ( v8 || (v11 = this[6], a4 != (struct VIDMM_RECYCLE_RANGE *)(this[5] - v11)) || v11 != this[4] )
  {
    NextRange = this[8];
    v21 = (unsigned __int64)this[6] + v8;
    for ( i = (unsigned __int64)a4 + v21; NextRange; NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange) )
    {
      if ( *((_QWORD *)NextRange + 5) > v21 )
        break;
    }
    v23 = *((_QWORD *)NextRange + 4);
    v24 = *((_QWORD *)NextRange + 5);
    v52[0] = v21 != v23;
    if ( v24 >= i )
    {
      v25 = v24 != i;
      if ( v21 == v23 )
      {
        v35 = !v25;
        v26 = NextRange;
        if ( !v35 )
        {
          VIDMM_RECYCLE_RANGE::SplitAt(NextRange, i - v23);
          v26 = NextRange;
        }
      }
      else
      {
        v31 = v21 - v23;
        if ( v25 )
        {
          v32 = VIDMM_RECYCLE_RANGE::SplitMiddle(NextRange, v31, i - v23);
        }
        else
        {
          VIDMM_RECYCLE_RANGE::SplitAt(NextRange, v31);
          v32 = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
        }
        v26 = v32;
      }
      result = VIDMM_RECYCLE_RANGE::Lock(v26, a2, (enum _LOCK_OPERATION)a3, a6);
      if ( (int)result < 0 )
        return result;
      goto LABEL_23;
    }
    v34 = NextRange;
    while ( 1 )
    {
      v37 = VIDMM_RECYCLE_RANGE::GetNextRange(v34);
      v39 = v37;
      if ( !v37 )
        break;
      v35 = *((_QWORD *)v37 + 5) == i;
      if ( *((_QWORD *)v37 + 5) >= i )
        goto LABEL_40;
      v36 = VIDMM_RECYCLE_RANGE::Lock(v37, a2, v38, a6);
      v34 = v39;
      if ( v36 < 0 )
      {
        while ( 1 )
        {
          PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v34);
          v46 = PreviousRange;
          if ( PreviousRange == NextRange )
            break;
          VIDMM_RECYCLE_RANGE::Unlock(PreviousRange);
          v34 = v46;
        }
        return (unsigned int)v36;
      }
    }
    v35 = MEMORY[0x28] == i;
LABEL_40:
    v40 = !v35;
    if ( v52[0] )
    {
      VIDMM_RECYCLE_RANGE::SplitAt(NextRange, v21 - *((_QWORD *)NextRange + 4));
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
    }
    if ( v40 )
      VIDMM_RECYCLE_RANGE::SplitAt(v39, i - *((_QWORD *)v39 + 4));
    v41 = VIDMM_RECYCLE_RANGE::Lock(NextRange, a2, v38, a6);
    v43 = v39;
    if ( v41 < 0 )
    {
      while ( 1 )
      {
        v47 = VIDMM_RECYCLE_RANGE::GetPreviousRange(v43);
        v48 = v47;
        if ( v47 == NextRange )
          break;
        VIDMM_RECYCLE_RANGE::Unlock(v47);
        v43 = v48;
      }
    }
    else
    {
      v41 = VIDMM_RECYCLE_RANGE::Lock(v39, a2, v42, a6);
      if ( v41 >= 0 )
      {
        v8 = a3;
LABEL_23:
        ++*((_DWORD *)this + 23);
        if ( a7 )
          *((_BYTE *)this + 129) = 1;
        else
          *((_BYTE *)this + 128) = 1;
        v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v28, v27, v29, v30);
        v18[4] = v8;
LABEL_12:
        v18[3] = this;
        v18[5] = a4;
        WdLogEvent5_WdEvent(v18);
        *((_DWORD *)this + 54) = 4;
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible((VIDMM_RECYCLE_MULTIRANGE *)this, 0);
        return 0LL;
      }
      for ( j = v39; ; j = v50 )
      {
        v49 = VIDMM_RECYCLE_RANGE::GetPreviousRange(j);
        v50 = v49;
        if ( v49 == NextRange )
          break;
        VIDMM_RECYCLE_RANGE::Unlock(v49);
      }
      VIDMM_RECYCLE_RANGE::Unlock(NextRange);
    }
    return (unsigned int)v41;
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
      v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v13, v16, v17);
      v18[4] = 0LL;
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
