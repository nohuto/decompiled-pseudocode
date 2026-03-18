/*
 * XREFs of ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0067484
 * Callers:
 *     ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00688D0 (-ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATI.c)
 * Callees:
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D48 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D64 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00677A0 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1C00685CC (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C006A234 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z.c)
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C006A558 (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C006A744 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
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
  _QWORD *v11; // rax
  struct VIDMM_RECYCLE_RANGE *v12; // rcx
  VIDMM_RECYCLE_RANGE *k; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // esi
  _QWORD *v17; // rax
  __int64 result; // rax
  struct VIDMM_RECYCLE_RANGE *NextRange; // rdi
  unsigned __int64 v20; // r14
  unsigned __int64 i; // rbp
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  VIDMM_RECYCLE_RANGE *v24; // rcx
  bool v25; // zf
  int v26; // r13d
  struct VIDMM_RECYCLE_RANGE *v27; // rax
  enum _LOCK_OPERATION v28; // r8d
  VIDMM_RECYCLE_RANGE *v29; // rsi
  bool v30; // r13
  int v31; // ebp
  enum _LOCK_OPERATION v32; // r8d
  VIDMM_RECYCLE_RANGE *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  VIDMM_RECYCLE_RANGE *j; // rcx
  VIDMM_RECYCLE_RANGE *PreviousRange; // rax
  VIDMM_RECYCLE_RANGE *v38; // rbx
  VIDMM_RECYCLE_RANGE *v39; // rax
  VIDMM_RECYCLE_RANGE *v40; // rbx
  VIDMM_RECYCLE_RANGE *v41; // rax
  VIDMM_RECYCLE_RANGE *v42; // rbx
  bool v43; // cl
  unsigned __int64 v44; // rdx
  struct VIDMM_RECYCLE_RANGE *v45; // rax
  VIDMM_RECYCLE_RANGE *v46; // rcx
  bool v48[8]; // [rsp+70h] [rbp+28h]

  v8 = a3;
  if ( *((_BYTE *)this + 130) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v11[3] = 270LL;
    v11[4] = 52LL;
    v11[5] = 12LL;
    v11[6] = 0LL;
    v11[7] = 0LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  if ( v8 || (v12 = this[6], a4 != (struct VIDMM_RECYCLE_RANGE *)(this[5] - v12)) || v12 != this[4] )
  {
    NextRange = this[8];
    v20 = (unsigned __int64)this[6] + v8;
    for ( i = (unsigned __int64)a4 + v20; NextRange; NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange) )
    {
      if ( *((_QWORD *)NextRange + 5) > v20 )
        break;
    }
    v22 = *((_QWORD *)NextRange + 4);
    v23 = *((_QWORD *)NextRange + 5);
    v48[0] = v20 != v22;
    if ( v23 >= i )
    {
      v43 = v23 != i;
      if ( v20 == v22 )
      {
        v25 = !v43;
        v46 = NextRange;
        if ( !v25 )
        {
          VIDMM_RECYCLE_RANGE::SplitAt(NextRange, i - v22);
          v46 = NextRange;
        }
      }
      else
      {
        v44 = v20 - v22;
        if ( v43 )
        {
          v45 = VIDMM_RECYCLE_RANGE::SplitMiddle(NextRange, v44, i - v22);
        }
        else
        {
          VIDMM_RECYCLE_RANGE::SplitAt(NextRange, v44);
          v45 = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
        }
        v46 = v45;
      }
      result = VIDMM_RECYCLE_RANGE::Lock(v46, a2, (enum _LOCK_OPERATION)a3, a6);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v24 = NextRange;
      while ( 1 )
      {
        v27 = VIDMM_RECYCLE_RANGE::GetNextRange(v24);
        v29 = v27;
        if ( !v27 )
          break;
        v25 = *((_QWORD *)v27 + 5) == i;
        if ( *((_QWORD *)v27 + 5) >= i )
          goto LABEL_26;
        v26 = VIDMM_RECYCLE_RANGE::Lock(v27, a2, v28, a6);
        v24 = v29;
        if ( v26 < 0 )
        {
          while ( 1 )
          {
            PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v24);
            v38 = PreviousRange;
            if ( PreviousRange == NextRange )
              break;
            VIDMM_RECYCLE_RANGE::Unlock(PreviousRange);
            v24 = v38;
          }
          return (unsigned int)v26;
        }
      }
      v25 = MEMORY[0x28] == i;
LABEL_26:
      v30 = !v25;
      if ( v48[0] )
      {
        VIDMM_RECYCLE_RANGE::SplitAt(NextRange, v20 - *((_QWORD *)NextRange + 4));
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      }
      if ( v30 )
        VIDMM_RECYCLE_RANGE::SplitAt(v29, i - *((_QWORD *)v29 + 4));
      v31 = VIDMM_RECYCLE_RANGE::Lock(NextRange, a2, v28, a6);
      v33 = v29;
      if ( v31 < 0 )
      {
        while ( 1 )
        {
          v39 = VIDMM_RECYCLE_RANGE::GetPreviousRange(v33);
          v40 = v39;
          if ( v39 == NextRange )
            break;
          VIDMM_RECYCLE_RANGE::Unlock(v39);
          v33 = v40;
        }
        return (unsigned int)v31;
      }
      v31 = VIDMM_RECYCLE_RANGE::Lock(v29, a2, v32, a6);
      if ( v31 < 0 )
      {
        for ( j = v29; ; j = v42 )
        {
          v41 = VIDMM_RECYCLE_RANGE::GetPreviousRange(j);
          v42 = v41;
          if ( v41 == NextRange )
            break;
          VIDMM_RECYCLE_RANGE::Unlock(v41);
        }
        VIDMM_RECYCLE_RANGE::Unlock(NextRange);
        return (unsigned int)v31;
      }
      v8 = a3;
    }
    ++*((_DWORD *)this + 23);
    if ( a7 )
      *((_BYTE *)this + 129) = 1;
    else
      *((_BYTE *)this + 128) = 1;
    v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v35, v34);
    v17[4] = v8;
LABEL_56:
    v17[3] = this;
    v17[5] = a4;
    WdLogEvent5_WdEvent(v17);
    *((_DWORD *)this + 54) = 4;
    VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible((VIDMM_RECYCLE_MULTIRANGE *)this);
    return 0LL;
  }
  for ( k = this[8]; ; k = VIDMM_RECYCLE_RANGE::GetNextRange(k) )
  {
    v16 = VIDMM_RECYCLE_RANGE::Lock(k, a2, (enum _LOCK_OPERATION)a3, a6);
    if ( v16 < 0 )
      break;
    if ( k == this[9] )
    {
      ++*((_DWORD *)this + 23);
      if ( a7 )
        *((_BYTE *)this + 129) = 1;
      else
        *((_BYTE *)this + 128) = 1;
      v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, v14);
      v17[4] = 0LL;
      goto LABEL_56;
    }
  }
  while ( k != this[8] )
  {
    k = VIDMM_RECYCLE_RANGE::GetPreviousRange(k);
    VIDMM_RECYCLE_RANGE::Unlock(k);
  }
  return (unsigned int)v16;
}
