/*
 * XREFs of ?NotifyAllocationReclaimed@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C0062020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C001CBE8 (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     Template_pqx @ 0x1C001D444 (Template_pqx.c)
 */

void __fastcall VIDMM_SEGMENT::NotifyAllocationReclaimed(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        int a3,
        __int64 a4)
{
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  char *v12; // rax
  __int64 v13; // rdx
  char **v14; // rcx
  char *v15; // rbx
  char **v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-18h]

  if ( a3 )
  {
    v6 = *((_QWORD *)this + 27);
    if ( v6 < v6 - *((_QWORD *)a2 + 2) )
    {
      v7 = WdLogNewEntry5_WdAssertion(this, a2, v6, a4);
      *(_QWORD *)(v7 + 24) = 1373LL;
      WdLogEvent5_WdAssertion(v7);
    }
    *((_QWORD *)this + 27) -= *((_QWORD *)a2 + 2);
    --*((_DWORD *)this + 79);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      v17 = *((_DWORD *)this + 4) + 1;
      Template_pqx(
        v17,
        &TotalBytesResidentInSegment,
        v6,
        *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
        v17,
        *((_QWORD *)this + 27));
    }
    if ( *((_DWORD *)this + 90) != -1 && (*((_DWORD *)a2 + 19) & 0x200) == 0 )
    {
      v8 = *((_QWORD *)this + 28);
      if ( v8 < v8 - *((_QWORD *)a2 + 2) )
      {
        v9 = WdLogNewEntry5_WdAssertion(this, a2, v6, a4);
        *(_QWORD *)(v9 + 24) = 1387LL;
        WdLogEvent5_WdAssertion(v9);
      }
      *((_QWORD *)this + 28) -= *((_QWORD *)a2 + 2);
      if ( v8 > qword_1C002F3E0 && *((_QWORD *)this + 28) <= (unsigned __int64)qword_1C002F3E0 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)this + 1) + 39952LL))(
          *(_QWORD *)(*((_QWORD *)this + 1) + 39984LL),
          *((unsigned int *)this + 90));
      if ( !*((_QWORD *)this + 28) )
        VIDMM_GLOBAL::NotifyMemorySegmentIdle(*((VIDMM_GLOBAL **)this + 1), this);
    }
    if ( (*((_DWORD *)this + 14) & 0x1001) != 0 )
    {
      v10 = _InterlockedExchangeAdd64(
              (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture,
              -*((_QWORD *)a2 + 2));
      if ( v10 < *((_QWORD *)a2 + 2) )
      {
        v11 = WdLogNewEntry5_WdAssertion(v10, a2, v6, a4);
        *(_QWORD *)(v11 + 24) = 1406LL;
        WdLogEvent5_WdAssertion(v11);
      }
      *(_QWORD *)(*((_QWORD *)this + 1) + 40032LL) -= *((_QWORD *)a2 + 2);
    }
  }
  v12 = (char *)a2 + 384;
  v13 = *((_QWORD *)a2 + 48);
  v14 = (char **)*((_QWORD *)a2 + 49);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v13 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384) || *v14 != v12 )
    __fastfail(3u);
  *v14 = (char *)v13;
  v15 = (char *)this + 184;
  *(_QWORD *)(v13 + 8) = v14;
  v16 = (char **)*((_QWORD *)v15 + 1);
  *(_QWORD *)v12 = v15;
  *((_QWORD *)a2 + 49) = v16;
  if ( *v16 != v15 )
    __fastfail(3u);
  *v16 = v12;
  *((_QWORD *)v15 + 1) = v12;
}
