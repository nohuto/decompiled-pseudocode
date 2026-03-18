/*
 * XREFs of ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0099684
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C004EFA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00150D4 (-SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C001D264 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     Template_qqqxx @ 0x1C0020194 (Template_qqqxx.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C004FC2C (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C0098518 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C009F0B8 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     VidSchiSuspendFlipQueues @ 0x1C00A08A8 (VidSchiSuspendFlipQueues.c)
 */

void __fastcall VIDMM_SEGMENT::ProcessPendingMoves(VIDMM_SEGMENT *this)
{
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rsi
  _QWORD *v6; // rax
  VIDMM_GLOBAL *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  bool v10; // r14
  struct _VIDMM_DMA_BUFFER *v11; // rdx
  __int64 v12; // r15
  int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  SIZE_T v17; // r14
  SIZE_T v18; // rdi
  bool v19; // zf
  SIZE_T v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  _BYTE v25[8]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v26; // [rsp+58h] [rbp-11h] BYREF
  SIZE_T v27; // [rsp+60h] [rbp-9h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v28; // [rsp+68h] [rbp-1h] BYREF

  if ( *((_BYTE *)this + 464) )
  {
    *((_BYTE *)this + 464) = 0;
    v25[0] = 0;
    v26 = 0LL;
    if ( *((_BYTE *)this + 465) )
      VidSchiSuspendFlipQueues(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 384LL));
    if ( *((_QWORD *)this + 53) )
      v2 = *((_QWORD *)this + 51);
    else
      v2 = *((_QWORD *)this + 5);
    v3 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
           *((_QWORD *)this + 18),
           0,
           v2,
           1,
           (__int64)VIDMM_SEGMENT::MoveOneResource,
           (__int64)this,
           0LL,
           (__int64)&v26,
           (__int64)v25);
    v5 = v3;
    if ( v3 < 0 )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v4);
      v6[3] = v26;
      v6[4] = v5;
LABEL_26:
      v6[5] = v25[0];
      WdLogEvent5_WdWarning(v6);
      return;
    }
    if ( *((_QWORD *)this + 53) )
    {
      v7 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
      v8 = *((unsigned int *)this + 93);
      v9 = *(_QWORD *)(*((_QWORD *)v7 + 3) + 2040LL);
      v10 = (*(_DWORD *)(v9 + 48 * v8 + 16) & 8) != 0;
      if ( (*(_DWORD *)(v9 + 48 * v8 + 16) & 8) != 0 )
      {
        VIDMM_GLOBAL::FlushPagingBufferInternal(v7, v8, 0LL, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 93));
        LOBYTE(v11) = 1;
        VIDMM_GLOBAL::SetVPRPaging(*((VIDMM_GLOBAL **)this + 1), v11);
      }
      v12 = *((_QWORD *)this + 52);
      v13 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
              *((_QWORD *)this + 18),
              v2,
              v12,
              1,
              (__int64)VIDMM_SEGMENT::MoveOneResource,
              (__int64)this,
              0LL,
              (__int64)&v26,
              (__int64)v25);
      if ( v10 )
      {
        VIDMM_GLOBAL::FlushPagingBufferInternal(
          *((VIDMM_GLOBAL **)this + 1),
          *((_DWORD *)this + 93),
          0LL,
          0LL,
          0LL,
          0,
          1);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 93));
        VIDMM_GLOBAL::SetVPRPaging(*((VIDMM_GLOBAL **)this + 1), 0LL);
      }
      v14 = *((_QWORD *)this + 18);
      v27 = 0LL;
      if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                           v14,
                           v2,
                           v12,
                           0,
                           (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                           (__int64)this,
                           (__int64)&v27,
                           (__int64)&v26,
                           (__int64)v25) == -1073741823 )
      {
        v17 = *((_QWORD *)this + 51);
        v18 = v27;
        if ( v27 > v17 )
        {
          memset(&v28, 0, sizeof(v28));
          v19 = (*((_DWORD *)this + 14) & 0x1000) == 0;
          v28.PhysicalAdapterIndex = *((_DWORD *)this + 93);
          if ( v19 )
            v28.SegmentIndex = *((_DWORD *)this + 4) + 1;
          else
            v28.SegmentIndex = 0;
          v28.CurrentSize = *((_QWORD *)this + 53);
          v20 = *((_QWORD *)this + 52) - v27;
          v28.CurrentStartOffset = v17;
          v28.NewSize = v20;
          *((_QWORD *)this + 53) = v20;
          v28.NewStartOffset = v18;
          *((_QWORD *)this + 51) = v18;
          VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v28);
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_qqqxx(
                v22,
                v21,
                v23,
                v28.PhysicalAdapterIndex,
                v28.SegmentIndex,
                v28.VprIndex,
                v28.NewStartOffset,
                v28.NewSize);
          }
          v13 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                  *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2136LL),
                  &v28);
        }
      }
      else
      {
        v24 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v24 + 24) = 6040LL;
        WdLogEvent5_WdAssertion(v24);
      }
      if ( v13 < 0 )
      {
        v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v16);
        v6[3] = v26;
        v6[4] = v13;
        goto LABEL_26;
      }
    }
  }
}
