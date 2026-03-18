/*
 * XREFs of ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C0157078
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C0158B18 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ @ 0x1C01572D8 (-ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ.c)
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C015819C (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 *     ?ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0158244 (-ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 */

__int64 __fastcall DDAMetaData::CombineNewMetaData(
        DDAMetaData *this,
        struct _D3DKMT_PRESENT_RGNS *a2,
        union _LARGE_INTEGER *a3,
        int a4,
        int *a5)
{
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 11000);
  v10 = DDAMetaData::ProcessNewMoveRegions(this, a2);
  if ( !v10 )
    goto LABEL_5;
  v10 = DDAMetaData::ProcessNewDirtyRects(this, a2);
  if ( !v10 )
    goto LABEL_5;
  if ( !*((_QWORD *)this + 8) )
  {
    *a5 = 0;
    goto LABEL_11;
  }
  v10 = DDAMetaData::ConvertGdiRgnToRects(this);
  if ( !v10 )
  {
LABEL_5:
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = this;
    WdLogEvent5_WdError(v11);
    goto LABEL_14;
  }
  *a5 = 1;
LABEL_11:
  *((union _LARGE_INTEGER *)this + 1) = *a3;
  if ( a4 )
    *(_DWORD *)this = 1;
  ++*((_DWORD *)this + 1);
LABEL_14:
  if ( *((_QWORD *)this + 8) )
  {
    (*(void (**)(void))(*((_QWORD *)this + 7) + 128LL))();
    *((_QWORD *)this + 8) = 0LL;
  }
  v13 = *((_QWORD *)this + 9);
  if ( v13 )
  {
    (*(void (**)(void))(*((_QWORD *)this + 7) + 128LL))();
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v13, &EventProfilerExit, v12, 11000);
  return v10;
}
