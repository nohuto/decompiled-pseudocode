/*
 * XREFs of ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C0064500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C001DD20 (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     Template_pqx @ 0x1C001E7B8 (Template_pqx.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAX_K@Z @ 0x1C0064374 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAX_K@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0065BF4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReleaseResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_POOL_BLOCK *a3,
        __int64 a4)
{
  _QWORD *v8; // rax
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v8[3] = a2;
    v8[4] = a3;
    v8[5] = a4;
  }
  if ( a2 )
  {
    if ( *((_DWORD *)a2 + 32) != 1 )
    {
      VIDMM_SEGMENT::DecrementBytesCommitted((VIDMM_SEGMENT *)this, *((_QWORD *)a2 + 2));
      --*((_DWORD *)this + 78);
      if ( ((_DWORD)this[7] & 0x1001) != 0 )
      {
        v12 = _InterlockedExchangeAdd64(
                (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture,
                -*((_QWORD *)a2 + 2));
        if ( v12 < *((_QWORD *)a2 + 2) )
        {
          v13 = WdLogNewEntry5_WdAssertion(v12, a2);
          *(_QWORD *)(v13 + 24) = 1666LL;
          WdLogEvent5_WdAssertion(v13);
        }
      }
    }
  }
  if ( a3 )
  {
    if ( ((_DWORD)this[7] & 0x1000) == 0 )
      VIDMM_LINEAR_POOL::Free(this[18], a3);
    v9 = this[27];
    if ( v9 < (VIDMM_GLOBAL *)((char *)v9 - a4) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v9, a2);
      *(_QWORD *)(v14 + 24) = 1690LL;
      WdLogEvent5_WdAssertion(v14);
    }
    this[27] = (VIDMM_GLOBAL *)((char *)this[27] - a4);
    --*((_DWORD *)this + 79);
    v10 = (__int64)this[27];
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pqx(
        v10,
        &TotalBytesResidentInSegment,
        (__int64)a3,
        *((_QWORD *)this[1] + 3),
        *((_DWORD *)this + 4) + 1,
        this[27]);
    if ( !a2 || (*((_DWORD *)a2 + 20) & 0x200) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, a2, a3, a4);
        v15[3] = a4;
        v10 = (__int64)this[54];
        v15[4] = v10;
        v15[5] = a2;
      }
      this[54] = (VIDMM_GLOBAL *)((char *)this[54] - a4);
      if ( a2 )
        *((_DWORD *)a2 + 20) &= ~0x200u;
      *((_BYTE *)this + 440) = 0;
    }
    if ( *((_DWORD *)this + 90) != -1 && a2 && (*((_DWORD *)a2 + 19) & 0x200) == 0 )
    {
      v16 = (unsigned __int64)this[28];
      if ( v16 < v16 - a4 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v10, a2);
        *(_QWORD *)(v17 + 24) = 1724LL;
        WdLogEvent5_WdAssertion(v17);
      }
      this[28] = (VIDMM_GLOBAL *)((char *)this[28] - a4);
      if ( v16 > qword_1C00353E8 && (unsigned __int64)this[28] <= qword_1C00353E8 )
        (*((void (__fastcall **)(_QWORD, _QWORD))this[1] + 5003))(
          *((_QWORD *)this[1] + 5009),
          *((unsigned int *)this + 90));
      if ( !this[28] )
        VIDMM_GLOBAL::NotifyMemorySegmentIdle(this[1], (struct VIDMM_SEGMENT *)this);
    }
    if ( ((_DWORD)this[7] & 0x1001) != 0 )
    {
      v11 = _InterlockedExchangeAdd64(
              (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture,
              -a4);
      if ( v11 < a4 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v11, a2);
        *(_QWORD *)(v18 + 24) = 1747LL;
        WdLogEvent5_WdAssertion(v18);
      }
      *((_QWORD *)this[1] + 5015) -= a4;
    }
  }
  else
  {
    *((_DWORD *)a2 + 20) &= ~0x200u;
  }
}
