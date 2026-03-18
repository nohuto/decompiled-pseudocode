/*
 * XREFs of ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C0055BC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C001CBE8 (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     Template_pqx @ 0x1C001D444 (Template_pqx.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAX_K@Z @ 0x1C0055A2C (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAX_K@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0059558 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReleaseResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_POOL_BLOCK *a3,
        unsigned __int64 a4)
{
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  VIDMM_GLOBAL *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax

  if ( a2 )
  {
    if ( *((_DWORD *)a2 + 30) != 1 )
    {
      VIDMM_SEGMENT::DecrementBytesCommitted((VIDMM_SEGMENT *)this, *((_QWORD *)a2 + 2), (__int64)a3, a4);
      --*((_DWORD *)this + 78);
      if ( ((_DWORD)this[7] & 0x1001) != 0 )
      {
        v8 = _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture,
               -*((_QWORD *)a2 + 2));
        if ( v8 < *((_QWORD *)a2 + 2) )
        {
          v9 = WdLogNewEntry5_WdAssertion(v8, a2, a3, a4);
          *(_QWORD *)(v9 + 24) = 1299LL;
          WdLogEvent5_WdAssertion(v9);
        }
      }
    }
  }
  if ( a3 )
  {
    if ( ((_DWORD)this[7] & 0x1000) == 0 )
      VIDMM_LINEAR_POOL::Free(this[18], a3);
    v10 = this[27];
    if ( v10 < (VIDMM_GLOBAL *)((char *)v10 - a4) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v10, a2, a3, a4);
      *(_QWORD *)(v11 + 24) = 1320LL;
      WdLogEvent5_WdAssertion(v11);
    }
    this[27] = (VIDMM_GLOBAL *)((char *)this[27] - a4);
    --*((_DWORD *)this + 79);
    v12 = (__int64)this[27];
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_pqx(
        v12,
        &TotalBytesResidentInSegment,
        (__int64)a3,
        *((_QWORD *)this[1] + 3),
        *((_DWORD *)this + 4) + 1,
        this[27]);
    if ( *((_DWORD *)this + 90) != -1 && (*((_DWORD *)a2 + 19) & 0x200) == 0 )
    {
      v13 = (unsigned __int64)this[28];
      if ( v13 < v13 - a4 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v12, a2, a3, a4);
        *(_QWORD *)(v14 + 24) = 1334LL;
        WdLogEvent5_WdAssertion(v14);
      }
      this[28] = (VIDMM_GLOBAL *)((char *)this[28] - a4);
      if ( v13 > qword_1C002F3E0 && (unsigned __int64)this[28] <= qword_1C002F3E0 )
        (*((void (__fastcall **)(_QWORD, _QWORD))this[1] + 4994))(
          *((_QWORD *)this[1] + 4998),
          *((unsigned int *)this + 90));
      if ( !this[28] )
        VIDMM_GLOBAL::NotifyMemorySegmentIdle(this[1], (struct VIDMM_SEGMENT *)this);
    }
    if ( ((_DWORD)this[7] & 0x1001) != 0 )
    {
      v15 = _InterlockedExchangeAdd64(
              (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture,
              -(__int64)a4);
      if ( v15 < a4 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v15, a2, a3, a4);
        *(_QWORD *)(v16 + 24) = 1357LL;
        WdLogEvent5_WdAssertion(v16);
      }
      *((_QWORD *)this[1] + 5004) -= a4;
    }
  }
}
