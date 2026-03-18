/*
 * XREFs of ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C01488F0
 * Callers:
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01549EC (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B3A64 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1C01492B0 (-UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ.c)
 */

__int64 __fastcall DXGCONTEXT::ReserveDmaBuffersForBlts(
        DXGCONTEXT *this,
        struct COREDEVICEACCESS *a2,
        unsigned int a3,
        struct _VIDMM_DMA_BUFFER **a4)
{
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax

  v6 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 5177LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *((_QWORD *)this + 37) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = 5178LL;
    WdLogEvent5_WdAssertion(v13);
  }
  LODWORD(v14) = 0;
  if ( (_DWORD)v6 )
  {
    memset(a4, 0, 8 * v6);
    *((_QWORD *)this + 37) = a4;
    *((_DWORD *)this + 76) = v6;
  }
  v15 = 0LL;
  if ( (_DWORD)v6 )
  {
    while ( 1 )
    {
      v16 = DXGCONTEXT::AcquireDmaBuffer(this, &a4[v15], a2, 1);
      v14 = v16;
      if ( v16 < 0 )
        break;
      v15 = (unsigned int)(v15 + 1);
      if ( (unsigned int)v15 >= (unsigned int)v6 )
        return (unsigned int)v14;
    }
    v18 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v18 + 24) = v14;
    WdLogEvent5_WdError(v18);
    DXGCONTEXT::UnreserveDmaBuffersForBlts(this);
  }
  return (unsigned int)v14;
}
