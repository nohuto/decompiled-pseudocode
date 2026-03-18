/*
 * XREFs of ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C009A9FC
 * Callers:
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A120 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C001D264 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     Template_qqqxx @ 0x1C0020194 (Template_qqqxx.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C0098518 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C009F0B8 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

__int64 __fastcall VIDMM_SEGMENT::UpdateActiveVPRAfterMove(VIDMM_SEGMENT *this)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  unsigned int v3; // edi
  __int64 v5; // rcx
  SIZE_T v6; // r14
  SIZE_T v7; // rsi
  bool v8; // zf
  SIZE_T v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _BYTE v15[8]; // [rsp+58h] [rbp-9h] BYREF
  SIZE_T v16; // [rsp+60h] [rbp-1h] BYREF
  __int64 v17; // [rsp+68h] [rbp+7h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v18; // [rsp+70h] [rbp+Fh] BYREF

  v1 = *((_QWORD *)this + 52);
  v2 = *((_QWORD *)this + 51);
  v3 = 0;
  v15[0] = 0;
  v17 = 0LL;
  v5 = *((_QWORD *)this + 18);
  v16 = 0LL;
  if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                       v5,
                       v2,
                       v1,
                       0,
                       (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                       (__int64)this,
                       (__int64)&v16,
                       (__int64)&v17,
                       (__int64)v15) == -1073741823 )
  {
    v6 = *((_QWORD *)this + 51);
    v7 = v16;
    if ( v16 > v6 )
    {
      memset(&v18, 0, sizeof(v18));
      v8 = (*((_DWORD *)this + 14) & 0x1000) == 0;
      v18.PhysicalAdapterIndex = *((_DWORD *)this + 93);
      if ( v8 )
        v18.SegmentIndex = *((_DWORD *)this + 4) + 1;
      else
        v18.SegmentIndex = 0;
      v18.CurrentSize = *((_QWORD *)this + 53);
      v9 = *((_QWORD *)this + 52) - v16;
      v18.CurrentStartOffset = v6;
      v18.NewSize = v9;
      *((_QWORD *)this + 53) = v9;
      v18.NewStartOffset = v7;
      *((_QWORD *)this + 51) = v7;
      VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v18);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_qqqxx(
          v11,
          v10,
          v12,
          v18.PhysicalAdapterIndex,
          v18.SegmentIndex,
          v18.VprIndex,
          v18.NewStartOffset,
          v18.NewSize);
      return (unsigned int)ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                             *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2136LL),
                             &v18);
    }
  }
  return v3;
}
